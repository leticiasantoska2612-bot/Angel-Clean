@echo off
setlocal enabledelayedexpansion

rem ========================================================================
rem  Construir_Angel.bat — Build x64 do Angel (DLL + launcher) sem abrir o VS IDE
rem ========================================================================

set "SCRIPT_DIR=%~dp0"
set "BUILD_DIR=%SCRIPT_DIR%build"
set "LOG_FILE=%SCRIPT_DIR%build-angel.log"

echo [Construir_Angel] Iniciando build x64 do Angel... > "%LOG_FILE%"
echo [Construir_Angel] Diretorio: %SCRIPT_DIR% >> "%LOG_FILE%"

rem Localizar o vsvars64.bat
set "VSVARS="
for %%v in (
    "C:\Program Files\Microsoft Visual Studio\2022\BuildTools\VC\Auxiliary\Build\vcvars64.bat"
    "C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvars64.bat"
    "C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\VC\Auxiliary\Build\vcvars64.bat"
    "C:\Program Files (x86)\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvars64.bat"
) do if exist "%%v" set "VSVARS=%%v"

if not defined VSVARS (
    echo [ERRO] vsvars64.bat nao encontrado. Instale o Visual Studio Build Tools com C++ workload. >> "%LOG_FILE%"
    echo ERRO: vsvars64.bat nao encontrado.
    pause
    exit /b 1
)

echo [Construir_Angel] Usando: %VSVARS% >> "%LOG_FILE%"

if not exist "%BUILD_DIR%" mkdir "%BUILD_DIR%"

call "%VSVARS%" >nul 2>&1
if errorlevel 1 (
    echo [ERRO] Falha ao carregar o ambiente MSVC. >> "%LOG_FILE%"
    echo ERRO: falha ao carregar MSVC.
    pause
    exit /b 1
)

cd /d "%BUILD_DIR%"

echo [Construir_Angel] Executando cmake configuracao... >> "%LOG_FILE%"
cmake -G "Visual Studio 17 2022" -A x64 .. >> "%LOG_FILE%" 2>&1
if errorlevel 1 (
    echo [ERRO] Falha na configuracao cmake. Veja build-angel.log >> "%LOG_FILE%"
    echo ERRO: configuracao cmake falhou.
    pause
    exit /b 1
)

echo [Construir_Angel] Compilando (Release x64)... >> "%LOG_FILE%"
cmake --build . --config Release >> "%LOG_FILE%" 2>&1
if errorlevel 1 (
    echo [ERRO] Falha na compilacao. Veja build-angel.log >> "%LOG_FILE%"
    echo ERRO: compilacao falhou.
    pause
    exit /b 1
)

echo [Construir_Angel] Build concluido. Binarios em %BUILD_DIR%\bin\ >> "%LOG_FILE%"
echo Build concluido. Binarios em %BUILD_DIR%\bin\
dir "%BUILD_DIR%\bin\"

pause
