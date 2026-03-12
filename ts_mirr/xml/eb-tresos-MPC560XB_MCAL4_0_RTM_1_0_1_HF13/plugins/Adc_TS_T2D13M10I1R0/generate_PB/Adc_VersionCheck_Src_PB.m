[!NOCODE!][!//
/**
*   @file    Adc_VersionCheck_Src_PB.m
*   @version 1.0.1
*
*   @brief   AUTOSAR Adc - version check macro.
*   @details Version checks.
*
*   @addtogroup ADC
*   @{
*/
/*==================================================================================================
*   Project              : AUTOSAR 4.0 MCAL
*   Platform             : PA
*   Peripheral           : ADCDIG
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
/*==================================================================================================
==================================================================================================*/

[!VAR "ADC_AR_RELEASE_MAJOR_VERSION_TEMPLATE"="4"!][!//
[!VAR "ADC_AR_RELEASE_MINOR_VERSION_TEMPLATE"="0"!][!//
[!VAR "ADC_AR_RELEASE_REVISION_VERSION_TEMPLATE"="3"!][!//
[!VAR "ADC_SW_MAJOR_VERSION_TEMPLATE"="1"!][!//
[!VAR "ADC_SW_MINOR_VERSION_TEMPLATE"="0"!][!//
[!ENDNOCODE!][!//
[!SELECT "CommonPublishedInformation"!][!//
[!/*
[!ASSERT "ArReleaseMajorVersion = num:i($ADC_AR_RELEASE_MAJOR_VERSION_TEMPLATE)"!]
        **** AUTOSAR release major version number of the Basic Software Module Description file (Adc.epd version [!"ArReleaseMajorVersion "!]) and the Code template file (Adc_PBcfg.c version [!"num:i($ADC_AR_RELEASE_MAJOR_VERSION_TEMPLATE)"!]) are different ****
[!ENDASSERT!][!//
[!ASSERT "ArReleaseMinorVersion  = num:i($ADC_AR_RELEASE_MINOR_VERSION_TEMPLATE)"!]
        **** AUTOSAR release minor version number of the Basic Software Module Description file (Adc.epd version [!"ArReleaseMinorVersion"!]) and the Code template files (Adc_PBcfg.c version [!"num:i($ADC_AR_RELEASE_MINOR_VERSION_TEMPLATE)"!]) are different ****
[!ENDASSERT!][!//
[!ASSERT "ArReleaseRevisionVersion  = num:i($ADC_AR_RELEASE_REVISION_VERSION_TEMPLATE)"!]
        **** AUTOSAR release revision version number of the Basic Software Module Description file (Adc.epd version [!"ArReleaseRevisionVersion"!]) and the Code template files (Adc_PBcfg.c version [!"num:i($ADC_AR_RELEASE_REVISION_VERSION_TEMPLATE)"!]) are different ****
[!ENDASSERT!][!//
*/!]
[!ASSERT "SwMajorVersion = num:i($ADC_SW_MAJOR_VERSION_TEMPLATE)"!]
        **** The software major number of the Basic Software Module Description file (Adc.epd version [!"SwMajorVersion"!]) and the Code template files (Adc_PBcfg.c version [!"num:i($ADC_SW_MAJOR_VERSION_TEMPLATE)"!]) are different ****
[!ENDASSERT!][!//
[!ASSERT "SwMinorVersion = num:i($ADC_SW_MINOR_VERSION_TEMPLATE)"!]
        **** The software minor number of the Basic Software Module Description file (Adc.epd version [!"SwMinorVersion"!]) and the Code template files (Adc_PBcfg.c version [!"num:i($ADC_SW_MINOR_VERSION_TEMPLATE)"!]) are different ****
[!ENDASSERT!][!//
[!ENDSELECT!][!//
[!NOCODE!][!//
[!ENDNOCODE!][!//
