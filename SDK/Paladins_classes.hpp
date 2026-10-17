#pragma once
#include "Paladins_enums.hpp"
#include "Paladins_sdk.hpp"
#include "Unreal_classes.hpp"
#include <TlHelp32.h>
#include <Windows.h>
#include <atomic>
#include <mutex>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace off;

// process_base moved to Core::GameState
namespace Core {
extern uint64_t process_base;
extern uint64_t process_id;
extern std::atomic<uint64_t> cachedTEB;
extern std::atomic<uint64_t> cachedTEBPID;
extern std::unordered_map<int32_t, std::string> g_NameCache;
extern std::mutex g_NameCacheMutex;
} // namespace Core

// FNameEntry structure - holds actual name data
class FNameEntry {
  static const auto NAME_WIDE_MASK = 0x1;
  static const auto NAME_INDEX_SHIFT = 1;

public:
  uint64_t Flags;
  uint32_t Index;
  char UnknownData00[0x08];
  char Name[1024];

  int32_t GetIndex() const { return Index >> NAME_INDEX_SHIFT; }

  bool IsWide() const { return Index & NAME_WIDE_MASK; }

  const char *GetAnsiName() const { return Name; }

  std::string GetName() const {
    if (Name[0] == '\0')
      return {};

    std::string result;
    for (size_t i = 0; i < sizeof(Name) && Name[i] != '\0'; ++i) {
      char c = Name[i];
      // Only accept printable ASCII and common special chars
      if ((c >= 32 && c <= 126) || c == '_' || c == '-') {
        result.push_back(c);
      } else {
        break; // Stop at first invalid character
      }
      if (result.length() > 128)
        break; // Safety limit
    }
    return result;
  }
};

// TAntiCheatArray for encrypted pointer arrays
template <class T> struct TAntiCheatArray {
private:
  static inline uint64_t GetTargetTEB() {
    // Get the actual target process ID (from global variable)
    DWORD targetPid = static_cast<DWORD>(Core::process_id);

    // Use centralized atomic cache from Core namespace to share across all
    // template instances
    if (Core::cachedTEBPID.load() == targetPid && Core::cachedTEB.load() != 0) {
      return Core::cachedTEB.load();
    }

    // Cache miss or process changed: perform expensive thread discovery
    // We don't need a process handle for thread enumeration
    HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, 0);
    if (hSnapshot == INVALID_HANDLE_VALUE) {
      return 0;
    }

    THREADENTRY32 te = {};
    te.dwSize = sizeof(te);
    DWORD mainThreadId = 0;
    FILETIME earliestTime = {MAXDWORD, MAXDWORD};

    // Find the main thread (earliest created thread) of target process
    if (Thread32First(hSnapshot, &te)) {
      do {
        if (te.th32OwnerProcessID == targetPid) {
          HANDLE hThread =
              OpenThread(THREAD_QUERY_INFORMATION, FALSE, te.th32ThreadID);
          if (hThread) {
            FILETIME createTime, exitTime, kernelTime, userTime;
            if (GetThreadTimes(hThread, &createTime, &exitTime, &kernelTime,
                               &userTime)) {
              if (CompareFileTime(&createTime, &earliestTime) < 0) {
                earliestTime = createTime;
                mainThreadId = te.th32ThreadID;
              }
            }
            CloseHandle(hThread);
          }
        }
      } while (Thread32Next(hSnapshot, &te));
    }
    CloseHandle(hSnapshot);

    if (mainThreadId == 0) {
      return 0;
    }

    // Get NtQueryInformationThread function
    typedef LONG NTSTATUS;
    typedef NTSTATUS(NTAPI * pNtQueryInformationThread)(HANDLE, LONG, PVOID,
                                                        ULONG, PULONG);
    pNtQueryInformationThread NtQueryInformationThread =
        (pNtQueryInformationThread)GetProcAddress(GetModuleHandleA("ntdll.dll"),
                                                  "NtQueryInformationThread");

    if (!NtQueryInformationThread) {
      return 0;
    }

    // Open the main thread with proper permissions
    HANDLE hThread = OpenThread(THREAD_QUERY_INFORMATION, FALSE, mainThreadId);
    if (!hThread) {
      return 0;
    }

    // Query thread basic information to get TEB address
    struct THREAD_BASIC_INFO {
      LONG ExitStatus;
      PVOID TebBaseAddress;
      PVOID ClientId[2];
      ULONG_PTR AffinityMask;
      LONG Priority;
      LONG BasePriority;
    } tbi = {};

    NTSTATUS status =
        NtQueryInformationThread(hThread, 0, &tbi, sizeof(tbi), nullptr);
    CloseHandle(hThread);

    // Validate the result
    if (status != 0 || !tbi.TebBaseAddress) {
      return 0;
    }

    // Validate TEB address is in user space
    uint64_t tebAddress = (uint64_t)tbi.TebBaseAddress;
    if (tebAddress < 0x10000 || tebAddress >= 0x8000000000000000ULL) {
      return 0;
    }

    // Read the actual TEB pointer from the target process memory
    // Note: TEB+0x58 contains a pointer we need for decryption
    uint64_t tebPtr = 0;
    if (!::read(tebAddress + 0x58, tebPtr) || tebPtr == 0) {
      return 0;
    }

    // Validate the TEB pointer
    if (tebPtr < 0x10000 || tebPtr >= 0x8000000000000000ULL) {
      return 0;
    }

    return tebPtr;
  }

  static inline uint64_t GetXorKey(size_t index) {
    uint64_t tebPtr = GetTargetTEB();
    if (tebPtr == 0)
      return 0;

    // Read the TEB base from target process
    uint64_t tebBase = 0;
    if (!::read(tebPtr, tebBase) || tebBase == 0) {
      return 0;
    }

    // Validate TEB base address
    if (tebBase < 0x10000 || tebBase >= 0x8000000000000000ULL) {
      return 0;
    }

    // Calculate key offset with bounds checking
    size_t maskedIndex = index & off::DecryptionKey;
    if (maskedIndex > 0x1000) { // Reasonable upper bound
      return 0;
    }

    uint64_t keyOffset = tebBase + 8 * maskedIndex + 48;

    // Validate key offset is reasonable
    if (keyOffset < tebBase || keyOffset > tebBase + 0x10000) {
      return 0;
    }

    uint64_t xorKey = 0;
    if (!::read(keyOffset, xorKey)) {
      return 0;
    }

    return xorKey;
  }

  uintptr_t Decrypt(size_t i) {
    if (!Data || i >= Count)
      return 0;

    // Validate array bounds
    if (i >= static_cast<size_t>(Count))
      return 0;

    // Calculate address with overflow check
    uint64_t dataAddr = (uint64_t)Data;
    if (dataAddr == 0 || dataAddr < 0x10000)
      return 0;

    uint64_t elementAddr = dataAddr + i * sizeof(uint64_t);
    if (elementAddr < dataAddr)
      return 0; // Overflow check

    // Read encrypted pointer from target process
    uint64_t encryptedPtr = 0;
    if (!::read(elementAddr, encryptedPtr)) {
      return 0;
    }

    // Get decryption key
    uint64_t xorKey = GetXorKey(i);
    if (xorKey == 0) {
      // No decryption available - validate raw pointer
      if (encryptedPtr < 0x10000 || encryptedPtr >= 0x8000000000000000ULL) {
        return 0;
      }
      return encryptedPtr;
    }

    uint64_t decryptedPtr = encryptedPtr ^ xorKey;

    // Validate decrypted pointer
    if (decryptedPtr < 0x10000 || decryptedPtr >= 0x8000000000000000ULL) {
      return 0;
    }

    return decryptedPtr;
  }

  T GetData(size_t i) {
    uintptr_t decrypted = Decrypt(i);
    return reinterpret_cast<T>(decrypted);
  }

public:
  T *Data;
  int32_t Unk00;
  int32_t Count;

  TAntiCheatArray() : Data(nullptr), Unk00(0), Count(0) {}

  size_t Num() const { return Count; }

  T operator[](size_t i) { return GetData(i); }

  T GetByIndex(size_t i) { return GetData(i); }

  bool IsValidIndex(size_t i) {
    if (i >= Num())
      return false;
    uintptr_t addr = Decrypt(i);
    return addr != 0 && ::IsValid(addr);
  }
};

struct FName {
  int32_t Index;
  int32_t Number;

  inline FName() : Index(0), Number(0) {}
  inline FName(int32_t index, int32_t number = 0)
      : Index(index), Number(number) {}

  inline bool operator==(const FName &other) const {
    return Index == other.Index && Number == other.Number;
  }

  inline bool operator!=(const FName &other) const { return !(*this == other); }

  inline bool IsValid() const { return Index >= 0; }

  inline std::string ToString() const {
    try {
      if (Index < 0)
        return {};

      {
        std::lock_guard<std::mutex> lock(Core::g_NameCacheMutex);
        auto it = Core::g_NameCache.find(Index);
        if (it != Core::g_NameCache.end()) {
          std::string cachedName = it->second;
          if (Number > 0) {
            cachedName += "_" + std::to_string(Number - 1);
          }
          return cachedName;
        }
      }

      const uint64_t gnamesAddress = Core::process_base + off::GNames;
      if (!::IsValid(gnamesAddress))
        return {};

      TAntiCheatArray<FNameEntry *> pool =
          read<TAntiCheatArray<FNameEntry *>>(gnamesAddress);
      if (pool.Num() == 0 || !::IsValid((uintptr_t)pool.Data))
        return {};

      FNameEntry *entry = pool.GetByIndex(Index);
      if (!::IsValid((uintptr_t)entry))
        return {};

      std::string name = entry->GetName();
      if (!name.empty()) {
        std::lock_guard<std::mutex> lock(Core::g_NameCacheMutex);
        Core::g_NameCache[Index] = name;
      }

      if (Number > 0) {
        name += "_" + std::to_string(Number - 1);
      }

      return name;
    } catch (...) {
      return {};
    }
  }

  inline std::wstring ToWString() const {
    try {
      auto ansi = ToString();
      return std::wstring(ansi.begin(), ansi.end());
    } catch (...) {
      return {};
    }
  }
};

class ATgProjectile : public UObject {
public:
  inline float GetSpeed() {
    try {
      return read<float>(data + n_AProjectile::Speed);
    } catch (...) {
      return 0.0f;
    }
  }

  inline float GetGravityScale() {
    try {
      return read<float>(data + 0x4cc); // n_ATgProj_Simulated::m_fGravityScale
    } catch (...) {
      return 0.0f;
    }
  }
};

struct FBoneAtom {
  FQuat Rotation;
  FVector Translation;
  float Scale;
};

class USkeletalMeshComponent : public UObject {
public:
  inline FBoxSphereBounds GetBounds() {
    try {
      return read<FBoxSphereBounds>(data + n_UPrimitiveComponent::Bounds);
    } catch (...) {
      return FBoxSphereBounds{};
    }
  }

  inline float GetLastRenderTime() {
    try {
      return read<float>(data + n_UPrimitiveComponent::LastRenderTime);
    } catch (...) {
      return 0.0f;
    }
  }

  inline bool IsVisible(float timeSeconds) {
    try {
      float lastRenderTime = GetLastRenderTime();
      // Generous threshold for external read — memory polling can lag
      // behind game clock by multiple frames. 1 second covers normal
      // gameplay while still detecting truly hidden/dead targets.
      return (lastRenderTime > timeSeconds - 1.0f);
    } catch (...) {
      return false;
    }
  }

  inline std::vector<FVector>
  GetBoneWorldLocationsBatch(const std::vector<int> &boneIndices) {
    try {
      std::vector<FVector> results(boneIndices.size(), {0.0f, 0.0f, 0.0f});
      if (boneIndices.empty())
        return results;

      // 1. Read SpaceBases metadata (one read)
      TArray<FBoneAtom> spaceBases =
          read<TArray<FBoneAtom>>(data + n_USkeletalMeshComponent::SpaceBases);
      if (spaceBases.Length() == 0 || !spaceBases.IsValidSize()) {
        return results;
      }

      // 2. Read LocalToWorldBoneAtom (one read)
      FBoneAtom localToWorld = read<FBoneAtom>(
          data + n_USkeletalMeshComponent::LocalToWorldBoneAtom);

      // 3. Batch read the relevant bone range if they are contiguous, 
      //    or just read the ones we need. For simplicity and performance, 
      //    we'll read the entire SpaceBases array in one go if it's within 
      //    reasonable size (Paladins usually has ~100-200 bones per model).
      int maxIndex = -1;
      for (int idx : boneIndices) {
        if (idx > maxIndex)
          maxIndex = idx;
      }

      if (maxIndex < 0 || maxIndex >= spaceBases.Length()) {
        return results;
      }

      // Read up to the highest requested bone index
      size_t readCount = static_cast<size_t>(maxIndex) + 1;
      std::vector<FBoneAtom> bones(readCount);
      if (!::read_array(spaceBases.GetAddress(), bones.data(), readCount)) {
        return results;
      }

      // 4. Compute world locations locally for each requested index
      for (size_t i = 0; i < boneIndices.size(); ++i) {
        int idx = boneIndices[i];
        if (idx < 0 || idx >= bones.size())
          continue;

        const FBoneAtom &bone = bones[idx];
        FVector boneWorld = bone.Translation;

        boneWorld.X *= localToWorld.Scale;
        boneWorld.Y *= localToWorld.Scale;
        boneWorld.Z *= localToWorld.Scale;

        float qw = localToWorld.Rotation.W;
        float qx = localToWorld.Rotation.X;
        float qy = localToWorld.Rotation.Y;
        float qz = localToWorld.Rotation.Z;

        float ix = qw * boneWorld.X + qy * boneWorld.Z - qz * boneWorld.Y;
        float iy = qw * boneWorld.Y + qz * boneWorld.X - qx * boneWorld.Z;
        float iz = qw * boneWorld.Z + qx * boneWorld.Y - qy * boneWorld.X;
        float iw = -qx * boneWorld.X - qy * boneWorld.Y - qz * boneWorld.Z;

        FVector rotated;
        rotated.X = ix * qw + iw * -qx + iy * -qz - iz * -qy;
        rotated.Y = iy * qw + iw * -qy + iz * -qx - ix * -qz;
        rotated.Z = iz * qw + iw * -qz + ix * -qy - iy * -qx;

        rotated.X += localToWorld.Translation.X;
        rotated.Y += localToWorld.Translation.Y;
        rotated.Z += localToWorld.Translation.Z;

        results[i] = rotated;
      }

      return results;
    } catch (...) {
      return std::vector<FVector>(boneIndices.size(), {0.0f, 0.0f, 0.0f});
    }
  }

  inline int GetBoneCount() {
    try {
      TArray<FBoneAtom> spaceBases =
          read<TArray<FBoneAtom>>(data + n_USkeletalMeshComponent::SpaceBases);
      return spaceBases.Length();
    } catch (...) {
      return 0;
    }
  }

  inline uint64_t GetAddress() const { return data; }

  inline std::vector<int> GetBoneParentIndices(int maxBones = 512) {
    try {
      std::vector<int> parents;
      if (!IsValid())
        return parents;

      uint64_t skeletalMesh =
          read<uint64_t>(data + n_USkeletalMeshComponent::SkeletalMesh);
      if (!::IsValid(skeletalMesh))
        return parents;

      struct TArrayData {
        uint64_t data;
        int32_t count;
        int32_t max;
      };

      TArrayData refSkeleton = read<TArrayData>(skeletalMesh + 0xD4);
      if (!::IsValid(refSkeleton.data) || refSkeleton.count <= 0)
        return parents;

      int count = refSkeleton.count;
      if (maxBones > 0 && count > maxBones) {
        count = maxBones;
      }

      parents.resize(count, -1);

      const size_t BONE_ENTRY_SIZE = 80; // Full bone structure with transform

      for (int i = 0; i < count; i++) {
        int32_t parentIndex = read<int32_t>(
            refSkeleton.data + i * BONE_ENTRY_SIZE + 8); // +8 to skip FName
        parents[i] = parentIndex;
      }

      return parents;
    } catch (...) {
      return std::vector<int>();
    }
  }

  inline FName GetBoneName(int boneIndex) {
    try {
      if (!IsValid())
        return FName();

      uint64_t skeletalMesh =
          read<uint64_t>(data + n_USkeletalMeshComponent::SkeletalMesh);
      if (!::IsValid(skeletalMesh))
        return FName();

      struct TArrayData {
        uint64_t data;
        int32_t count;
        int32_t max;
      };

      TArrayData refSkeleton = read<TArrayData>(skeletalMesh + 0xD4);
      if (!::IsValid(refSkeleton.data) || refSkeleton.count <= 0)
        return FName();

      if (boneIndex < 0 || boneIndex >= refSkeleton.count)
        return FName();

      // RefSkeleton structure is 80 bytes per entry:
      // FName (8) + ParentIndex (4) + Flags (4) + FBoneAtom (64 bytes for
      // transform)
      const size_t BONE_ENTRY_SIZE = 80;

      FName boneName =
          read<FName>(refSkeleton.data + boneIndex * BONE_ENTRY_SIZE);
      return boneName;
    } catch (...) {
      return FName();
    }
  }

  inline int MatchRefBone(const char *boneName) {
    try {
      if (!IsValid())
        return -1;

      uint64_t skeletalMesh =
          read<uint64_t>(data + n_USkeletalMeshComponent::SkeletalMesh);
      if (!::IsValid(skeletalMesh))
        return -1;

      struct TArrayData {
        uint64_t data;
        int32_t count;
        int32_t max;
      };

      TArrayData refSkeleton = read<TArrayData>(skeletalMesh + 0xD4);
      if (!::IsValid(refSkeleton.data) || refSkeleton.count <= 0)
        return -1;

      const size_t BONE_ENTRY_SIZE = 80; // Full bone structure with transform

      std::string lowerSearch = boneName;
      for (auto &c : lowerSearch)
        c = (char)tolower(c);

      // First pass: exact match
      for (int i = 0; i < refSkeleton.count && i < 1000; i++) {
        FName boneNameEntry =
            read<FName>(refSkeleton.data + i * BONE_ENTRY_SIZE);
        std::string currentBoneName = boneNameEntry.ToString();

        if (currentBoneName.empty())
          continue;

        std::string lowerCurrent = currentBoneName;
        for (auto &c : lowerCurrent)
          c = (char)tolower(c);

        if (lowerCurrent == lowerSearch) {
          return i;
        }
      }

      // Second pass: smart fallback for common bone variations
      for (int i = 0; i < refSkeleton.count && i < 1000; i++) {
        FName boneNameEntry =
            read<FName>(refSkeleton.data + i * BONE_ENTRY_SIZE);
        std::string currentBoneName = boneNameEntry.ToString();

        if (currentBoneName.empty())
          continue;

        std::string lowerCurrent = currentBoneName;
        for (auto &c : lowerCurrent)
          c = (char)tolower(c);

        // Smart matching: only allow if the search term is reasonably specific
        // and matches the end of the bone name (to avoid false positives)
        if (lowerSearch.length() >= 4 &&
            (lowerCurrent.find(lowerSearch) ==
                 lowerCurrent.length() - lowerSearch.length() ||
             lowerCurrent.find("_" + lowerSearch) != std::string::npos ||
             lowerCurrent.find(lowerSearch + "_") != std::string::npos)) {
          return i;
        }
      }

      return -1;
    } catch (...) {
      return -1;
    }
  }
};

class ATeamInfo : public UObject {
public:
  inline int GetTeamIndex() {
    try {
      return read<int>(data + n_ATeamInfo::TeamIndex);
    } catch (...) {
      return -1;
    }
  }
};

class APlayerReplicationInfo : public UObject {
public:
  ATeamInfo GetTeamInfo() {
    try {
      return read<ATeamInfo>(data + n_ATgRepInfo_Player::r_TaskForce);
    } catch (...) {
      return ATeamInfo{};
    }
  }

  FString GetName() {
    try {
      return read<FString>(data + n_APlayerReplicationInfo::PlayerName);
    } catch (...) {
      return FString{};
    }
  }
};

struct FRecoilSettings {
  int bUsesRecoil;
  float fRecoilReductionPerSec;
  float fRecoilCenterDelay;
  float fRecoilSmoothRate;
};

struct FAccuracySettings {
  int bUsesAdvancedAccuracy;
  float fMaxAccuracy;
  float fMinAccuracy;
  float fAccuracyLossPerShot;
  float fAccuracyGainPerSec;
  float fAccuracyGainDelay;
  int nNumFreeShots;
};

struct FireTimingSettings {
  float AmmoClipPreReloadTime;
  float AmmoClipPostReloadTime;
  float FirePreHitDelay;
  float FirePostHitDelay;
};
static std::unordered_map<uint64_t, FireTimingSettings>
    g_oldFireTimingByDeviceFire;

class ATgDevice : public UObject {
public:
  inline TArray<ATgProjectile> GetProjectiles() {
    try {
      return read<TArray<ATgProjectile>>(data +
                                         n_ATgDevice::m_FiredProjectiles);
    } catch (...) {
      return TArray<ATgProjectile>{};
    }
  }

  inline int GetMaxAmmoCount() {
    try {
      return read<int>(data + n_ATgDevice::r_nMaxAmmoClipCount);
    } catch (...) {
      return 0;
    }
  }

  inline void SpamReloadTiming(bool enable) {
    try {
      uint64_t fire =
          read<uint64_t>(data + n_ATgDevice::m_WhileFiringDeviceMode);
      if (!fire) {
        // Fallback: use first fire mode from m_FireMode array
        TArray<uint64_t> fireModes =
            read<TArray<uint64_t>>(data + n_ATgDevice::m_FireMode);
        if (fireModes.Length() > 0 && fireModes.IsValidSize()) {
          fire = fireModes.GetById(0);
        }
      }
      if (!fire)
        return;
      // Use the global spamReloadMinTime variable (exposed in UI)
      extern float spamReloadMinTime;
      if (enable) {
        auto it = g_oldFireTimingByDeviceFire.find(fire);
        if (it == g_oldFireTimingByDeviceFire.end()) {
          FireTimingSettings backup{};
          backup.AmmoClipPreReloadTime =
              read<float>(fire + n_UTgDeviceFire::m_fAmmoClipPreReloadTime);
          backup.AmmoClipPostReloadTime =
              read<float>(fire + n_UTgDeviceFire::m_fAmmoClipPostReloadTime);
          backup.FirePreHitDelay =
              read<float>(fire + n_UTgDeviceFire::m_fFirePreHitDelay);
          backup.FirePostHitDelay =
              read<float>(fire + n_UTgDeviceFire::m_fFirePostHitDelay);
          g_oldFireTimingByDeviceFire[fire] = backup;
        }
        write<float>(fire + n_UTgDeviceFire::m_fAmmoClipPreReloadTime,
                     spamReloadMinTime);
        write<float>(fire + n_UTgDeviceFire::m_fAmmoClipPostReloadTime,
                     spamReloadMinTime);
        write<float>(fire + n_UTgDeviceFire::m_fFirePreHitDelay,
                     spamReloadMinTime);
        write<float>(fire + n_UTgDeviceFire::m_fFirePostHitDelay,
                     spamReloadMinTime);
      } else {
        auto it = g_oldFireTimingByDeviceFire.find(fire);
        if (it != g_oldFireTimingByDeviceFire.end()) {
          const FireTimingSettings &backup = it->second;
          write<float>(fire + n_UTgDeviceFire::m_fAmmoClipPreReloadTime,
                       backup.AmmoClipPreReloadTime);
          write<float>(fire + n_UTgDeviceFire::m_fAmmoClipPostReloadTime,
                       backup.AmmoClipPostReloadTime);
          write<float>(fire + n_UTgDeviceFire::m_fFirePreHitDelay,
                       backup.FirePreHitDelay);
          write<float>(fire + n_UTgDeviceFire::m_fFirePostHitDelay,
                       backup.FirePostHitDelay);
          g_oldFireTimingByDeviceFire.erase(it);
        }
      }
    } catch (...) {
    }
  }

  inline void SetPerspective(bool thirdPerson) {
    try {
      write<float>(data + n_ATgDevice::m_fForce3PPersistTimer,
                   thirdPerson ? 1.f : 0.f);
    } catch (...) {
    }
  }
};

class APawn : public UObject {
public:
  inline std::string GetName() {
    FName myName = read<FName>(data + 0x48);
    return myName.ToString();
  }

  // Batch data for performance (Phase 10)
  struct PawnData {
    FVector Location;               // 0x80
    FRotator Rotation;              // 0x8C
    FVector Velocity;               // 0x190
    uint64_t NextPawn;              // 0x2AC
    int32_t Health;                 // 0x3C4
    int32_t HealthMax;              // 0x3C8
    uint64_t PlayerReplicationInfo; // 0x440
    uint64_t Mesh;                  // 0x48C
    uint8_t Stealth;                // 0x650
    uint8_t MountState;             // 0x652
    float r_fCachedMaxHealth;       // 0x11A0
  };

  inline PawnData GetBatchedData() {
    PawnData batch{};
    if (!::IsValid(data))
      return batch;

    // Batch 1: Actor Basics (Location, Rotation)
    // Range 0x80 to 0x98 (24 bytes)
    struct ActorBasics {
      FVector Loc;
      FRotator Rot;
    } basics = read<ActorBasics>(data + 0x80);
    batch.Location = basics.Loc;
    batch.Rotation = basics.Rot;

    // Batch 2: Dynamics (Velocity)
    batch.Velocity = read<FVector>(data + 0x190);

    // Batch 3: Pawn Core (NextPawn)
    batch.NextPawn = read<uint64_t>(data + 0x2ac);

    // Batch 4: Stats (Health, HealthMax)
    // Range 0x3C4 to 0x3CC (8 bytes)
    struct Stats {
      int32_t hp;
      int32_t max;
    } s = read<Stats>(data + 0x3c4);
    batch.Health = s.hp;
    batch.HealthMax = s.max;

    // Batch 5: PRI & Mesh & Stealth & MountState
    // Using a larger read for PRI and Mesh, then reading Stealth/MountState.
    struct PriMesh {
      uint64_t pri; // 0x440
      uint8_t pad[0x48c - 0x440 - 8];
      uint64_t mesh; // 0x48C
    } pm = read<PriMesh>(data + 0x440);
    batch.PlayerReplicationInfo = pm.pri;
    batch.Mesh = pm.mesh;

    // Batch 5b: Stealth & MountState (0x650 to 0x653)
    struct StealthMount {
      uint8_t s; // 0x650
      uint8_t pad;
      uint8_t m; // 0x652
    } sm = read<StealthMount>(data + 0x650);
    batch.Stealth = sm.s;
    batch.MountState = sm.m;

    // Batch 6: TG Pawn Stats
    batch.r_fCachedMaxHealth = read<float>(data + 0x11a0);

    return batch;
  }

  inline std::string GetFullName() {
    try {
      if (!IsValid())
        return "None";

      std::string name;
      uint64_t classPtr = read<uint64_t>(data + 0x50); // UObject::Class
      if (::IsValid(classPtr)) {
        FName fname = read<FName>(classPtr + 0x48); // UObject::Name
        name = fname.ToString();
      } else {
        name = "None";
      }

      name += " ";

      std::string path;
      uint64_t outer = read<uint64_t>(data + 0x40); // UObject::Outer
      while (::IsValid(outer)) {
        FName fname = read<FName>(outer + 0x48);
        std::string outerName = fname.ToString();
        if (!outerName.empty()) {
          path = outerName + "." + path;
        }
        outer = read<uint64_t>(outer + 0x40);
      }

      FName myName = read<FName>(data + 0x48);
      name += path + myName.ToString();

      return name;
    } catch (...) {
      return "";
    }
  }

  inline ATgDevice GetWeapon() {
    try {
      return read<ATgDevice>(data + n_APawn::Weapon);
    } catch (...) {
      return ATgDevice{};
    }
  }

  inline int GetHealth() {
    try {
      return read<int>(data + n_APawn::Health);
    } catch (...) {
      return 0;
    }
  }

  inline int GetMaxHealth() {
    try {
      return (int)read<float>(data + n_ATgPawn::r_fCachedMaxHealth);
    } catch (...) {
      return 0;
    }
  }

  inline void SetRotation(FRotator rotation) {
    try {
      write(data + n_AActor::Rotation, rotation);
    } catch (...) {
    }
  }

  inline APlayerReplicationInfo GetPlayerReplicationInfo() {
    try {
      return read<APlayerReplicationInfo>(data +
                                          n_APawn::PlayerReplicationInfo);
    } catch (...) {
      return APlayerReplicationInfo{};
    }
  }

  inline APawn GetNextPawn() {
    try {
      return read<APawn>(data + n_APawn::NextPawn);
    } catch (...) {
      return APawn{};
    }
  }

  inline float GetEyeHeight() {
    try {
      return read<float>(data + n_APawn::BaseEyeHeight);
    } catch (...) {
      return 0.0f;
    }
  }

  inline USkeletalMeshComponent GetMesh() {
    try {
      return read<USkeletalMeshComponent>(data + n_APawn::Mesh);
    } catch (...) {
      return USkeletalMeshComponent{};
    }
  }

  inline bool IsStealthed() {
    try {
      if (!IsValid()) {
        return false;
      }

      uint8_t stealthType = read<uint8_t>(data + n_ATgPawn::r_eIsStealthed);
      if (stealthType != 0) {
        return true;
      }

      uint8_t clientStealthType =
          read<uint8_t>(data + n_ATgPawn::c_eIsStealthed);
      return clientStealthType != 0;
    } catch (...) {
      return false;
    }
  }

  inline bool WasRecentlyInLocalLineOfSight() {
    try {
      if (!IsValid()) {
        return false;
      }

      uint32_t losFlags =
          read<uint32_t>(data + n_ATgPawn::c_bInLocalLineOfSightRecently);
      return (losFlags &
              (1u << n_ATgPawn::c_bInLocalLineOfSightRecently_bit)) != 0;
    } catch (...) {
      return false;
    }
  }

  inline void SetGlowhack(bool isGlowing) {
    try {
      auto offset = data + n_ATgPawn::r_bIsWallHacking;
      auto current = read<uint32_t>(offset);

      if (isGlowing)
        current |= (1u << n_ATgPawn::r_bIsWallHacking_bit);
      else
        current &= ~(1u << n_ATgPawn::r_bIsWallHacking_bit);

      write(offset, current);
    } catch (...) {
    }
  }

  inline FVector GetLocation() {
    try {
      return read<FVector>(data + n_AActor::Location);
    } catch (...) {
      return FVector{};
    }
  }

  inline void SetLocation(FVector location) {
    try {
      write<FVector>(data + n_AActor::Location, location);
    } catch (...) {
    }
  }

  inline FRotator GetRotation() {
    try {
      return read<FRotator>(data + n_AActor::Rotation);
    } catch (...) {
      return FRotator{};
    }
  }

  inline FVector GetVelocity() {
    try {
      return read<FVector>(data + n_AActor::Velocity);
    } catch (...) {
      return FVector{};
    }
  }

  inline APawn GetOwner() {
    try {
      return read<APawn>(data + n_AActor::Owner);
    } catch (...) {
      return APawn{};
    }
  }

  inline bool IsDeployable() {
    try {
      if (!IsValid())
        return false;

      // Deployables don't have meaningful player names and usually have low
      // health or specific class names. Heuristic fix:
      auto repInfo = GetPlayerReplicationInfo();

      // If we have valid rep info and a player name, it is almost certainly a
      // player.
      if (repInfo.IsValid()) {
        auto playerName = repInfo.GetName();
        if (playerName.IsValidSize() && playerName.Length() > 0) {
          return false; // Valid player name = NOT a deployable
        }
      }

      // If it has NO replication info, it might be a deployable.
      // But we should double check if it's just a failed read.
      // Deployables in Paladins usually have a specific height/mesh profile
      // For now, let's just make the RepInfo check more robust.
      if (!repInfo.IsValid()) {
        // Double check read to ensure it's not a transient failure
        repInfo = GetPlayerReplicationInfo();
        if (repInfo.IsValid())
          return false;

        return true; // Still no RepInfo after double check = likely a
                     // deployable
      }

      return false; // Fallback to player
    } catch (...) {
      return false;
    }
  }

  /* Bits not reliable here idk why, maybe my tool is fucked */
  // Ultimate charge methods
  inline int GetUltimateCharge() {
    try {
      auto repInfo = GetPlayerReplicationInfo();
      if (!repInfo.IsValid())
        return 0;
      return read<int>(repInfo.data + n_ATgRepInfo_Player::r_nUltimateCharge);
    } catch (...) {
      return 0;
    }
  }

  inline int GetRequiredUltimateCharge() {
    try {
      auto repInfo = GetPlayerReplicationInfo();
      if (!repInfo.IsValid())
        return 0;
      return read<int>(repInfo.data +
                       n_ATgRepInfo_Player::r_nRequiredUltimateCharge);
    } catch (...) {
      return 0;
    }
  }

  inline bool IsUltimateReady() {
    try {
      if (!IsValid())
        return false;
      // Check if ultimate charge is at 100% or higher
      int current = GetUltimateCharge();
      int required = GetRequiredUltimateCharge();
      if (required <= 0)
        return false;
      return current >= required;
    } catch (...) {
      return false;
    }
  }

  inline float GetUltimateChargePercent() {
    try {
      int current = GetUltimateCharge();
      int required = GetRequiredUltimateCharge();
      if (required <= 0)
        return 0.0f;
      float percent = ((float)current / (float)required) * 100.0f;
      return (percent > 100.0f) ? 100.0f : percent;
    } catch (...) {
      return 0.0f;
    }
  }
};

class ACamera : public UObject {
public:
  inline float GetDeafultFov() {
    try {
      return read<float>(data + n_ACamera::DefaultFOV);
    } catch (...) {
      return 90.0f;
    }
  }

  inline FVector GetRealLocation() {
    try {
      // Using 0x468 (CameraCache) instead of 0x490 (LastFrameCameraCache)
      return read<FVector>(data + 0x468 + 0x4);
    } catch (...) {
      return FVector{};
    }
  }

  inline FRotator GetRealRotation() {
    try {
      // Using 0x468 (CameraCache)
      return read<FRotator>(data + 0x468 + 0x10);
    } catch (...) {
      return FRotator{};
    }
  }

  inline float GetRealFOV() {
    try {
      // Using 0x468 (CameraCache)
      float fov = read<float>(data + 0x468 + 0x1C);
      if (fov == 0.0f)
        return 90.0f; // Fallback
      return fov;
    } catch (...) {
      return 0.0f;
    }
  }

  inline bool SetDefaultFOV(float fov) {
    try {
      return write(data + n_ACamera::DefaultFOV, fov);
    } catch (...) {
      return false;
    }
  }
};

class AWorldInfo : public UObject {
public:
  inline float GetTimeSeconds() {
    try {
      return read<float>(data + n_AWorldInfo::TimeSeconds);
    } catch (...) {
      return 0.0f;
    }
  }

  inline float GetWorldGravityZ() {
    try {
      return read<float>(data + 0x58c); // WorldGravityZ offset
    } catch (...) {
      return -950.0f; // UE3 default gravity
    }
  }

  inline APawn GetPawnList() {
    try {
      return read<APawn>(data + n_AWorldInfo::PawnList);
    } catch (...) {
      return APawn{};
    }
  }

  inline bool SetTimeDilation(float value) {
    try {
      return write(data + n_AWorldInfo::TimeDilation, value);
    } catch (...) {
      return false;
    }
  }
};

class AActor : public APawn {};

class UNetConnection : public UObject {
public:
  // Based on analysis: EncryptionHandler is likely at 0xC8
  // And Key is at Handler + 0x80.
  // If embedded: Key is at 0xC8 + 0x80 = 0x148.
  inline std::vector<uint8_t> GetSessionKey() {
    try {
      std::vector<uint8_t> key(32);
      // Assuming Embedded Handler for now based on "Final Offset: 0x148"
      // If it was a pointer, we'd read [0xC8] then +0x80.
      // Let's try direct read first.

      uint64_t keyAddr = data + 0x148;
      if (!read_array(keyAddr, key.data(), 32)) {
        return {};
      }
      return key;
    } catch (...) {
      return {};
    }
  }
};

class APlayerController : public AActor {
public:
  inline float GetFovMultiplier() {
    try {
      float val = read<float>(data + n_APlayerController::LODDistanceFactor);
      if (val <= 0.001f)
        return 1.0f;
      return val;
    } catch (...) {
      return 1.0f;
    }
  }

  inline float GetFOVAngle() {
    try {
      return read<float>(data + n_APlayerController::FOVAngle);
    } catch (...) {
      return 90.0f;
    }
  }

  inline APawn GetAcknowledgedPawn() {
    try {
      return read<APawn>(data + n_APlayerController::AcknowledgedPawn);
    } catch (...) {
      return APawn{};
    }
  }

  inline ACamera GetCamera() {
    try {
      return read<ACamera>(data + n_APlayerController::PlayerCamera);
    } catch (...) {
      return ACamera{};
    }
  }

  inline AWorldInfo GetWorldInfo() {
    try {
      return read<AWorldInfo>(data + n_AActor::WorldInfo);
    } catch (...) {
      return AWorldInfo{};
    }
  }

  inline UNetConnection GetNetConnection() {
    try {
      // 0x350 is a common UE3 NetConnection offset in PlayerController
      return read<UNetConnection>(data + 0x350);
    } catch (...) {
      return UNetConnection{};
    }
  }
};

class ULocalPlayer : public UObject {
public:
  inline APlayerController GetController() {
    try {
      return read<APlayerController>(data + n_UPlayer::Actor);
    } catch (...) {
      return APlayerController{};
    }
  }
};

class UEngine : public UObject {
public:
  inline ULocalPlayer GetLocalPlayer() {
    try {
      return read<ULocalPlayer>(read<uint64_t>(data + n_UEngine::GamePlayers));
    } catch (...) {
      return ULocalPlayer{};
    }
  }
};

struct FURL {
  FString Protocol;      // 0x0000
  FString Host;          // 0x0010
  int32_t Port;          // 0x0020
  FString Map;           // 0x0024
  TArray<FString> Op;    // 0x0034
  FString Portal;        // 0x0044
  FString SecureAddress; // 0x0054
  int32_t Valid;         // 0x0064
};

class UGameEngine : public UEngine {
public:
  inline FURL GetLastURL() {
    try {
      return read<FURL>(data + n_UGameEngine::LastURL);
    } catch (...) {
      return FURL{};
    }
  }

  inline FURL GetLastRemoteURL() {
    try {
      return read<FURL>(data + n_UGameEngine::LastRemoteURL);
    } catch (...) {
      return FURL{};
    }
  }
};
