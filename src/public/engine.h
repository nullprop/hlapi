#pragma once

#include <cstdint>

#include "appsystem.h"

namespace hlapi
{

#define INTERFACE_VERSION_ENGINE_TO_CLIENT "Source2EngineToClient001"
#define INTERFACE_VERSION_ENGINE_TO_CLIENT_STRING_TABLE "Source2EngineToClientStringTable001"
#define INTERFACE_VERSION_ENGINE_EFFECTS "VEngineEffects001"
#define INTERFACE_VERSION_ENGINE_VGUI "VEngineVGui001"
#define INTERFACE_VERSION_ENGINE_CVAR "VEngineCvar007"
#define INTERFACE_VERSION_ENGINE_GAMEUIFUNCS "VENGINE_GAMEUIFUNCS_VERSION005"

class CSource2Engine;

class CEngineGameUI : public IAppSystem
{
public:
    CEngineGameUI();

    virtual void unk0();
    virtual uint8_t* unk1(); // "InputSystemVersion001"
    virtual uint64_t unk2(); // ret 3
    virtual void unk3(uint64_t unk0, uint64_t unk1, uint64_t unk2);
    virtual uint8_t unk4(); // ret 1
    virtual uint64_t unk5(); // ret 2
    virtual uint64_t* unk6(uint64_t* unk0, uint64_t unk1);
};

}; // namespace hlapi