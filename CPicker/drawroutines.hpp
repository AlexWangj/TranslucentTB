#pragma once
#include <cstdint>
#include <d2d1.h>

#include "CPickerDll.h"

void DrawColorSlider(ID2D1RenderTarget *target, const HWND &hDlg, const float &r, const float &g, const float &b, const unsigned short &h, const uint8_t &s, const uint8_t &v);
void DrawAlphaSlider(ID2D1RenderTarget *target, const D2D1_COLOR_F &color, const float &a);
void DrawColorIndicator(ID2D1RenderTarget *target, const SColour &color);