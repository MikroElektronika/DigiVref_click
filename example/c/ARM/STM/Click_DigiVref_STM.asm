_systemInit:
;Click_DigiVref_STM.c,30 :: 		void systemInit()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_DigiVref_STM.c,32 :: 		mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_CS_PIN, _GPIO_OUTPUT );
MOVS	R2, #0
MOVS	R1, #2
MOVS	R0, #0
BL	_mikrobus_gpioInit+0
;Click_DigiVref_STM.c,33 :: 		mikrobus_spiInit( _MIKROBUS1, &_DIGIVREF_SPI_CFG[0] );
MOVW	R0, #lo_addr(__DIGIVREF_SPI_CFG+0)
MOVT	R0, #hi_addr(__DIGIVREF_SPI_CFG+0)
MOV	R1, R0
MOVS	R0, #0
BL	_mikrobus_spiInit+0
;Click_DigiVref_STM.c,34 :: 		}
L_end_systemInit:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _systemInit
_applicationInit:
;Click_DigiVref_STM.c,36 :: 		void applicationInit()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_DigiVref_STM.c,38 :: 		digivref_spiDriverInit( (T_DIGIVREF_P)&_MIKROBUS1_GPIO, (T_DIGIVREF_P)&_MIKROBUS1_SPI );
MOVW	R1, #lo_addr(__MIKROBUS1_SPI+0)
MOVT	R1, #hi_addr(__MIKROBUS1_SPI+0)
MOVW	R0, #lo_addr(__MIKROBUS1_GPIO+0)
MOVT	R0, #hi_addr(__MIKROBUS1_GPIO+0)
BL	_digivref_spiDriverInit+0
;Click_DigiVref_STM.c,39 :: 		}
L_end_applicationInit:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _applicationInit
_applicationTask:
;Click_DigiVref_STM.c,41 :: 		void applicationTask()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_DigiVref_STM.c,43 :: 		digivref_setOutputVoltage( _DIGIVREF_REF_VOLTAGE_4096mV );
MOVS	R0, __DIGIVREF_REF_VOLTAGE_4096mV
BL	_digivref_setOutputVoltage+0
;Click_DigiVref_STM.c,44 :: 		Delay_ms( 3000 );
MOVW	R7, #20735
MOVT	R7, #549
NOP
NOP
L_applicationTask0:
SUBS	R7, R7, #1
BNE	L_applicationTask0
NOP
NOP
NOP
;Click_DigiVref_STM.c,45 :: 		digivref_setOutputVoltage( _DIGIVREF_REF_VOLTAGE_3072mV );
MOVS	R0, __DIGIVREF_REF_VOLTAGE_3072mV
BL	_digivref_setOutputVoltage+0
;Click_DigiVref_STM.c,46 :: 		Delay_ms( 3000 );
MOVW	R7, #20735
MOVT	R7, #549
NOP
NOP
L_applicationTask2:
SUBS	R7, R7, #1
BNE	L_applicationTask2
NOP
NOP
NOP
;Click_DigiVref_STM.c,47 :: 		digivref_setOutputVoltage( _DIGIVREF_REF_VOLTAGE_2048mV );
MOVS	R0, __DIGIVREF_REF_VOLTAGE_2048mV
BL	_digivref_setOutputVoltage+0
;Click_DigiVref_STM.c,48 :: 		Delay_ms( 3000 );
MOVW	R7, #20735
MOVT	R7, #549
NOP
NOP
L_applicationTask4:
SUBS	R7, R7, #1
BNE	L_applicationTask4
NOP
NOP
NOP
;Click_DigiVref_STM.c,49 :: 		digivref_setOutputVoltage( _DIGIVREF_REF_VOLTAGE_1024mV );
MOVS	R0, __DIGIVREF_REF_VOLTAGE_1024mV
BL	_digivref_setOutputVoltage+0
;Click_DigiVref_STM.c,50 :: 		Delay_ms( 3000 );
MOVW	R7, #20735
MOVT	R7, #549
NOP
NOP
L_applicationTask6:
SUBS	R7, R7, #1
BNE	L_applicationTask6
NOP
NOP
NOP
;Click_DigiVref_STM.c,51 :: 		digivref_setOutputVoltage( _DIGIVREF_REF_VOLTAGE_2048mV );
MOVS	R0, __DIGIVREF_REF_VOLTAGE_2048mV
BL	_digivref_setOutputVoltage+0
;Click_DigiVref_STM.c,52 :: 		Delay_ms( 3000 );
MOVW	R7, #20735
MOVT	R7, #549
NOP
NOP
L_applicationTask8:
SUBS	R7, R7, #1
BNE	L_applicationTask8
NOP
NOP
NOP
;Click_DigiVref_STM.c,53 :: 		digivref_setOutputVoltage( _DIGIVREF_REF_VOLTAGE_3072mV );
MOVS	R0, __DIGIVREF_REF_VOLTAGE_3072mV
BL	_digivref_setOutputVoltage+0
;Click_DigiVref_STM.c,54 :: 		Delay_ms( 3000 );
MOVW	R7, #20735
MOVT	R7, #549
NOP
NOP
L_applicationTask10:
SUBS	R7, R7, #1
BNE	L_applicationTask10
NOP
NOP
NOP
;Click_DigiVref_STM.c,55 :: 		}
L_end_applicationTask:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _applicationTask
_main:
;Click_DigiVref_STM.c,57 :: 		void main()
;Click_DigiVref_STM.c,59 :: 		systemInit();
BL	_systemInit+0
;Click_DigiVref_STM.c,60 :: 		applicationInit();
BL	_applicationInit+0
;Click_DigiVref_STM.c,62 :: 		while (1)
L_main12:
;Click_DigiVref_STM.c,64 :: 		applicationTask();
BL	_applicationTask+0
;Click_DigiVref_STM.c,65 :: 		}
IT	AL
BAL	L_main12
;Click_DigiVref_STM.c,66 :: 		}
L_end_main:
L__main_end_loop:
B	L__main_end_loop
; end of _main
