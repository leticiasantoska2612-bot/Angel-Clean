// ============================================================================
//  ANGEL — globals.h
//  Ponteiros globais do engine Unreal 3 (Paladins) + initObjects().
//  Todo acesso é SEH-guarded; ponteiros são zerados antecipadamente para
//  nunca reaproveitar estado estale (anti-crash em mudança de partida).
// ============================================================================
#pragma once

#include "types.h"
#include "SDK.hpp"

namespace Globals {
    inline uintptr_t moduleBase = 0;
    inline uintptr_t GObjectAddr = 0;
    inline uintptr_t GNameAddr = 0;
    inline uintptr_t UEngineAddr = 0;
    inline uintptr_t ProcessEventAddr = 0;
    inline uintptr_t xorFuncAddr = 0;
    inline uintptr_t xorKey = 0;

    inline SDK::UObject** GObjects = nullptr;
    inline SDK::FNameEntry** GNames = nullptr;

    inline SDK::UEngine* Engine = nullptr;
    inline SDK::ULocalPlayer* LocalPlayer = nullptr;
    inline SDK::APlayerController* LocalController = nullptr;
    inline SDK::APawn* LocalPawn = nullptr;
    inline SDK::ATgDevice* LocalWeapon = nullptr;

    inline bool initObjects() {
        Engine = nullptr;
        LocalPlayer = nullptr;
        LocalController = nullptr;
        LocalPawn = nullptr;
        LocalWeapon = nullptr;
        __try {
            if (!UEngineAddr) return false;
            Engine = *reinterpret_cast<SDK::UEngine**>(UEngineAddr);
            if (!Engine) return false;
            auto& players = Engine->GamePlayers;
            if (!players.IsValidIndex(0)) return false;
            LocalPlayer = players[0];
            if (!LocalPlayer) return false;
            LocalController = reinterpret_cast<SDK::APlayerController*>(LocalPlayer->Actor);
            if (!LocalController) return false;
            LocalPawn = reinterpret_cast<SDK::APawn*>(LocalController->AcknowledgedPawn);
            if (!LocalPawn) return false;
            LocalWeapon = reinterpret_cast<SDK::ATgDevice*>(LocalPawn->Weapon);
            return LocalWeapon != nullptr;
        } __except (EXCEPTION_EXECUTE_HANDLER) {
            Engine = nullptr; LocalPlayer = nullptr; LocalController = nullptr;
            LocalPawn = nullptr; LocalWeapon = nullptr;
            return false;
        }
    }
}
