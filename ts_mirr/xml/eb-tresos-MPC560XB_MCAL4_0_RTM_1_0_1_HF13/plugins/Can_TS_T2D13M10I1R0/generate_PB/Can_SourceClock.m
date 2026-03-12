[!NOCODE!]
/**
*   @file    Can_SourceClock.m
*   @version 1.0.1
*
*   @brief   AUTOSAR Can - version check macro.
*   @details Extract source clock from MCU plugin.
*
*   @addtogroup [CAN]
*   @{
*/
/*==================================================================================================
*   Project              : AUTOSAR 4.0 MCAL
*   Platform             : PA
*   Peripheral           : FLEXCAN
*   Dependencies         : 
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
/*==================================================================================================
==================================================================================================*/
[!ENDNOCODE!]

!/* *** multiple inclusion protection *** */!]
[!IF "not(var:defined('CAN_SOURCECLOCK_M'))"!]
[!VAR "CAN_SOURCECLOCK_M"="'true'"!]
[!MACRO "CanClockFrequency_M"!]


    [!/* Use the Reference of MCU from CAN module and calculate CAN clock Frequency for any late useless. 
         The scope is to calculate the <<CANClockFrequencyFromMcu>> valiable from below (in Hz). */!]
    [!SELECT "node:ref(../../CanCpuClockRef)"!][!/* Switch to MCU model to obtain clock source - MCU is refered by CAN module! */!]
        [!/* If the McuClockReferencePointFrequency value is zero, the clock configured in "GeneralClockSettings/SystemClockSelect" will be the 
            system clock and the respective container parameters will be used. */!]
        [!VAR "CANClockFrequencyFromMcu" = "McuClockReferencePointFrequency"!]

    [!ENDSELECT!]
    
    [!IF "node:exists(./../../../../../../CanGeneral/CanEnableDualClockMode)"!][!IF "./../../../../../../CanGeneral/CanEnableDualClockMode = 'true'"!]
        [!SELECT "node:ref(../../CanCpuClockRef_Alternate)"!][!/* Switch to MCU model to obtain clock source - MCU is refered by CAN module! */!]
        [!/* If the McuClockReferencePointFrequency value is zero, the clock configured in "GeneralClockSettings/SystemClockSelect" will be the 
            system clock and the respective container parameters will be used. */!]
        [!VAR "CANClockFrequencyFromMcu_Alternate" = "McuClockReferencePointFrequency"!]

        [!ENDSELECT!]
    [!ENDIF!][!ENDIF!]
[!ENDMACRO!]

    
[!ENDIF!]
[!NOCODE!]
/** @} */
[!ENDNOCODE!]
