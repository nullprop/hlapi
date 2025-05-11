#include <cstring>
#include <filesystem>

#include "hlapi.h"
#include "public/platform.h"
#include "public/interface.h"

namespace hlapi
{

HLAPI::HLAPI() {}
HLAPI::~HLAPI() {}

void HLAPI::LoadModules()
{
    pModEngine = GetHandleOfModule(MODULE_ENGINE);
    pModClient = GetHandleOfModule(MODULE_CLIENT);
    pModServer = GetHandleOfModule(MODULE_SERVER);
}

void HLAPI::GetInterfaceFactories()
{
    engineInterfaceFactory = Sys_GetFactory(pModEngine);
    clientInterfaceFactory = Sys_GetFactory(pModClient);
    serverInterfaceFactory = Sys_GetFactory(pModServer);
}

void HLAPI::LoadPlugins()
{
    const std::filesystem::path plugins("plugins");

    for (auto const& entry : std::filesystem::directory_iterator(plugins))
    {
        if (entry.is_regular_file())
        {
            LoadPlugin(entry.path().c_str());
        }
    }
}

void HLAPI::LoadPlugin(const char* moduleName)
{
    auto module = GetHandleOfModule(moduleName);
    if (module == nullptr)
    {
        // TODO log
        return;
    }
    
    typedef const char* (*GetVersionFn)();
    GetVersionFn versionFn = (GetVersionFn)GetFuncAddress(module, "__GetHLAPluginVersion");
    auto ver = versionFn();
    if (std::strcmp(ver,  HLAPI_VERSION))
    {
        // TODO log
        return;
    }

    typedef IHLAPlugin (*GetPluginFn)();
    GetPluginFn pluginFn = (GetPluginFn)GetFuncAddress(module, "__GetHLAPlugin");
    auto plugin = pluginFn();

    plugin.Load(engineInterfaceFactory, clientInterfaceFactory, serverInterfaceFactory);

    auto container = LoadedPlugin{
        .pModule = module,
        .interface = plugin
    };

    m_plugins.push_back(container);
}

}; // namespace hlapi