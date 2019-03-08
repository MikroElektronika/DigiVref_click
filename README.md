![MikroE](http://www.mikroe.com/img/designs/beta/logo_small.png)

---

# DigiVref Click

- **CIC Prefix**  : DIGIVREF
- **Author**      : Katarina Perendic
- **Verison**     : 1.0.0
- **Date**        : dec 2018.

---

### Software Support

We provide a library for the DigiVref Click on our [LibStock](https://libstock.mikroe.com/projects/view/2676/digivref-click) 
page, as well as a demo application (example), developed using MikroElektronika 
[compilers](http://shop.mikroe.com/compilers). The demo can run on all the main 
MikroElektronika [development boards](http://shop.mikroe.com/development-boards).

**Library Description**

The library contains a function for setting a reference output voltage which can be 1030mV, 2046mv, 3070mV or 4096mV.

Key functions :

- ``` void digivref_setOutputVoltage( uint8_t Vref ) ``` - Function for set reference output voltage

**Examples Description**

The application is composed of three sections :

- System Initialization - Initializes SPI driver and sets CS pin as OUTPUT
- Application Initialization - Initialization driver init
- Application Task - (code snippet) - Changes the reference output voltage every 3 seconds.


```.c
void applicationTask()
{
    digivref_setOutputVoltage( _DIGIVREF_REF_VOLTAGE_4096mV );
    Delay_ms( 3000 );
    digivref_setOutputVoltage( _DIGIVREF_REF_VOLTAGE_3070mV );
    Delay_ms( 3000 );
    digivref_setOutputVoltage( _DIGIVREF_REF_VOLTAGE_2046mV );
    Delay_ms( 3000 );
    digivref_setOutputVoltage( _DIGIVREF_REF_VOLTAGE_1030mV );
    Delay_ms( 3000 );
    digivref_setOutputVoltage( _DIGIVREF_REF_VOLTAGE_2046mV );
    Delay_ms( 3000 );
    digivref_setOutputVoltage( _DIGIVREF_REF_VOLTAGE_3070mV );
    Delay_ms( 3000 );
}
```

The full application code, and ready to use projects can be found on our 
[LibStock](https://libstock.mikroe.com/projects/view/2676/digivref-click) page.

Other mikroE Libraries used in the example:

- SPI

**Additional notes and informations**

Depending on the development board you are using, you may need 
[USB UART click](http://shop.mikroe.com/usb-uart-click), 
[USB UART 2 Click](http://shop.mikroe.com/usb-uart-2-click) or 
[RS232 Click](http://shop.mikroe.com/rs232-click) to connect to your PC, for 
development systems with no UART to USB interface available on the board. The 
terminal available in all Mikroelektronika 
[compilers](http://shop.mikroe.com/compilers), or any other terminal application 
of your choice, can be used to read the message.

---
---
