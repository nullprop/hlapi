#pragma once

#include "interface.h"

namespace hlapi
{

enum InitReturnVal_t
{
    INIT_FAILED = 0,
    INIT_OK,
    INIT_LAST_VAL,
};

class IAppSystem
{
public:
    virtual bool Connect( CreateInterfaceFn factory1, CreateInterfaceFn factory2 ) = 0;
    virtual void Disconnect( void* unk0 ) = 0;
    virtual void* QueryInterface() = 0; // Doesn't take in a name anymore?
    virtual InitReturnVal_t Init( void* unk0 ) = 0;
    virtual void Shutdown( void* unk0 ) = 0;
};

}; // namespace hlapi