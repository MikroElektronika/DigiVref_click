/*
Example for DigiVref Click

    Date          : dec 2018.
    Author        : Katarina Perendic

Test configuration AVR :
    
    MCU              : ATMEGA32
    Dev. Board       : EasyAVR v7 
    AVR Compiler ver : v7.0.1.0

---

Description :

The application is composed of three sections :

- System Initialization - Initializes SPI driver and sets CS pin as OUTPUT
- Application Initialization - Initialization driver init
- Application Task - (code snippet) - Changes the reference output voltage every 3 seconds.

*/

#include "Click_DigiVref_types.h"
#include "Click_DigiVref_config.h"

void systemInit()
{
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_CS_PIN, _GPIO_OUTPUT );
    mikrobus_spiInit( _MIKROBUS1, &_DIGIVREF_SPI_CFG[0] );
}

void applicationInit()
{
    digivref_spiDriverInit( (T_DIGIVREF_P)&_MIKROBUS1_GPIO, (T_DIGIVREF_P)&_MIKROBUS1_SPI );
}

void applicationTask()
{
    digivref_setOutputVoltage( _DIGIVREF_REF_VOLTAGE_4096mV );
    Delay_ms( 3000 );
    digivref_setOutputVoltage( _DIGIVREF_REF_VOLTAGE_3072mV );
    Delay_ms( 3000 );
    digivref_setOutputVoltage( _DIGIVREF_REF_VOLTAGE_2048mV );
    Delay_ms( 3000 );
    digivref_setOutputVoltage( _DIGIVREF_REF_VOLTAGE_1024mV );
    Delay_ms( 3000 );
    digivref_setOutputVoltage( _DIGIVREF_REF_VOLTAGE_2048mV );
    Delay_ms( 3000 );
    digivref_setOutputVoltage( _DIGIVREF_REF_VOLTAGE_3072mV );
    Delay_ms( 3000 );
}

void main()
{
    systemInit();
    applicationInit();

    while (1)
    {
    	applicationTask();
    }
}