#line 1 "D:/Clicks_git/D/DigiVref_click/SW/example/c/ARM/STM/Click_DigiVref_STM.c"
#line 1 "d:/clicks_git/d/digivref_click/sw/example/c/arm/stm/click_digivref_types.h"
#line 1 "c:/users/public/documents/mikroelektronika/mikroc pro for arm/include/stdint.h"





typedef signed char int8_t;
typedef signed int int16_t;
typedef signed long int int32_t;
typedef signed long long int64_t;


typedef unsigned char uint8_t;
typedef unsigned int uint16_t;
typedef unsigned long int uint32_t;
typedef unsigned long long uint64_t;


typedef signed char int_least8_t;
typedef signed int int_least16_t;
typedef signed long int int_least32_t;
typedef signed long long int_least64_t;


typedef unsigned char uint_least8_t;
typedef unsigned int uint_least16_t;
typedef unsigned long int uint_least32_t;
typedef unsigned long long uint_least64_t;



typedef signed long int int_fast8_t;
typedef signed long int int_fast16_t;
typedef signed long int int_fast32_t;
typedef signed long long int_fast64_t;


typedef unsigned long int uint_fast8_t;
typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long long uint_fast64_t;


typedef signed long int intptr_t;
typedef unsigned long int uintptr_t;


typedef signed long long intmax_t;
typedef unsigned long long uintmax_t;
#line 1 "d:/clicks_git/d/digivref_click/sw/example/c/arm/stm/click_digivref_config.h"
#line 1 "d:/clicks_git/d/digivref_click/sw/example/c/arm/stm/click_digivref_types.h"
#line 3 "d:/clicks_git/d/digivref_click/sw/example/c/arm/stm/click_digivref_config.h"
const uint32_t _DIGIVREF_SPI_CFG[ 2 ] =
{
 _SPI_FPCLK_DIV128,
 _SPI_FIRST_CLK_EDGE_TRANSITION |
 _SPI_CLK_IDLE_LOW |
 _SPI_MASTER |
 _SPI_MSB_FIRST |
 _SPI_8_BIT |
 _SPI_SSM_ENABLE |
 _SPI_SS_DISABLE |
 _SPI_SSI_1
};
#line 1 "d:/clicks_git/d/digivref_click/sw/library/__digivref_driver.h"
#line 1 "c:/users/public/documents/mikroelektronika/mikroc pro for arm/include/stdint.h"
#line 58 "d:/clicks_git/d/digivref_click/sw/library/__digivref_driver.h"
extern const uint8_t _DIGIVREF_REF_VOLTAGE_4096mV;
extern const uint8_t _DIGIVREF_REF_VOLTAGE_3072mV;
extern const uint8_t _DIGIVREF_REF_VOLTAGE_2048mV;
extern const uint8_t _DIGIVREF_REF_VOLTAGE_1024mV;
#line 71 "d:/clicks_git/d/digivref_click/sw/library/__digivref_driver.h"
void digivref_spiDriverInit( const uint8_t*  gpioObj,  const uint8_t*  spiObj);
#line 81 "d:/clicks_git/d/digivref_click/sw/library/__digivref_driver.h"
void digivref_gpioDriverInit( const uint8_t*  gpioObj);
#line 90 "d:/clicks_git/d/digivref_click/sw/library/__digivref_driver.h"
void digivref_setOutputVoltage( uint8_t Vref );
#line 30 "D:/Clicks_git/D/DigiVref_click/SW/example/c/ARM/STM/Click_DigiVref_STM.c"
void systemInit()
{
 mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_CS_PIN, _GPIO_OUTPUT );
 mikrobus_spiInit( _MIKROBUS1, &_DIGIVREF_SPI_CFG[0] );
}

void applicationInit()
{
 digivref_spiDriverInit( ( const uint8_t* )&_MIKROBUS1_GPIO, ( const uint8_t* )&_MIKROBUS1_SPI );
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
