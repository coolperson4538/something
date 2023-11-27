#include "misc.hpp"

namespace ToggleKey
{
    void F6() // For noclip
    {
        if(GetAsyncKeyState(VK_F6) & 0x8000) // 0x8000 is the hex value for getasynckeystate btw
        {
            // gonna enable noclip (WORK IN PROGRESS)
        }
    }
}