#include "public/interface.h"
#include "public/platform.h"

namespace hlapi
{

CreateInterfaceFn Sys_GetFactory( void* pModule )
{
	if ( !pModule )
		return nullptr;

	return (CreateInterfaceFn)(GetFuncAddress( pModule, "CreateInterface" ));
}

}; // namespace hlapi