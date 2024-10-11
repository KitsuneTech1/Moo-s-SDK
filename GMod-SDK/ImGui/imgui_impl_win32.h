#ifndef IMGUI_IMPL_WIN32_H
#define IMGUI_IMPL_WIN32_H

#ifndef IMGUI_IMPL_API
#define IMGUI_IMPL_API __declspec(dllexport)
#endif

#include <windows.h>  // For Windows API functions and types

// Function declarations
IMGUI_IMPL_API bool     ImGui_ImplWin32_Init(void* hwnd);
IMGUI_IMPL_API void     ImGui_ImplWin32_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplWin32_NewFrame();
IMGUI_IMPL_API LRESULT  ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
IMGUI_IMPL_API void     ImGui_ImplWin32_EnableDpiAwareness();
IMGUI_IMPL_API float    ImGui_ImplWin32_GetDpiScaleForHwnd(HWND hwnd);
IMGUI_IMPL_API float    ImGui_ImplWin32_GetDpiScaleForMonitor(HMONITOR monitor);

#endif // IMGUI_IMPL_WIN32_H
