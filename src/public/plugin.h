#pragma once

#include <string>

#include "interface.h"

namespace hlapi {

struct PluginInfo
{
    std::string Name;
    std::string Description;
    std::string Version;
};

class IHLAPlugin
{
public:
    IHLAPlugin(){}
    virtual ~IHLAPlugin(){}

    virtual void Load(CreateInterfaceFn engineFactory, CreateInterfaceFn clientFactory, CreateInterfaceFn serverFactory){}
    virtual void Unload(){}
    virtual PluginInfo GetInfo(){ return {}; }
};

#define HLAPI_VERSION "HLAPI001"

#define DECLARE_HLA_PLUGIN(VERSION, GLOBAL) \
    static const char* __GetHLAPluginVersion() { return VERSION; } \
    static IHLAPlugin __GetHLAPlugin() { return static_cast<IHLAPlugin>(GLOBAL); }

}; // namespace hlapi