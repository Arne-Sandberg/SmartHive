#ifndef ZWAVE_DEVICE_H
#define ZWAVE_DEVICE_H

#include "module.h"

#ifdef __cplusplus
extern "C"
{  
#endif

	MODULE_EXPORT const MODULE_API* MODULE_STATIC_GETAPI(SIMULATED_DEVICE_MODULE)(MODULE_API_VERSION gateway_api_version);

#ifdef __cplusplus
}
#endif

#endif /*ZWAVE_DEVICE_H*/
