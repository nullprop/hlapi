#pragma once

namespace hlapi
{
typedef void* (*CreateInterfaceFn)(const char *pName, int *pReturnCode);

CreateInterfaceFn Sys_GetFactory( void* pModule );

}; // namespace hlapi
