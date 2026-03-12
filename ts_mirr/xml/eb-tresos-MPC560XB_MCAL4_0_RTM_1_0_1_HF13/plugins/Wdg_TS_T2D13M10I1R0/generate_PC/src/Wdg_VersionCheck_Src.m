[!NOCODE!][!//
/**
  @file    Wdg_VersionCheck_Src.m
  @version 1.0.1

  @brief   AUTOSAR Wdg - version check macro.
  @details Version checks.
  
  Project AUTOSAR 4.0 MCAL
  Patform PA
  Peripheral Swt
  Dependencies none
  
  ARVersion 4.0.3
  ARRevision ASR_REL_4_0_REV_0003
  ARConfVariant
  SWVersion 1.0.1
  BuildVersion MPC560xB_MCAL_1_0_1_RTM_HF12_ASR_REL_4_0_REV_0003_20161209

  (c) Copyright 2006-2016 Freescale Semiconductor Inc. & STMicroelectronics
  All Rights Reserved.
*/
/*==================================================================================================
[!VAR "WDG_AR_MAJOR_VERSION_TEMPLATE"="4"!][!//
[!VAR "WDG_AR_MINOR_VERSION_TEMPLATE"="0"!][!//
[!VAR "WDG_AR_PATCH_VERSION_TEMPLATE"="3"!][!//
[!VAR "WDG_SW_MAJOR_VERSION_TEMPLATE"="1"!][!//     
[!VAR "WDG_SW_MINOR_VERSION_TEMPLATE"="0"!][!//     

[!ENDNOCODE!][!//
[!SELECT "CommonPublishedInformation"!][!//
[!/*
[!ASSERT "num:i(ArMajorVersion) = num:i($WDG_AR_MAJOR_VERSION_TEMPLATE)"!]
        **** AUTOSAR major version number of the Basic Software Module Description file (Wdg.epd version [!"ArMajorVersion"!]) and the Code template file (Wdg_Cfg.c version [!"num:i($WDG_AR_MAJOR_VERSION_TEMPLATE)"!]) are different ****
[!ENDASSERT!][!//
[!ASSERT "num:i(ArMinorVersion)  = num:i($WDG_AR_MINOR_VERSION_TEMPLATE)"!]
        **** AUTOSAR minor version number of the Basic Software Module Description file (Wdg.epd version [!"ArMinorVersion"!]) and the Code template file (Wdg_Cfg.c version [!"num:i($WDG_AR_MINOR_VERSION_TEMPLATE)"!]) are different ****
[!ENDASSERT!][!//
[!ASSERT "num:i(ArPatchVersion)  = num:i($WDG_AR_PATCH_VERSION_TEMPLATE)"!]
        **** AUTOSAR patch version number of the Basic Software Module Description file (Wdg.epd version [!"ArPatchVersion"!]) and the Code template file (Wdg_Cfg.c version [!"num:i($WDG_AR_PATCH_VERSION_TEMPLATE)"!]) are different ****
[!ENDASSERT!][!//
*/!]
[!ASSERT "num:i(SwMajorVersion) = num:i($WDG_SW_MAJOR_VERSION_TEMPLATE)"!]
        **** The software major number of the Basic Software Module Description file (Wdg.epd version [!"SwMajorVersion"!]) and the Code template file (Wdg_Cfg.c version [!"num:i($WDG_SW_MAJOR_VERSION_TEMPLATE)"!]) are different ****
[!ENDASSERT!][!//
[!ASSERT "num:i(SwMinorVersion) = num:i($WDG_SW_MINOR_VERSION_TEMPLATE)"!]
        **** The software minor number of the Basic Software Module Description file (Wdg.epd version [!"SwMinorVersion"!]) and the Code template file (Wdg_Cfg.c version [!"num:i($WDG_SW_MINOR_VERSION_TEMPLATE)"!]) are different ****
[!ENDASSERT!][!//
[!ENDSELECT!][!//
[!NOCODE!][!//

[!ENDNOCODE!][!//
