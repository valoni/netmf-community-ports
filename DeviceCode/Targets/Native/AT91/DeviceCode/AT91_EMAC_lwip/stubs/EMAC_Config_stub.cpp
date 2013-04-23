////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Copyright (c) Microsoft Corporation.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <tinyhal.h>
#include <DeviceCode\AT91_EMAC_lwip\AT91_EMAC_lwip_adapter.h>

#define AT91_EMAC_PHY_POWERDOWN_PIO	GPIO_PIN_NONE


#if defined(ADS_LINKER_BUG__NOT_ALL_UNUSED_VARIABLES_ARE_REMOVED)
#pragma arm section rwdata = "g_AT91_EMAC_Config_LWIP"
#endif

AT91_EMAC_DRIVER_CONFIG_LWIP g_AT91_EMAC_Config_LWIP =
{
    AT91_EMAC_PHY_POWERDOWN_PIO,
};

#if defined(ADS_LINKER_BUG__NOT_ALL_UNUSED_VARIABLES_ARE_REMOVED)
#pragma arm section rwdata
#endif
