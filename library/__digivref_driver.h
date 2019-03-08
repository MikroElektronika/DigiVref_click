/*
    __digivref_driver.h

-----------------------------------------------------------------------------

  This file is part of mikroSDK.
  
  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

/**
@file   __digivref_driver.h
@brief    DigiVref Driver
@mainpage DigiVref Click
@{

@image html libstock_fb_view.jpg

@}

@defgroup   DIGIVREF
@brief      DigiVref Click Driver
@{

| Global Library Prefix | **DIGIVREF** |
|:---------------------:|:-----------------:|
| Version               | **1.0.0**    |
| Date                  | **dec 2018.**      |
| Developer             | **Katarina Perendic**     |

*/
/* -------------------------------------------------------------------------- */

#include "stdint.h"

#ifndef _DIGIVREF_H_
#define _DIGIVREF_H_

/** 
 * @macro T_DIGIVREF_P
 * @brief Driver Abstract type 
 */
#define T_DIGIVREF_P    const uint8_t*

/** @defgroup DIGIVREF_COMPILE Compilation Config */              /** @{ */

   #define   __DIGIVREF_DRV_SPI__                            /**<     @macro __DIGIVREF_DRV_SPI__  @brief SPI driver selector */
//  #define   __DIGIVREF_DRV_I2C__                            /**<     @macro __DIGIVREF_DRV_I2C__  @brief I2C driver selector */                                          
// #define   __DIGIVREF_DRV_UART__                           /**<     @macro __DIGIVREF_DRV_UART__ @brief UART driver selector */ 

                                                                       /** @} */
/** @defgroup DIGIVREF_VAR Variables */                           /** @{ */

/* REF Voltage */
extern const uint8_t _DIGIVREF_REF_VOLTAGE_4096mV;
extern const uint8_t _DIGIVREF_REF_VOLTAGE_3072mV;
extern const uint8_t _DIGIVREF_REF_VOLTAGE_2048mV;
extern const uint8_t _DIGIVREF_REF_VOLTAGE_1024mV;

                                                                       /** @} */
#ifdef __cplusplus
extern "C"{
#endif

/** @defgroup DIGIVREF_INIT Driver Initialization */              /** @{ */

#ifdef   __DIGIVREF_DRV_SPI__
void digivref_spiDriverInit(T_DIGIVREF_P gpioObj, T_DIGIVREF_P spiObj);
#endif
#ifdef   __DIGIVREF_DRV_I2C__
void digivref_i2cDriverInit(T_DIGIVREF_P gpioObj, T_DIGIVREF_P i2cObj, uint8_t slave);
#endif
#ifdef   __DIGIVREF_DRV_UART__
void digivref_uartDriverInit(T_DIGIVREF_P gpioObj, T_DIGIVREF_P uartObj);
#endif

// GPIO Only Drivers - remove in other cases
void digivref_gpioDriverInit(T_DIGIVREF_P gpioObj);
                                                                       /** @} */
/** @defgroup DIGIVREF_FUNC Driver Functions */                   /** @{ */

/**
 * @brief Function for set reference output voltage
 *
 * @param[in] Vref     Reference output voltage  (4096mV - 3070mV - 2047mV - 1030mV)
 */
void digivref_setOutputVoltage( uint8_t Vref );

                                                                       /** @} */
#ifdef __cplusplus
} // extern "C"
#endif
#endif

/**
    @example Click_DigiVref_STM.c
    @example Click_DigiVref_TIVA.c
    @example Click_DigiVref_CEC.c
    @example Click_DigiVref_KINETIS.c
    @example Click_DigiVref_MSP.c
    @example Click_DigiVref_PIC.c
    @example Click_DigiVref_PIC32.c
    @example Click_DigiVref_DSPIC.c
    @example Click_DigiVref_AVR.c
    @example Click_DigiVref_FT90x.c
    @example Click_DigiVref_STM.mbas
    @example Click_DigiVref_TIVA.mbas
    @example Click_DigiVref_CEC.mbas
    @example Click_DigiVref_KINETIS.mbas
    @example Click_DigiVref_MSP.mbas
    @example Click_DigiVref_PIC.mbas
    @example Click_DigiVref_PIC32.mbas
    @example Click_DigiVref_DSPIC.mbas
    @example Click_DigiVref_AVR.mbas
    @example Click_DigiVref_FT90x.mbas
    @example Click_DigiVref_STM.mpas
    @example Click_DigiVref_TIVA.mpas
    @example Click_DigiVref_CEC.mpas
    @example Click_DigiVref_KINETIS.mpas
    @example Click_DigiVref_MSP.mpas
    @example Click_DigiVref_PIC.mpas
    @example Click_DigiVref_PIC32.mpas
    @example Click_DigiVref_DSPIC.mpas
    @example Click_DigiVref_AVR.mpas
    @example Click_DigiVref_FT90x.mpas
*/                                                                     /** @} */
/* -------------------------------------------------------------------------- */
/*
  __digivref_driver.h

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