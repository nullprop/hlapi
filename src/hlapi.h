#pragma once

#include <vector>

#include "public/plugin.h"
#include "public/client.h"
#include "public/interface.h"

namespace hlapi
{

struct LoadedPlugin
{
    void* pModule;
    IHLAPlugin interface;
};

class HLAPI
{
public:
    HLAPI();
    ~HLAPI();

    void LoadModules();
    void GetInterfaceFactories();
    void LoadPlugins();

private:
    void LoadPlugin(const char* module);

    std::vector<LoadedPlugin> m_plugins;

    void* pModEngine;
    void* pModClient;
    void* pModServer;

    CreateInterfaceFn engineInterfaceFactory;
    CreateInterfaceFn clientInterfaceFactory;
    CreateInterfaceFn serverInterfaceFactory;
};

}; // namespace hlapi