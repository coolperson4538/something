#include "driver.h"

extern "C" NTSTATUS EntryPoint(PDRIVER driver_obj, PUNICODESTRING registry_path)
{
    UNREFERENCEDPARAMETER(registry_path);
    UNREFERENCEDPARAMETER(driver_obj)
    
    DebugPrintEx("Driver has succesfully loaded");

    return exitc0; // made a typedef for exit_success because it was too long
}