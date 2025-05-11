#pragma once

#if WIN64
#define WIN64_LEAN_AND_MEAN
#include <windows.h>
#else
#include <dlfcn.h>
#endif

namespace hlapi
{

#if WIN64

#define MODULE_ENGINE "engine2"
#define MODULE_CLIENT "client"
#define MODULE_SERVER "server"

#define GetFuncAddress(pAddress, szFunction) ::GetProcAddress((HMODULE)pAddress, szFunction)
#define GetHandleOfModule(szModuleName) GetModuleHandleA(szModuleName)

#else

#define MODULE_ENGINE "bin/linuxsteamrt64/libengine2.so"
#define MODULE_CLIENT "hlvr/bin/linuxsteamrt64/libclient.so"
#define MODULE_SERVER "hlvr/bin/linuxsteamrt64/libserver.so"

#define GetFuncAddress(pAddress, szFunction) dlsym(pAddress, szFunction)
#define GetHandleOfModule(szModuleName) dlopen(szModuleName, RTLD_LAZY | RTLD_NOLOAD)

#endif

}; // namespace hlapi