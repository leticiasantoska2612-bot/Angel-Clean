// ============================================================================
//  ANGEL — UI/Style.h
//  Tema ametista (roxo profundo) — paleta padrão da Angel.
//  60/30/10: major (fundos), mid (botoes/frames), minor (destaques/ativos).
// ============================================================================
#pragma once

#include "ext/imgui/imgui.h"
#include <cmath>

inline ImVec4 g_MajorColor = ImVec4(0.12f, 0.06f, 0.18f, 1.0f); // ametista escura
inline ImVec4 g_MidColor   = ImVec4(0.45f, 0.20f, 0.75f, 1.0f); // ametista media
inline ImVec4 g_MinorColor = ImVec4(0.90f, 0.45f, 1.00f, 1.0f); // ametista clara/neon

inline void ApplyAmethystTheme() {
    ImGuiStyle& s = ImGui::GetStyle();
    const ImVec4 M = g_MajorColor, D = g_MidColor, N = g_MinorColor;

    const ImVec4 BG_DARK   = ImVec4(M.x * 0.12f, M.y * 0.12f, M.z * 0.12f, 0.95f);
    const ImVec4 BG_DARK_2 = ImVec4(M.x * 0.18f, M.y * 0.18f, M.z * 0.18f, 0.97f);

    s.Colors[ImGuiCol_Text]           = ImVec4(0.96f, 0.96f, 1.00f, 1.00f);
    s.Colors[ImGuiCol_TextDisabled]   = ImVec4(0.50f, 0.45f, 0.60f, 1.00f);
    s.Colors[ImGuiCol_WindowBg]       = BG_DARK;
    s.Colors[ImGuiCol_ChildBg]        = BG_DARK_2;
    s.Colors[ImGuiCol_PopupBg]        = ImVec4(BG_DARK.x * 0.75f, BG_DARK.y * 0.75f, BG_DARK.z * 0.75f, 0.98f);
    s.Colors[ImGuiCol_Border]         = N;
    s.Colors[ImGuiCol_BorderShadow]   = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
    s.Colors[ImGuiCol_FrameBg]        = ImVec4(M.x * 0.28f, M.y * 0.28f, M.z * 0.28f, 0.80f);
    s.Colors[ImGuiCol_FrameBgHovered] = ImVec4(D.x, D.y, D.z, 0.40f);
    s.Colors[ImGuiCol_FrameBgActive]  = ImVec4(N.x, N.y, N.z, 0.50f);
    s.Colors[ImGuiCol_TitleBg]        = ImVec4(BG_DARK.x * 0.5f, BG_DARK.y * 0.5f, BG_DARK.z * 0.5f, 1.00f);
    s.Colors[ImGuiCol_TitleBgActive]  = ImVec4(M.x * 0.45f, M.y * 0.45f, M.z * 0.45f, 1.00f);
    s.Colors[ImGuiCol_TitleBgCollapsed] = ImVec4(BG_DARK.x * 0.5f, BG_DARK.y * 0.5f, BG_DARK.z * 0.5f, 0.60f);
    s.Colors[ImGuiCol_MenuBarBg]      = ImVec4(M.x * 0.20f, M.y * 0.20f, M.z * 0.20f, 1.00f);
    s.Colors[ImGuiCol_ScrollbarBg]    = ImVec4(BG_DARK.x * 0.5f, BG_DARK.y * 0.5f, BG_DARK.z * 0.5f, 0.60f);
    s.Colors[ImGuiCol_ScrollbarGrab]  = D;
    s.Colors[ImGuiCol_ScrollbarGrabHovered] = N;
    s.Colors[ImGuiCol_ScrollbarGrabActive]  = N;
    s.Colors[ImGuiCol_CheckMark]      = N;
    s.Colors[ImGuiCol_SliderGrab]     = D;
    s.Colors[ImGuiCol_SliderGrabActive] = N;
    s.Colors[ImGuiCol_Button]         = ImVec4(M.x * 0.32f, M.y * 0.32f, M.z * 0.32f, 0.88f);
    s.Colors[ImGuiCol_ButtonHovered]  = ImVec4(D.x, D.y, D.z, 0.50f);
    s.Colors[ImGuiCol_ButtonActive]   = ImVec4(N.x, N.y, N.z, 0.70f);
    s.Colors[ImGuiCol_Header]         = ImVec4(M.x * 0.32f, M.y * 0.32f, M.z * 0.32f, 0.65f);
    s.Colors[ImGuiCol_HeaderHovered]  = ImVec4(D.x, D.y, D.z, 0.60f);
    s.Colors[ImGuiCol_HeaderActive]   = ImVec4(N.x, N.y, N.z, 0.75f);
    s.Colors[ImGuiCol_Separator]      = ImVec4(0.25f, 0.20f, 0.35f, 0.60f);
    s.Colors[ImGuiCol_SeparatorHovered] = D;
    s.Colors[ImGuiCol_SeparatorActive]  = N;
    s.Colors[ImGuiCol_ResizeGrip]     = ImVec4(D.x, D.y, D.z, 0.30f);
    s.Colors[ImGuiCol_ResizeGripHovered] = ImVec4(N.x, N.y, N.z, 0.60f);
    s.Colors[ImGuiCol_ResizeGripActive]   = N;
    s.Colors[ImGuiCol_Tab]            = ImVec4(M.x * 0.24f, M.y * 0.24f, M.z * 0.24f, 0.92f);
    s.Colors[ImGuiCol_TabHovered]     = ImVec4(D.x, D.y, D.z, 0.60f);
    s.Colors[ImGuiCol_TabActive]      = ImVec4(M.x * 0.45f, M.y * 0.45f, M.z * 0.45f, 1.00f);
    s.Colors[ImGuiCol_TabUnfocused]   = ImVec4(BG_DARK.x, BG_DARK.y, BG_DARK.z, 0.98f);
    s.Colors[ImGuiCol_TabUnfocusedActive] = ImVec4(M.x * 0.3f, M.y * 0.3f, M.z * 0.3f, 1.00f);
    s.Colors[ImGuiCol_PlotLines]      = ImVec4(0.60f, 0.45f, 0.75f, 1.00f);
    s.Colors[ImGuiCol_PlotLinesHovered] = D;
    s.Colors[ImGuiCol_PlotHistogram]  = N;
    s.Colors[ImGuiCol_PlotHistogramHovered] = D;
    s.Colors[ImGuiCol_TextSelectedBg] = ImVec4(N.x, N.y, N.z, 0.35f);
    s.Colors[ImGuiCol_DragDropTarget] = D;
    s.Colors[ImGuiCol_NavHighlight]   = N;
    s.Colors[ImGuiCol_NavWindowingHighlight] = ImVec4(1.00f, 1.00f, 1.00f, 0.70f);
    s.Colors[ImGuiCol_NavWindowingDimBg] = ImVec4(0.80f, 0.80f, 0.80f, 0.20f);
    s.Colors[ImGuiCol_ModalWindowDimBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.50f);

    s.WindowPadding = ImVec2(14.0f, 12.0f);
    s.FramePadding = ImVec2(8.0f, 6.0f);
    s.CellPadding = ImVec2(7.0f, 6.0f);
    s.ItemSpacing = ImVec2(8.0f, 8.0f);
    s.ItemInnerSpacing = ImVec2(6.0f, 6.0f);
    s.TouchExtraPadding = ImVec2(0.0f, 0.0f);
    s.IndentSpacing = 22.0f;
    s.ScrollbarSize = 12.0f;
    s.GrabMinSize = 11.0f;

    s.WindowBorderSize = 1.5f;
    s.ChildBorderSize = 1.0f;
    s.PopupBorderSize = 1.0f;
    s.FrameBorderSize = 1.0f;
    s.TabBorderSize = 1.0f;
    s.WindowRounding = 9.0f;
    s.ChildRounding = 7.0f;
    s.FrameRounding = 5.0f;
    s.PopupRounding = 7.0f;
    s.ScrollbarRounding = 5.0f;
    s.GrabRounding = 5.0f;
    s.TabRounding = 5.0f;
    s.LogSliderDeadzone = 4.0f;
}

inline bool g_RGBThemeMode = false;
inline void UpdateRGBThemeIfEnabled() {
    if (!g_RGBThemeMode) return;
    static float hue = 0.0f;
    hue += 0.0012f;
    if (hue > 1.0f) hue -= 1.0f;

    ImVec4 major, mid, minor;
    ImGui::ColorConvertHSVtoRGB(hue, 0.50f, 0.40f, major.x, major.y, major.z); major.w = 1.0f;
    ImGui::ColorConvertHSVtoRGB(fmodf(hue + 0.33f, 1.0f), 0.70f, 0.95f, mid.x, mid.y, mid.z); mid.w = 1.0f;
    ImGui::ColorConvertHSVtoRGB(fmodf(hue + 0.66f, 1.0f), 0.80f, 1.00f, minor.x, minor.y, minor.z); minor.w = 1.0f;

    g_MajorColor = major; g_MidColor = mid; g_MinorColor = minor;
    ApplyAmethystTheme();
}

inline void ApplyRGBBorderAccent() {
    if (g_RGBThemeMode) return;
    static float t = 0.0f;
    t += 0.0007f;
    float phase = (sinf(t) + 1.0f) * 0.5f;

    ImVec4 c;
    c.x = g_MajorColor.x + (g_MinorColor.x - g_MajorColor.x) * phase;
    c.y = g_MajorColor.y + (g_MinorColor.y - g_MajorColor.y) * phase;
    c.z = g_MajorColor.z + (g_MinorColor.z - g_MajorColor.z) * phase;
    c.w = 0.90f;

    ImGuiStyle& s = ImGui::GetStyle();
    s.Colors[ImGuiCol_Border] = c;
    s.Colors[ImGuiCol_TitleBgActive] = ImVec4(c.x * 0.6f, c.y * 0.6f, c.z * 0.6f, 1.0f);
}
