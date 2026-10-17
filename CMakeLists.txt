cmake_minimum_required(VERSION 3.20)
cmake_policy(SET CMP0091 NEW)
project(Angel LANGUAGES C CXX RC)

if(NOT WIN32 OR NOT MSVC)
    message(FATAL_ERROR "Angel requer Windows x64 e MSVC (Visual Studio Build Tools).")
endif()
if(NOT CMAKE_SIZEOF_VOID_P EQUAL 8)
    message(FATAL_ERROR "Selecione o compilador x64; o SDK do Paladins e 64 bits.")
endif()

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_C_STANDARD 11)
set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>DLL")

# SDK headers (extraídos do SDK.rar — colados na pasta SDK/)
set(ANGEL_SDK_DIR "${CMAKE_CURRENT_SOURCE_DIR}/SDK")

file(GLOB IMGUI_SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/ext/imgui/imgui.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/ext/imgui/imgui_draw.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/ext/imgui/imgui_tables.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/ext/imgui/imgui_widgets.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/ext/imgui/imgui_impl_dx11.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/ext/imgui/imgui_impl_win32.cpp"
)
file(GLOB HOOK_SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/ext/kiero/kiero.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/ext/kiero/minhook/src/buffer.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/ext/kiero/minhook/src/hook.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/ext/kiero/minhook/src/trampoline.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/ext/kiero/minhook/src/hde/hde64.c"
)
file(GLOB DETOURS_SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/ext/Detours/src/detours.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/ext/Detours/src/disasm.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/ext/Detours/src/disolx64.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/ext/Detours/src/image.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/ext/Detours/src/modules.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/ext/Detours/src/uimports.cpp"
)

add_library(AngelCore SHARED main.cpp ${IMGUI_SOURCES} ${HOOK_SOURCES} ${DETOURS_SOURCES})
set_target_properties(AngelCore PROPERTIES
    OUTPUT_NAME "Angel"
    PREFIX ""
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
    PDB_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)
target_include_directories(AngelCore PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}"
    "${CMAKE_CURRENT_SOURCE_DIR}/UI"
    "${ANGEL_SDK_DIR}"
    "${CMAKE_CURRENT_SOURCE_DIR}/ext/Detours/src"
    "${CMAKE_CURRENT_SOURCE_DIR}/ext/kiero/minhook/include"
    "${CMAKE_CURRENT_SOURCE_DIR}/ext/kiero/minhook/src"
)
target_compile_definitions(AngelCore PRIVATE
    WIN32 _WINDOWS _USRDLL _CRT_SECURE_NO_WARNINGS
    WIN32_LEAN_AND_MEAN
    _CRT_NONSTDC_NO_WARNINGS
)
target_compile_options(AngelCore PRIVATE
    /bigobj /utf-8 /EHa /GR-
    $<$<CONFIG:Release>:/O2>
    $<$<CONFIG:Release>:/Ob2>
    $<$<CONFIG:Release>:/Gy>
    $<$<CONFIG:Release>:/Zi>
)
target_link_options(AngelCore PRIVATE
    $<$<CONFIG:Release>:/DEBUG>
    $<$<CONFIG:Release>:/OPT:REF>
    $<$<CONFIG:Release>:/OPT:ICF>
    $<$<CONFIG:Release>:/INCREMENTAL:NO>
)
target_link_libraries(AngelCore PRIVATE
    d3d11 dxgi user32 gdi32 psapi wininet advapi32 dbghelp
    "${CMAKE_CURRENT_SOURCE_DIR}/ext/Detours/detours.lib"
    "${CMAKE_CURRENT_SOURCE_DIR}/ext/kiero/minhook/libMinHook.x64.lib"
)

add_executable(AngelLauncher WIN32 injector/main.cpp injector/app.rc)
set_target_properties(AngelLauncher PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
    OUTPUT_NAME "AngelLauncher"
    MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>"
)
target_compile_definitions(AngelLauncher PRIVATE UNICODE _UNICODE WIN32_LEAN_AND_MEAN)
target_compile_options(AngelLauncher PRIVATE /utf-8 /EHsc)
target_link_libraries(AngelLauncher PRIVATE user32 gdi32 comdlg32 advapi32)

add_custom_target(AngelPackage ALL
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "${CMAKE_CURRENT_SOURCE_DIR}/assets/Angel.ico"
        "${CMAKE_BINARY_DIR}/bin/Angel.ico"
    DEPENDS AngelCore AngelLauncher
    COMMENT "Copiando assets do Angel para bin"
)
