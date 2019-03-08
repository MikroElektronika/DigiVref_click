/*
    __digivref_driver.c

-----------------------------------------------------------------------------

  This file is part of mikroSDK.

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

#include "__digivref_driver.h"
#include "__digivref_hal.c"

/* ------------------------------------------------------------------- MACROS */

/* REF Voltage */
const uint8_t _DIGIVREF_REF_VOLTAGE_4096mV = 0xF0;
const uint8_t _DIGIVREF_REF_VOLTAGE_3072mV = 0xF2;
const uint8_t _DIGIVREF_REF_VOLTAGE_2048mV = 0xF4;
const uint8_t _DIGIVREF_REF_VOLTAGE_1024mV = 0xF6;

/* ---------------------------------------------------------------- VARIABLES */

#ifdef   __DIGIVREF_DRV_I2C__
static uint8_t _slaveAddress;
#endif

/* --------------------------------------------------------- PUBLIC FUNCTIONS */

#ifdef   __DIGIVREF_DRV_SPI__

void digivref_spiDriverInit(T_DIGIVREF_P gpioObj, T_DIGIVREF_P spiObj)
{
    hal_spiMap( (T_HAL_P)spiObj );
    hal_gpioMap( (T_HAL_P)gpioObj );
    
    hal_gpio_csSet( 1 );
}

#endif
#ifdef   __DIGIVREF_DRV_I2C__

void digivref_i2cDriverInit(T_DIGIVREF_P gpioObj, T_DIGIVREF_P i2cObj, uint8_t slave)
{
    _slaveAddress = slave;
    hal_i2cMap( (T_HAL_P)i2cObj );
    hal_gpioMap( (T_HAL_P)gpioObj );
}

#endif
#ifdef   __DIGIVREF_DRV_UART__

void digivref_uartDriverInit(T_DIGIVREF_P gpioObj, T_DIGIVREF_P uartObj)
{
    hal_uartMap( (T_HAL_P)uartObj );
    hal_gpioMap( (T_HAL_P)gpioObj );
}

#endif
/* ----------------------------------------------------------- IMPLEMENTATION */

void digivref_setOutputVoltage( uint8_t Vref )
{
    uint8_t tmp[2];

    tmp[1] = Vref;
    tmp[0] = 0x00;

    hal_gpio_csSet(0);
    hal_spiWrite(tmp, 2);
    hal_gpio_csSet(1);
}

/* -------------------------------------------------------------------------- */
/*
  __digivref_driver.c

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

3. All advertising materials mentioning features or use of this software
   must display the following acknowledgement:
   This product includes software developed by the MikroElektonika.

4. Neither the name of the MikroElektonika nor the
   names of its contributors may be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY MIKROELEKTRONIKA ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL MIKROELEKTRONIKA BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

----------------------------------------------------------------------------- */