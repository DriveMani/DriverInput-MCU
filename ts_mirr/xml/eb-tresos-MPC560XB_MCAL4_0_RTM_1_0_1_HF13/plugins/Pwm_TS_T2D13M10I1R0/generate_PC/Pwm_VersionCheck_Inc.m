[!NOCODE!][!//

/*!
*   @file    Pwm_VersionCheck_Inc.m
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
[!IF "not(var:defined('PWM_VERSION_CHECK_INC_M'))"!]
[!VAR "PWM_VERSION_CHECK_INC_M"="'true'"!]


[!VAR "PWM_AR_MAJOR_VERSION_TEMPLATE"="4"!][!//
[!VAR "PWM_AR_MINOR_VERSION_TEMPLATE"="0"!][!//
[!VAR "PWM_AR_PATCH_VERSION_TEMPLATE"="3"!][!//
[!VAR "PWM_SW_MAJOR_VERSION_TEMPLATE"="1"!][!//
[!VAR "PWM_SW_MINOR_VERSION_TEMPLATE"="0"!][!//
[!VAR "PWM_SW_PATCH_VERSION_TEMPLATE"="1"!][!//

[!SELECT "CommonPublishedInformation"!][!//
[!/*
[!IF "ArMajorVersion != num:i($PWM_AR_MAJOR_VERSION_TEMPLATE)"!]
        [!ERROR!]
        **** AUTOSAR major version number of the Basic Software Module Description file (Pwm.epd version [!"ArMajorVersion "!]) and the Code template files (Pwm_Cfg.h version [!"num:i($PWM_AR_MAJOR_VERSION_TEMPLATE)"!]) are different ****
        [!ENDERROR!]
[!ENDIF!]
[!IF "ArMinorVersion != num:i($PWM_AR_MINOR_VERSION_TEMPLATE)"!]
        [!ERROR!]
        **** AUTOSAR minor version number of the Basic Software Module Description file (Pwm.epd version [!"ArMinorVersion"!]) and the Code template files (Pwm_Cfg.h version [!"num:i($PWM_AR_MINOR_VERSION_TEMPLATE)"!]) are different ****
        [!ENDERROR!]
[!ENDIF!]
[!IF "ArPatchVersion != num:i($PWM_AR_PATCH_VERSION_TEMPLATE)"!]
        [!ERROR!]
        **** AUTOSAR patch version number of the Basic Software Module Description file (Pwm.epd version [!"ArPatchVersion"!]) and the Code template files (Pwm_Cfg.h version [!"num:i($PWM_AR_PATCH_VERSION_TEMPLATE)"!]) are different ****
        [!ENDERROR!]
[!ENDIF!]
*/!]
[!IF "SwMajorVersion != num:i($PWM_SW_MAJOR_VERSION_TEMPLATE)"!]
        [!ERROR!]
        **** The software major number of the Basic Software Module Description file (Pwm.epd version [!"SwMajorVersion"!]) and the Code template files (Pwm_Cfg.h version [!"num:i($PWM_SW_MAJOR_VERSION_TEMPLATE)"!]) are different ****
        [!ENDERROR!]
[!ENDIF!]
[!IF "SwMinorVersion != num:i($PWM_SW_MINOR_VERSION_TEMPLATE)"!]
        [!ERROR!]
        **** The software minor number of the Basic Software Module Description file (Pwm.epd version [!"SwMinorVersion"!]) and the Code template files (Pwm_Cfg.h version [!"num:i($PWM_SW_MINOR_VERSION_TEMPLATE)"!]) are different ****
        [!ENDERROR!]
[!ENDIF!]
[!IF "SwPatchVersion != num:i($PWM_SW_PATCH_VERSION_TEMPLATE)"!]
        [!ERROR!]
        **** The software patch number of the Basic Software Module Description file (Pwm.epd version [!"SwPatchVersion"!]) and the Code template files (Pwm_Cfg.h version [!"num:i($PWM_SW_PATCH_VERSION_TEMPLATE)"!]) are different ****
        [!ENDERROR!]
[!ENDIF!]
[!ENDSELECT!][!//
[!NOCODE!][!//
[!ENDNOCODE!][!//


[!ENDIF!][!// avoid multiple inclusion ENDIF

