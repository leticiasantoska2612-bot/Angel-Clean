// ============================================================================
//  ANGEL — injector/main.cpp
//  Launcher Win32: injeta Angel.dll no processo Paladins.exe.
// ============================================================================
#include <windows.h>
#include <tlhelp32.h>
#include <iostream>
#include <string>

static DWORD FindProcessId(const wchar_t* procName) {
    DWORD pid = 0;
    HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (hSnap != INVALID_HANDLE_VALUE) {
        PROCESSENTRY32W pe = {};
        pe.dwSize = sizeof(pe);
        if (Process32FirstW(hSnap, &pe)) {
            do {
                if (_wcsicmp(pe.szExeFile, procName) == 0) {
                    pid = pe.th32ProcessID;
                    break;
                }
            } while (Process32NextW(hSnap, &pe));
        }
        CloseHandle(hSnap);
    }
    return pid;
}

static bool Inject(DWORD pid, const std::wstring& dllPath) {
    HANDLE hProc = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pid);
    if (!hProc) {
        std::cerr << "Falha ao abrir o processo (PID " << pid << ").\n";
        return false;
    }

    size_t pathLen = (dllPath.size() + 1) * sizeof(wchar_t);
    LPVOID remoteMem = VirtualAllocEx(hProc, NULL, pathLen, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
    if (!remoteMem) {
        std::cerr << "Falha ao alocar memória no processo alvo.\n";
        CloseHandle(hProc);
        return false;
    }

    if (!WriteProcessMemory(hProc, remoteMem, dllPath.c_str(), pathLen, NULL)) {
        std::cerr << "Falha ao escrever o caminho da DLL no processo alvo.\n";
        VirtualFreeEx(hProc, remoteMem, 0, MEM_RELEASE);
        CloseHandle(hProc);
        return false;
    }

    HMODULE hKernel32 = GetModuleHandleW(L"kernel32.dll");
    LPTHREAD_START_ROUTINE pLoadLibrary = (LPTHREAD_START_ROUTINE)GetProcAddress(hKernel32, "LoadLibraryW");
    if (!pLoadLibrary) {
        std::cerr << "Falha ao resolver LoadLibraryW.\n";
        VirtualFreeEx(hProc, remoteMem, 0, MEM_RELEASE);
        CloseHandle(hProc);
        return false;
    }

    HANDLE hThread = CreateRemoteThread(hProc, NULL, 0, pLoadLibrary, remoteMem, 0, NULL);
    if (!hThread) {
        std::cerr << "Falha ao criar thread remota.\n";
        VirtualFreeEx(hProc, remoteMem, 0, MEM_RELEASE);
        CloseHandle(hProc);
        return false;
    }

    WaitForSingleObject(hThread, INFINITE);
    std::cout << "Angel.dll injetado com sucesso no PID " << pid << ".\n";

    CloseHandle(hThread);
    VirtualFreeEx(hProc, remoteMem, 0, MEM_RELEASE);
    CloseHandle(hProc);
    return true;
}

int wWinMain(HINSTANCE, HINSTANCE, PWSTR, int) {
    std::wcout << L"Angel Launcher — injetor de DLL para Paladins\n";

    DWORD pid = FindProcessId(L"Paladins.exe");
    if (!pid) {
        std::wcerr << L"Paladins.exe nao encontrado. Inicie o jogo primeiro.\n";
        MessageBoxW(NULL, L"Paladins.exe nao encontrado. Inicie o jogo primeiro.", L"Angel Launcher", MB_ICONWARNING);
        return 1;
    }

    std::wcout << L"Paladins.exe encontrado (PID " << pid << L").\n";

    wchar_t dllPath[MAX_PATH];
    GetModuleFileNameW(NULL, dllPath, MAX_PATH);
    wchar_t* lastSlash = wcsrchr(dllPath, L'\\');
    if (lastSlash) *(lastSlash + 1) = L'\0';
    wcscat_s(dllPath, L"Angel.dll");

    if (!Inject(pid, dllPath)) {
        MessageBoxW(NULL, L"Falha ao injetar a Angel.dll.", L"Angel Launcher", MB_ICONERROR);
        return 1;
    }

    MessageBoxW(NULL, L"Angel.dll injetado com sucesso no Paladins!", L"Angel Launcher", MB_ICONINFORMATION);
    return 0;
}
