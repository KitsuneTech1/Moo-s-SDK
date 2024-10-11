#ifndef IMGUI_IMPL_DX9_H
#define IMGUI_IMPL_DX9_H

#ifndef IMGUI_IMPL_API
#define IMGUI_IMPL_API __declspec(dllexport)
#endif

#include "imgui.h"  // For ImDrawData definition
#include <d3d9.h>   // For DirectX 9 functions and types

// Function declarations
IMGUI_IMPL_API bool ImGui_ImplDX9_Init(IDirect3DDevice9* device);
IMGUI_IMPL_API void ImGui_ImplDX9_Shutdown();
IMGUI_IMPL_API void ImGui_ImplDX9_NewFrame();
IMGUI_IMPL_API void ImGui_ImplDX9_RenderDrawData(ImDrawData* draw_data);
IMGUI_IMPL_API void ImGui_ImplDX9_InvalidateDeviceObjects();
IMGUI_IMPL_API bool ImGui_ImplDX9_CreateDeviceObjects();

#endif // IMGUI_IMPL_DX9_H
