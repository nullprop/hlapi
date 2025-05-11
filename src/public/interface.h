#pragma once

#include <cstdint>

#include "platform.h"

namespace hlapi
{
typedef void* (*CreateInterfaceFn)(const char *pName, int *pReturnCode);

CreateInterfaceFn Sys_GetFactory( void* pModule );

#define INTERFACE_VERSION_ENGINE_EFFECTS "VEngineEffects001"
#define INTERFACE_VERSION_ENGINE_VGUI "VEngineVGui001"
#define INTERFACE_VERSION_ENGINE_CVAR "VEngineCvar007"

#define INTERFACE_VERSION_SERVER "Source2Server001"
#define INTERFACE_VERSION_HOST "Source2Host001"

#define INTERFACE_VERSION_GAME_CLIENTS "Source2GameClients001"
#define INTERFACE_VERSION_GAME_ENTITIES "Source2GameEntities001"

#define INTERFACE_VERSION_VR "VR_001"

}; // namespace hlapi
