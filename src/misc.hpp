#pragma once
#include <iostream> // for std::cout (it prints stuff to the console)
#include <Windows.h> // WriteProcessMemory and ReadProcessMemory (for the cheat)
#include <vector> // for arrays like std::vector<>
#include <cstdint> // for basically like 32 bit ints and 64bit data types like int32_t
#include <mutex>
#include <d3d9.h>
#include "imgui.h" // for menu
#include "driver.h" // for kernel driver (bypassing anticheat)
#include "memory.h" // memory management shit
#include "sdk.h" // proc id
#include "modules/ESP.hpp"
#include "modules/Fly.hpp"
#include "modules/NoClip.hpp"

#pragma comment(lib, "d3d9.lib")