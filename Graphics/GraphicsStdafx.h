#pragma once

#include "targetver.h"

#include "../Core/CoreStdafx.h"

#define WIN32_LEAN_AND_MEAN

#include <Windows.h>

// -------------------------------
// Direct3D
// -------------------------------
#pragma comment(lib, "dxgi.lib")
#pragma comment(lib, "d3d11.lib")
#pragma comment(lib, "d3dx11.lib")
#pragma comment(lib, "d3dx10.lib")
#include <dxgi.h>
#include <d3dcommon.h>
#include <d3d11.h>
#include <d3dx10math.h>
#include <d3dx11async.h>