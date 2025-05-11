#include "interface.h"
#include "plugin.h"

using namespace hlapi;

class MyPlugin : public IHLAPlugin
{
    virtual void Load(CreateInterfaceFn engineFactory, CreateInterfaceFn clientFactory, CreateInterfaceFn serverFactory) override {}
    virtual void Unload() override {}
    virtual PluginInfo GetInfo() override
    {
        return {
            .Name = "MyPlugin",
            .Description = "Very cool",
            .Version = "0.1.0"
        };
    }
};

MyPlugin g_myPlugin;

DECLARE_HLA_PLUGIN(HLAPI_VERSION, g_myPlugin);
