[!NOCODE!][!//

/*!
*   @file    Pwm_Clock_Tree.m
*   @version 1.0.1
*
*   @brief   AUTOSAR Pwm macro to check for notification config, variant pre-compile
*   @details    macro to check for notification config, variant pre-compile
*
*   @addtogroup PWM_MODULE
*   @{
*/
/*!==================================================================================================
*   Project              : AUTOSAR 4.0 MCAL
*   Platform             : PA
*   Peripheral           : eMIOS200
*   Dependencies         : none
*
*   Autosar Version      : 4.0.3
*   Autosar Revision     : ASR_REL_4_0_REV_0003
*   Autosar Conf.Variant :
*   SW Version           : 1.0.1
*   Build Version        : MPC560xB_MCAL_1_0_1_RTM_ASR_REL_4_0_REV_0003_20140606
*
*   (c) Copyright 2006-2014 Freescale Semiconductor Inc and STMicroelectronics
*   All Rights Reserved.
==================================================================================================*/
/*!==================================================================================================
==================================================================================================*/
[!ENDNOCODE!][!// 


[!/* avoid multiple inclusion */!]
[!IF "not(var:defined('PWM_CLOCK_TREE_M'))"!]
[!VAR "PWM_CLOCK_TREE_M"="'true'"!]
 
  
[!NOCODE!][!//
[!IF "PwmGeneral/PwmClockFromMCU = 'true'"!]
[!/* Reference MCU plugin from PWM to obtain the clock frequency for eMIOS0/1 peripherals.
     The scope is to calculate the clock value for each eMIOS peripheral instance (in Hz). */!]
[!SELECT "node:ref(PwmGeneral/PwmCpuClockRef)"!][!/* Switch to MCU model to obtain clock source - MCU is referenced by PWM module! */!]
    
    [!VAR "McuPeripheralClockForEmiosEnable"  = "../../McuPeripheralClkSet_2/McuPeripheralEnableClk"!]
                                                 
    [!IF "$McuPeripheralClockForEmiosEnable = 'false'"!]
            [!ERROR!]
    Mcu Peripheral Clock 3 divisor is disabled - EMIOS_A/B clock is disabled.
    The Pwm plugin can't determine the EMIOS_A/B clock in order to compute the channel period in ticks.
    Plese enable peripheral clock set 2 in the MCU plugin.
            [!ENDERROR!]
    [!ENDIF!]
    
    [!/* eMIOS0 global prescaler */!]
    [!VAR "McuEMIOS0_Global_DIV"  = "../../McuEMIOSSettings_A/GlobalPrescaler"!]
    [!VAR "McuEMIOS0_Global_DIV"  = "$McuEMIOS0_Global_DIV+1"!]
    [!VAR "EMIOS0_ClockFrequency" = "McuClockReferencePointFrequency div $McuEMIOS0_Global_DIV"!]
    
    [!/* eMIOS1 global prescaler */!]
    [!VAR "McuEMIOS1_Global_DIV"  = "../../McuEMIOSSettings_B/GlobalPrescaler"!]
    [!VAR "McuEMIOS1_Global_DIV"  = "$McuEMIOS1_Global_DIV+1"!]
    [!VAR "EMIOS1_ClockFrequency" = "McuClockReferencePointFrequency div $McuEMIOS1_Global_DIV"!]

    [!VAR "McuPeripheralSet3Frequency_Debug" = "McuClockReferencePointFrequency"!]

    [!VAR "EmiosA_LowPower"  = "../../McuEMIOSSettings_A/MdisBit"!]
    [!VAR "EmiosB_LowPower"  = "../../McuEMIOSSettings_B/MdisBit"!]
    
    [!IF "$EmiosA_LowPower = 'true'"!]
            [!WARNING!]
MdisBit in McuEMIOSSettings_A is set, this puts EMIOS_A in low power mode.
The Pwm driver will not work if pwm channels are configured on EMIOS_A.
            [!ENDWARNING!]
    [!ENDIF!]

    [!IF "$EmiosB_LowPower = 'true'"!]
            [!WARNING!]
MdisBit in McuEMIOSSettings_B is set, this puts EMIOS_B in low power mode.
The Pwm driver will not work if pwm channels are configured on EMIOS_B.
            [!ENDWARNING!]
    [!ENDIF!]

[!ENDSELECT!]

[!ELSE!]
    [!/* EMIOS clock value entered in the PWM plugin and MCU reference not used. */!]
    [!VAR "McuPeripheralClockForEmiosEnable"  = "'false'"!]
    [!VAR "McuEMIOS0_Global_DIV"  = "'false'"!]
    [!VAR "McuEMIOS1_Global_DIV"  = "'false'"!]
    [!VAR "EMIOS0_ClockFrequency" = "PwmGeneral/PwmEmiosClockValue"!]
    [!VAR "EMIOS1_ClockFrequency" = "PwmGeneral/PwmEmiosClockValue"!]
    [!VAR "McuPeripheralSet3Frequency_Debug" = "'false'"!]
    [!VAR "EmiosA_LowPower"  = "'false'"!]
    [!VAR "EmiosB_LowPower"  = "'false'"!]
[!ENDIF!]


[!IF "PwmGeneral/PwmGenerateClockTreeDebugInfo = 'true'"!]
[!CODE!]
/*  --- EMIOS Clock Tree Debug information ---

McuPeripheralClkSet_2/McuPeripheralEnableClk: [!"$McuPeripheralClockForEmiosEnable"!]


McuClockReferencePointFrequency: [!"$McuPeripheralSet3Frequency_Debug"!] Hz

EmiosA_LowPower : [!"$EmiosA_LowPower"!]
EmiosB_LowPower : [!"$EmiosB_LowPower"!]

McuEMIOS0_Global_DIV : [!"$McuEMIOS0_Global_DIV"!]
McuEMIOS1_Global_DIV : [!"$McuEMIOS1_Global_DIV"!]

EMIOS0_ClockFrequency : [!"$EMIOS0_ClockFrequency"!] Hz
EMIOS1_ClockFrequency : [!"$EMIOS1_ClockFrequency"!] Hz
*/
[!ENDCODE!]
[!ENDIF!]

    
[!ENDNOCODE!][!//

[!ENDIF!][!// avoid multiple inclusion ENDIF

