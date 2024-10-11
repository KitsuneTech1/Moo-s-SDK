cmake_minimum_required(VERSION 3.10)
add_compile_definitions(IMGUI_IMPL_API=__declspec(dllexport))
project(ImGuiDLL)
message("Source files for ImGuiDLL: ${IMGUI_SOURCES}")
# Add the ImGui source files
set(IMGUI_SOURCES
    GMod-SDK/ImGui/imgui.cpp
    GMod-SDK/ImGui/imgui_draw.cpp
    GMod-SDK/ImGui/imgui_widgets.cpp
    GMod-SDK/ImGui/imgui_impl_dx9.cpp    # DirectX 9 Renderer
    GMod-SDK/ImGui/imgui_impl_win32.cpp  # Win32 Platform
)

# Define the output as a shared library (DLL)
add_library(ImGuiDLL SHARED ${IMGUI_SOURCES})

# Export ImGui symbols
target_compile_definitions(ImGuiDLL PRIVATE IMGUI_IMPL_API=__declspec(dllexport))

# Include directories for headers
target_include_directories(ImGuiDLL PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/ImGui)
add_definitions(-DIMGUI_IMPL_API=__declspec(dllexport))
