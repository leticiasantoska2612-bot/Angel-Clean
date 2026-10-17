// ============================================================================
//  ANGEL — scanner.h
//  Resolve âncoras do engine via padrões do AkameUpdateALL4Class.CT.
// ============================================================================
#pragma once

#include "globals.h"
#include "memory_manager.h"

inline bool ResolveAnchors() {
    Globals::moduleBase = GetModuleBaseSafe(L"Paladins.exe");
    if (!Globals::moduleBase) return false;

    // GObject: 48 8B 05 ? ? ? ? 4C 8B 04 0A 4C 33 04 F0 44
    Globals::GObjectAddr = FindPattern(L"Paladins.exe", "48 8B 05 ? ? ? ? 4C 8B 04 0A 4C 33 04 F0 44");
    if (Globals::GObjectAddr) {
        Globals::GObjects = reinterpret_cast<SDK::UObject**>(ResolveMovRip<uintptr_t>(Globals::GObjectAddr));
        SDK::UObject::GObjects = reinterpret_cast<SDK::TAntiCheatArray<SDK::UObject*>*>(Globals::GObjectAddr);
    }

    // GName: 48 8B 05 ? ? ? ? B9 ? ? ? ? 48 8B 0C 0A 48 BA
    Globals::GNameAddr = FindPattern(L"Paladins.exe", "48 8B 05 ? ? ? ? B9 ? ? ? ? 48 8B 0C 0A 48 BA");
    if (Globals::GNameAddr) {
        Globals::GNames = reinterpret_cast<SDK::FNameEntry**>(ResolveMovRip<uintptr_t>(Globals::GNameAddr));
        SDK::FName::GNames = reinterpret_cast<SDK::TAntiCheatArray<SDK::FNameEntry*>*>(Globals::GNameAddr);
    }

    // UEngineAddr: 48 8B 0D ? ? ? ? 48 85 C9 0F 84 ? ? ? ? 48 39 B9 ? ? ? ?
    Globals::UEngineAddr = FindPattern(L"Paladins.exe", "48 8B 0D ? ? ? ? 48 85 C9 0F 84 ? ? ? ? 48 39 B9 ? ? ? ?");
    if (Globals::UEngineAddr) {
        Globals::UEngineAddr = ResolveMovRip<uintptr_t>(Globals::UEngineAddr);
    }

    // ProcessEvent: E8 ? ? ? ? 8D 4E ? 41 3B CD
    Globals::ProcessEventAddr = FindPattern(L"Paladins.exe", "E8 ? ? ? ? 8D 4E ? 41 3B CD");
    if (Globals::ProcessEventAddr) {
        Globals::ProcessEventAddr = ResolveCallRel<uintptr_t>(Globals::ProcessEventAddr);
    }

    // xorFunc: E8 ? ? ? ? 85 C0 75 0F 48 8B 03
    Globals::xorFuncAddr = FindPattern(L"Paladins.exe", "E8 ? ? ? ? 85 C0 75 0F 48 8B 03");
    if (Globals::xorFuncAddr) {
        Globals::xorFuncAddr = ResolveCallRel<uintptr_t>(Globals::xorFuncAddr);
        Globals::xorKey = *reinterpret_cast<uint32_t*>(Globals::xorFuncAddr + 0x63);
    }

    return Globals::GObjects != nullptr && Globals::UEngineAddr != 0 && Globals::ProcessEventAddr != 0;
}
