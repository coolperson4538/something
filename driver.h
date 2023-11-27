#pragma once
#include <iostream>
#include <mutex>
#include <Windows.h>
#include "sdk.h"

typedef struct init_t
{
    DWORD usermode_processid;
    DWORD usermode_threadid;
};

namespace driver
{
    static void call_hook(init_t argument)
    {
        while (!argument->usermode_thread_id) {};

        /*
        wchar_t buffer[64]{}; creates a buffer 

        wsprintf(buffer, L"id: %d", argument->usermode_thread_id); some shit
        MessageBox(NULL, buffer, L"Notify""); basically it spawns a window
        */

        void* control_function = GetProcAddress(LoadLibrary(L"win32u.dll"), "NtOpenCompositionSurfaceSectionInfo");
        
        if(!control_function)
        {
            MessageBox(NULL, "error", L"failed to get control_function address");
        }

        
    }
}