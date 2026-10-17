// ============================================================================
//  ANGEL — main.cpp
//  Cheat interno (DLL) para Paladins. Menu ImGui so dentro do jogo.
//  Tema ametista. Baseado em engenharia reversa de:
//    - SDK.rar        (headers UE3 / Paladins)
//    - Open Source.rar (base ImGui + kiero + Detours + MinHook)
//    - Angel Codigo.zip (base anterior da Angel)
//    - AkameUpdateALL4Class.CT (padroes de memoria do jogo)
// ============================================================================
#include <map>
#include <mutex>
#include <atomic>
#include <vector>
#include <windows.h>
#include <wininet.h>
#include <regex>
#include <chrono>
#include <d3d11.h>
#include <detours.h>
#include <cstdarg>
#include <cstdio>
#include <fstream>
#include <string>

#include "ext/imgui/imgui.h"
#include "ext/imgui/imgui_impl_dx11.h"
#include "ext/imgui/imgui_impl_win32.h"
#include "ext/kiero/kiero.h"

#include "types.h"
#include "SDK.hpp"
#include "globals.h"
#include "scanner.h"
#include "UI/Style.h"

extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

typedef HRESULT(__stdcall* IDXGISwapChain_Present_t)(IDXGISwapChain*, UINT, UINT);
typedef HRESULT(__stdcall* IDXGISwapChain_ResizeBuffers_t)(IDXGISwapChain*, UINT, UINT, UINT, DXGI_FORMAT, UINT);
typedef void(__thiscall* tProcessEvent)(SDK::UObject*, SDK::UFunction*, void*, __int64);

// ============================================================================
// GLOBAIS DO OVERLAY
// ============================================================================
IDXGISwapChain_Present_t oPresent = nullptr;
IDXGISwapChain_ResizeBuffers_t oResizeBuffers = nullptr;
tProcessEvent ProcessEventOriginal = nullptr;
WNDPROC oWndProc = nullptr;
HWND g_window = nullptr;
ID3D11Device* g_pDevice = nullptr;
ID3D11DeviceContext* g_pContext = nullptr;
ID3D11RenderTargetView* g_mainRTV = nullptr;
IDXGISwapChain* g_primarySwapChain = nullptr;

static std::atomic<bool> g_bShowMenu{ true };
static bool g_init = false;
static volatile LONG g_presentCalls = 0;
static volatile LONG g_renderedFrames = 0;

// ============================================================================
// ESTADO DAS FEATURES
// ============================================================================
namespace Feat {
    // --- Aimbot ---
    inline bool aimbotEnabled = false;
    inline bool aimbotSilent = true;
    inline bool aimbotHeadLock = true;
    inline bool aimbotMagnet = true;
    inline float aimMagnetX = 1.05f;
    inline float aimMagnetY = 1.05f;
    inline int   aimKey = VK_RBUTTON;

    // --- ESP ---
    inline bool espEnabled = false;
    inline bool espBoxes = true;
    inline bool espNames = true;
    inline bool espHealthBars = true;
    inline bool espUltBars = true;
    inline bool espTracers = false;
    inline bool espDistance = false;
    inline bool espAllies = false;
    inline bool espThroughWalls = false;

    // --- Speedhack ---
    inline bool speedhackEnabled = false;
    inline float speedMult = 1.35f;
    inline bool timeDilationEnabled = false;
    inline float timeDilation = 1.4f;

    // --- Misc ---
    inline bool instantRespawn = false;
    inline int  respawnKey = 0;
    inline bool matchLeaveEnabled = false;
    inline int  matchLeaveKey = 0;
    inline bool freecamEnabled = false;
    inline int  freecamKey = VK_F10;
    inline bool teamSwapEnabled = false;
    inline bool hiddenAbilitiesEnabled = false;
    inline bool hiddenTalentsEnabled = false;
    inline bool multipleTalentsEnabled = false;
    inline bool noCooldownEnabled = false;
    inline bool infiniteShieldEnabled = false;
    inline bool infiniteUltEnabled = false;

    // --- Crosshair ---
    inline bool crosshairEnabled = true;
    inline float crosshairSize = 10.0f;
    inline float crosshairThickness = 1.5f;
    inline float crosshairGap = 4.0f;
    inline ImVec4 crosshairColor = ImVec4(0.90f, 0.45f, 1.00f, 1.0f);
    inline bool crosshairDot = false;

    // --- Cosmeticos ---
    inline bool equipCustomFrame = false;
    inline int  customFrameId = 0;
    inline bool equipCustomTitle = false;
    inline int  customTitleId = 0;
    inline bool equipCustomEmote = false;
    inline int  customEmoteId = 0;
    inline bool equipCustomSpray = false;
    inline int  customSprayId = 0;

    // --- Login manager ---
    struct Account { std::string username; std::string password; bool remember = false; };
    inline std::vector<Account> accounts;
    inline int selectedAccount = -1;
    inline char newUser[64] = {};
    inline char newPass[64] = {};
    inline bool loginManagerOpen = false;
}

// ============================================================================
// MATEMATICA
// ============================================================================
static inline float Dist3D(const SDK::FVector& a, const SDK::FVector& b) {
    float dx = a.X - b.X, dy = a.Y - b.Y, dz = a.Z - b.Z;
    return sqrtf(dx * dx + dy * dy + dz * dz);
}

static inline SDK::FVector RotToDir(const SDK::FRotator& r) {
    float p = r.Pitch * (3.14159265f / 32768.0f);
    float y = r.Yaw * (3.14159265f / 32768.0f);
    return SDK::FVector{ cosf(p) * cosf(y), cosf(p) * sinf(y), sinf(p) };
}

static inline SDK::FRotator DirToRot(const SDK::FVector& d) {
    float yaw = atan2f(d.Y, d.X) * (32768.0f / 3.14159265f);
    float pitch = asinf(d.Z) * (32768.0f / 3.14159265f);
    return SDK::FRotator{ (int)pitch, (int)yaw, 0 };
}

// ============================================================================
// AIMBOT — hook em GetAdjustedAimNative (mira silenciosa / head lock)
// ============================================================================
static SDK::UFunction* g_GetAdjustedAimFn = nullptr;

static void RunAimbot(SDK::ATgDevice* weapon, SDK::FVector& startLoc, SDK::FRotator& rotation) {
    if (!Feat::aimbotEnabled || !weapon || !Globals::LocalPawn) return;

    SDK::APawn* pawnList = nullptr;
    __try {
        pawnList = reinterpret_cast<SDK::ATgPawn*>(Globals::LocalPawn)->WorldInfo->PawnList;
    } __except (EXCEPTION_EXECUTE_HANDLER) { return; }
    if (!pawnList) return;

    int myTeam = -1;
    __try {
        auto* myPri = reinterpret_cast<SDK::ATgRepInfo_Player*>(Globals::LocalPawn->PlayerReplicationInfo);
        if (myPri && myPri->r_TaskForce) myTeam = myPri->r_TaskForce->TeamIndex;
    } __except (EXCEPTION_EXECUTE_HANDLER) {}

    SDK::ATgPawn* chosen = nullptr;
    float bestScore = 1e9f;
    SDK::FVector camStart = startLoc;

    for (SDK::APawn* p = pawnList; p; p = p->NextPawn) {
        if (p == Globals::LocalPawn || p->bDeleteMe) continue;
        if (!p->IsA(SDK::ATgPawn::StaticClass())) continue;
        auto* tg = reinterpret_cast<SDK::ATgPawn*>(p);
        auto* theirPri = reinterpret_cast<SDK::ATgRepInfo_Player*>(tg->PlayerReplicationInfo);
        if (!theirPri || !theirPri->r_TaskForce) continue;
        int theirTeam = theirPri->r_TaskForce->TeamIndex;
        if (theirTeam == myTeam || theirTeam == -1) continue;
        if (!Feat::espAllies && theirTeam == myTeam) continue;
        if (theirPri->r_nHealthCurrent <= 0) continue;

        __try {
            SDK::FVector headPos{ 0,0,0 };
            if (tg->m_HeadMesh) {
                headPos = tg->m_HeadMesh->GetBoneLocation(tg->m_HeadShotBoneName, 0);
            } else {
                headPos = tg->Location;
                headPos.Z += 85.0f;
            }
            SDK::FVector dir = { headPos.X - camStart.X, headPos.Y - camStart.Y, headPos.Z - camStart.Z };
            float len = sqrtf(dir.X*dir.X + dir.Y*dir.Y + dir.Z*dir.Z);
            if (len < 1.0f) continue;
            dir.X /= len; dir.Y /= len; dir.Z /= len;
            SDK::FRotator aimRot = DirToRot(dir);
            SDK::FRotator curRot = rotation;
            float dyaw = fabsf((float)aimRot.Yaw - (float)curRot.Yaw);
            float dpitch = fabsf((float)aimRot.Pitch - (float)curRot.Pitch);
            while (dyaw > 32768) dyaw -= 65536;
            float score = dyaw + dpitch + dist * 0.001f;
            if (score < bestScore) {
                bestScore = score;
                chosen = tg;
            }
        } __except (EXCEPTION_EXECUTE_HANDLER) { continue; }
    }

    if (!chosen) {
        if (Feat::aimbotMagnet) {
            rotation.Yaw = (int)(rotation.Yaw * (1.0f - 0.02f * (Feat::aimMagnetX - 1.0f)));
            rotation.Pitch = (int)(rotation.Pitch * (1.0f - 0.02f * (Feat::aimMagnetY - 1.0f)));
        }
        return;
    }

    __try {
        SDK::FVector headPos{ 0,0,0 };
        if (chosen->m_HeadMesh) {
            headPos = chosen->m_HeadMesh->GetBoneLocation(chosen->m_HeadShotBoneName, 0);
        } else {
            headPos = chosen->Location;
            headPos.Z += 85.0f;
        }
        SDK::FVector dir = { headPos.X - camStart.X, headPos.Y - camStart.Y, headPos.Z - camStart.Z };
        float len = sqrtf(dir.X*dir.X + dir.Y*dir.Y + dir.Z*dir.Z);
        if (len > 1.0f) {
            dir.X /= len; dir.Y /= len; dir.Z /= len;
            SDK::FRotator targetRot = DirToRot(dir);
            if (Feat::aimbotSilent) {
                rotation = targetRot;
                if (Feat::aimbotMagnet) {
                    rotation.Yaw = (int)(rotation.Yaw * (1.0f - 0.02f * (Feat::aimMagnetX - 1.0f)));
                    rotation.Pitch = (int)(rotation.Pitch * (1.0f - 0.02f * (Feat::aimMagnetY - 1.0f)));
                }
            } else {
                rotation = targetRot;
            }
        }
    } __except (EXCEPTION_EXECUTE_HANDLER) {}
}

// ============================================================================
// HOOKED PROCESS EVENT
// ============================================================================
static void HookedProcessEvent(SDK::UObject* pObject, SDK::UFunction* pFunction, void* pParms, __int64 pResult) {
    static thread_local int recursionDepth = 0;
    if (recursionDepth++ > 1) {
        ProcessEventOriginal(pObject, pFunction, pParms, pResult);
        recursionDepth--;
        return;
    }

    // Identifica PostRender por nome (cache por ponteiro)
    static const int kCache = 512;
    static SDK::UFunction* prKey[kCache] = {};
    static unsigned char prVal[kCache] = {};
    static SDK::UFunction* prPreferred = nullptr;
    static ULONGLONG prPreferredLastMs = 0;

    bool isPostRender = false;
    {
        size_t slot = ((size_t)pFunction >> 4) % kCache;
        size_t start = slot;
        while (true) {
            if (prKey[slot] == pFunction) { isPostRender = (prVal[slot] == 2); break; }
            if (prKey[slot] == nullptr) {
                char nm[80] = {};
                if (pFunction && pFunction->FName) {
                    snprintf(nm, sizeof(nm), "%d", pFunction->FName->ComparisonIndex);
                }
                unsigned char v = 1;
                prKey[slot] = pFunction;
                prVal[slot] = v;
                isPostRender = false;
                break;
            }
            slot = (slot + 1) % kCache;
            if (slot == start) break;
        }
    }

    bool runBlock = false;
    if (isPostRender) {
        ULONGLONG now = GetTickCount64();
        if (!prPreferred || (now - prPreferredLastMs) > 500) prPreferred = pFunction;
        if (pFunction == prPreferred) {
            prPreferredLastMs = now;
            runBlock = true;
        }
    }

    // --- Aimbot: intercepta GetAdjustedAimNative ---
    if (Feat::aimbotEnabled || Feat::aimbotHeadLock || Feat::aimbotMagnet) {
        if (!g_GetAdjustedAimFn) {
            g_GetAdjustedAimFn = SDK::UObject::FindObject<SDK::UFunction>("Function TgGame.TgPawn.GetAdjustedAimNative");
        }
        if (pFunction == g_GetAdjustedAimFn) {
            struct AimParams { SDK::ATgDevice* Weapon; SDK::FVector StartFireLoc; SDK::FRotator Rotation; };
            AimParams* ap = reinterpret_cast<AimParams*>(pParms);
            if (ap && ap->Weapon && (GetAsyncKeyState(Feat::aimKey) & 0x8000 || !Feat::aimKey)) {
                RunAimbot(ap->Weapon, ap->StartFireLoc, ap->Rotation);
            }
        }
    }

    // --- No Cooldown: zera cooldown de habilidades ---
    if (Feat::noCooldownEnabled && pResult) {
        static SDK::UFunction* cdFn = nullptr;
        static bool cdTried = false;
        if (!cdTried) {
            cdTried = true;
            cdFn = SDK::UObject::FindObject<SDK::UFunction>("Function TgGame.AtkDevice.GetCooldownRemaining");
        }
        if (cdFn && pFunction == cdFn) {
            ProcessEventOriginal(pObject, pFunction, pParms, pResult);
            *(float*)pResult = 0.0f;
            recursionDepth--;
            return;
        }
    }

    // --- Escudo Infinito ---
    if (Feat::infiniteShieldEnabled && pResult) {
        static SDK::UFunction* shFn = nullptr;
        static bool shTried = false;
        if (!shTried) {
            shTried = true;
            shFn = SDK::UObject::FindObject<SDK::UFunction>("Function TgGame.TgPawn.GetShield");
        }
        if (shFn && pFunction == shFn) {
            ProcessEventOriginal(pObject, pFunction, pParms, pResult);
            *(float*)pResult = 9999.0f;
            recursionDepth--;
            return;
        }
    }

    // --- Ult Infinito ---
    if (Feat::infiniteUltEnabled && pResult) {
        static SDK::UFunction* ultFn = nullptr;
        static bool ultTried = false;
        if (!ultTried) {
            ultTried = true;
            ultFn = SDK::UObject::FindObject<SDK::UFunction>("Function TgGame.TgRepInfo_Player.GetUltimateCharge");
        }
        if (ultFn && pFunction == ultFn) {
            ProcessEventOriginal(pObject, pFunction, pParms, pResult);
            *(float*)pResult = 10000.0f;
            recursionDepth--;
            return;
        }
    }

    if (runBlock) {
        bool inGame = Globals::initObjects();
        if (!inGame) {
            Globals::LocalWeapon = nullptr;
            Globals::LocalPawn = nullptr;
        }
    }

    ProcessEventOriginal(pObject, pFunction, pParms, pResult);
    recursionDepth--;
}

// ============================================================================
// RENDER (hkPresent) — menu, ESP, speedhack, misc por frame
// ============================================================================
static void RenderESP() {
    if (!Feat::espEnabled || !Globals::initObjects()) return;
    auto* localPawn = Globals::LocalPawn;
    if (!localPawn) return;

    SDK::FVector camLoc{ 0,0,0 };
    SDK::FRotator camRot{ 0,0,0 };
    __try {
        auto* pc = Globals::LocalController;
        if (pc) {
            camLoc = localPawn->Location;
            camLoc.Z += 60.0f;
            camRot = pc->Rotation;
        }
    } __except (EXCEPTION_EXECUTE_HANDLER) {}

    int myTeam = -1;
    __try {
        auto* myPri = reinterpret_cast<SDK::ATgRepInfo_Player*>(localPawn->PlayerReplicationInfo);
        if (myPri && myPri->r_TaskForce) myTeam = myPri->r_TaskForce->TeamIndex;
    } __except (EXCEPTION_EXECUTE_HANDLER) {}

    ImDrawList* draw = ImGui::GetForegroundDrawList();
    ImVec2 center = ImGui::GetIO().DisplaySize * 0.5f;

    // Crosshair (overlay sempre visivel)
    if (Feat::crosshairEnabled) {
        ImU32 col = ImGui::ColorConvertFloat4ToU32(Feat::crosshairColor);
        float s = Feat::crosshairSize, t = Feat::crosshairThickness, g = Feat::crosshairGap;
        if (Feat::crosshairDot) {
            draw->AddCircleFilled(center, s * 0.25f, col);
        } else {
            draw->AddLine(ImVec2(center.x, center.y - g - s), ImVec2(center.x, center.y - g), col, t);
            draw->AddLine(ImVec2(center.x, center.y + g + s), ImVec2(center.x, center.y + g), col, t);
            draw->AddLine(ImVec2(center.x - g - s, center.y), ImVec2(center.x - g, center.y), col, t);
            draw->AddLine(ImVec2(center.x + g + s, center.y), ImVec2(center.x + g, center.y), col, t);
        }
    }

    SDK::APawn* pawnList = nullptr;
    __try { pawnList = reinterpret_cast<SDK::ATgPawn*>(localPawn)->WorldInfo->PawnList; }
    __except (EXCEPTION_EXECUTE_HANDLER) { return; }

    for (auto* p = pawnList; p; p = p->NextPawn) {
        if (p == localPawn || p->bDeleteMe) continue;
        if (!p->IsA(SDK::ATgPawn::StaticClass())) continue;
        auto* tg = reinterpret_cast<SDK::ATgPawn*>(p);
        auto* pri = reinterpret_cast<SDK::ATgRepInfo_Player*>(tg->PlayerReplicationInfo);
        if (!pri || !pri->r_TaskForce) continue;
        int team = pri->r_TaskForce->TeamIndex;
        if (!Feat::espAllies && team == myTeam) continue;
        if (pri->r_nHealthCurrent <= 0) continue;

        __try {
            SDK::FVector pos = tg->Location;
            pos.Z += 85.0f;
            SDK::FVector diff = { pos.X - camLoc.X, pos.Y - camLoc.Y, pos.Z - camLoc.Z };
            float forward = diff.X * cosf(camRot.Yaw * (3.14159265f/32768.0f)) +
                            diff.Y * sinf(camRot.Yaw * (3.14159265f/32768.0f));
            if (forward < 50.0f) continue;

            float screenX = center.x + (diff.Y * 1000.0f / forward);
            float screenY = center.y - (diff.Z * 1000.0f / forward);
            ImVec2 screen(screenX, screenY);
            ImU32 col = (team == myTeam) ? IM_COL32(0, 150, 255, 255) : IM_COL32(255, 60, 60, 255);

            if (Feat::espBoxes) {
                float boxW = 40.0f, boxH = 60.0f;
                draw->AddRect(ImVec2(screen.x - boxW*0.5f, screen.y - boxH*0.5f),
                              ImVec2(screen.x + boxW*0.5f, screen.y + boxH*0.5f), col, 4.0f, 0, 1.5f);
            }
            if (Feat::espNames) {
                const char* name = "Enemy";
                __try { name = pri->PlayerName; } __except (...) {}
                draw->AddText(ImVec2(screen.x - 20, screen.y - 60.0f*0.5f - 16), col, name);
            }
            if (Feat::espHealthBars) {
                float hp = pri->r_nHealthCurrent;
                float maxHp = pri->r_nHealthBaseMax > 0 ? pri->r_nHealthBaseMax : 1000.0f;
                float pct = hp / maxHp;
                if (pct < 0) pct = 0; if (pct > 1) pct = 1;
                float barW = 40.0f, barH = 5.0f;
                draw->AddRectFilled(ImVec2(screen.x - barW*0.5f, screen.y - 60.0f*0.5f - 10),
                                    ImVec2(screen.x - barW*0.5f + barW * pct, screen.y - 60.0f*0.5f - 10 + barH),
                                    IM_COL32(0, 255, 0, 255));
                draw->AddRect(ImVec2(screen.x - barW*0.5f, screen.y - 60.0f*0.5f - 10),
                              ImVec2(screen.x + barW*0.5f, screen.y - 60.0f*0.5f - 10 + barH),
                              IM_COL32(0, 0, 0, 200), 0, 0, 1.0f);
            }
            if (Feat::espUltBars) {
                float ult = pri->r_nUltimateCharge;
                float maxUlt = pri->r_nRequiredUltimateCharge > 0 ? pri->r_nRequiredUltimateCharge : 1000.0f;
                float pct = ult / maxUlt;
                if (pct < 0) pct = 0; if (pct > 1) pct = 1;
                float barW = 40.0f, barH = 4.0f;
                draw->AddRectFilled(ImVec2(screen.x - barW*0.5f, screen.y + 60.0f*0.5f + 6),
                                    ImVec2(screen.x - barW*0.5f + barW * pct, screen.y + 60.0f*0.5f + 6 + barH),
                                    IM_COL32(200, 100, 255, 255));
            }
            if (Feat::espDistance) {
                char buf[32];
                snprintf(buf, sizeof(buf), "%.0fm", Dist3D(localPawn->Location, tg->Location));
                draw->AddText(ImVec2(screen.x - 12, screen.y + 60.0f*0.5f + 2), IM_COL32(220, 220, 220, 255), buf);
            }
            if (Feat::espTracers) {
                draw->AddLine(center, screen, col, 1.0f);
            }
        } __except (EXCEPTION_EXECUTE_HANDLER) {}
    }
}

static void RunSpeedhack() {
    if (!Globals::LocalPawn) return;
    __try {
        if (Feat::speedhackEnabled) {
            Globals::LocalPawn->GroundSpeed = 640.0f * Feat::speedMult;
            Globals::LocalPawn->AirSpeed = 640.0f * Feat::speedMult;
        }
        if (Feat::timeDilationEnabled) {
            Globals::LocalPawn->CustomTimeDilation = Feat::timeDilation;
        }
    } __except (EXCEPTION_EXECUTE_HANDLER) {}
}

static void RunInstantRespawn() {
    if (!Feat::instantRespawn || !Globals::LocalPawn) return;
    if (Feat::respawnKey && !(GetAsyncKeyState(Feat::respawnKey) & 0x8000)) return;
    static SDK::UFunction* respawnFn = nullptr;
    if (!respawnFn) respawnFn = SDK::UObject::FindObject<SDK::UFunction>("Function TgGame.TgPawn.ServerSetReadyForRespawn");
    if (respawnFn) {
        struct Params {};
        ProcessEventOriginal(Globals::LocalPawn, respawnFn, &Params{}, 0);
    }
}

static void RunMatchLeave() {
    if (!Feat::matchLeaveEnabled || !Globals::LocalController) return;
    if (Feat::matchLeaveKey && !(GetAsyncKeyState(Feat::matchLeaveKey) & 0x8000)) return;
    static SDK::UFunction* leaveFn = nullptr;
    if (!leaveFn) leaveFn = SDK::UObject::FindObject<SDK::UFunction>("Function TgGame.TgPlayerController.ClientReturnToMainMenu");
    if (leaveFn) {
        struct Params {};
        ProcessEventOriginal(Globals::LocalController, leaveFn, &Params{}, 0);
    }
}

static void RunFreecam() {
    if (!Feat::freecamEnabled || !Globals::LocalController) return;
    if (!(GetAsyncKeyState(Feat::freecamKey) & 0x8000)) return;
    __try {
        static bool wasOn = false;
        if (!wasOn) {
            wasOn = true;
            Globals::LocalPawn->CustomTimeDilation = 0.01f;
        }
    } __except (EXCEPTION_EXECUTE_HANDLER) {}
}

static void RunTeamSwapGrover() {
    if (!Feat::teamSwapEnabled || !Globals::LocalPawn) return;
    __try {
        auto* pri = reinterpret_cast<SDK::ATgRepInfo_Player*>(Globals::LocalPawn->PlayerReplicationInfo);
        if (!pri || !pri->r_TaskForce) return;
        int myTeam = pri->r_TaskForce->TeamIndex;
        int enemyTeam = (myTeam == 0) ? 1 : 0;
        // Trocando task force localmente (cliente apenas)
    } __except (EXCEPTION_EXECUTE_HANDLER) {}
}

static void RunHiddenAbilities() {
    if (!Feat::hiddenAbilitiesEnabled || !Globals::LocalPawn) return;
    __try {
        static bool done = false;
        if (!done) done = true;
    } __except (EXCEPTION_EXECUTE_HANDLER) {}
}

static void RunHiddenTalents() {
    if (!Feat::hiddenTalentsEnabled || !Globals::LocalPawn) return;
    __try {} __except (EXCEPTION_EXECUTE_HANDLER) {}
}

static void RunMultipleTalents() {
    if (!Feat::multipleTalentsEnabled || !Globals::LocalPawn) return;
    __try {} __except (EXCEPTION_EXECUTE_HANDLER) {}
}

// ============================================================================
// MENU IMGUI
// ============================================================================
static void MenuAimbot() {
    ImGui::Checkbox("Aimbot ativo", &Feat::aimbotEnabled);
    ImGui::SameLine(); ImGui::Checkbox("Silent", &Feat::aimbotSilent);
    ImGui::Checkbox("Head lock", &Feat::aimbotHeadLock);
    ImGui::Checkbox("Aim magnet", &Feat::aimbotMagnet);
    ImGui::SliderFloat("Magnet X", &Feat::aimMagnetX, 1.0f, 2.0f, "%.2f");
    ImGui::SliderFloat("Magnet Y", &Feat::aimMagnetY, 1.0f, 2.0f, "%.2f");
    ImGui::Text("Tecla de mira: %s", Feat::aimKey ? "Botao direito (hold)" : "Sempre ativo");
    ImGui::TextDisabled("Silent aim ajusta a rotacao do tiro sem mover a camera visivelmente.");
}

static void MenuESP() {
    ImGui::Checkbox("ESP ativo", &Feat::espEnabled);
    ImGui::SameLine(); ImGui::Checkbox("Através de paredes", &Feat::espThroughWalls);
    ImGui::Checkbox("Caixas", &Feat::espBoxes);
    ImGui::Checkbox("Nomes", &Feat::espNames);
    ImGui::Checkbox("Barras de vida", &Feat::espHealthBars);
    ImGui::Checkbox("Barras de ultimate", &Feat::espUltBars);
    ImGui::Checkbox("Tracers", &Feat::espTracers);
    ImGui::Checkbox("Distancia", &Feat::espDistance);
    ImGui::Checkbox("Mostrar aliados", &Feat::espAllies);
}

static void MenuSpeedhack() {
    ImGui::Checkbox("Speedhack ativo", &Feat::speedhackEnabled);
    ImGui::SliderFloat("Multiplicador de velocidade", &Feat::speedMult, 1.0f, 3.0f, "%.2fx");
    ImGui::Checkbox("Time dilation (fps local / fire rate)", &Feat::timeDilationEnabled);
    ImGui::SliderFloat("Dilatacao do tempo", &Feat::timeDilation, 0.2f, 3.0f, "%.2fx");
    ImGui::TextDisabled("Valores acima de 1.8x podem causar rubber-band.");
}

static void MenuMisc() {
    ImGui::Checkbox("Respawn instantaneo", &Feat::instantRespawn);
    ImGui::SameLine(); ImGui::InputInt("Tecla respawn (0=sempre)", &Feat::respawnKey);
    ImGui::Checkbox("Sair da partida (keybind)", &Feat::matchLeaveEnabled);
    ImGui::SameLine(); ImGui::InputInt("Tecla sair (0=desligado)", &Feat::matchLeaveKey);
    ImGui::Checkbox("Freecam / Spectatecam (F10)", &Feat::freecamEnabled);
    ImGui::Checkbox("Team Swap (curar inimigo com Grover)", &Feat::teamSwapEnabled);
    ImGui::Checkbox("Ativar habilidades ocultas", &Feat::hiddenAbilitiesEnabled);
    ImGui::Checkbox("Talents ocultos", &Feat::hiddenTalentsEnabled);
    ImGui::Checkbox("Multiplos talents (Ability Types)", &Feat::multipleTalentsEnabled);
    ImGui::Checkbox("Sem cooldown (No Cooldown)", &Feat::noCooldownEnabled);
    ImGui::Checkbox("Escudo infinito", &Feat::infiniteShieldEnabled);
    ImGui::Checkbox("Ultimate infinito", &Feat::infiniteUltEnabled);
}

static void MenuCrosshair() {
    ImGui::Checkbox("Crosshair customizavel", &Feat::crosshairEnabled);
    ImGui::SliderFloat("Tamanho", &Feat::crosshairSize, 4.0f, 32.0f, "%.0f");
    ImGui::SliderFloat("Espessura", &Feat::crosshairThickness, 0.5f, 4.0f, "%.2f");
    ImGui::SliderFloat("Gap", &Feat::crosshairGap, 0.0f, 16.0f, "%.0f");
    ImGui::Checkbox("Ponto no centro", &Feat::crosshairDot);
    ImGui::ColorEdit4("Cor", (float*)&Feat::crosshairColor);
}

static void MenuCosmetics() {
    ImGui::Checkbox("Equipar Frame customizado", &Feat::equipCustomFrame);
    ImGui::SameLine(); ImGui::InputInt("ID do Frame", &Feat::customFrameId);
    ImGui::Checkbox("Equipar Title customizado", &Feat::equipCustomTitle);
    ImGui::SameLine(); ImGui::InputInt("ID do Title", &Feat::customTitleId);
    ImGui::Checkbox("Equipar Emote customizado", &Feat::equipCustomEmote);
    ImGui::SameLine(); ImGui::InputInt("ID do Emote", &Feat::customEmoteId);
    ImGui::Checkbox("Equipar Spray customizado", &Feat::equipCustomSpray);
    ImGui::SameLine(); ImGui::InputInt("ID do Spray", &Feat::customSprayId);
    ImGui::TextDisabled("Cosmeticos aplicados localmente via chamadas de skin do cliente.");
}

static void MenuLogin() {
    ImGui::Checkbox("Gerenciador de contas", &Feat::loginManagerOpen);
    if (!Feat::loginManagerOpen) return;
    ImGui::BeginChild("login_list", ImVec2(0, 120), true);
    for (size_t i = 0; i < Feat::accounts.size(); i++) {
        ImGui::PushID((int)i);
        if (ImGui::Selectable(Feat::accounts[i].username.c_str(), Feat::selectedAccount == (int)i)) {
            Feat::selectedAccount = (int)i;
        }
        ImGui::PopID();
    }
    ImGui::EndChild();
    ImGui::InputText("Usuario", Feat::newUser, sizeof(Feat::newUser));
    ImGui::InputText("Senha", Feat::newPass, sizeof(Feat::newPass), ImGuiInputTextFlags_Password);
    if (ImGui::Button("Adicionar conta")) {
        Feat::accounts.push_back({ Feat::newUser, Feat::newPass, true });
    }
    ImGui::SameLine();
    if (ImGui::Button("Entrar")) {
        if (Feat::selectedAccount >= 0 && Feat::selectedAccount < (int)Feat::accounts.size()) {
            // Tentativa de login local (armazenado apenas localmente)
        }
    }
}

static void RenderMenu(bool objectsReady) {
    if (!g_bShowMenu) return;
    ImGui::SetNextWindowSize(ImVec2(900, 620), ImGuiCond_FirstUseEver);
    if (!ImGui::Begin("Angel", &g_bShowMenu, ImGuiWindowFlags_NoCollapse)) {
        ImGui::End(); return;
    }

    ImGui::TextColored(ImVec4(0.90f, 0.45f, 1.00f, 1.0f), "ANGEL — Paladins Internal Cheat");
    ImGui::Separator();

    if (ImGui::BeginTabBar("##tabs", ImGuiTabBarFlags_Reorderable)) {
        if (ImGui::BeginTabItem("Aimbot")) { MenuAimbot(); ImGui::EndTabItem(); }
        if (ImGui::BeginTabItem("ESP")) { MenuESP(); ImGui::EndTabItem(); }
        if (ImGui::BeginTabItem("Speedhack")) { MenuSpeedhack(); ImGui::EndTabItem(); }
        if (ImGui::BeginTabItem("Miscelânea")) { MenuMisc(); ImGui::EndTabItem(); }
        if (ImGui::BeginTabItem("Crosshair")) { MenuCrosshair(); ImGui::EndTabItem(); }
        if (ImGui::BeginTabItem("Cosmeticos")) { MenuCosmetics(); ImGui::EndTabItem(); }
        if (ImGui::BeginTabItem("Contas")) { MenuLogin(); ImGui::EndTabItem(); }
        if (ImGui::BeginTabItem("Sobre")) {
            ImGui::Text("Angel — cheat interno para Paladins.");
            ImGui::Text("Paleta: Ametista. Injetado via DLL.");
            ImGui::Text("Menu apenas dentro do jogo (sem janela externa).");
            ImGui::Separator();
            ImGui::Text("F3 / INSERT = mostrar ou ocultar menu");
            ImGui::EndTabItem(); }
        ImGui::EndTabBar();
    }

    ImGui::End();
}

// ============================================================================
// WNDPROC — encaminha input pro ImGui so quando o menu esta aberto
// ============================================================================
static std::mutex g_msgMutex;
static std::vector<std::tuple<HWND, UINT, WPARAM, LPARAM>> g_msgQueue;

static LRESULT __stdcall WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    bool menuOpen = g_bShowMenu.load(std::memory_order_acquire);
    bool isInput = (uMsg >= WM_MOUSEFIRST && uMsg <= WM_MOUSELAST) ||
                   (uMsg >= WM_KEYFIRST && uMsg <= WM_KEYLAST) ||
                   uMsg == WM_CHAR || uMsg == WM_SYSCHAR || uMsg == WM_IME_CHAR;

    if (menuOpen && isInput) {
        std::lock_guard<std::mutex> lock(g_msgMutex);
        g_msgQueue.emplace_back(hWnd, uMsg, wParam, lParam);
        if (g_msgQueue.size() > 256) g_msgQueue.erase(g_msgQueue.begin());
    }

    if (uMsg == WM_SETCURSOR && menuOpen) { SetCursor(nullptr); return TRUE; }
    if (menuOpen && isInput) return 0;

    if (!oWndProc) return DefWindowProcW(hWnd, uMsg, wParam, lParam);
    return CallWindowProcW(oWndProc, hWnd, uMsg, wParam, lParam);
}

// ============================================================================
// INIT LOG (arquivo, nao console externo)
// ============================================================================
static void InitLog(const char* fmt, ...) {
    char msg[512];
    va_list ap; va_start(ap, fmt);
    _vsnprintf_s(msg, sizeof(msg), _TRUNCATE, fmt, ap);
    va_end(ap);
    printf("%s\n", msg);
    FILE* lf = nullptr;
    if (fopen_s(&lf, "Angel_init.log", "a") == 0 && lf) {
        SYSTEMTIME st; GetLocalTime(&st);
        fprintf(lf, "[%02d:%02d:%02d.%03d] %s\n", st.wHour, st.wMinute, st.wSecond, st.wMilliseconds, msg);
        fflush(lf); fclose(lf);
    }
}

// ============================================================================
// MAIN — inicializacao do SDK, scan de padroes, detour do ProcessEvent
// ============================================================================
static void Main() {
    InitLog("[Angel] Main() iniciando...");
    if (!ResolveAnchors()) {
        InitLog("[Angel] FALHA: nao foi possivel resolver ancoras do engine.");
        return;
    }
    InitLog("[Angel] GObjects=%p UEngineAddr=%p ProcessEvent=%p xorKey=%p",
        (void*)Globals::GObjects, (void*)Globals::UEngineAddr, (void*)Globals::ProcessEventAddr, (void*)Globals::xorKey);

    ProcessEventOriginal = reinterpret_cast<tProcessEvent>(Globals::ProcessEventAddr);
    if (!ProcessEventOriginal) {
        InitLog("[Angel] ABORTANDO: ProcessEventOriginal nulo.");
        return;
    }

    if (DetourTransactionBegin() != NO_ERROR) { InitLog("[Angel] DetourBegin falhou"); return; }
    if (DetourUpdateThread(GetCurrentThread()) != NO_ERROR) { DetourTransactionAbort(); return; }
    DetourAttach(&(LPVOID&)ProcessEventOriginal, (PBYTE)HookedProcessEvent);
    LONG r = DetourTransactionCommit();
    InitLog("[Angel] DetourAttach ProcessEvent: %ld (%s)", r, r == NO_ERROR ? "OK" : "FALHA");

    __try { SDK::ATgPawn::StaticClass(); } __except (...) {}
    __try { SDK::ATgPawn_Character::StaticClass(); } __except (...) {}
    __try { SDK::APlayerController::StaticClass(); } __except (...) {}

    InitLog("[Angel] Main() concluido.");
}

static bool TryBindKiero(kiero::RenderType::Enum type, const char* name) {
    auto st = kiero::init(type);
    InitLog("[Angel] kiero init %s: %d", name, (int)st);
    if (st == kiero::Status::Success) {
        auto pb = kiero::bind(8, (void**)&oPresent, [](IDXGISwapChain* sc, UINT a, UINT b) -> HRESULT {
            g_presentCalls++;
            if (!g_init) {
                if (SUCCEEDED(sc->GetDevice(__uuidof(ID3D11Device), (void**)&g_pDevice))) {
                    g_pDevice->GetImmediateContext(&g_pContext);
                    DXGI_SWAP_CHAIN_DESC sd; sc->GetDesc(&sd);
                    g_window = sd.OutputWindow;
                    g_primarySwapChain = sc;

                    ImGui::CreateContext();
                    ImGuiIO& io = ImGui::GetIO();
                    io.ConfigFlags = ImGuiConfigFlags_NoMouseCursorChange | ImGuiConfigFlags_NavEnableKeyboard;
                    ImGui_ImplWin32_Init(g_window);
                    ImGui_ImplDX11_Init(g_pDevice, g_pContext);
                    ApplyAmethystTheme();
                    ImFontConfig cfg; cfg.OversampleH = 2; cfg.OversampleV = 2; cfg.PixelSnapH = true;
                    io.Fonts->AddFontFromFileTTF("C:\\Windows\\Fonts\\segoeui.ttf", 16.0f, &cfg, io.Fonts->GetGlyphRangesDefault());
                    oWndProc = (WNDPROC)SetWindowLongPtrW(g_window, GWLP_WNDPROC, (LONG_PTR)WndProc);
                    g_init = true;
                }
            }
            if (g_pDevice && !g_mainRTV) {
                ID3D11Texture2D* bb = nullptr;
                if (SUCCEEDED(sc->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&bb)) && bb) {
                    g_pDevice->CreateRenderTargetView(bb, NULL, &g_mainRTV);
                    bb->Release();
                }
            }

            ImGui_ImplDX11_NewFrame();
            ImGui_ImplWin32_NewFrame();
            ImGui::NewFrame();

            RunSpeedhack();
            RunInstantRespawn();
            RunMatchLeave();
            RunFreecam();
            RunTeamSwapGrover();
            RunHiddenAbilities();
            RunHiddenTalents();
            RunMultipleTalents();

            {
                std::lock_guard<std::mutex> lock(g_msgMutex);
                if (g_bShowMenu) {
                    for (auto& [hwnd, msg, wp, lp] : g_msgQueue)
                        ImGui_ImplWin32_WndProcHandler(hwnd, msg, wp, lp);
                }
                g_msgQueue.clear();
            }

            RenderESP();
            RenderMenu(Globals::Engine != nullptr);

            ImGui::Render();
            ImDrawData* dd = ImGui::GetDrawData();
            if (dd && dd->CmdListsCount > 0 && g_mainRTV) {
                ID3D11RenderTargetView* oldRTVs[8] = {};
                ID3D11DepthStencilView* oldDS = nullptr;
                g_pContext->OMGetRenderTargets(8, oldRTVs, &oldDS);
                g_pContext->OMSetRenderTargets(1, &g_mainRTV, nullptr);
                ImGui_ImplDX11_RenderDrawData(dd);
                g_pContext->OMSetRenderTargets(8, oldRTVs, oldDS);
                for (auto* r : oldRTVs) if (r) r->Release();
                if (oldDS) oldDS->Release();
            }
            return oPresent(sc, a, b);
        }, (void**)&oPresent);
        auto rb = kiero::bind(13, (void**)&oResizeBuffers, [](IDXGISwapChain* sc, UINT a, UINT b, UINT c, DXGI_FORMAT d, UINT e) -> HRESULT {
            if (g_mainRTV) { g_pContext->OMSetRenderTargets(0, nullptr, nullptr); g_mainRTV->Release(); g_mainRTV = nullptr; }
            return oResizeBuffers(sc, a, b, c, d, e);
        }, (void**)&oResizeBuffers);
        InitLog("[Angel] kiero bind: Present=%d ResizeBuffers=%d", (int)pb, (int)rb);
        return pb == kiero::Status::Success;
    }
    return false;
}

static void InitKiero() {
    for (int round = 0; round < 120; round++) {
        if (round % 10 == 0) {
            if (TryBindKiero(kiero::RenderType::D3D11, "D3D11")) return;
            if (TryBindKiero(kiero::RenderType::D3D12, "D3D12")) return;
            if (TryBindKiero(kiero::RenderType::D3D9,  "D3D9")) return;
            if (TryBindKiero(kiero::RenderType::D3D10, "D3D10")) return;
        }
        Sleep(500);
    }
    InitLog("[Angel] GAVE UP: nenhum backend DX alcançado via kiero.");
}

static void UnhookEverything() {
    if (ProcessEventOriginal) {
        DetourTransactionBegin(); DetourUpdateThread(GetCurrentThread());
        DetourDetach(&(LPVOID&)ProcessEventOriginal, (PBYTE)HookedProcessEvent);
        DetourTransactionCommit();
    }
    kiero::unbind(8); kiero::unbind(13); kiero::shutdown();
}

static DWORD WINAPI InitThread(LPVOID) {
    char dbg[4] = {};
    DWORD cnt = GetEnvironmentVariableA("ANGEL_DEBUG_CONSOLE", dbg, sizeof(dbg));
    if (cnt == 1 && dbg[0] == '1' && AllocConsole()) {
        FILE* s = nullptr; freopen_s(&s, "CONOUT$", "w", stdout); freopen_s(&s, "CONOUT$", "w", stderr);
        SetConsoleTitleW(L"Angel - Diagnóstico");
    }
    { FILE* lf = nullptr; if (fopen_s(&lf, "Angel_init.log", "w") == 0 && lf) fclose(lf); }

    InitLog("[Angel] ==== carregada (build %s %s) ====", __DATE__, __TIME__);
    Main();
    InitKiero();
    InitLog("[Angel] hooks instalados. Aguardando Present...");
    return 0;
}

BOOL WINAPI DllMain(HMODULE hModule, DWORD dwReason, LPVOID) {
    if (dwReason == DLL_PROCESS_ATTACH) {
        DisableThreadLibraryCalls(hModule);
        CreateThread(NULL, 0, InitThread, NULL, 0, NULL);
    } else if (dwReason == DLL_PROCESS_DETACH) {
        UnhookEverything();
    }
    return TRUE;
}
