#include "hlapi.h"

hlapi::HLAPI instance;

void _load_hlapi()
{
    instance.LoadModules();
    instance.GetInterfaceFactories();
    instance.LoadPlugins();
}

#ifdef WIN64

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
        case DLL_PROCESS_ATTACH:
            _load_hlapi();
            break;

        default:
            break;
    }

    return TRUE;
}
#else

__attribute__((constructor))
void init()
{
    _load_hlapi();
}

#endif
