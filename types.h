// ============================================================================
//  ANGEL — types.h
//  Tipos base usados pelo cheat interno do Paladins.
// ============================================================================
#pragma once

#include <cstdint>
#include <cstddef>

using int8   = __int8;
using int16  = __int16;
using int32  = __int32;
using int64  = __int64;
using uint8  = unsigned __int8;
using uint16 = unsigned __int16;
using uint32 = unsigned __int32;
using uint64 = unsigned __int64;
using float32 = float;
using float64 = double;

struct FVector { float X, Y, Z; };
struct FRotator { int Pitch, Yaw, Roll; };
struct FLinearColor { float R, G, B, A; };

template <typename T>
struct TArray {
    T* Data;
    int32 Count;
    int32 Max;
    inline bool IsValidIndex(int32 i) const { return i >= 0 && i < Count; }
    inline T& operator[](int32 i) { return Data[i]; }
    inline int32 Num() const { return Count; }
};

template <typename T>
class TAntiCheatArray {
public:
    T* Data;
    int32 Count;
    int32 Max;
    inline bool IsValidIndex(int32 i) const { return i >= 0 && i < Count; }
    inline T& operator[](int32 i) { return Data[i]; }
    inline int32 Num() const { return Count; }
};

class UObject;
class UClass;
class UFunction;
struct FName;
struct FNameEntry;
