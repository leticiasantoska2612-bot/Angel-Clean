// ============================================================================
//  ANGEL — memory_manager.h
//  Leitura segura de memória e resolução de endereços relativos (RIP/call).
// ============================================================================
#pragma once

#include "types.h"
#include <windows.h>
#include <cstdint>
#include <cstdio>

static inline uintptr_t GetModuleBaseSafe(const wchar_t* modName) {
    return reinterpret_cast<uintptr_t>(GetModuleHandleW(modName));
}

static inline bool ReadPtr(uintptr_t addr, void* out, size_t sz) {
    __try {
        if (!addr) return false;
        memcpy(out, (void*)addr, sz);
        return true;
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        return false;
    }
}

// "mov rax, [rip + imm32]" -> endereço absoluto
template <typename T>
static T ResolveMovRip(uintptr_t instrAddr) {
    int32_t rel = *reinterpret_cast<int32_t*>(instrAddr + 3);
    uintptr_t next = instrAddr + 7;
    return reinterpret_cast<T>(next + rel);
}

// "call rel32" / "jmp rel32" -> endereço absoluto
template <typename T>
static T ResolveCallRel(uintptr_t instrAddr) {
    int32_t rel = *reinterpret_cast<int32_t*>(instrAddr + 1);
    uintptr_t next = instrAddr + 5;
    return reinterpret_cast<T>(next + rel);
}

// Scanner de padrão de bytes sobre um módulo.
// pattern: bytes separados por espaço, "?" = curinga.
// Retorna endereço do primeiro match ou 0.
static uintptr_t FindPattern(const wchar_t* module, const char* pattern) {
    HMODULE hMod = GetModuleHandleW(module);
    if (!hMod) return 0;

    MODULEINFO mi = {};
    if (!GetModuleInformation(GetCurrentProcess(), hMod, &mi, sizeof(mi)))
        return 0;

    uintptr_t base = reinterpret_cast<uintptr_t>(mi.lpBaseOfDll);
    size_t size = mi.SizeOfImage;

    static uint8_t bytes[256];
    static char mask[257];
    int n = 0;
    const char* p = pattern;
    while (*p && n < 256) {
        while (*p == ' ') p++;
        if (!*p) break;
        if (p[0] == '?' && p[1] == '?') { bytes[n] = 0; mask[n] = '?'; p += 2; }
        else if (p[0] == '?') { bytes[n] = 0; mask[n] = '?'; p += 1; }
        else { bytes[n] = (uint8_t)strtoul(p, nullptr, 16); mask[n] = 'x'; p += 2; }
        n++;
    }
    mask[n] = '\0';

    for (size_t i = 0; i < size; i++) {
        bool ok = true;
        for (int j = 0; j < n; j++) {
            if (mask[j] == 'x' && reinterpret_cast<uint8_t*>(base + i)[j] != bytes[j]) {
                ok = false; break;
            }
        }
        if (ok) return base + i;
    }
    return 0;
}
