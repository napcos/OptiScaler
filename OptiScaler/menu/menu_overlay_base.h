#pragma once

#include <pch.h>

#include <d3d12.h>
#include <dxgi1_6.h>

#include "menu_base.h"

class MenuOverlayBase : public MenuBase
{
  public:
    static HWND Handle();

    static void Dx11Ready();
    static void Dx12Ready();
    static void VulkanReady();

    static bool IsInited();
    static bool IsVisible();

    static void Init(HWND InHandle, bool isUWP);
    static bool RenderMenu();
    static void Shutdown();
    static void HideMenu();
};
