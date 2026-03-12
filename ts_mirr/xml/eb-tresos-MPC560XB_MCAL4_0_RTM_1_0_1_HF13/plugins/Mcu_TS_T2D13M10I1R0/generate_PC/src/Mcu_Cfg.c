/**
*   @file    Mcu_cfg.c
*   @version 1.0.1
*
*   @brief   AUTOSAR Mcu - Mcu precompile configuration parameters.
*   @details This file contains the mcu precompile configuration parameters.
*
*   @addtogroup MCU
*   @{
*/
/*==================================================================================================
*   Project              : AUTOSAR 4.0 MCAL
*   Platform             : PA
*   Peripheral           : MC
*   Dependencies         : none
*
*   Autosar Version      : 4.0.3
*   Autosar Revision     : ASR_REL_4_0_REV_0003
*   Autosar Conf.Variant :
*   SW Version           : 1.0.1
*   Build Version        : MPC560xB_MCAL_1_0_1_RTM_HF13_ASR_REL_4_0_REV_0003_20170719
*
*   (c) Copyright 2006-2016 Freescale Semiconductor Inc and STMicroelectronics
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
==================================================================================================*/

#ifdef __cplusplus
extern "C"{
#endif

/**
* @page misra_violations MISRA-C:2004 violations
*
* @section Mcu_cfg_c_REF_1
* Violates MISRA 2004 Advisory Rule 19.7, Function-like macro defined
* This violation is due to function like macros defined for register operations.
* Function like macros are used to reduce code complexity.
*
* @section Mcu_cfg_c_REF_2
* Violates MISRA 2004 Required Rule 19.15, Repeated include file
* This comes from the order of includes in the .c file and from include dependencies. As a safe
* approach, any file must include all its dependencies. Header files are already protected against
* double inclusions.
*
* @section Mcu_cfg_c_REF_3
* Violates MISRA 2004 Required Rule 5.1,
* Identifiers (internal and external) shall not rely on the significance of more than 31
* characters.
*
* @section Mcu_cfg_c_REF_4
* Violates MISRA 2004 Required Rule 1.4, Identifier clash. Define name is required by the AUTOSAR
* specifications although it exceeds the max length of 31 characters.
*
* @section Mcu_cfg_c_REF_5
* Violates MISRA 2004 Required Rule 11.1, This violation is due to the casting pointers to other 
* types used in macros for reading or writing data from address location of controller register.
*
* @section Mcu_cfg_c_REF_6
* Violates MISRA 2004 Advisory Rule 19.1, only preprocessor statements and comments
* before '#include' MemMap.h included after each section define in order to set the current memory
* section
*/

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Mcu_LLD.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*
* @implements     DMCU04023, DMCU04024, DMCU04025, DMCU04026, DMCU04027, DMCU04028,
*                 DMCU04029
*/
#define MCU_VENDOR_ID_PCCFG_C                      43
/*
* @violates @ref Mcu_cfg_c_REF_3 Identifiers (internal and external) shall not rely on the significance of more than 31
* characters.
*/
#define MCU_AR_RELEASE_MAJOR_VERSION_PCCFG_C       4
/*
* @violates @ref Mcu_cfg_c_REF_3 Identifiers (internal and external) shall not rely on the significance of more than 31
* characters.
*/
#define MCU_AR_RELEASE_MINOR_VERSION_PCCFG_C       0
/*
* @violates @ref Mcu_cfg_c_REF_3 Identifiers (internal and external) shall not rely on the significance of more than 31
* characters.
*/
/**
* @violates @ref Mcu_cfg_c_REF_4 MISRA 2004 Required Rule 1.4, Identifier clash
*/
#define MCU_AR_RELEASE_REVISION_VERSION_PCCFG_C    3
#define MCU_SW_MAJOR_VERSION_PCCFG_C               1
#define MCU_SW_MINOR_VERSION_PCCFG_C               0
#define MCU_SW_PATCH_VERSION_PCCFG_C               1

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and Mcu_LLD.h header file are of the same vendor */
#if (MCU_VENDOR_ID_PCCFG_C != MCU_LLD_VENDOR_ID)
    #error "Mcu_cfg.c and Mcu_LLD.h have different vendor ids"
#endif
/**
* @implements     DMCU06001
*/
/* Check if current file and Mcu_LLD.h header file are of the same Autosar version */
#if ((MCU_AR_RELEASE_MAJOR_VERSION_PCCFG_C    != MCU_LLD_AR_RELEASE_MAJOR_VERSION) || \
     (MCU_AR_RELEASE_MINOR_VERSION_PCCFG_C    != MCU_LLD_AR_RELEASE_MINOR_VERSION) || \
     (MCU_AR_RELEASE_REVISION_VERSION_PCCFG_C != MCU_LLD_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Mcu_cfg.c and Mcu_lld.h are different"
#endif
/* Check if current file and Mcu_LLD.h header file are of the same Software version */
#if ((MCU_SW_MAJOR_VERSION_PCCFG_C != MCU_LLD_SW_MAJOR_VERSION) || \
     (MCU_SW_MINOR_VERSION_PCCFG_C != MCU_LLD_SW_MINOR_VERSION) || \
     (MCU_SW_PATCH_VERSION_PCCFG_C != MCU_LLD_SW_PATCH_VERSION))
    #error "Software Version Numbers of Mcu_cfg.c and Mcu_lld.h are different"
#endif

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/


/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/


/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/


/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/
/*
* @violates @ref Mcu_cfg_c_REF_3 Identifiers (internal and external) shall not rely on the significance of more than 31
* characters.
*/
#define MCU_START_SEC_CONFIG_DATA_UNSPECIFIED

/*
* @violates @ref Mcu_cfg_c_REF_2 MISRA 2004 Required Rule 19.15, Repeated include file
* @violates @ref Mcu_cfg_c_REF_6 MISRA 2004 Advisory Rule 19.1, only preprocessor
*           statements and comments before '#include' MemMap.h
*/

#include "MemMap.h"

[!INCLUDE "Mcu_RegOperations.m"!][!//
#ifdef MCU_PRECOMPILE_SUPPORT

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/
[!NOCODE!]
[!LOOP "McuModuleConfiguration/*"!][!//
    [!VAR "Current_ConfigSet"="@name"!][!//
    [!LOOP "McuPeriphal/*"!][!//
    [!IF "node:exists(McuPerRunConfig)"!][!//
        [!IF "contains(McuPerRunConfig,$Current_ConfigSet)"!][!//
        [!ELSE!][!//
            [!ERROR!][!//
                        WRONG Reference is selected for McuPerRunConfig in [!"@name"!]. Mcu Peripheral Run mode(in the container McuRunConfig) configured in [!"$Current_ConfigSet"!] should be referenced.
            [!ENDERROR!]
        [!ENDIF!][!//
        [!ENDIF!][!//
    [!ENDLOOP!][!//
[!ENDLOOP!][!//
[!LOOP "McuModuleConfiguration/*"!][!//
    [!VAR "Current_ConfigSet"="@name"!][!//
    [!LOOP "McuPeriphal/*"!][!//
     [!IF "node:exists(McuPerLowPwrConfig)"!][!//
        [!IF "contains(McuPerLowPwrConfig,$Current_ConfigSet)"!][!//
        [!ELSE!][!//
            [!ERROR!][!//
                        WRONG Reference is selected for McuPerRunConfig in [!"@name"!]. Mcu Peripheral Low power mode(in the container McuLowPower) configured in [!"$Current_ConfigSet"!] should be referenced.
            [!ENDERROR!][!//
        [!ENDIF!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
[!ENDLOOP!][!//
[!LOOP "McuModuleConfiguration/*"!][!//
    [!VAR "Current_ConfigSet"="@name"!][!//
    [!LOOP "McuModeSettingConf/*"!][!//
        [!IF "contains(LowPowerClockSettingConfig,$Current_ConfigSet)"!][!//
        [!ELSE!][!//
            [!ERROR!][!//
                        WRONG Reference is selected for LowPowerClockSettingConfig in [!"@name"!]. Clock configured in [!"$Current_ConfigSet"!] should be referenced.
            [!ENDERROR!][!//
        [!ENDIF!][!//
    [!ENDLOOP!][!//
[!ENDLOOP!][!//
[!ENDNOCODE!][!//

[!NOCODE!]
[!VAR "McuDemErrorEnable" = "'false'"!]
[!IF "NonAutosar/McuDisableDemReportErrorStatus ='false'"!][!//
    [!VAR "nconf" = "count(McuModuleConfiguration/*)"!]
    [!VAR "iconf" = "0"!]
    [!FOR "iconf" = "1" TO "$nconf"!]
        [!IF "node:exists(McuModuleConfiguration/*[$iconf]/McuDemEventParameterRefs)"!]
            [!VAR "McuDemErrorEnable" = "'true'"!]
        [!ENDIF!]
    [!ENDFOR!]
[!ENDIF!]
[!ENDNOCODE!][!//

[!LOOP "McuModuleConfiguration/*[1]"!][!//
[!NOCODE!][!//
[!INCLUDE "Mcu_checkvalues.m"!][!//

[!VAR "EOLN"!][!// Auxiliary variable for EOF line constant
[!ENDVAR!][!//
[!VAR "Externs" = "''"!][!//
[!VAR "BaseAddrLinkerSymList" = "''"!][!//
[!VAR "SizeLinkerSymList" = "''"!][!//
[!LOOP "McuRamSectorSettingConf/*"!][!//
[!// Get Externs
[!IF "normalize-space(McuRamSectionBaseAddrLinkerSym) != ''"!][!//
  [!IF "not(contains($BaseAddrLinkerSymList, normalize-space(McuRamSectionBaseAddrLinkerSym)))"!][!//
    [!VAR "BaseAddrLinkerSymList" = "concat($BaseAddrLinkerSymList,'<',normalize-space(McuRamSectionBaseAddrLinkerSym),'>')"!]
    [!VAR "Externs" = "concat($Externs,'extern  uint32 ',normalize-space(McuRamSectionBaseAddrLinkerSym),'[];',$EOLN)"!]
  [!ENDIF!][!//
[!ENDIF!][!//
[!IF "normalize-space(McuRamSectionSizeLinkerSym) != ''"!][!//
  [!IF "not(contains($SizeLinkerSymList, normalize-space(McuRamSectionSizeLinkerSym)))"!][!//
    [!VAR "SizeLinkerSymList" = "concat($SizeLinkerSymList,'<',normalize-space(McuRamSectionSizeLinkerSym),'>')"!]
    [!VAR "Externs" = "concat($Externs,'extern  uint32 ',normalize-space(McuRamSectionSizeLinkerSym),';',$EOLN)"!]
  [!ENDIF!][!//
[!ENDIF!][!//
[!ENDLOOP!]
/* extern definition of linker symbols used in Mcu_RamConfig */
[!ENDNOCODE!][!//
[!"$Externs"!][!//
[!IF "num:i(count(McuRamSectorSettingConf/*))>0"!][!//
[!VAR "var"= "1"!][!VAR "RamSector"= "num:i(count(McuRamSectorSettingConf/*))-1"!][!//
STATIC CONST(Mcu_RamConfigType, MCU_CONST) Mcu_RamConfigPC_[!"num:i(@index+1)"!][[!"num:i(count(McuRamSectorSettingConf/*))"!]]  = {
[!LOOP "McuRamSectorSettingConf/*"!][!//

[!NOCODE!][!//
[!CALL "MCheckRamSection"!][!//
[!ENDNOCODE!][!//
[!IF "$RamSector>=$var"!][!//
    /* start of Mcu_RamConfig[[!"@index"!]] */
    {
[!IF "normalize-space(McuRamSectionBaseAddrLinkerSym) = ''"!][!//
    /** @violates @ref Mcu_cfg_c_REF_5 MISRA 2004 Rule 11.1, cast from unsigned long to pointer */
    (uint32 *)[!"num:inttohex(McuRamSectionBaseAddress,8)"!]UL[!//
[!ELSE!][!//
    (uint32 *)[!"normalize-space(McuRamSectionBaseAddrLinkerSym)"!][!//
[!ENDIF!][!//
,/*section base address (must be aligned to 4 bytes) */
[!IF "normalize-space(McuRamSectionSizeLinkerSym) = ''"!][!//
    (uint32)[!"num:inttohex(McuRamSectionSize,8)"!]UL[!//
[!ELSE!][!//
    (uint32)[!"normalize-space(McuRamSectionSizeLinkerSym)"!][!//
[!ENDIF!][!//
,/* section size in bytes (must be multiple of 4) */
     (uint32)[!"num:inttohex(McuRamDefaultValue,8)"!]UL /* value to be filled with */
    },
[!ELSE!][!//
    /* start of Mcu_RamConfig[[!"@index"!]] */
    {
[!IF "normalize-space(McuRamSectionBaseAddrLinkerSym) = ''"!][!//
    /** @violates @ref Mcu_cfg_c_REF_5 MISRA 2004 Rule 11.1, cast from unsigned long to pointer */
    (uint32 *)[!"num:inttohex(McuRamSectionBaseAddress,8)"!]UL[!//
[!ELSE!][!//
    (uint32 *)[!"normalize-space(McuRamSectionBaseAddrLinkerSym)"!][!//
[!ENDIF!][!//
,             /* section base address (must be aligned to 4 bytes) */
[!IF "normalize-space(McuRamSectionSizeLinkerSym) = ''"!][!//
    (uint32)[!"num:inttohex(McuRamSectionSize,8)"!]UL[!//
[!ELSE!][!//
    (uint32)[!"normalize-space(McuRamSectionSizeLinkerSym)"!][!//
[!ENDIF!][!//
,        /* section size in bytes (must be multiple of 4) */
    (uint32)[!"num:inttohex(McuRamDefaultValue,8)"!]UL /* value to be filled with */
    }[!ENDIF!][!VAR "var"= "$var+1"!][!//
 /* end of Mcu_RamConfig[[!"@index"!]] */
[!ENDLOOP!]
};[!// End of McuRamSectorSettingConf
[!ENDIF!][!//
[!//

[!IF "num:i(count(McuModeSettingConf/*))>0"!][!//
[!VAR "var"= "1"!][!VAR "Mode"= "num:i(count(McuModeSettingConf/*))"!]
STATIC CONST(Mcu_ModeConfigType, MCU_CONST) Mcu_ModeConfigPC_[!"num:i(@index+1)"!][[!"num:i(count(McuModeSettingConf/*))"!]] ={
[!FOR "x" = "1" TO "num:i(count(McuModeSettingConf/*))"!][!//
[!SELECT "McuModeSettingConf/*/McuMode[.=$x]/.."!][!//
[!VAR "PCindex" = "$x"!][!//

 [!NOCODE!]
    [!IF "McuOperatingMode = 'STANDBY'"!]
        [!VAR "STBY"!]
            [!CALL "STBYMODE","BOOT"="McuBootMode"!]
        [!ENDVAR!]
    [!ENDIF!]
       [!VAR "n" = "0"!]
[!VAR "TempMcuClcokSource1" = "substring-after(LowPowerClockSettingConfig, string(as:path(as:modconf("Mcu")[1])))"!]
[!VAR "TempMcuClcokSource1" = "substring-after($TempMcuClcokSource1, '/')"!]
[!LOOP "../../McuClockSettingConfig/*"!]
[!VAR "TempMcuClcokSource"="@name"!]
        [!IF "contains($TempMcuClcokSource1,$TempMcuClcokSource)"!]
        [!VAR "n" = "num:i(McuClockSettingId)"!]
        [!VAR "nume" = "@name"!]
        [!ENDIF!]
[!ENDLOOP!] [!ENDNOCODE!]
 /* start of Mcu_ModeConfig[[!"$PCindex"!]] */
 /*[!"McuOperatingMode"!]*/
    {
        [!IF "McuOperatingMode = 'HALT'"!]MCU_HALT_MODE[!ELSEIF "McuOperatingMode = 'STOP'"!]MCU_STOP_MODE[!ELSEIF "McuOperatingMode = 'RUN3'"!]MCU_RUN3_MODE[!ELSEIF "McuOperatingMode = 'RUN2'"!]MCU_RUN2_MODE[!ELSEIF "McuOperatingMode = 'RUN1'"!]MCU_RUN1_MODE[!ELSEIF "McuOperatingMode = 'RUN0'"!]MCU_RUN0_MODE[!ELSEIF "McuOperatingMode = 'DRUN'"!]MCU_DRUN_MODE[!ELSEIF "McuOperatingMode = 'SAFE'"!]MCU_SAFE_MODE[!ELSE!]MCU_STANDBY_MODE[!ENDIF!],/* Select the Mode */
        [!IF "node:exists('McuVoltageRegulator')"!][!IF "McuVoltageRegulator"!](ME_MAIN_VOLATAGE_ON[!ELSE!](ME_MAIN_VOLATAGE_OFF[!ENDIF!][!ELSE!](ME_MAIN_VOLATAGE_OFF[!ENDIF!]|
        [!IF "McuOperatingMode != 'STANDBY'"!][!//
            [!IF "(McuOperatingMode = 'STOP') or (McuOperatingMode = 'SAFE')"!][!//
                [!IF "node:exists(McuOutputPowerDownControl)"!][!IF "McuOutputPowerDownControl"!]ME_POWER_DOWN_OUT_ON[!ELSE!]ME_POWER_DOWN_OUT_OFF[!ENDIF!][!ELSE!]ME_POWER_DOWN_OUT_OFF[!ENDIF!]|
            [!ELSE!]
                /* empty ELSE means PDO is set to false in DRUN or RUN0..3 or HALT */
            [!ENDIF!][!//
            [!IF "(McuOperatingMode != 'SAFE')"!]
                [!IF "node:value(concat('../../McuClockSettingConfig/',string($nume),'/GeneralClockSettings/McuDataFlashStatus')) = 'NormalMode'"!]ME_MODE_DFAON(ME_DFLASH_NORMAL)|[!ELSEIF "node:value(concat('../../McuClockSettingConfig/',string($nume),'/GeneralClockSettings/McuDataFlashStatus')) = 'LowPower'"!]ME_MODE_DFAON(ME_DFLASH_LOWPOWER)|[!ELSE!]ME_MODE_DFAON(ME_DFLASH_POWERDOWN)|[!ENDIF!]
                [!IF "node:value(concat('../../McuClockSettingConfig/',string($nume),'/GeneralClockSettings/McuCodeFlashStatus')) = 'NormalMode'"!]ME_MODE_CFAON(ME_CFLASH_NORMAL)|[!ELSEIF "node:value(concat('../../McuClockSettingConfig/',string($nume),'/GeneralClockSettings/McuCodeFlashStatus')) = 'LowPower'"!]ME_MODE_CFAON(ME_CFLASH_LOWPOWER)|[!ELSE!]ME_MODE_CFAON(ME_CFLASH_POWERDOWN)|[!ENDIF!]
                [!IF "node:value(concat('../../McuClockSettingConfig/',string($nume),'/GeneralClockSettings/McuPLLStatus'))"!]ME_PLL0_ON|[!ELSE!]ME_PLL0_OFF|[!ENDIF!]
                [!IF "node:value(concat('../../McuClockSettingConfig/',string($nume),'/GeneralClockSettings/McuOSC'))"!]ME_XOSC_ON|[!ELSE!]ME_XOSC_OFF|[!ENDIF!]
            [!ELSE!]
                ME_MODE_DFAON(ME_DFLASH_NORMAL)| /* DFLAON is set to normal mode in SAFE */
                ME_MODE_CFAON(ME_CFLASH_NORMAL)| /* CFLAON is set to normal mode in SAFE */
                ME_PLL0_OFF| /* PLL is turned off in SAFE */
                ME_XOSC_OFF| /* XOSC is turned off in SAFE */
            [!ENDIF!]
            [!IF "(McuOperatingMode = 'STOP') or (McuOperatingMode = 'HALT')"!]   
/* @errata ERR_IPV_MC_0005 */
#ifdef ERR_IPV_MC_0005
  #if (ERR_IPV_MC_0005== STD_ON)
                [!IF "(McuOperatingMode = 'STOP') and (node:value(concat('../../McuClockSettingConfig/',string($nume),'/GeneralClockSettings/McuOSC')) = 'true')"!]
                    ME_RC_ON|
                [!ELSE!][!//
                    [!IF "node:value(concat('../../McuClockSettingConfig/',string($nume),'/GeneralClockSettings/McuRC16MHzOscillator'))"!]ME_RC_ON|[!ELSE!]ME_RC_OFF|[!ENDIF!]
                [!ENDIF!]
   #endif
#else
                [!IF "node:value(concat('../../McuClockSettingConfig/',string($nume),'/GeneralClockSettings/McuRC16MHzOscillator'))"!]ME_RC_ON|[!ELSE!]ME_RC_OFF|[!ENDIF!]
#endif
            [!ELSE!]
                ME_RC_ON|
            [!ENDIF!]
            [!IF "node:value(concat('../../McuClockSettingConfig/',string($nume),'/GeneralClockSettings/SystemClockSelect')) = 'McuIntOscRC16MHz'"!]ME_MODE_SYSCLK(ME_SYSCLK_SWITCH_RC)),
            [!ELSEIF "node:value(concat('../../McuClockSettingConfig/',string($nume),'/GeneralClockSettings/SystemClockSelect')) = 'McuDivIntOscRC16MHz'"!]ME_MODE_SYSCLK(ME_SYSCLK_SWITCH_DIV_RC)),
            [!ELSEIF "node:value(concat('../../McuClockSettingConfig/',string($nume),'/GeneralClockSettings/SystemClockSelect')) = 'McuPLL'"!]ME_MODE_SYSCLK(ME_SYSCLK_SWITCH_PLL0)),
            [!ELSEIF "node:value(concat('../../McuClockSettingConfig/',string($nume),'/GeneralClockSettings/SystemClockSelect')) = 'McuExtQuartzOsc'"!]ME_MODE_SYSCLK(ME_SYSCLK_SWITCH_XOSC)),
            [!ELSEIF "node:value(concat('../../McuClockSettingConfig/',string($nume),'/GeneralClockSettings/SystemClockSelect')) = 'McuDivExtQuartzOsc'"!]ME_MODE_SYSCLK(ME_SYSCLK_SWITCH_DIV_XOSC)),
            [!ELSEIF "node:value(concat('../../McuClockSettingConfig/',string($nume),'/GeneralClockSettings/SystemClockSelect')) = 'McuOff'"!]ME_MODE_SYSCLK(ME_SYSCLK_SWITCH_CLK_DISABLED)),
            [!ELSE!]ME_MODE_SYSCLK(ME_SYSCLK_SWITCH_CLK_DISABLED)),[!ENDIF!]
        [!ELSE!]
                /* MVRON is off in STANDBY mode */
                ME_POWER_DOWN_OUT_ON| /* PDO is on in STANDBY mode*/
                ME_MODE_DFAON(ME_DFLASH_POWERDOWN)| /* DFLAON is set to normal mode in STANDBY */
                ME_MODE_CFAON(ME_CFLASH_POWERDOWN)| /* CFLAON is set to normal mode in STANDBY */
                ME_PLL0_OFF|
                [!IF "node:value(concat('../../McuClockSettingConfig/',string($nume),'/GeneralClockSettings/McuOSC'))"!]ME_XOSC_ON|[!ELSE!]ME_XOSC_OFF|[!ENDIF!]
                [!IF "node:value(concat('../../McuClockSettingConfig/',string($nume),'/GeneralClockSettings/McuRC16MHzOscillator'))"!]ME_RC_ON|[!ELSE!]ME_RC_OFF|[!ENDIF!]
                ME_MODE_SYSCLK(ME_SYSCLK_SWITCH_CLK_DISABLED)), /* System clock is disabled in STANDBY mode */
        [!ENDIF!]
        [!IF "node:exists('McuAuxiliaryClockSettings')"!][!IF "(McuAuxiliaryClockSettings = 'true')"!]
        (
            [!IF "./GeneralClockSettings/McuDataFlashStatus = 'NormalMode'"!]ME_MODE_DFAON(ME_DFLASH_NORMAL)|[!ELSEIF "GeneralClockSettings/McuDataFlashStatus = 'LowPower'"!]ME_MODE_DFAON(ME_DFLASH_LOWPOWER)|[!ELSE!]ME_MODE_DFAON(ME_DFLASH_POWERDOWN)|[!ENDIF!]
            [!IF "./GeneralClockSettings/McuCodeFlashStatus = 'NormalMode'"!]ME_MODE_CFAON(ME_CFLASH_NORMAL)|[!ELSEIF "GeneralClockSettings/McuCodeFlashStatus = 'LowPower'"!]ME_MODE_CFAON(ME_CFLASH_LOWPOWER)|[!ELSE!]ME_MODE_CFAON(ME_CFLASH_POWERDOWN)|[!ENDIF!]
            [!IF "./GeneralClockSettings/McuPLLStatus"!]ME_PLL0_ON|[!ELSE!]ME_PLL0_OFF|[!ENDIF!]
            [!IF "./GeneralClockSettings/McuOSC"!]ME_XOSC_ON[!ELSE!]ME_XOSC_OFF[!ENDIF!]
        ),
        [!ELSE!]
        0xFFFFFFFFU,
        [!ENDIF!][!ELSE!]0xFFFFFFFFU,[!ENDIF!]

        [!IF "McuFastTransition = 'true'"!](boolean)TRUE,[!ELSE!](boolean)FALSE,[!ENDIF!]
        [!"num:inttohex($n)"!]U,/*ClockConfig*/
        [!IF "(McuOperatingMode = 'STOP') or (McuOperatingMode = 'STANDBY')"!]
            [!IF "node:value(concat('../../McuClockSettingConfig/',string($nume),'/GeneralClockSettings/SystemClockSelect')) != 'McuOff'"!]
                (boolean)FALSE,/*Enable system clock*/
            [!ELSE!]
                (boolean)TRUE,/*Disable system clock*/
            [!ENDIF!]
        [!ELSE!]
            (boolean)FALSE,/*Enable system clock*/
        [!ENDIF!]
        [!IF "McuOperatingMode != 'STANDBY'"!]0U[!ELSE!][!"num:inttohex($STBY,4)"!]U[!ENDIF!]/* Reset Sequence for Standby mode exit */
    }[!IF "$PCindex<$Mode"!],[!ENDIF!]
/* end of Mcu_ModeConfig[[!"$PCindex"!]] */
[!ENDSELECT!][!//
[!ENDFOR!][!//
};[!//
[!ENDIF!][!//
[!//

[!VAR "CrystalFrequency"="FrequencyOfFXOSC"!][!//
[!IF "num:i(count(McuClockSettingConfig/*))>0"!][!//
[!VAR "var"= "1"!][!VAR "NumClkConf"= "num:i(count(McuClockSettingConfig/*))"!][!//

STATIC CONST(Mcu_ClockConfigType, MCU_CONST) Mcu_ClockConfigPC_[!"num:i(@index+1)"!][[!"num:i(count(McuClockSettingConfig/*))"!]] = {[!//
[!FOR "x" = "1" TO "num:i(count(McuClockSettingConfig/*))"!][!//
[!SELECT "McuClockSettingConfig/*/McuClockSettingId[.=$x]/.."!][!//
[!VAR "PCindex" = "$x"!][!//
/* start of Mcu_ClockConfig[[!"$PCindex"!]] */
    {
 [!NOCODE!][!//
 [!CALL "MCheckClockSettings"!][!//

[!VAR "R0"!][!IF "node:exists(GeneralClockSettings/McuCodeFlashStatus)"!][!"GeneralClockSettings/McuCodeFlashStatus"!][!ELSE!][!"0"!][!ENDIF!][!ENDVAR!]
[!VAR "R1"!][!IF "node:exists(GeneralClockSettings/McuDataFlashStatus)"!][!"GeneralClockSettings/McuDataFlashStatus"!][!ELSE!][!"0"!][!ENDIF!][!ENDVAR!]
[!VAR "R2"!][!IF "node:exists(McuClkOutput/McuClkDivisor)"!][!"McuClkOutput/McuClkDivisor"!][!ELSE!][!"0"!][!ENDIF!][!ENDVAR!]
[!VAR "R3"!][!IF "node:exists(McuClkOutput/McuClkSource)"!][!"McuClkOutput/McuClkSource"!][!ELSE!][!"0"!][!ENDIF!][!ENDVAR!]
    [!VAR "STARTRUN"!]
        [!CALL "START" , "MODE"="GeneralClockSettings/McuStartRunMode", "SYSCLOCK"="GeneralClockSettings/SystemClockSelect" , "XOSC"="GeneralClockSettings/McuOSC", "PLL"="GeneralClockSettings/McuPLLStatus", "CFS"="$R0", "DFS"="$R1", "RCOSC"="GeneralClockSettings/McuRC16MHzOscillator","PDO"="GeneralClockSettings/McuOutputPowerDownControl"!]
    [!ENDVAR!]
    [!VAR "XTAL_A"!]
        [!CALL "XTAL","PASS"="McuXtal_A/McuXtalByPass","OSC"="McuXtal_A/McuXtalCounterOscillator","INT"="McuXtal_A/McuXtalMaskInterrupt","DIV" ="McuXtal_A/McuXtalDivisor","STBY"="'false'"!]
    [!ENDVAR!]
[!IF "(ecu:get('MCU.HAS_32KHzOSC') = 'true')"!][!//
    [!VAR "XTAL_B"!]
        [!CALL "XTAL","PASS"="McuXtal_B_32KHz/McuXtalByPass","OSC"="McuXtal_B_32KHz/McuXtalCounterOscillator","INT"="McuXtal_B_32KHz/McuXtalMaskInterrupt","DIV" ="McuXtal_B_32KHz/McuXtalDivisor","STBY"="McuXtal_B_32KHz/McuXtalOn"!]
    [!ENDVAR!]
[!ENDIF!][!//
    [!VAR "RC16"!]
            [!CALL "RC","DIV"="McuRC_16MHz/McuRCDivisor","TRIM"="0","STBY"="0","TYPE"="'McuRC16MHz'"!]
    [!ENDVAR!]
    [!VAR "RC128"!]
            [!CALL "RC","DIV"="McuRC_128KHz/McuRCDivisor","TRIM"="0","STBY"="McuRC_128KHz/McuRCStandBy","TYPE"="'McuRC128KHz'"!]
    [!ENDVAR!]
    [!VAR "CLKOUT"!]
            [!CALL "CLKOUTPUT","EN"="McuClkOutput/McuClkOutput","DIV"="$R2","SRC"="$R3"!]
    [!ENDVAR!]
    [!VAR "PLLMODE"!]
        [!IF "node:exists(GeneralClockSettings/PLL_0)"!][!IF "GeneralClockSettings/PLL_0 = 'true' and McuPll_0/McuPllMode_0='FM'"!]
            [!CALL "PLL_MODE","VALUE"="McuPll_0/McuFmPll0_Parameter"!]
        [!ELSE!]
            [!"0"!]
        [!ENDIF!][!ELSE!][!"0"!][!ENDIF!]
    [!ENDVAR!]
    [!VAR "PLLPARAM"!]
        [!IF "node:exists(GeneralClockSettings/PLL_0)"!][!IF "GeneralClockSettings/PLL_0 = 'true'"!]
            [!CALL "PLL_PARAM","IDF"="McuPll_0/McuPll0_Parameter/McuInputDivisionFactor","ODF"="McuPll_0/McuPll0_Parameter/McuOutputDivisionFactor","NDIV"="McuPll_0/McuPll0_Parameter/McuMultiplicationFactor","SW"="McuPll_0/McuPll0_Parameter/McuProgressiveClockSwitching","EN"="McuPll_0/McuPll0_Parameter/McuEnableFailInterrupt"!]
        [!ELSE!]
            [!"0"!]
        [!ENDIF!]
        [!ELSE!]
            [!"0"!]
        [!ENDIF!]
    [!ENDVAR!]

    [!VAR "PLLFMODE"!]
        [!IF "GeneralClockSettings/SystemClockSelect = 'McuPLL' and McuPll_0/McuPllMode_0='FM'"!]
            [!CALL "PLL_FMODE","FMOD"="McuPll_0/McuFmPll0_Parameter/McuModulationFrequency","MD"="McuPll_0/McuFmPll0_Parameter/McuPercentualModulationDepth","SS"="McuPll_0/McuFmPll0_Parameter/McuSpreadSelection","FREQ"="$CrystalFrequency","IDF"="McuPll_0/McuPll0_Parameter/McuInputDivisionFactor","NDIV"="McuPll_0/McuPll0_Parameter/McuMultiplicationFactor"!]
        [!ELSE!]
            [!"0"!]
        [!ENDIF!]
    [!ENDVAR!]



    [!VAR "PERCLK"!]
        [!CALL "PER_CLK"!]
    [!ENDVAR!]
    [!VAR "CLKMON"!]
        [!IF "McuClkMonitor/McuFmPllMonitor = 'true'"!]
            [!IF "(McuClkMonitor/McuHighFrequencyRef) <= (McuPll_0/McuPll0_Parameter/PLL_0_Frequency)"!]
                [!ERROR!]
                [Invalid Value - The parameter McuHighFrequencyRef [!"McuClkMonitor/McuHighFrequencyRef"!] should have a greater value than PLL frequency [!"(($CrystalFrequency * $NDIV) div ($IDF * $SODF))"!]]
                [!ENDERROR!]
            [!ENDIF!]
            [!IF "(McuClkMonitor/McuLowFrequencyRef) >= (McuPll_0/McuPll0_Parameter/PLL_0_Frequency)"!]
                [!ERROR!]
                [Invalid Value - The parameter McuLowFrequencyRef should have a lesser value than PLL frequency]
                [!ENDERROR!]
        [!ENDIF!]
            [!CALL "CLK_MON","PLL"="McuClkMonitor/McuFmPllMonitor","DIV"="McuClkMonitor/McuRCDivisorFactor","HIGH"="McuClkMonitor/McuHighFrequencyRef","LOW"="McuClkMonitor/McuLowFrequencyRef","RCSROUCE"="McuClkMonitor/McuRCOSCSelection"!]
        [!ELSE!]
            [!"50331648"!]
        [!ENDIF!]
  [!ENDVAR!]

    [!VAR "RegValue"="0"!][!//
        [!CALL "Enum2RegValue", "RegValue" = "$RegValue", "ItemName" = "McuEMIOSSettings_A/MdisBit", "Descriptor" ="'1,1,32##false:0;true:1;:0'"!][!//
        [!CALL "Enum2RegValue", "RegValue" = "$RegValue", "ItemName" = "McuEMIOSSettings_A/GlobalTimeBaseEnable", "Descriptor" ="'3,3,32##false:0;true:1;:0'"!][!//
        [!CALL "Enum2RegValue", "RegValue" = "$RegValue", "ItemName" = "McuEMIOSSettings_A/FreezeBit", "Descriptor" ="'2,2,32##false:0;true:1;:0'"!][!//
        [!CALL "Enum2RegValue", "RegValue" = "$RegValue", "ItemName" = "McuEMIOSSettings_A/GlobalPrescalerEnable", "Descriptor" ="'5,5,32##false:0;true:1;:0'"!][!//
        [!CALL "BitGroup2RegValue", "RegValue" = "$RegValue", "Value"= "McuEMIOSSettings_A/GlobalPrescaler", "StartBit" = "23", "BitWidth" = "8", "RegWidth"="32"!][!//
    [!VAR "EMIOS_MCR_A"="$RegValue"!][!//

[!IF "contains(ecu:get('MCU.EMIOS.List'),'EMIOS_B')"!][!//
    [!VAR "RegValue"="0"!][!//
        [!CALL "Enum2RegValue", "RegValue" = "$RegValue", "ItemName" = "McuEMIOSSettings_B/MdisBit", "Descriptor" ="'1,1,32##false:0;true:1;:0'"!][!//
        [!CALL "Enum2RegValue", "RegValue" = "$RegValue", "ItemName" = "McuEMIOSSettings_B/GlobalTimeBaseEnable", "Descriptor" ="'3,3,32##false:0;true:1;:0'"!][!//
        [!CALL "Enum2RegValue", "RegValue" = "$RegValue", "ItemName" = "McuEMIOSSettings_B/FreezeBit", "Descriptor" ="'2,2,32##false:0;true:1;:0'"!][!//
        [!CALL "Enum2RegValue", "RegValue" = "$RegValue", "ItemName" = "McuEMIOSSettings_B/GlobalPrescalerEnable", "Descriptor" ="'5,5,32##false:0;true:1;:0'"!][!//
        [!CALL "BitGroup2RegValue", "RegValue" = "$RegValue", "Value"= "McuEMIOSSettings_B/GlobalPrescaler", "StartBit" = "23", "BitWidth" = "8", "RegWidth"="32"!][!//
    [!VAR "EMIOS_MCR_B"="$RegValue"!][!//
[!ENDIF!][!//

    [!VAR "MCUFlashPFCR0clkdep"!]
        [!CALL "MCUFlashclkdep0" , "F"="McuSystemClockFrequency", "B02APC" = "McuFlashPFCR0/AddressPipeliningControl","B02WWSC"= "McuFlashPFCR0/WriteWaitStateControl","B02RWSC" = "McuFlashPFCR0/ReadWaitStateControl"!]
  [!ENDVAR!]

    [!VAR "MCUFlashPFCR1clkdep"!]
        [!CALL "MCUFlashclkdep1" , "F"="McuSystemClockFrequency", "B1APC" = "McuFlashPFCR1/AddressPipeliningControl","B1WWSC" = "McuFlashPFCR1/WriteWaitStateControl","B1RWSC" = "McuFlashPFCR1/ReadWaitStateControl"!]
    [!ENDVAR!]

[!ENDNOCODE!] /*[!"GeneralClockSettings/SystemClockSelect"!]*/
        ([!IF "GeneralClockSettings/McuStartRunMode = 'RUN0'"!]ME_MCTL_TARGET_MODE(ME_TARGET_MODE_RUN0)|[!//
        [!ELSEIF "GeneralClockSettings/McuStartRunMode = 'RUN1'"!]ME_MCTL_TARGET_MODE(ME_TARGET_MODE_RUN1)|[!//
        [!ELSEIF "GeneralClockSettings/McuStartRunMode = 'RUN2'"!]ME_MCTL_TARGET_MODE(ME_TARGET_MODE_RUN2)|[!//
        [!ELSEIF "GeneralClockSettings/McuStartRunMode = 'RUN3'"!]ME_MCTL_TARGET_MODE(ME_TARGET_MODE_RUN3)|[!//
        [!ELSEIF "GeneralClockSettings/McuStartRunMode = 'DRUN'"!]ME_MCTL_TARGET_MODE(ME_TARGET_MODE_DRUN)|[!//
        [!ELSEIF "GeneralClockSettings/McuStartRunMode = 'HALT'"!]ME_MCTL_TARGET_MODE(ME_TARGET_MODE_HALT)|[!//
        [!ELSEIF "GeneralClockSettings/McuStartRunMode = 'STOP'"!]ME_MCTL_TARGET_MODE(ME_TARGET_MODE_STOP)|[!//
        [!ELSE!]ME_MCTL_TARGET_MODE(ME_TARGET_MODE_SAFE)|[!//
        [!ENDIF!]
            [!IF "GeneralClockSettings/McuOutputPowerDownControl"!]ME_POWER_DOWN_OUT_ON|[!ELSE!]ME_POWER_DOWN_OUT_OFF|[!ENDIF!]
            [!IF "GeneralClockSettings/McuDataFlashStatus = 'NormalMode'"!]ME_MODE_DFAON(ME_DFLASH_NORMAL)|[!ELSEIF "GeneralClockSettings/McuDataFlashStatus = 'LowPower'"!]ME_MODE_DFAON(ME_DFLASH_LOWPOWER)|[!ELSE!]ME_MODE_DFAON(ME_DFLASH_POWERDOWN)|[!ENDIF!]
            [!IF "GeneralClockSettings/McuCodeFlashStatus = 'NormalMode'"!]ME_MODE_CFAON(ME_CFLASH_NORMAL)|[!ELSEIF "GeneralClockSettings/McuCodeFlashStatus = 'LowPower'"!]ME_MODE_CFAON(ME_CFLASH_LOWPOWER)|[!ELSE!]ME_MODE_CFAON(ME_CFLASH_POWERDOWN)|[!ENDIF!]
            [!IF "GeneralClockSettings/McuPLLStatus"!]ME_PLL0_ON|[!ELSE!]ME_PLL0_OFF|[!ENDIF!]
            [!IF "GeneralClockSettings/McuOSC"!]ME_XOSC_ON|[!ELSE!]ME_XOSC_OFF|[!ENDIF!]
            [!IF "GeneralClockSettings/McuRC16MHzOscillator"!]ME_RC_ON|[!ELSE!]ME_RC_OFF|[!ENDIF!]
            [!IF "GeneralClockSettings/SystemClockSelect = 'McuIntOscRC16MHz'"!]ME_MODE_SYSCLK(ME_SYSCLK_SWITCH_RC)),[!//
            [!ELSEIF "GeneralClockSettings/SystemClockSelect = 'McuPLL'"!]ME_MODE_SYSCLK(ME_SYSCLK_SWITCH_PLL0)),[!//
            [!ELSEIF "GeneralClockSettings/SystemClockSelect = 'McuDivIntOscRC16MHz'"!]ME_MODE_SYSCLK(ME_SYSCLK_SWITCH_DIV_RC)),[!//
            [!ELSEIF "GeneralClockSettings/SystemClockSelect = 'McuExtQuartzOsc'"!]ME_MODE_SYSCLK(ME_SYSCLK_SWITCH_XOSC)),[!//
            [!ELSEIF "GeneralClockSettings/SystemClockSelect = 'McuDivExtQuartzOsc'"!]ME_MODE_SYSCLK(ME_SYSCLK_SWITCH_DIV_XOSC)),[!//
            [!ELSE!]ME_MODE_SYSCLK(ME_SYSCLK_SWITCH_CLK_DISABLED)),[!ENDIF!]
        ([!IF "McuXtal_A/McuXtalMaskInterrupt"!]ENABLE_OSC_ISR|[!ELSE!]DISABLE_OSC_ISR|[!ENDIF!]
            EOCV_OSC_VALUE([!"McuXtal_A/McuXtalCounterOscillator"!])|
            [!IF "McuXtal_A/McuXtalByPass"!]OSC_BYP_ON[!ELSE!]OSC_BYP_OFF[!ENDIF!]|
            OSC_DIV([!"McuXtal_A/McuXtalDivisor"!])),    /* XTAL_A */
[!IF "(ecu:get('MCU.HAS_32KHzOSC') = 'true')"!][!//
        ([!IF "McuXtal_B_32KHz/McuXtalMaskInterrupt"!]ENABLE_OSC_ISR|[!ELSE!]DISABLE_OSC_ISR|[!ENDIF!]
            EOCV_OSC_VALUE([!"McuXtal_B_32KHz/McuXtalCounterOscillator"!])|
            [!IF "McuXtal_B_32KHz/McuXtalByPass"!]OSC_BYP_ON[!ELSE!]OSC_BYP_OFF[!ENDIF!]|
            OSC_DIV([!"McuXtal_B_32KHz/McuXtalDivisor"!])|
            [!IF "McuXtal_B_32KHz/McuXtalOn"!]ENABLE_OSC[!ELSE!]DISABLE_OSC[!ENDIF!]),    /* XTAL_B */
[!ENDIF!][!//
        [!"num:inttohex($RC16,8)"!]UL,     /* RC_16MHz */
        [!"num:inttohex($RC128,8)"!]UL,    /* RC_128KHz */
        ([!IF "McuClkOutput/McuClkDivisor = 'DIV_1'"!]CLOCK_OUT_DIV(CLOCK_OUT_NO_DIV)|[!ELSEIF "McuClkOutput/McuClkDivisor = 'DIV_2'"!]CLOCK_OUT_DIV(CLOCK_OUT_2_DIV)|[!ELSEIF "McuClkOutput/McuClkDivisor = 'DIV_4'"!]CLOCK_OUT_DIV(CLOCK_OUT_4_DIV)|[!ELSE!]CLOCK_OUT_DIV(CLOCK_OUT_8_DIV)|[!ENDIF!]
            [!IF "McuClkOutput/McuClkSource = 'Crystal'"!]CLOCK_OUT_SOURCE(CLOCK_OUT_SOURCE_XOSC)|[!ELSEIF "McuClkOutput/McuClkSource = 'F16_MHz_RC_Internal'"!]CLOCK_OUT_SOURCE(CLOCK_OUT_SOURCE_RC)|[!ELSEIF "McuClkOutput/McuClkSource = 'PLL'"!]CLOCK_OUT_SOURCE(CLOCK_OUT_SOURCE_PLL0)|[!ELSEIF "McuClkOutput/McuClkSource = 'SystemClock'"!]CLOCK_OUT_SOURCE(CLOCK_OUT_SOURCE_SYSCLK)|[!ELSEIF "McuClkOutput/McuClkSource = 'RTC_clk'"!]CLOCK_OUT_SOURCE(CLOCK_OUT_SOURCE_RTCCLK)|[!ENDIF!]
            [!IF "McuClkOutput/McuClkOutput"!]CLOCK_OUT_ENABLE[!ELSE!]CLOCK_OUT_DISABLE[!ENDIF!]),    /* Clk_Output */
        [!IF "((McuPll_0/McuPllMode_0 = 'Normal') and (GeneralClockSettings/McuPLLStatus = 'true'))"!]MCU_PLL0_NORMAL_MODE[!ELSEIF "((McuPll_0/McuPllMode_0 = 'FM') and (GeneralClockSettings/McuPLLStatus = 'true'))"!]MCU_PLL0_FM_MODE[!ELSE!]MCU_PLL0_UNUSED_MODE[!ENDIF!],     /* Pll0_Mode */
      [!IF "GeneralClockSettings/McuPLLStatus"!][!//
  ([!"concat('FMPLL_CR_IDF_',McuPll_0/McuPll0_Parameter/McuInputDivisionFactor)"!]|
          [!IF "McuPll_0/McuPll0_Parameter/McuOutputDivisionFactor = '2'"!]FMPLL_CR_ODF_2|[!ELSEIF "McuPll_0/McuPll0_Parameter/McuOutputDivisionFactor = '4'"!]FMPLL_CR_ODF_4|[!ELSEIF "McuPll_0/McuPll0_Parameter/McuOutputDivisionFactor = '8'"!]FMPLL_CR_ODF_8|[!ELSE!]FMPLL_CR_ODF_16|[!ENDIF!]
          FMPLL_CR_NDIV([!"McuPll_0/McuPll0_Parameter/McuMultiplicationFactor"!])|
          [!IF "McuPll_0/McuPll0_Parameter/McuProgressiveClockSwitching"!]FMPLL_ENABLE_SW|[!ELSE!]FMPLL_DISABLE_SW|[!ENDIF!]
          [!IF "McuPll_0/McuPll0_Parameter/McuEnableFailInterrupt"!]FMPLL_FAIL_ENABLE),[!ELSE!]FMPLL_FAIL_DISABLE),    /* Pll0_Param */[!ENDIF!][!//
          [!VAR "copyNDIV"="McuPll_0/McuPll0_Parameter/McuMultiplicationFactor"!][!//
      [!ELSE!][!//
[!IF "(ecu:get('Mcu.McuClockReferencePointFrequency.MaxClockFrequency') = '64000000')"!][!//
        (FMPLL_CR_IDF_2|
          FMPLL_CR_ODF_4|
          FMPLL_CR_NDIV(64)|
          FMPLL_DISABLE_SW|
          FMPLL_FAIL_DISABLE),    /* Pll0_Param */
[!ELSEIF "(ecu:get('Mcu.McuClockReferencePointFrequency.MaxClockFrequency') = '48000000')"!][!//
        (FMPLL_CR_IDF_2|
          FMPLL_CR_ODF_8|
          FMPLL_CR_NDIV(96)|
          FMPLL_DISABLE_SW|
          FMPLL_FAIL_DISABLE),    /* Pll0_Param */
[!ENDIF!][!//
      [!ENDIF!]
        [!"num:inttohex($PLLFMODE,8)"!]UL,    /* Pll0_FM */
        [!"num:inttohex($PERCLK,8)"!]UL,     /* PeripheralClock */
        [!"num:inttohex($CLKMON,8)"!]UL,    /* Clock Monitor */
[!IF "contains(ecu:get('MCU.EMIOS.List'),'EMIOS_B')"!][!//
        {
[!ENDIF!][!//
         {[!"num:inttohex($EMIOS_MCR_A,8)"!]UL,   /* EMIOS_MCR_A */
[!IF "contains(ecu:get('MCU.EMIOS.List'),'EMIOS_B')"!][!//
        [!"num:inttohex($EMIOS_MCR_B,8)"!]UL}   /* EMIOS_MCR_B */
[!ENDIF!][!//
        },
        [!"num:inttohex($MCUFlashPFCR0clkdep,8)"!]UL,    /* PFCR0 system clock dependent values*/
        [!"num:inttohex($MCUFlashPFCR1clkdep,8)"!]UL,    /* PFCR1 system clock dependent  values*/
        [!"num:i(McuSystemClockFrequency)"!]UL    /* System Clock Frequency */
    }[!IF "$PCindex<$NumClkConf"!],[!ENDIF!]
/* end of Mcu_ClockConfig[[!"$PCindex"!]] */
[!ENDSELECT!][!//
[!ENDFOR!][!//
};[!//
[!ENDIF!][!//
[!//

STATIC CONST(McuLLD_ConfigType, MCU_CONST) McuLLD_ConfigPC_[!"num:i(@index+1)"!] =
    {
[!NOCODE!]
[!LOOP "McuRunConfig/*"!][!//
[!VAR "PCindex" = "@index"!][!//
    [!VAR "R0"!][!IF "node:exists(McuModeRun3)"!][!"McuModeRun3"!][!ELSE!][!"'false'"!][!ENDIF!][!ENDVAR!]
    [!VAR "R1"!][!IF "node:exists(McuModeRun2)"!][!"McuModeRun2"!][!ELSE!][!"'false'"!][!ENDIF!][!ENDVAR!]
    [!VAR "R2"!][!IF "node:exists(McuModeRun1)"!][!"McuModeRun1"!][!ELSE!][!"'false'"!][!ENDIF!][!ENDVAR!]
    [!VAR "R3"!][!IF "node:exists(McuModeRun0)"!][!"McuModeRun0"!][!ELSE!][!"'false'"!][!ENDIF!][!ENDVAR!]
    [!VAR "R4"!][!IF "node:exists(McuModeDRun)"!][!"McuModeDRun"!][!ELSE!][!"'false'"!][!ENDIF!][!ENDVAR!]
    [!VAR "R5"!][!IF "node:exists(McuModeSafe)"!][!"McuModeSafe"!][!ELSE!][!"'false'"!][!ENDIF!][!ENDVAR!]
    [!VAR "R6"!][!IF "node:exists(McuModeReset)"!][!"McuModeReset"!][!ELSE!][!"'false'"!][!ENDIF!][!ENDVAR!]
    [!VAR "RCONF"!]
        [!CALL "RUN" , "DRUN"="$R4" , "RUN3"="$R0", "RUN2"="$R1", "RUN1"="$R2", "RUN0"="$R3", "SAFE"="$R5", "RESET"="$R6"!]
    [!ENDVAR!]
    [!CODE!]        /* Run Config Mode[!"$PCindex"!]  */
        ([!IF "$R0 = 'true'"!]ME_RUN_RUN3_ACTIVE|[!ELSE!]ME_RUN_RUN3_FROZEN|[!ENDIF!][!IF "$R1= 'true'"!]ME_RUN_RUN2_ACTIVE|[!ELSE!]ME_RUN_RUN2_FROZEN|[!ENDIF!][!IF "$R2 = 'true'"!]ME_RUN_RUN1_ACTIVE|[!ELSE!]ME_RUN_RUN1_FROZEN|[!ENDIF!][!IF "$R3 = 'true'"!]ME_RUN_RUN0_ACTIVE|[!ELSE!]ME_RUN_RUN0_FROZEN|[!ENDIF!][!IF "$R4 = 'true'"!]ME_RUN_DRUN_ACTIVE|[!ELSE!]ME_RUN_DRUN_FROZEN|[!ENDIF!][!IF "$R5 = 'true'"!]ME_RUN_SAFE_ACTIVE[!ELSE!]ME_RUN_SAFE_FROZEN[!ENDIF!]),
 [!ENDCODE!]
 //Clock Monitor
[!ENDLOOP!][!//


[!LOOP "McuLowPower/*"!][!//
[!VAR "PCindex" = "@index"!][!//

    [!VAR "R0"!][!IF "node:exists(McuSTBY)"!][!"McuSTBY"!][!ELSE!][!"'false'"!][!ENDIF!][!ENDVAR!]
    [!VAR "R1"!][!IF "node:exists(McuStop)"!][!"McuStop"!][!ELSE!][!"'false'"!][!ENDIF!][!ENDVAR!]
    [!VAR "R2"!][!IF "node:exists(McuHalt)"!][!"McuHalt"!][!ELSE!][!"'false'"!][!ENDIF!][!ENDVAR!]
    [!VAR "LPCONF"!]
        [!CALL "LOWPOWER" , "STBY"="$R0", "STOP"="$R1", "HALT"="$R2"!]
    [!ENDVAR!]
        [!CODE!]        /* Low Power Mode  [!"$PCindex"!]  */
        ([!IF "$R0 = 'true'"!]ME_RUN_STBY_ACTIVE|[!ELSE!]ME_RUN_STBY_FROZEN|[!ENDIF!][!IF "$R1 = 'true'"!]ME_RUN_STOP_ACTIVE|[!ELSE!]ME_RUN_STOP_FROZEN|[!ENDIF!][!IF "$R2 = 'true'"!]ME_RUN_HALT_ACTIVE[!ELSE!]ME_RUN_HALT_FROZEN[!ENDIF!]),
 [!ENDCODE!]
 //Clock Monitor
[!ENDLOOP!][!//
[!VAR "Test_MaxCount" = "ecu:get('Mcu.McuModuleConfiguration.McuPeripheral.number')"!][!//


[!VAR "Test_Count1" = "0"!][!//

[!VAR "PCindex" = "@index"!][!//
    [!VAR "n" = "0"!][!//
 [!IF "node:exists(McuPeriphal/DSPI0/McuPerRunConfig) and contains(ecu:get('Mcu.McuPeripheral.List'),'PCTL4_DSPI0')"!][!//

 [!IF "num:i($Test_Count1) < num:i($Test_MaxCount)"!]

    [!VAR "TempMcuPerRunConfig1" = "McuPeriphal/DSPI0/McuPerRunConfig"!][!//
    [!LOOP "McuRunConfig/*"!][!//
    [!VAR "TempMcuPerRunConfig"="@name"!][!//
    [!IF "contains($TempMcuPerRunConfig1,$TempMcuPerRunConfig)"!][!//
    [!VAR "n" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "m" = "0"!][!//
    [!VAR "TempMcuPerLowPwrConfig1" = "McuPeriphal/DSPI0/McuPerLowPwrConfig"!][!//
    [!LOOP "McuLowPower/*"!][!//
    [!VAR "TempMcuPerLowPwrConfig"="@name"!][!//
    [!IF "contains($TempMcuPerLowPwrConfig1,$TempMcuPerLowPwrConfig)"!][!//
    [!VAR "m" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "set"!][!"num:i($n)+bit:shl(num:i($m),3)"!][!ENDVAR!]
        [!CODE!]        ME_PCTLn([!"concat('ME_RUN_PC',num:i($n))"!], [!"concat('ME_LP_PC',num:i($m))"!]),  /* DSPI0 */
 [!ENDCODE!]
[!ENDIF!] [!VAR "Test_Count1" = "num:i($Test_Count1) + 1"!]
[!ENDIF!]



[!VAR "PCindex" = "@index"!][!//
    [!VAR "n" = "0"!][!//
 [!IF "node:exists(McuPeriphal/DSPI1/McuPerRunConfig) and contains(ecu:get('Mcu.McuPeripheral.List'),'PCTL5_DSPI1')"!][!//

 [!IF "num:i($Test_Count1) < num:i($Test_MaxCount)"!]

    [!VAR "TempMcuPerRunConfig1" = "McuPeriphal/DSPI1/McuPerRunConfig"!][!//
    [!LOOP "McuRunConfig/*"!][!//
    [!VAR "TempMcuPerRunConfig"="@name"!][!//
    [!IF "contains($TempMcuPerRunConfig1,$TempMcuPerRunConfig)"!][!//
    [!VAR "n" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "m" = "0"!][!//
    [!VAR "TempMcuPerLowPwrConfig1" = "McuPeriphal/DSPI1/McuPerLowPwrConfig"!][!//
    [!LOOP "McuLowPower/*"!][!//
    [!VAR "TempMcuPerLowPwrConfig"="@name"!][!//
    [!IF "contains($TempMcuPerLowPwrConfig1,$TempMcuPerLowPwrConfig)"!][!//
    [!VAR "m" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "set"!][!"num:i($n)+bit:shl(num:i($m),3)"!][!ENDVAR!]
        [!CODE!]        ME_PCTLn([!"concat('ME_RUN_PC',num:i($n))"!], [!"concat('ME_LP_PC',num:i($m))"!]),  /* DSPI1 */
 [!ENDCODE!]
[!ENDIF!] [!VAR "Test_Count1" = "num:i($Test_Count1) + 1"!]
[!ENDIF!]



[!VAR "PCindex" = "@index"!][!//
    [!VAR "n" = "0"!][!//
 [!IF "node:exists(McuPeriphal/DSPI2/McuPerRunConfig) and contains(ecu:get('Mcu.McuPeripheral.List'),'PCTL6_DSPI2')"!]

 [!IF "num:i($Test_Count1) < num:i($Test_MaxCount)"!]

    [!VAR "TempMcuPerRunConfig1" = "McuPeriphal/DSPI2/McuPerRunConfig"!][!//
    [!LOOP "McuRunConfig/*"!][!//
    [!VAR "TempMcuPerRunConfig"="@name"!][!//
    [!IF "contains($TempMcuPerRunConfig1,$TempMcuPerRunConfig)"!][!//
    [!VAR "n" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "m" = "0"!][!//
    [!VAR "TempMcuPerLowPwrConfig1" = "McuPeriphal/DSPI2/McuPerLowPwrConfig"!][!//
    [!LOOP "McuLowPower/*"!][!//
    [!VAR "TempMcuPerLowPwrConfig"="@name"!][!//
    [!IF "contains($TempMcuPerLowPwrConfig1,$TempMcuPerLowPwrConfig)"!][!//
    [!VAR "m" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "set"!][!"num:i($n)+bit:shl(num:i($m),3)"!][!ENDVAR!]
        [!CODE!]        ME_PCTLn([!"concat('ME_RUN_PC',num:i($n))"!], [!"concat('ME_LP_PC',num:i($m))"!]),  /* DSPI2 */
 [!ENDCODE!]
[!ENDIF!] [!VAR "Test_Count1" = "num:i($Test_Count1) + 1"!]
[!ENDIF!]


[!VAR "PCindex" = "@index"!][!//
    [!VAR "n" = "0"!][!//
 [!IF "node:exists(McuPeriphal/DSPI3/McuPerRunConfig) and contains(ecu:get('Mcu.McuPeripheral.List'),'PCTL7_DSPI3')"!]

 [!IF "num:i($Test_Count1) < num:i($Test_MaxCount)"!]

    [!VAR "TempMcuPerRunConfig1" = "McuPeriphal/DSPI3/McuPerRunConfig"!][!//
    [!LOOP "McuRunConfig/*"!][!//
    [!VAR "TempMcuPerRunConfig"="@name"!][!//
    [!IF "contains($TempMcuPerRunConfig1,$TempMcuPerRunConfig)"!][!//
    [!VAR "n" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "m" = "0"!][!//
    [!VAR "TempMcuPerLowPwrConfig1" = "McuPeriphal/DSPI3/McuPerLowPwrConfig"!][!//
    [!LOOP "McuLowPower/*"!][!//
    [!VAR "TempMcuPerLowPwrConfig"="@name"!][!//
    [!IF "contains($TempMcuPerLowPwrConfig1,$TempMcuPerLowPwrConfig)"!][!//
    [!VAR "m" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "set"!][!"num:i($n)+bit:shl(num:i($m),3)"!][!ENDVAR!]
        [!CODE!]        ME_PCTLn([!"concat('ME_RUN_PC',num:i($n))"!], [!"concat('ME_LP_PC',num:i($m))"!]),  /* DSPI3 */
 [!ENDCODE!]
[!ENDIF!] [!VAR "Test_Count1" = "num:i($Test_Count1) + 1"!]
[!ENDIF!]


[!VAR "PCindex" = "@index"!][!//
    [!VAR "n" = "0"!][!//
 [!IF "node:exists(McuPeriphal/DSPI4/McuPerRunConfig) and contains(ecu:get('Mcu.McuPeripheral.List'),'PCTL8_DSPI4')"!]

 [!IF "num:i($Test_Count1) < num:i($Test_MaxCount)"!]

    [!VAR "TempMcuPerRunConfig1" = "McuPeriphal/DSPI4/McuPerRunConfig"!][!//
    [!LOOP "McuRunConfig/*"!][!//
    [!VAR "TempMcuPerRunConfig"="@name"!][!//
    [!IF "contains($TempMcuPerRunConfig1,$TempMcuPerRunConfig)"!][!//
    [!VAR "n" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "m" = "0"!][!//
    [!VAR "TempMcuPerLowPwrConfig1" = "McuPeriphal/DSPI4/McuPerLowPwrConfig"!][!//
    [!LOOP "McuLowPower/*"!][!//
    [!VAR "TempMcuPerLowPwrConfig"="@name"!][!//
    [!IF "contains($TempMcuPerLowPwrConfig1,$TempMcuPerLowPwrConfig)"!][!//
    [!VAR "m" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "set"!][!"num:i($n)+bit:shl(num:i($m),3)"!][!ENDVAR!]
        [!CODE!]        ME_PCTLn([!"concat('ME_RUN_PC',num:i($n))"!], [!"concat('ME_LP_PC',num:i($m))"!]),  /* DSPI4 */
 [!ENDCODE!]
[!ENDIF!] [!VAR "Test_Count1" = "num:i($Test_Count1) + 1"!]
[!ENDIF!]


[!VAR "PCindex" = "@index"!][!//
    [!VAR "n" = "0"!][!//
 [!IF "node:exists(McuPeriphal/DSPI5/McuPerRunConfig) and contains(ecu:get('Mcu.McuPeripheral.List'),'PCTL9_DSPI5')"!]

 [!IF "num:i($Test_Count1) < num:i($Test_MaxCount)"!]

    [!VAR "TempMcuPerRunConfig1" = "McuPeriphal/DSPI5/McuPerRunConfig"!][!//
    [!LOOP "McuRunConfig/*"!][!//
    [!VAR "TempMcuPerRunConfig"="@name"!][!//
    [!IF "contains($TempMcuPerRunConfig1,$TempMcuPerRunConfig)"!][!//
    [!VAR "n" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "m" = "0"!][!//
    [!VAR "TempMcuPerLowPwrConfig1" = "McuPeriphal/DSPI5/McuPerLowPwrConfig"!][!//
    [!LOOP "McuLowPower/*"!][!//
    [!VAR "TempMcuPerLowPwrConfig"="@name"!][!//
    [!IF "contains($TempMcuPerLowPwrConfig1,$TempMcuPerLowPwrConfig)"!][!//
    [!VAR "m" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "set"!][!"num:i($n)+bit:shl(num:i($m),3)"!][!ENDVAR!]
        [!CODE!]        ME_PCTLn([!"concat('ME_RUN_PC',num:i($n))"!], [!"concat('ME_LP_PC',num:i($m))"!]),  /* DSPI5 */
 [!ENDCODE!]
[!ENDIF!] [!VAR "Test_Count1" = "num:i($Test_Count1) + 1"!]
[!ENDIF!]


[!VAR "PCindex" = "@index"!][!//
    [!VAR "n" = "0"!][!//
 [!IF "node:exists(McuPeriphal/LIN_FLEX8/McuPerRunConfig) and contains(ecu:get('Mcu.McuPeripheral.List'),'PCTL12_LINFLEX8')"!]

 [!IF "num:i($Test_Count1) < num:i($Test_MaxCount)"!]

    [!VAR "TempMcuPerRunConfig1" = "McuPeriphal/LIN_FLEX8/McuPerRunConfig"!][!//
    [!LOOP "McuRunConfig/*"!][!//
    [!VAR "TempMcuPerRunConfig"="@name"!][!//
    [!IF "contains($TempMcuPerRunConfig1,$TempMcuPerRunConfig)"!][!//
    [!VAR "n" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "m" = "0"!][!//
    [!VAR "TempMcuPerLowPwrConfig1" = "McuPeriphal/LIN_FLEX8/McuPerLowPwrConfig"!][!//
    [!LOOP "McuLowPower/*"!][!//
    [!VAR "TempMcuPerLowPwrConfig"="@name"!][!//
    [!IF "contains($TempMcuPerLowPwrConfig1,$TempMcuPerLowPwrConfig)"!][!//
    [!VAR "m" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "set"!][!"num:i($n)+bit:shl(num:i($m),3)"!][!ENDVAR!]
        [!CODE!]        ME_PCTLn([!"concat('ME_RUN_PC',num:i($n))"!], [!"concat('ME_LP_PC',num:i($m))"!]),  /* LIN_FLEX8 */
 [!ENDCODE!]
[!ENDIF!] [!VAR "Test_Count1" = "num:i($Test_Count1) + 1"!]
[!ENDIF!]


[!VAR "PCindex" = "@index"!][!//
    [!VAR "n" = "0"!][!//
 [!IF "node:exists(McuPeriphal/LIN_FLEX9/McuPerRunConfig) and contains(ecu:get('Mcu.McuPeripheral.List'),'PCTL13_LINFLEX9')"!]

 [!IF "num:i($Test_Count1) < num:i($Test_MaxCount)"!]

    [!VAR "TempMcuPerRunConfig1" = "McuPeriphal/LIN_FLEX9/McuPerRunConfig"!][!//
    [!LOOP "McuRunConfig/*"!][!//
    [!VAR "TempMcuPerRunConfig"="@name"!][!//
    [!IF "contains($TempMcuPerRunConfig1,$TempMcuPerRunConfig)"!][!//
    [!VAR "n" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "m" = "0"!][!//
    [!VAR "TempMcuPerLowPwrConfig1" = "McuPeriphal/LIN_FLEX9/McuPerLowPwrConfig"!][!//
    [!LOOP "McuLowPower/*"!][!//
    [!VAR "TempMcuPerLowPwrConfig"="@name"!][!//
    [!IF "contains($TempMcuPerLowPwrConfig1,$TempMcuPerLowPwrConfig)"!][!//
    [!VAR "m" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "set"!][!"num:i($n)+bit:shl(num:i($m),3)"!][!ENDVAR!]
        [!CODE!]        ME_PCTLn([!"concat('ME_RUN_PC',num:i($n))"!], [!"concat('ME_LP_PC',num:i($m))"!]),  /* LIN_FLEX9 */
 [!ENDCODE!]
[!ENDIF!] [!VAR "Test_Count1" = "num:i($Test_Count1) + 1"!]
[!ENDIF!]


[!VAR "PCindex" = "@index"!][!//
    [!VAR "n" = "0"!][!//
 [!IF "node:exists(McuPeriphal/FlexCAN0/McuPerRunConfig) and contains(ecu:get('Mcu.McuPeripheral.List'),'PCTL16_FLEXCAN0')"!][!//

 [!IF "num:i($Test_Count1) < num:i($Test_MaxCount)"!]

    [!VAR "TempMcuPerRunConfig1" = "McuPeriphal/FlexCAN0/McuPerRunConfig"!][!//
    [!LOOP "McuRunConfig/*"!][!//
    [!VAR "TempMcuPerRunConfig"="@name"!][!//
    [!IF "contains($TempMcuPerRunConfig1,$TempMcuPerRunConfig)"!][!//
    [!VAR "n" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "m" = "0"!][!//
    [!VAR "TempMcuPerLowPwrConfig1" = "McuPeriphal/FlexCAN0/McuPerLowPwrConfig"!][!//
    [!LOOP "McuLowPower/*"!][!//
    [!VAR "TempMcuPerLowPwrConfig"="@name"!][!//
    [!IF "contains($TempMcuPerLowPwrConfig1,$TempMcuPerLowPwrConfig)"!][!//
    [!VAR "m" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "set"!][!"num:i($n)+bit:shl(num:i($m),3)"!][!ENDVAR!]
        [!CODE!]        ME_PCTLn([!"concat('ME_RUN_PC',num:i($n))"!], [!"concat('ME_LP_PC',num:i($m))"!]),  /* FlexCAN0 */
 [!ENDCODE!]
[!ENDIF!] [!VAR "Test_Count1" = "num:i($Test_Count1) + 1"!]
[!ENDIF!]


[!VAR "PCindex" = "@index"!][!//
    [!VAR "n" = "0"!][!//
 [!IF "node:exists(McuPeriphal/FlexCAN1/McuPerRunConfig) and contains(ecu:get('Mcu.McuPeripheral.List'),'PCTL17_FLEXCAN1')"!][!//

 [!IF "num:i($Test_Count1) < num:i($Test_MaxCount)"!]

    [!VAR "TempMcuPerRunConfig1" = "McuPeriphal/FlexCAN1/McuPerRunConfig"!][!//
    [!LOOP "McuRunConfig/*"!][!//
    [!VAR "TempMcuPerRunConfig"="@name"!][!//
    [!IF "contains($TempMcuPerRunConfig1,$TempMcuPerRunConfig)"!][!//
    [!VAR "n" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "m" = "0"!][!//
    [!VAR "TempMcuPerLowPwrConfig1" = "McuPeriphal/FlexCAN1/McuPerLowPwrConfig"!][!//
    [!LOOP "McuLowPower/*"!][!//
    [!VAR "TempMcuPerLowPwrConfig"="@name"!][!//
    [!IF "contains($TempMcuPerLowPwrConfig1,$TempMcuPerLowPwrConfig)"!][!//
    [!VAR "m" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "set"!][!"num:i($n)+bit:shl(num:i($m),3)"!][!ENDVAR!]
        [!CODE!]        ME_PCTLn([!"concat('ME_RUN_PC',num:i($n))"!], [!"concat('ME_LP_PC',num:i($m))"!]),  /* FlexCAN1 */
 [!ENDCODE!]
[!ENDIF!] [!VAR "Test_Count1" = "num:i($Test_Count1) + 1"!]
[!ENDIF!]


[!VAR "PCindex" = "@index"!][!//
    [!VAR "n" = "0"!][!//
 [!IF "node:exists(McuPeriphal/FlexCAN2/McuPerRunConfig) and contains(ecu:get('Mcu.McuPeripheral.List'),'PCTL18_FLEXCAN2')"!]

 [!IF "num:i($Test_Count1) < num:i($Test_MaxCount)"!]

    [!VAR "TempMcuPerRunConfig1" = "McuPeriphal/FlexCAN2/McuPerRunConfig"!][!//
    [!LOOP "McuRunConfig/*"!][!//
    [!VAR "TempMcuPerRunConfig"="@name"!][!//
    [!IF "contains($TempMcuPerRunConfig1,$TempMcuPerRunConfig)"!][!//
    [!VAR "n" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "m" = "0"!][!//
    [!VAR "TempMcuPerLowPwrConfig1" = "McuPeriphal/FlexCAN2/McuPerLowPwrConfig"!][!//
    [!LOOP "McuLowPower/*"!][!//
    [!VAR "TempMcuPerLowPwrConfig"="@name"!][!//
    [!IF "contains($TempMcuPerLowPwrConfig1,$TempMcuPerLowPwrConfig)"!][!//
    [!VAR "m" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "set"!][!"num:i($n)+bit:shl(num:i($m),3)"!][!ENDVAR!]
        [!CODE!]        ME_PCTLn([!"concat('ME_RUN_PC',num:i($n))"!], [!"concat('ME_LP_PC',num:i($m))"!]),  /* FlexCAN2 */
 [!ENDCODE!]
[!ENDIF!] [!VAR "Test_Count1" = "num:i($Test_Count1) + 1"!]
[!ENDIF!]


[!VAR "PCindex" = "@index"!][!//
    [!VAR "n" = "0"!][!//
 [!IF "node:exists(McuPeriphal/FlexCAN3/McuPerRunConfig) and contains(ecu:get('Mcu.McuPeripheral.List'),'PCTL19_FLEXCAN3')"!]

 [!IF "num:i($Test_Count1) < num:i($Test_MaxCount)"!]

    [!VAR "TempMcuPerRunConfig1" = "McuPeriphal/FlexCAN3/McuPerRunConfig"!][!//
    [!LOOP "McuRunConfig/*"!][!//
    [!VAR "TempMcuPerRunConfig"="@name"!][!//
    [!IF "contains($TempMcuPerRunConfig1,$TempMcuPerRunConfig)"!][!//
    [!VAR "n" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "m" = "0"!][!//
    [!VAR "TempMcuPerLowPwrConfig1" = "McuPeriphal/FlexCAN3/McuPerLowPwrConfig"!][!//
    [!LOOP "McuLowPower/*"!][!//
    [!VAR "TempMcuPerLowPwrConfig"="@name"!][!//
    [!IF "contains($TempMcuPerLowPwrConfig1,$TempMcuPerLowPwrConfig)"!][!//
    [!VAR "m" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "set"!][!"num:i($n)+bit:shl(num:i($m),3)"!][!ENDVAR!]
        [!CODE!]        ME_PCTLn([!"concat('ME_RUN_PC',num:i($n))"!], [!"concat('ME_LP_PC',num:i($m))"!]),  /* FlexCAN3 */
 [!ENDCODE!]
[!ENDIF!] [!VAR "Test_Count1" = "num:i($Test_Count1) + 1"!]
[!ENDIF!]


[!VAR "PCindex" = "@index"!][!//
    [!VAR "n" = "0"!][!//
 [!IF "node:exists(McuPeriphal/FlexCAN4/McuPerRunConfig) and contains(ecu:get('Mcu.McuPeripheral.List'),'PCTL20_FLEXCAN4')"!]

 [!IF "num:i($Test_Count1) < num:i($Test_MaxCount)"!]

    [!VAR "TempMcuPerRunConfig1" = "McuPeriphal/FlexCAN4/McuPerRunConfig"!][!//
    [!LOOP "McuRunConfig/*"!][!//
    [!VAR "TempMcuPerRunConfig"="@name"!][!//
    [!IF "contains($TempMcuPerRunConfig1,$TempMcuPerRunConfig)"!][!//
    [!VAR "n" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "m" = "0"!][!//
    [!VAR "TempMcuPerLowPwrConfig1" = "McuPeriphal/FlexCAN4/McuPerLowPwrConfig"!][!//
    [!LOOP "McuLowPower/*"!][!//
    [!VAR "TempMcuPerLowPwrConfig"="@name"!][!//
    [!IF "contains($TempMcuPerLowPwrConfig1,$TempMcuPerLowPwrConfig)"!][!//
    [!VAR "m" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "set"!][!"num:i($n)+bit:shl(num:i($m),3)"!][!ENDVAR!]
        [!CODE!]        ME_PCTLn([!"concat('ME_RUN_PC',num:i($n))"!], [!"concat('ME_LP_PC',num:i($m))"!]),  /* FlexCAN4 */
 [!ENDCODE!]
[!ENDIF!] [!VAR "Test_Count1" = "num:i($Test_Count1) + 1"!]
[!ENDIF!]


[!VAR "PCindex" = "@index"!][!//
    [!VAR "n" = "0"!][!//
 [!IF "node:exists(McuPeriphal/FlexCAN5/McuPerRunConfig) and contains(ecu:get('Mcu.McuPeripheral.List'),'PCTL21_FLEXCAN5')"!]

 [!IF "num:i($Test_Count1) < num:i($Test_MaxCount)"!]

    [!VAR "TempMcuPerRunConfig1" = "McuPeriphal/FlexCAN5/McuPerRunConfig"!][!//
    [!LOOP "McuRunConfig/*"!][!//
    [!VAR "TempMcuPerRunConfig"="@name"!][!//
    [!IF "contains($TempMcuPerRunConfig1,$TempMcuPerRunConfig)"!][!//
    [!VAR "n" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "m" = "0"!][!//
    [!VAR "TempMcuPerLowPwrConfig1" = "McuPeriphal/FlexCAN5/McuPerLowPwrConfig"!][!//
    [!LOOP "McuLowPower/*"!][!//
    [!VAR "TempMcuPerLowPwrConfig"="@name"!][!//
    [!IF "contains($TempMcuPerLowPwrConfig1,$TempMcuPerLowPwrConfig)"!][!//
    [!VAR "m" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "set"!][!"num:i($n)+bit:shl(num:i($m),3)"!][!ENDVAR!]
        [!CODE!]        ME_PCTLn([!"concat('ME_RUN_PC',num:i($n))"!], [!"concat('ME_LP_PC',num:i($m))"!]),  /* FlexCAN5 */
 [!ENDCODE!]
[!ENDIF!] [!VAR "Test_Count1" = "num:i($Test_Count1) + 1"!]
[!ENDIF!]


[!VAR "PCindex" = "@index"!][!//
    [!VAR "n" = "0"!][!//
 [!IF "node:exists(McuPeriphal/DMA_CH_MUX/McuPerRunConfig) and contains(ecu:get('Mcu.McuPeripheral.List'),'PCTL23_DMAMUX')"!]

 [!IF "num:i($Test_Count1) < num:i($Test_MaxCount)"!]

    [!VAR "TempMcuPerRunConfig1" = "McuPeriphal/DMA_CH_MUX/McuPerRunConfig"!][!//
    [!LOOP "McuRunConfig/*"!][!//
    [!VAR "TempMcuPerRunConfig"="@name"!][!//
    [!IF "contains($TempMcuPerRunConfig1,$TempMcuPerRunConfig)"!][!//
    [!VAR "n" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "m" = "0"!][!//
    [!VAR "TempMcuPerLowPwrConfig1" = "McuPeriphal/DMA_CH_MUX/McuPerLowPwrConfig"!][!//
    [!LOOP "McuLowPower/*"!][!//
    [!VAR "TempMcuPerLowPwrConfig"="@name"!][!//
    [!IF "contains($TempMcuPerLowPwrConfig1,$TempMcuPerLowPwrConfig)"!][!//
    [!VAR "m" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "set"!][!"num:i($n)+bit:shl(num:i($m),3)"!][!ENDVAR!]
        [!CODE!]        ME_PCTLn([!"concat('ME_RUN_PC',num:i($n))"!], [!"concat('ME_LP_PC',num:i($m))"!]),  /* DMA_CH_MUX */
 [!ENDCODE!]
[!ENDIF!] [!VAR "Test_Count1" = "num:i($Test_Count1) + 1"!]
[!ENDIF!]


[!VAR "PCindex" = "@index"!][!//
    [!VAR "n" = "0"!][!//
 [!IF "node:exists(McuPeriphal/ADC0/McuPerRunConfig) and contains(ecu:get('Mcu.McuPeripheral.List'),'PCTL32_ADC0')"!][!//

 [!IF "num:i($Test_Count1) < num:i($Test_MaxCount)"!]

    [!VAR "TempMcuPerRunConfig1" = "McuPeriphal/ADC0/McuPerRunConfig"!][!//
    [!LOOP "McuRunConfig/*"!][!//
    [!VAR "TempMcuPerRunConfig"="@name"!][!//
    [!IF "contains($TempMcuPerRunConfig1,$TempMcuPerRunConfig)"!][!//
    [!VAR "n" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "m" = "0"!][!//
    [!VAR "TempMcuPerLowPwrConfig1" = "McuPeriphal/ADC0/McuPerLowPwrConfig"!][!//
    [!LOOP "McuLowPower/*"!][!//
    [!VAR "TempMcuPerLowPwrConfig"="@name"!][!//
    [!IF "contains($TempMcuPerLowPwrConfig1,$TempMcuPerLowPwrConfig)"!][!//
    [!VAR "m" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "set"!][!"num:i($n)+bit:shl(num:i($m),3)"!][!ENDVAR!]
        [!CODE!]        ME_PCTLn([!"concat('ME_RUN_PC',num:i($n))"!], [!"concat('ME_LP_PC',num:i($m))"!]),  /* ADC0 */
 [!ENDCODE!]
[!ENDIF!] [!VAR "Test_Count1" = "num:i($Test_Count1) + 1"!]
[!ENDIF!]


[!VAR "PCindex" = "@index"!][!//
    [!VAR "n" = "0"!][!//
 [!IF "node:exists(McuPeriphal/ADC1/McuPerRunConfig) and contains(ecu:get('Mcu.McuPeripheral.List'),'PCTL33_ADC1')"!]

 [!IF "num:i($Test_Count1) < num:i($Test_MaxCount)"!]

    [!VAR "TempMcuPerRunConfig1" = "McuPeriphal/ADC1/McuPerRunConfig"!][!//
    [!LOOP "McuRunConfig/*"!][!//
    [!VAR "TempMcuPerRunConfig"="@name"!][!//
    [!IF "contains($TempMcuPerRunConfig1,$TempMcuPerRunConfig)"!][!//
    [!VAR "n" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "m" = "0"!][!//
    [!VAR "TempMcuPerLowPwrConfig1" = "McuPeriphal/ADC1/McuPerLowPwrConfig"!][!//
    [!LOOP "McuLowPower/*"!][!//
    [!VAR "TempMcuPerLowPwrConfig"="@name"!][!//
    [!IF "contains($TempMcuPerLowPwrConfig1,$TempMcuPerLowPwrConfig)"!][!//
    [!VAR "m" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "set"!][!"num:i($n)+bit:shl(num:i($m),3)"!][!ENDVAR!]
        [!CODE!]        ME_PCTLn([!"concat('ME_RUN_PC',num:i($n))"!], [!"concat('ME_LP_PC',num:i($m))"!]),  /* ADC1 */
 [!ENDCODE!]
[!ENDIF!] [!VAR "Test_Count1" = "num:i($Test_Count1) + 1"!]
[!ENDIF!]


[!VAR "PCindex" = "@index"!][!//
    [!VAR "n" = "0"!][!//
 [!IF "node:exists(McuPeriphal/I2C0/McuPerRunConfig) and contains(ecu:get('Mcu.McuPeripheral.List'),'PCTL44_I2C0')"!][!//

 [!IF "num:i($Test_Count1) < num:i($Test_MaxCount)"!]

    [!VAR "TempMcuPerRunConfig1" = "McuPeriphal/I2C0/McuPerRunConfig"!][!//
    [!LOOP "McuRunConfig/*"!][!//
    [!VAR "TempMcuPerRunConfig"="@name"!][!//
    [!IF "contains($TempMcuPerRunConfig1,$TempMcuPerRunConfig)"!][!//
    [!VAR "n" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "m" = "0"!][!//
    [!VAR "TempMcuPerLowPwrConfig1" = "McuPeriphal/I2C0/McuPerLowPwrConfig"!][!//
    [!LOOP "McuLowPower/*"!][!//
    [!VAR "TempMcuPerLowPwrConfig"="@name"!][!//
    [!IF "contains($TempMcuPerLowPwrConfig1,$TempMcuPerLowPwrConfig)"!][!//
    [!VAR "m" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "set"!][!"num:i($n)+bit:shl(num:i($m),3)"!][!ENDVAR!]
        [!CODE!]        ME_PCTLn([!"concat('ME_RUN_PC',num:i($n))"!], [!"concat('ME_LP_PC',num:i($m))"!]),  /* I2C0 */
 [!ENDCODE!]
[!ENDIF!] [!VAR "Test_Count1" = "num:i($Test_Count1) + 1"!]
[!ENDIF!]


[!VAR "PCindex" = "@index"!][!//
    [!VAR "n" = "0"!][!//
 [!IF "node:exists(McuPeriphal/LIN_FLEX0/McuPerRunConfig) and contains(ecu:get('Mcu.McuPeripheral.List'),'PCTL48_LINFLEX0')"!][!//

 [!IF "num:i($Test_Count1) < num:i($Test_MaxCount)"!]

    [!VAR "TempMcuPerRunConfig1" = "McuPeriphal/LIN_FLEX0/McuPerRunConfig"!][!//
    [!LOOP "McuRunConfig/*"!][!//
    [!VAR "TempMcuPerRunConfig"="@name"!][!//
    [!IF "contains($TempMcuPerRunConfig1,$TempMcuPerRunConfig)"!][!//
    [!VAR "n" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "m" = "0"!][!//
    [!VAR "TempMcuPerLowPwrConfig1" = "McuPeriphal/LIN_FLEX0/McuPerLowPwrConfig"!][!//
    [!LOOP "McuLowPower/*"!][!//
    [!VAR "TempMcuPerLowPwrConfig"="@name"!][!//
    [!IF "contains($TempMcuPerLowPwrConfig1,$TempMcuPerLowPwrConfig)"!][!//
    [!VAR "m" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "set"!][!"num:i($n)+bit:shl(num:i($m),3)"!][!ENDVAR!]
        [!CODE!]        ME_PCTLn([!"concat('ME_RUN_PC',num:i($n))"!], [!"concat('ME_LP_PC',num:i($m))"!]),  /* LIN_FLEX0 */
 [!ENDCODE!]
[!ENDIF!] [!VAR "Test_Count1" = "num:i($Test_Count1) + 1"!]
[!ENDIF!]


[!VAR "PCindex" = "@index"!][!//
    [!VAR "n" = "0"!][!//
 [!IF "node:exists(McuPeriphal/LIN_FLEX1/McuPerRunConfig) and contains(ecu:get('Mcu.McuPeripheral.List'),'PCTL49_LINFLEX1')"!][!//

 [!IF "num:i($Test_Count1) < num:i($Test_MaxCount)"!]

    [!VAR "TempMcuPerRunConfig1" = "McuPeriphal/LIN_FLEX1/McuPerRunConfig"!][!//
    [!LOOP "McuRunConfig/*"!][!//
    [!VAR "TempMcuPerRunConfig"="@name"!][!//
    [!IF "contains($TempMcuPerRunConfig1,$TempMcuPerRunConfig)"!][!//
    [!VAR "n" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "m" = "0"!][!//
    [!VAR "TempMcuPerLowPwrConfig1" = "McuPeriphal/LIN_FLEX1/McuPerLowPwrConfig"!][!//
    [!LOOP "McuLowPower/*"!][!//
    [!VAR "TempMcuPerLowPwrConfig"="@name"!][!//
    [!IF "contains($TempMcuPerLowPwrConfig1,$TempMcuPerLowPwrConfig)"!][!//
    [!VAR "m" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "set"!][!"num:i($n)+bit:shl(num:i($m),3)"!][!ENDVAR!]
        [!CODE!]        ME_PCTLn([!"concat('ME_RUN_PC',num:i($n))"!], [!"concat('ME_LP_PC',num:i($m))"!]),  /* LIN_FLEX1 */
 [!ENDCODE!]
[!ENDIF!] [!VAR "Test_Count1" = "num:i($Test_Count1) + 1"!]
[!ENDIF!]


[!VAR "PCindex" = "@index"!][!//
    [!VAR "n" = "0"!][!//
 [!IF "node:exists(McuPeriphal/LIN_FLEX2/McuPerRunConfig) and contains(ecu:get('Mcu.McuPeripheral.List'),'PCTL50_LINFLEX2')"!][!//

 [!IF "num:i($Test_Count1) < num:i($Test_MaxCount)"!]

    [!VAR "TempMcuPerRunConfig1" = "McuPeriphal/LIN_FLEX2/McuPerRunConfig"!][!//
    [!LOOP "McuRunConfig/*"!][!//
    [!VAR "TempMcuPerRunConfig"="@name"!][!//
    [!IF "contains($TempMcuPerRunConfig1,$TempMcuPerRunConfig)"!][!//
    [!VAR "n" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "m" = "0"!][!//
    [!VAR "TempMcuPerLowPwrConfig1" = "McuPeriphal/LIN_FLEX2/McuPerLowPwrConfig"!][!//
    [!LOOP "McuLowPower/*"!][!//
    [!VAR "TempMcuPerLowPwrConfig"="@name"!][!//
    [!IF "contains($TempMcuPerLowPwrConfig1,$TempMcuPerLowPwrConfig)"!][!//
    [!VAR "m" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "set"!][!"num:i($n)+bit:shl(num:i($m),3)"!][!ENDVAR!]
        [!CODE!]        ME_PCTLn([!"concat('ME_RUN_PC',num:i($n))"!], [!"concat('ME_LP_PC',num:i($m))"!]),  /* LIN_FLEX2 */
 [!ENDCODE!]
[!ENDIF!] [!VAR "Test_Count1" = "num:i($Test_Count1) + 1"!]
[!ENDIF!]


[!VAR "PCindex" = "@index"!][!//
    [!VAR "n" = "0"!][!//
 [!IF "node:exists(McuPeriphal/LIN_FLEX3/McuPerRunConfig) and contains(ecu:get('Mcu.McuPeripheral.List'),'PCTL51_LINFLEX3')"!]

 [!IF "num:i($Test_Count1) < num:i($Test_MaxCount)"!]

    [!VAR "TempMcuPerRunConfig1" = "McuPeriphal/LIN_FLEX3/McuPerRunConfig"!][!//
    [!LOOP "McuRunConfig/*"!][!//
    [!VAR "TempMcuPerRunConfig"="@name"!][!//
    [!IF "contains($TempMcuPerRunConfig1,$TempMcuPerRunConfig)"!][!//
    [!VAR "n" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "m" = "0"!][!//
    [!VAR "TempMcuPerLowPwrConfig1" = "McuPeriphal/LIN_FLEX3/McuPerLowPwrConfig"!][!//
    [!LOOP "McuLowPower/*"!][!//
    [!VAR "TempMcuPerLowPwrConfig"="@name"!][!//
    [!IF "contains($TempMcuPerLowPwrConfig1,$TempMcuPerLowPwrConfig)"!][!//
    [!VAR "m" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "set"!][!"num:i($n)+bit:shl(num:i($m),3)"!][!ENDVAR!]
        [!CODE!]        ME_PCTLn([!"concat('ME_RUN_PC',num:i($n))"!], [!"concat('ME_LP_PC',num:i($m))"!]),  /* LIN_FLEX3 */
 [!ENDCODE!]
[!ENDIF!] [!VAR "Test_Count1" = "num:i($Test_Count1) + 1"!]
[!ENDIF!]


[!VAR "PCindex" = "@index"!][!//
    [!VAR "n" = "0"!][!//
 [!IF "node:exists(McuPeriphal/LIN_FLEX4/McuPerRunConfig) and contains(ecu:get('Mcu.McuPeripheral.List'),'PCTL52_LINFLEX4')"!]

 [!IF "num:i($Test_Count1) < num:i($Test_MaxCount)"!]

    [!VAR "TempMcuPerRunConfig1" = "McuPeriphal/LIN_FLEX4/McuPerRunConfig"!][!//
    [!LOOP "McuRunConfig/*"!][!//
    [!VAR "TempMcuPerRunConfig"="@name"!][!//
    [!IF "contains($TempMcuPerRunConfig1,$TempMcuPerRunConfig)"!][!//
    [!VAR "n" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "m" = "0"!][!//
    [!VAR "TempMcuPerLowPwrConfig1" = "McuPeriphal/LIN_FLEX4/McuPerLowPwrConfig"!][!//
    [!LOOP "McuLowPower/*"!][!//
    [!VAR "TempMcuPerLowPwrConfig"="@name"!][!//
    [!IF "contains($TempMcuPerLowPwrConfig1,$TempMcuPerLowPwrConfig)"!][!//
    [!VAR "m" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "set"!][!"num:i($n)+bit:shl(num:i($m),3)"!][!ENDVAR!]
        [!CODE!]        ME_PCTLn([!"concat('ME_RUN_PC',num:i($n))"!], [!"concat('ME_LP_PC',num:i($m))"!]),  /* LIN_FLEX4 */
 [!ENDCODE!]
[!ENDIF!] [!VAR "Test_Count1" = "num:i($Test_Count1) + 1"!]
[!ENDIF!]


[!VAR "PCindex" = "@index"!][!//
    [!VAR "n" = "0"!][!//
 [!IF "node:exists(McuPeriphal/LIN_FLEX5/McuPerRunConfig) and contains(ecu:get('Mcu.McuPeripheral.List'),'PCTL53_LINFLEX5')"!]

 [!IF "num:i($Test_Count1) < num:i($Test_MaxCount)"!]

    [!VAR "TempMcuPerRunConfig1" = "McuPeriphal/LIN_FLEX5/McuPerRunConfig"!][!//
    [!LOOP "McuRunConfig/*"!][!//
    [!VAR "TempMcuPerRunConfig"="@name"!][!//
    [!IF "contains($TempMcuPerRunConfig1,$TempMcuPerRunConfig)"!][!//
    [!VAR "n" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "m" = "0"!][!//
    [!VAR "TempMcuPerLowPwrConfig1" = "McuPeriphal/LIN_FLEX5/McuPerLowPwrConfig"!][!//
    [!LOOP "McuLowPower/*"!][!//
    [!VAR "TempMcuPerLowPwrConfig"="@name"!][!//
    [!IF "contains($TempMcuPerLowPwrConfig1,$TempMcuPerLowPwrConfig)"!][!//
    [!VAR "m" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "set"!][!"num:i($n)+bit:shl(num:i($m),3)"!][!ENDVAR!]
        [!CODE!]        ME_PCTLn([!"concat('ME_RUN_PC',num:i($n))"!], [!"concat('ME_LP_PC',num:i($m))"!]),  /* LIN_FLEX5 */
 [!ENDCODE!]
[!ENDIF!] [!VAR "Test_Count1" = "num:i($Test_Count1) + 1"!]
[!ENDIF!]


[!VAR "PCindex" = "@index"!][!//
    [!VAR "n" = "0"!][!//
 [!IF "node:exists(McuPeriphal/LIN_FLEX6/McuPerRunConfig) and contains(ecu:get('Mcu.McuPeripheral.List'),'PCTL54_LINFLEX6')"!]

 [!IF "num:i($Test_Count1) < num:i($Test_MaxCount)"!]

    [!VAR "TempMcuPerRunConfig1" = "McuPeriphal/LIN_FLEX6/McuPerRunConfig"!][!//
    [!LOOP "McuRunConfig/*"!][!//
    [!VAR "TempMcuPerRunConfig"="@name"!][!//
    [!IF "contains($TempMcuPerRunConfig1,$TempMcuPerRunConfig)"!][!//
    [!VAR "n" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "m" = "0"!][!//
    [!VAR "TempMcuPerLowPwrConfig1" = "McuPeriphal/LIN_FLEX6/McuPerLowPwrConfig"!][!//
    [!LOOP "McuLowPower/*"!][!//
    [!VAR "TempMcuPerLowPwrConfig"="@name"!][!//
    [!IF "contains($TempMcuPerLowPwrConfig1,$TempMcuPerLowPwrConfig)"!][!//
    [!VAR "m" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "set"!][!"num:i($n)+bit:shl(num:i($m),3)"!][!ENDVAR!]
        [!CODE!]        ME_PCTLn([!"concat('ME_RUN_PC',num:i($n))"!], [!"concat('ME_LP_PC',num:i($m))"!]),  /* LIN_FLEX6 */
 [!ENDCODE!]
[!ENDIF!] [!VAR "Test_Count1" = "num:i($Test_Count1) + 1"!]
[!ENDIF!]


[!VAR "PCindex" = "@index"!][!//
    [!VAR "n" = "0"!][!//
 [!IF "node:exists(McuPeriphal/LIN_FLEX7/McuPerRunConfig) and contains(ecu:get('Mcu.McuPeripheral.List'),'PCTL55_LINFLEX7')"!]

 [!IF "num:i($Test_Count1) < num:i($Test_MaxCount)"!]

    [!VAR "TempMcuPerRunConfig1" = "McuPeriphal/LIN_FLEX7/McuPerRunConfig"!][!//
    [!LOOP "McuRunConfig/*"!][!//
    [!VAR "TempMcuPerRunConfig"="@name"!][!//
    [!IF "contains($TempMcuPerRunConfig1,$TempMcuPerRunConfig)"!][!//
    [!VAR "n" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "m" = "0"!][!//
    [!VAR "TempMcuPerLowPwrConfig1" = "McuPeriphal/LIN_FLEX7/McuPerLowPwrConfig"!][!//
    [!LOOP "McuLowPower/*"!][!//
    [!VAR "TempMcuPerLowPwrConfig"="@name"!][!//
    [!IF "contains($TempMcuPerLowPwrConfig1,$TempMcuPerLowPwrConfig)"!][!//
    [!VAR "m" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "set"!][!"num:i($n)+bit:shl(num:i($m),3)"!][!ENDVAR!]
        [!CODE!]        ME_PCTLn([!"concat('ME_RUN_PC',num:i($n))"!], [!"concat('ME_LP_PC',num:i($m))"!]),  /* LIN_FLEX7 */
 [!ENDCODE!]
[!ENDIF!] [!VAR "Test_Count1" = "num:i($Test_Count1) + 1"!]
[!ENDIF!]


[!VAR "PCindex" = "@index"!][!//
    [!VAR "n" = "0"!][!//
 [!IF "node:exists(McuPeriphal/CTU/McuPerRunConfig) and contains(ecu:get('Mcu.McuPeripheral.List'),'PCTL57_CTU')"!][!//

 [!IF "num:i($Test_Count1) < num:i($Test_MaxCount)"!]

    [!VAR "TempMcuPerRunConfig1" = "McuPeriphal/CTU/McuPerRunConfig"!][!//
    [!LOOP "McuRunConfig/*"!][!//
    [!VAR "TempMcuPerRunConfig"="@name"!][!//
    [!IF "contains($TempMcuPerRunConfig1,$TempMcuPerRunConfig)"!][!//
    [!VAR "n" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "m" = "0"!][!//
    [!VAR "TempMcuPerLowPwrConfig1" = "McuPeriphal/CTU/McuPerLowPwrConfig"!][!//
    [!LOOP "McuLowPower/*"!][!//
    [!VAR "TempMcuPerLowPwrConfig"="@name"!][!//
    [!IF "contains($TempMcuPerLowPwrConfig1,$TempMcuPerLowPwrConfig)"!][!//
    [!VAR "m" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "set"!][!"num:i($n)+bit:shl(num:i($m),3)"!][!ENDVAR!]
        [!CODE!]        ME_PCTLn([!"concat('ME_RUN_PC',num:i($n))"!], [!"concat('ME_LP_PC',num:i($m))"!]),  /* CTU */
 [!ENDCODE!]
[!ENDIF!] [!VAR "Test_Count1" = "num:i($Test_Count1) + 1"!]
[!ENDIF!]


[!VAR "PCindex" = "@index"!][!//
    [!VAR "n" = "0"!][!//
 [!IF "node:exists(McuPeriphal/CANSampler/McuPerRunConfig) and contains(ecu:get('Mcu.McuPeripheral.List'),'PCTL60_CANSC')"!][!//

 [!IF "num:i($Test_Count1) < num:i($Test_MaxCount)"!]

    [!VAR "TempMcuPerRunConfig1" = "McuPeriphal/CANSampler/McuPerRunConfig"!][!//
    [!LOOP "McuRunConfig/*"!][!//
    [!VAR "TempMcuPerRunConfig"="@name"!][!//
    [!IF "contains($TempMcuPerRunConfig1,$TempMcuPerRunConfig)"!][!//
    [!VAR "n" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "m" = "0"!][!//
    [!VAR "TempMcuPerLowPwrConfig1" = "McuPeriphal/CANSampler/McuPerLowPwrConfig"!][!//
    [!LOOP "McuLowPower/*"!][!//
    [!VAR "TempMcuPerLowPwrConfig"="@name"!][!//
    [!IF "contains($TempMcuPerLowPwrConfig1,$TempMcuPerLowPwrConfig)"!][!//
    [!VAR "m" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "set"!][!"num:i($n)+bit:shl(num:i($m),3)"!][!ENDVAR!]
        [!CODE!]        ME_PCTLn([!"concat('ME_RUN_PC',num:i($n))"!], [!"concat('ME_LP_PC',num:i($m))"!]),  /* CANSampler */
 [!ENDCODE!]
[!ENDIF!] [!VAR "Test_Count1" = "num:i($Test_Count1) + 1"!]
[!ENDIF!]


[!VAR "PCindex" = "@index"!][!//
    [!VAR "n" = "0"!][!//
 [!IF "node:exists(McuPeriphal/SIUL/McuPerRunConfig) and contains(ecu:get('Mcu.McuPeripheral.List'),'PCTL68_SIUL')"!][!//

 [!IF "num:i($Test_Count1) < num:i($Test_MaxCount)"!]

    [!VAR "TempMcuPerRunConfig1" = "McuPeriphal/SIUL/McuPerRunConfig"!][!//
    [!LOOP "McuRunConfig/*"!][!//
    [!VAR "TempMcuPerRunConfig"="@name"!][!//
    [!IF "contains($TempMcuPerRunConfig1,$TempMcuPerRunConfig)"!][!//
    [!VAR "n" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "m" = "0"!][!//
    [!VAR "TempMcuPerLowPwrConfig1" = "McuPeriphal/SIUL/McuPerLowPwrConfig"!][!//
    [!LOOP "McuLowPower/*"!][!//
    [!VAR "TempMcuPerLowPwrConfig"="@name"!][!//
    [!IF "contains($TempMcuPerLowPwrConfig1,$TempMcuPerLowPwrConfig)"!][!//
    [!VAR "m" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "set"!][!"num:i($n)+bit:shl(num:i($m),3)"!][!ENDVAR!]
        [!CODE!]        ME_PCTLn([!"concat('ME_RUN_PC',num:i($n))"!], [!"concat('ME_LP_PC',num:i($m))"!]),  /* SIUL */
 [!ENDCODE!]
[!ENDIF!] [!VAR "Test_Count1" = "num:i($Test_Count1) + 1"!]
[!ENDIF!]


[!VAR "PCindex" = "@index"!][!//
    [!VAR "n" = "0"!][!//
 [!IF "node:exists(McuPeriphal/WKPU/McuPerRunConfig) and contains(ecu:get('Mcu.McuPeripheral.List'),'PCTL69_WKPU')"!][!//

 [!IF "num:i($Test_Count1) < num:i($Test_MaxCount)"!]

    [!VAR "TempMcuPerRunConfig1" = "McuPeriphal/WKPU/McuPerRunConfig"!][!//
    [!LOOP "McuRunConfig/*"!][!//
    [!VAR "TempMcuPerRunConfig"="@name"!][!//
    [!IF "contains($TempMcuPerRunConfig1,$TempMcuPerRunConfig)"!][!//
    [!VAR "n" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "m" = "0"!][!//
    [!VAR "TempMcuPerLowPwrConfig1" = "McuPeriphal/WKPU/McuPerLowPwrConfig"!][!//
    [!LOOP "McuLowPower/*"!][!//
    [!VAR "TempMcuPerLowPwrConfig"="@name"!][!//
    [!IF "contains($TempMcuPerLowPwrConfig1,$TempMcuPerLowPwrConfig)"!][!//
    [!VAR "m" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "set"!][!"num:i($n)+bit:shl(num:i($m),3)"!][!ENDVAR!]
        [!CODE!]        ME_PCTLn([!"concat('ME_RUN_PC',num:i($n))"!], [!"concat('ME_LP_PC',num:i($m))"!]),  /* WKPU */
 [!ENDCODE!]
[!ENDIF!] [!VAR "Test_Count1" = "num:i($Test_Count1) + 1"!]
[!ENDIF!]


[!VAR "PCindex" = "@index"!][!//
    [!VAR "n" = "0"!][!//
 [!IF "node:exists(McuPeriphal/eMIOS0/McuPerRunConfig) and contains(ecu:get('Mcu.McuPeripheral.List'),'PCTL72_EMIOS0')"!][!//

 [!IF "num:i($Test_Count1) < num:i($Test_MaxCount)"!]

    [!VAR "TempMcuPerRunConfig1" = "McuPeriphal/eMIOS0/McuPerRunConfig"!][!//
    [!LOOP "McuRunConfig/*"!][!//
    [!VAR "TempMcuPerRunConfig"="@name"!][!//
    [!IF "contains($TempMcuPerRunConfig1,$TempMcuPerRunConfig)"!][!//
    [!VAR "n" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "m" = "0"!][!//
    [!VAR "TempMcuPerLowPwrConfig1" = "McuPeriphal/eMIOS0/McuPerLowPwrConfig"!][!//
    [!LOOP "McuLowPower/*"!][!//
    [!VAR "TempMcuPerLowPwrConfig"="@name"!][!//
    [!IF "contains($TempMcuPerLowPwrConfig1,$TempMcuPerLowPwrConfig)"!][!//
    [!VAR "m" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "set"!][!"num:i($n)+bit:shl(num:i($m),3)"!][!ENDVAR!]
        [!CODE!]        ME_PCTLn([!"concat('ME_RUN_PC',num:i($n))"!], [!"concat('ME_LP_PC',num:i($m))"!]),  /* eMIOS0 */
 [!ENDCODE!]
[!ENDIF!] [!VAR "Test_Count1" = "num:i($Test_Count1) + 1"!]
[!ENDIF!]


[!VAR "PCindex" = "@index"!][!//
    [!VAR "n" = "0"!][!//
 [!IF "node:exists(McuPeriphal/eMIOS1/McuPerRunConfig) and contains(ecu:get('Mcu.McuPeripheral.List'),'PCTL73_EMIOS1')"!][!//

 [!IF "num:i($Test_Count1) < num:i($Test_MaxCount)"!]

    [!VAR "TempMcuPerRunConfig1" = "McuPeriphal/eMIOS1/McuPerRunConfig"!][!//
    [!LOOP "McuRunConfig/*"!][!//
    [!VAR "TempMcuPerRunConfig"="@name"!][!//
    [!IF "contains($TempMcuPerRunConfig1,$TempMcuPerRunConfig)"!][!//
    [!VAR "n" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "m" = "0"!][!//
    [!VAR "TempMcuPerLowPwrConfig1" = "McuPeriphal/eMIOS1/McuPerLowPwrConfig"!][!//
    [!LOOP "McuLowPower/*"!][!//
    [!VAR "TempMcuPerLowPwrConfig"="@name"!][!//
    [!IF "contains($TempMcuPerLowPwrConfig1,$TempMcuPerLowPwrConfig)"!][!//
    [!VAR "m" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "set"!][!"num:i($n)+bit:shl(num:i($m),3)"!][!ENDVAR!]
        [!CODE!]        ME_PCTLn([!"concat('ME_RUN_PC',num:i($n))"!], [!"concat('ME_LP_PC',num:i($m))"!]),  /* eMIOS1 */
 [!ENDCODE!]
[!ENDIF!] [!VAR "Test_Count1" = "num:i($Test_Count1) + 1"!]
[!ENDIF!]


[!VAR "PCindex" = "@index"!][!//
    [!VAR "n" = "0"!][!//
 [!IF "node:exists(McuPeriphal/RTC_API/McuPerRunConfig) and contains(ecu:get('Mcu.McuPeripheral.List'),'PCTL91_RTCAPI')"!][!//

 [!IF "num:i($Test_Count1) < num:i($Test_MaxCount)"!]

    [!VAR "TempMcuPerRunConfig1" = "McuPeriphal/RTC_API/McuPerRunConfig"!][!//
    [!LOOP "McuRunConfig/*"!][!//
    [!VAR "TempMcuPerRunConfig"="@name"!][!//
    [!IF "contains($TempMcuPerRunConfig1,$TempMcuPerRunConfig)"!][!//
    [!VAR "n" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "m" = "0"!][!//
    [!VAR "TempMcuPerLowPwrConfig1" = "McuPeriphal/RTC_API/McuPerLowPwrConfig"!][!//
    [!LOOP "McuLowPower/*"!][!//
    [!VAR "TempMcuPerLowPwrConfig"="@name"!][!//
    [!IF "contains($TempMcuPerLowPwrConfig1,$TempMcuPerLowPwrConfig)"!][!//
    [!VAR "m" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "set"!][!"num:i($n)+bit:shl(num:i($m),3)"!][!ENDVAR!]
        [!CODE!]        ME_PCTLn([!"concat('ME_RUN_PC',num:i($n))"!], [!"concat('ME_LP_PC',num:i($m))"!]),  /* RTC_API */
 [!ENDCODE!]
[!ENDIF!] [!VAR "Test_Count1" = "num:i($Test_Count1) + 1"!]
[!ENDIF!]


[!VAR "PCindex" = "@index"!][!//
    [!VAR "n" = "0"!][!//
 [!IF "node:exists(McuPeriphal/PIT_RTI/McuPerRunConfig) and contains(ecu:get('Mcu.McuPeripheral.List'),'PCTL92_PIT')"!][!//

 [!IF "num:i($Test_Count1) < num:i($Test_MaxCount)"!]

    [!VAR "TempMcuPerRunConfig1" = "McuPeriphal/PIT_RTI/McuPerRunConfig"!][!//
    [!LOOP "McuRunConfig/*"!][!//
    [!VAR "TempMcuPerRunConfig"="@name"!][!//
    [!IF "contains($TempMcuPerRunConfig1,$TempMcuPerRunConfig)"!][!//
    [!VAR "n" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "m" = "0"!][!//
    [!VAR "TempMcuPerLowPwrConfig1" = "McuPeriphal/PIT_RTI/McuPerLowPwrConfig"!][!//
    [!LOOP "McuLowPower/*"!][!//
    [!VAR "TempMcuPerLowPwrConfig"="@name"!][!//
    [!IF "contains($TempMcuPerLowPwrConfig1,$TempMcuPerLowPwrConfig)"!][!//
    [!VAR "m" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "set"!][!"num:i($n)+bit:shl(num:i($m),3)"!][!ENDVAR!]
        [!CODE!]        ME_PCTLn([!"concat('ME_RUN_PC',num:i($n))"!], [!"concat('ME_LP_PC',num:i($m))"!]),  /* PIT_RTI */
 [!ENDCODE!]
[!ENDIF!] [!VAR "Test_Count1" = "num:i($Test_Count1) + 1"!]
[!ENDIF!]


[!VAR "PCindex" = "@index"!][!//
    [!VAR "n" = "0"!][!//
 [!IF "node:exists(McuPeriphal/CMU0/McuPerRunConfig) and contains(ecu:get('Mcu.McuPeripheral.List'),'PCTL104_CMU0')"!][!//

 [!IF "num:i($Test_Count1) < num:i($Test_MaxCount)"!]

    [!VAR "TempMcuPerRunConfig1" = "McuPeriphal/CMU0/McuPerRunConfig"!][!//
    [!LOOP "McuRunConfig/*"!][!//
    [!VAR "TempMcuPerRunConfig"="@name"!][!//
    [!IF "contains($TempMcuPerRunConfig1,$TempMcuPerRunConfig)"!][!//
    [!VAR "n" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "m" = "0"!][!//
    [!VAR "TempMcuPerLowPwrConfig1" = "McuPeriphal/CMU0/McuPerLowPwrConfig"!][!//
    [!LOOP "McuLowPower/*"!][!//
    [!VAR "TempMcuPerLowPwrConfig"="@name"!][!//
    [!IF "contains($TempMcuPerLowPwrConfig1,$TempMcuPerLowPwrConfig)"!][!//
    [!VAR "m" = "@index"!][!//
    [!ENDIF!][!//
    [!ENDLOOP!][!//
    [!VAR "set"!][!"num:i($n)+bit:shl(num:i($m),3)"!][!ENDVAR!]
        [!CODE!]        ME_PCTLn([!"concat('ME_RUN_PC',num:i($n))"!], [!"concat('ME_LP_PC',num:i($m))"!]),  /* CMU0 */
 [!ENDCODE!]
[!ENDIF!] [!VAR "Test_Count1" = "num:i($Test_Count1) + 1"!]
[!ENDIF!]

 [!VAR "ModeEnabled"!][!CALL "MODE"!][!ENDVAR!]
        [!CODE!]
        ([!IF "McuEnableMode/McuModeRun3"!]ME_ME_RUN3_ENABLE|[!ELSE!]ME_ME_RUN3_DISABLE|[!ENDIF!]
            [!IF "McuEnableMode/McuModeSTBY"!]ME_ME_STANDBY_ENABLE|[!ELSE!]ME_ME_STANDBY_DISABLE|[!ENDIF!]
            [!IF "McuEnableMode/McuModeStop"!]ME_ME_STOP_ENABLE|[!ELSE!]ME_ME_STOP_DISABLE|[!ENDIF!]
            [!IF "McuEnableMode/McuModeHalt"!]ME_ME_HALT_ENABLE|[!ELSE!]ME_ME_HALT_DISABLE|[!ENDIF!]
            [!IF "McuEnableMode/McuModeRun2"!]ME_ME_RUN2_ENABLE|[!ELSE!]ME_ME_RUN2_DISABLE|[!ENDIF!]
            [!IF "McuEnableMode/McuModeRun1"!]ME_ME_RUN1_ENABLE[!ELSE!]ME_ME_RUN1_DISABLE[!ENDIF!]),    /*ModeEnabled                                */
 [!ENDCODE!]

 [!VAR "SAFE"!][!CALL "RESET", "TYPE"="'SAFE'"!][!ENDVAR!]
 [!VAR "PHASE"!][!CALL "RESET", "TYPE"="'PHASE'"!][!ENDVAR!]
 [!VAR "PIN"!][!CALL "RESET", "TYPE"="'PIN'"!][!ENDVAR!]
 [!VAR "DESTRESET"!][!CALL "RESET", "TYPE"="'DESTRESET'"!][!ENDVAR!]
 [!VAR "DESTSAFE"!][!CALL "RESET", "TYPE"="'DESTSAFE'"!][!ENDVAR!]

[!NOCODE!][!//
[!VAR "FERD_JTAG" = "1"!]
[!VAR "FERD_CORE" = "1"!]
[!VAR "FERD_SOFT" = "1"!]
[!VAR "FERD_CHKSTOP" = "1"!]
[!VAR "FERD_PLL0" = "1"!]
[!VAR "FERD_CMU0_OLR" = "1"!]
[!VAR "FERD_CMU0_FHL" = "1"!]
[!VAR "FERD_LVD45" = "1"!]
[!VAR "FERD_FLASH" = "1"!]
[!VAR "FERD_EXR" = "1"!]

[!IF "McuResetSource/JTAG/McuEnableReset"!][!//
[!VAR "FERD_JTAG" = "1"!][!ELSE!][!VAR "FERD_JTAG" = "0"!][!ENDIF!][!//
[!IF "McuResetSource/CORE/McuEnableReset"!][!//
[!VAR "FERD_CORE" = "1"!][!ELSE!][!VAR "FERD_CORE" = "0"!][!ENDIF!][!//
[!IF "McuResetSource/SOFT/McuEnableReset"!][!//
[!VAR "FERD_SOFT" = "1"!][!ELSE!][!VAR "FERD_SOFT" = "0"!][!ENDIF!][!//
[!IF "McuResetSource/CHKSTOP/McuEnableReset"!][!//
[!VAR "FERD_CHKSTOP" = "1"!][!ELSE!][!VAR "FERD_CHKSTOP" = "0"!][!ENDIF!][!//
[!IF "McuResetSource/PLL/McuEnableReset"!][!//
[!VAR "FERD_PLL0" = "1"!][!ELSE!][!VAR "FERD_PLL0" = "0"!][!ENDIF!][!//
[!IF "McuResetSource/CMU0_OLR/McuEnableReset"!][!//
[!VAR "FERD_CMU0_OLR" = "1"!][!ELSE!][!VAR "FERD_CMU0_OLR" = "0"!][!ENDIF!][!//
[!IF "McuResetSource/CMU0_FHL/McuEnableReset"!][!//
[!VAR "FERD_CMU0_FHL" = "1"!][!ELSE!][!VAR "FERD_CMU0_FHL" = "0"!][!ENDIF!][!//
[!IF "McuResetSource/LVD45/McuEnableReset"!][!//
[!VAR "FERD_LVD45" = "1"!][!ELSE!][!VAR "FERD_LVD45" = "0"!][!ENDIF!][!//
[!IF "McuResetSource/FLASH/McuEnableReset"!][!//
[!VAR "FERD_FLASH" = "1"!][!ELSE!][!VAR "FERD_FLASH" = "0"!][!ENDIF!][!//
[!IF "McuResetSource/EXR/McuEnableReset"!][!//
[!VAR "FERD_EXR" = "1"!][!ELSE!][!VAR "FERD_EXR" = "0"!][!ENDIF!][!//
[!ENDNOCODE!][!//

[!NOCODE!][!//
[!VAR "FEAR_JTAG" = "0"!]
[!VAR "FEAR_CORE" = "0"!]
[!VAR "FEAR_SOFT" = "0"!]
[!VAR "FEAR_CHKSTOP" = "0"!]
[!VAR "FEAR_PLL0" = "0"!]
[!VAR "FEAR_CMU0_OLR" = "0"!]
[!VAR "FEAR_CMU0_FHL" = "0"!]
[!VAR "FEAR_LVD45" = "0"!]
[!VAR "FEAR_FLASH" = "0"!]
[!VAR "FEAR_EXR" = "0"!]

[!IF "node:exists(McuResetSource/JTAG/McuEnableInterrupt)"!][!//
[!IF "McuResetSource/JTAG/McuEnableInterrupt"!][!//
[!VAR "FEAR_JTAG" = "1"!][!ELSE!][!VAR "FEAR_JTAG" = "0"!][!ENDIF!][!//
[!ENDIF!][!//
[!IF "node:exists(McuResetSource/CORE/McuEnableInterrupt)"!][!//
[!IF "McuResetSource/CORE/McuEnableInterrupt"!][!//
[!VAR "FEAR_CORE" = "1"!][!ELSE!][!VAR "FEAR_CORE" = "0"!][!ENDIF!][!//
[!ENDIF!][!//
[!IF "node:exists(McuResetSource/SOFT/McuEnableInterrupt)"!][!//
[!IF "McuResetSource/SOFT/McuEnableInterrupt"!][!//
[!VAR "FEAR_SOFT" = "1"!][!ELSE!][!VAR "FEAR_SOFT" = "0"!][!ENDIF!][!//
[!ENDIF!][!//
[!IF "node:exists(McuResetSource/CHKSTOP/McuEnableInterrupt)"!][!//
[!IF "McuResetSource/CHKSTOP/McuEnableInterrupt"!][!//
[!VAR "FEAR_CHKSTOP" = "1"!][!ELSE!][!VAR "FEAR_CHKSTOP" = "0"!][!ENDIF!][!//
[!ENDIF!][!//
[!IF "node:exists(McuResetSource/PLL/McuEnableInterrupt)"!][!//
[!IF "McuResetSource/PLL/McuEnableInterrupt"!][!//
[!VAR "FEAR_PLL0" = "1"!][!ELSE!][!VAR "FEAR_PLL0" = "0"!][!ENDIF!][!//
[!ENDIF!][!//
[!IF "node:exists(McuResetSource/CMU0_OLR/McuEnableInterrupt)"!][!//
[!IF "McuResetSource/CMU0_OLR/McuEnableInterrupt"!][!//
[!VAR "FEAR_CMU0_OLR" = "1"!][!ELSE!][!VAR "FEAR_CMU0_OLR" = "0"!][!ENDIF!][!//
[!ENDIF!][!//
[!IF "node:exists(McuResetSource/CMU0_FHL/McuEnableInterrupt)"!][!//
[!IF "McuResetSource/CMU0_FHL/McuEnableInterrupt"!][!//
[!VAR "FEAR_CMU0_FHL" = "1"!][!ELSE!][!VAR "FEAR_CMU0_FHL" = "0"!][!ENDIF!][!//
[!ENDIF!][!//
[!IF "node:exists(McuResetSource/LVD45/McuEnableInterrupt)"!][!//
[!IF "McuResetSource/LVD45/McuEnableInterrupt"!][!//
[!VAR "FEAR_LVD45" = "1"!][!ELSE!][!VAR "FEAR_LVD45" = "0"!][!ENDIF!][!//
[!ENDIF!][!//
[!IF "node:exists(McuResetSource/FLASH/McuEnableInterrupt)"!][!//
[!IF "McuResetSource/FLASH/McuEnableInterrupt"!][!//
[!VAR "FEAR_FLASH" = "1"!][!ELSE!][!VAR "FEAR_FLASH" = "0"!][!ENDIF!][!//
[!ENDIF!][!//
[!IF "node:exists(McuResetSource/EXR/McuEnableInterrupt)"!][!//
[!IF "McuResetSource/EXR/McuEnableInterrupt"!][!//
[!VAR "FEAR_EXR" = "1"!][!ELSE!][!VAR "FEAR_EXR" = "0"!][!ENDIF!][!//
[!ENDIF!][!//
[!ENDNOCODE!][!//

[!NOCODE!][!//
[!VAR "FESS_JTAG" = "1"!]
[!VAR "FESS_CORE" = "1"!]
[!VAR "FESS_SOFT" = "1"!]
[!VAR "FESS_CHKSTOP" = "1"!]
[!VAR "FESS_PLL0" = "1"!]
[!VAR "FESS_CMU0_OLR" = "1"!]
[!VAR "FESS_CMU0_FHL" = "1"!]
[!VAR "FESS_LVD45" = "1"!]
[!VAR "FESS_FLASH" = "1"!]
[!VAR "FESS_EXR" = "1"!]

[!IF "node:exists(McuResetSource/JTAG/McuResetPhase)"!]
[!IF "McuResetSource/JTAG/McuResetPhase = 'PHASE_1'"!]
[!VAR "FESS_JTAG" = "1"!][!ELSE!][!VAR "FESS_JTAG" = "0"!]
[!ENDIF!][!//
[!ENDIF!][!//
[!IF "node:exists(McuResetSource/CORE/McuResetPhase)"!]
[!IF "McuResetSource/CORE/McuResetPhase = 'PHASE_1'"!]
[!VAR "FESS_CORE" = "1"!][!ELSE!][!VAR "FESS_CORE" = "0"!][!ENDIF!][!//
[!ENDIF!][!//
[!IF "node:exists(McuResetSource/SOFT/McuResetPhase)"!]
[!IF "McuResetSource/SOFT/McuResetPhase = 'PHASE_1'"!]
[!VAR "FESS_SOFT" = "1"!][!ELSE!][!VAR "FESS_SOFT" = "0"!][!ENDIF!][!//
[!ENDIF!][!//
[!IF "node:exists(McuResetSource/CHKSTOP/McuResetPhase)"!]
[!IF "McuResetSource/CHKSTOP/McuResetPhase = 'PHASE_1'"!]
[!VAR "FESS_CHKSTOP" = "1"!][!ELSE!][!VAR "FESS_CHKSTOP" = "0"!][!ENDIF!][!//
[!ENDIF!][!//
[!IF "node:exists(McuResetSource/PLL/McuResetPhase)"!]
[!IF "McuResetSource/PLL/McuResetPhase = 'PHASE_1'"!]
[!VAR "FESS_PLL0" = "1"!][!ELSE!][!VAR "FESS_PLL0" = "0"!][!ENDIF!][!//
[!ENDIF!][!//
[!IF "node:exists(McuResetSource/CMU0_OLR/McuResetPhase)"!]
[!IF "McuResetSource/CMU0_OLR/McuResetPhase = 'PHASE_1'"!]
[!VAR "FESS_CMU0_OLR" = "1"!][!ELSE!][!VAR "FESS_CMU0_OLR" = "0"!][!ENDIF!][!//
[!ENDIF!][!//
[!IF "node:exists(McuResetSource/CMU0_FHL/McuResetPhase)"!]
[!IF "McuResetSource/CMU0_FHL/McuResetPhase = 'PHASE_1'"!]
[!VAR "FESS_CMU0_FHL" = "1"!][!ELSE!][!VAR "FESS_CMU0_FHL" = "0"!][!ENDIF!][!//
[!ENDIF!][!//
[!IF "node:exists(McuResetSource/LVD45/McuResetPhase)"!]
[!IF "McuResetSource/LVD45/McuResetPhase = 'PHASE_1'"!]
[!VAR "FESS_LVD45" = "1"!][!ELSE!][!VAR "FESS_LVD45" = "0"!][!ENDIF!][!//
[!ENDIF!][!//
[!IF "node:exists(McuResetSource/FLASH/McuResetPhase)"!]
[!IF "McuResetSource/FLASH/McuResetPhase = 'PHASE_1'"!]
[!VAR "FESS_FLASH" = "1"!][!ELSE!][!VAR "FESS_FLASH" = "0"!][!ENDIF!][!//
[!ENDIF!][!//
[!IF "node:exists(McuResetSource/EXR/McuResetPhase)"!]
[!IF "McuResetSource/EXR/McuResetPhase = 'PHASE_1'"!]
[!VAR "FESS_EXR" = "1"!][!ELSE!][!VAR "FESS_EXR" = "0"!][!ENDIF!][!//
[!ENDIF!] [!//
[!ENDNOCODE!][!//

[!NOCODE!][!//
[!VAR "FBRE_JTAG" = "1"!]
[!VAR "FBRE_CORE" = "1"!]
[!VAR "FBRE_SOFT" = "1"!]
[!VAR "FBRE_CHKSTOP" = "1"!]
[!VAR "FBRE_PLL0" = "1"!]
[!VAR "FBRE_CMU0_OLR" = "1"!]
[!VAR "FBRE_CMU0_FHL" = "1"!]
[!VAR "FBRE_LVD45" = "1"!]
[!VAR "FBRE_FLASH" = "1"!]
[!VAR "FBRE_EXR" = "1"!]

[!IF "node:exists(McuResetSource/JTAG/McuResetPin)"!][!//
[!IF "McuResetSource/JTAG/McuResetPin"!][!//
[!VAR "FBRE_JTAG" = "1"!][!ELSE!][!VAR "FBRE_JTAG" = "0"!][!ENDIF!][!//
[!ENDIF!][!//
[!IF "node:exists(McuResetSource/CORE/McuResetPin)"!][!//
[!IF "McuResetSource/CORE/McuResetPin"!][!//
[!VAR "FBRE_CORE" = "1"!][!ELSE!][!VAR "FBRE_CORE" = "0"!][!ENDIF!][!//
[!ENDIF!][!//
[!IF "node:exists(McuResetSource/SOFT/McuResetPin)"!][!//
[!IF "McuResetSource/SOFT/McuResetPin"!][!//
[!VAR "FBRE_SOFT" = "1"!][!ELSE!][!VAR "FBRE_SOFT" = "0"!][!ENDIF!][!//
[!ENDIF!][!//
[!IF "node:exists(McuResetSource/CWD/McuResetPin)"!][!//
[!IF "McuResetSource/CWD/McuResetPin"!][!//
[!VAR "FBRE_CWD" = "1"!][!ELSE!][!VAR "FBRE_CWD" = "0"!][!ENDIF!][!//
[!ENDIF!][!//
[!IF "node:exists(McuResetSource/PLL/McuResetPin)"!][!//
[!IF "McuResetSource/PLL/McuResetPin"!][!//
[!VAR "FBRE_PLL0" = "1"!][!ELSE!][!VAR "FBRE_PLL0" = "0"!][!ENDIF!][!//
[!ENDIF!][!//
[!IF "node:exists(McuResetSource/CMU0_OLR/McuResetPin)"!][!//
[!IF "McuResetSource/CMU0_OLR/McuResetPin"!][!//
[!VAR "FBRE_CMU0_OLR" = "1"!][!ELSE!][!VAR "FBRE_CMU0_OLR" = "0"!][!ENDIF!][!//
[!ENDIF!][!//
[!IF "node:exists(McuResetSource/CMU0_FHL/McuResetPin)"!][!//
[!IF "McuResetSource/CMU0_FHL/McuResetPin"!][!//
[!VAR "FBRE_CMU0_FHL" = "1"!][!ELSE!][!VAR "FBRE_CMU0_FHL" = "0"!][!ENDIF!][!//
[!ENDIF!][!//
[!IF "node:exists(McuResetSource/LVD45/McuResetPin)"!][!//
[!IF "McuResetSource/LVD45/McuResetPin"!][!//
[!VAR "FBRE_LVD45" = "1"!][!ELSE!][!VAR "FBRE_LVD45" = "0"!][!ENDIF!][!//
[!ENDIF!][!//
[!IF "node:exists(McuResetSource/FLASH/McuResetPin)"!][!//
[!IF "McuResetSource/FLASH/McuResetPin"!][!//
[!VAR "FBRE_FLASH" = "1"!][!ELSE!][!VAR "FBRE_FLASH" = "0"!][!ENDIF!][!//
[!ENDIF!][!//
[!IF "node:exists(McuResetSource/EXR/McuResetPin)"!][!//
[!IF "McuResetSource/EXR/McuResetPin"!][!//
[!VAR "FBRE_EXR" = "1"!][!ELSE!][!VAR "FBRE_EXR" = "0"!][!ENDIF!][!//
[!ENDIF!] [!//

[!ENDNOCODE!][!//

    [!CODE!]
        [!IF "num:i($FERD_JTAG) = '1'"!](FERD_JTAG_RESET|[!ELSE!](FERD_JTAG_NORESET|[!ENDIF!]
            [!IF "num:i($FERD_CORE) = '1'"!]FERD_CORE_RESET|[!ELSE!]FERD_CORE_NORESET|[!ENDIF!]
            [!IF "num:i($FERD_SOFT) = '1'"!]FERD_SOFT_RESET|[!ELSE!]FERD_SOFT_NORESET|[!ENDIF!]
            [!IF "num:i($FERD_CHKSTOP) = '1'"!]FERD_CHKSTOP_RESET|[!ELSE!]FERD_CHKSTOP_NORESET|[!ENDIF!]
            [!IF "num:i($FERD_PLL0) = '1'"!]FERD_PLL0_RESET|[!ELSE!]FERD_PLL0_NORESET|[!ENDIF!]
            [!IF "num:i($FERD_CMU0_OLR) = '1'"!]FERD_CMU0_OLR_RESET|[!ELSE!]FERD_CMU0_OLR_NORESET|[!ENDIF!]
            [!IF "num:i($FERD_CMU0_FHL) = '1'"!]FERD_CMU0_FHL_RESET|[!ELSE!]FERD_CMU0_FHL_NORESET|[!ENDIF!]
            [!IF "num:i($FERD_LVD45) = '1'"!]FERD_LVD45_RESET|[!ELSE!]FERD_LVD45_NORESET|[!ENDIF!]
            [!IF "num:i($FERD_FLASH) = '1'"!]FERD_FLASH_RESET|[!ELSE!]FERD_FLASH_NORESET|[!ENDIF!]
            [!IF "num:i($FERD_EXR) = '1'"!]FERD_EXR_RESET),[!ELSE!]FERD_EXR_NORESET),[!ENDIF!]    /* Func_ResetOpt   */
       [!IF "num:i($FEAR_JTAG) = '1'"!](FEAR_JTAG_ISR|[!ELSE!](FEAR_JTAG_SAFE|[!ENDIF!]
            [!IF "num:i($FEAR_CORE) = '1'"!]FEAR_CORE_ISR|[!ELSE!]FEAR_CORE_SAFE|[!ENDIF!]
            [!IF "num:i($FEAR_PLL0) = '1'"!]FEAR_PLL0_ISR|[!ELSE!]FEAR_PLL0_SAFE|[!ENDIF!]
            [!IF "num:i($FEAR_CMU0_OLR) = '1'"!]FEAR_CMU0_OLR_ISR|[!ELSE!]FEAR_CMU0_OLR_SAFE|[!ENDIF!]
            [!IF "num:i($FEAR_CMU0_FHL) = '1'"!]FEAR_CMU0_FHL_ISR|[!ELSE!]FEAR_CMU0_FHL_SAFE|[!ENDIF!]
            [!IF "num:i($FEAR_LVD45) = '1'"!]FEAR_LVD45_ISR|[!ELSE!]FEAR_LVD45_SAFE|[!ENDIF!]
            [!IF "num:i($FEAR_FLASH) = '1'"!]FEAR_FLASH_ISR|[!ELSE!]FEAR_FLASH_SAFE|[!ENDIF!]
            [!IF "num:i($FEAR_EXR) = '1'"!]FEAR_EXR_ISR),[!ELSE!]FEAR_EXR_SAFE),[!ENDIF!]
/* @errata ERR_IPV_MC_0019 */
#ifdef ERR_IPV_MC_0019
   #if (ERR_IPV_MC_0019 == STD_ON)
       [!IF "num:i($FBRE_JTAG) = '1'"!](FESS_JTAG_PH1|[!ELSE!][!IF "num:i($FESS_JTAG) = '1'"!](FESS_JTAG_PH1|[!ELSE!](FESS_JTAG_PH3|[!ENDIF!][!ENDIF!]
         [!IF "num:i($FBRE_CORE) = '1'"!]FESS_CORE_PH1|[!ELSE!][!IF "num:i($FESS_CORE) = '1'"!]FESS_CORE_PH1|[!ELSE!]FESS_CORE_PH3|[!ENDIF!][!ENDIF!]
         [!IF "num:i($FBRE_SOFT) = '1'"!]FESS_SOFT_PH1|[!ELSE!][!IF "num:i($FESS_SOFT) = '1'"!]FESS_SOFT_PH1|[!ELSE!]FESS_SOFT_PH3|[!ENDIF!][!ENDIF!]
         [!IF "num:i($FBRE_CHKSTOP) = '1'"!]FESS_CHKSTOP_PH1|[!ELSE!][!IF "num:i($FESS_CHKSTOP) = '1'"!]FESS_CHKSTOP_PH1|[!ELSE!]FESS_CHKSTOP_PH3|[!ENDIF!][!ENDIF!]
         [!IF "num:i($FBRE_PLL0) = '1'"!]FESS_PLL0_PH1|[!ELSE!][!IF "num:i($FESS_PLL0) = '1'"!]FESS_PLL0_PH1|[!ELSE!]FESS_PLL0_PH3|[!ENDIF!][!ENDIF!]
         [!IF "num:i($FBRE_CMU0_OLR) = '1'"!]FESS_CMU0_OLR_PH1|[!ELSE!][!IF "num:i($FESS_CMU0_OLR) = '1'"!]FESS_CMU0_OLR_PH1|[!ELSE!]FESS_CMU0_OLR_PH3|[!ENDIF!][!ENDIF!]
         [!IF "num:i($FBRE_CMU0_FHL) = '1'"!]FESS_CMU0_FHL_PH1|[!ELSE!][!IF "num:i($FESS_CMU0_FHL) = '1'"!]FESS_CMU0_FHL_PH1|[!ELSE!]FESS_CMU0_FHL_PH3|[!ENDIF!][!ENDIF!]
         [!IF "num:i($FBRE_LVD45) = '1'"!]FESS_LVD45_PH1|[!ELSE!][!IF "num:i($FESS_LVD45) = '1'"!]FESS_LVD45_PH1|[!ELSE!]FESS_LVD45_PH3|[!ENDIF!][!ENDIF!]
         [!IF "num:i($FBRE_FLASH) = '1'"!]FESS_FLASH_PH1|[!ELSE!][!IF "num:i($FESS_FLASH) = '1'"!]FESS_FLASH_PH1|[!ELSE!]FESS_FLASH_PH3|[!ENDIF!][!ENDIF!]
         [!IF "num:i($FBRE_EXR) = '1'"!]FESS_EXR_PH1),[!ELSE!][!IF "num:i($FESS_EXR) = '1'"!]FESS_EXR_PH1),[!ELSE!]FESS_EXR_PH3),[!ENDIF!][!ENDIF!]           /* Func_Phase1or3Opt   */
   #else
       [!IF "num:i($FESS_JTAG) = '1'"!](FESS_JTAG_PH1|[!ELSE!](FESS_JTAG_PH3|[!ENDIF!]
            [!IF "num:i($FESS_CORE) = '1'"!]FESS_CORE_PH1|[!ELSE!]FESS_CORE_PH3|[!ENDIF!]
            [!IF "num:i($FESS_SOFT) = '1'"!]FESS_SOFT_PH1|[!ELSE!]FESS_SOFT_PH3|[!ENDIF!]
            [!IF "num:i($FESS_CHKSTOP) = '1'"!]FESS_CHKSTOP_PH1|[!ELSE!]FESS_CHKSTOP_PH3|[!ENDIF!]
            [!IF "num:i($FESS_PLL0) = '1'"!]FESS_PLL0_PH1|[!ELSE!]FESS_PLL0_PH3|[!ENDIF!]
            [!IF "num:i($FESS_CMU0_OLR) = '1'"!]FESS_CMU0_OLR_PH1|[!ELSE!]FESS_CMU0_OLR_PH3|[!ENDIF!]
            [!IF "num:i($FESS_CMU0_FHL) = '1'"!]FESS_CMU0_FHL_PH1|[!ELSE!]FESS_CMU0_FHL_PH3|[!ENDIF!]
            [!IF "num:i($FESS_LVD45) = '1'"!]FESS_LVD45_PH1|[!ELSE!]FESS_LVD45_PH3|[!ENDIF!]
            [!IF "num:i($FESS_FLASH) = '1'"!]FESS_FLASH_PH1|[!ELSE!]FESS_FLASH_PH3|[!ENDIF!]
            [!IF "num:i($FESS_EXR) = '1'"!]FESS_EXR_PH1),[!ELSE!]FESS_EXR_PH3),[!ENDIF!]           /* Func_Phase1or3Opt   */
   #endif
#else
       [!IF "num:i($FESS_JTAG) = '1'"!](FESS_JTAG_PH1|[!ELSE!](FESS_JTAG_PH3|[!ENDIF!]
            [!IF "num:i($FESS_CORE) = '1'"!]FESS_CORE_PH1|[!ELSE!]FESS_CORE_PH3|[!ENDIF!]
            [!IF "num:i($FESS_SOFT) = '1'"!]FESS_SOFT_PH1|[!ELSE!]FESS_SOFT_PH3|[!ENDIF!]
            [!IF "num:i($FESS_CHKSTOP) = '1'"!]FESS_CHKSTOP_PH1|[!ELSE!]FESS_CHKSTOP_PH3|[!ENDIF!]
            [!IF "num:i($FESS_PLL0) = '1'"!]FESS_PLL0_PH1|[!ELSE!]FESS_PLL0_PH3|[!ENDIF!]
            [!IF "num:i($FESS_CMU0_OLR) = '1'"!]FESS_CMU0_OLR_PH1|[!ELSE!]FESS_CMU0_OLR_PH3|[!ENDIF!]
            [!IF "num:i($FESS_CMU0_FHL) = '1'"!]FESS_CMU0_FHL_PH1|[!ELSE!]FESS_CMU0_FHL_PH3|[!ENDIF!]
            [!IF "num:i($FESS_LVD45) = '1'"!]FESS_LVD45_PH1|[!ELSE!]FESS_LVD45_PH3|[!ENDIF!]
            [!IF "num:i($FESS_FLASH) = '1'"!]FESS_FLASH_PH1|[!ELSE!]FESS_FLASH_PH3|[!ENDIF!]
            [!IF "num:i($FESS_EXR) = '1'"!]FESS_EXR_PH1),[!ELSE!]FESS_EXR_PH3),[!ENDIF!]           /* Func_Phase1or3Opt   */
#endif
        [!IF "num:i($FBRE_JTAG) = '1'"!](FBRE_JTAG_EN|[!ELSE!](FBRE_JTAG_DIS|[!ENDIF!]
            [!IF "num:i($FBRE_CORE) = '1'"!]FBRE_CORE_EN|[!ELSE!]FBRE_CORE_DIS|[!ENDIF!]
            [!IF "num:i($FBRE_SOFT) = '1'"!]FBRE_SOFT_EN|[!ELSE!]FBRE_SOFT_DIS|[!ENDIF!]
            [!IF "num:i($FBRE_CHKSTOP) = '1'"!]FBRE_CHKSTOP_EN|[!ELSE!]FBRE_CHKSTOP_DIS|[!ENDIF!]
            [!IF "num:i($FBRE_PLL0) = '1'"!]FBRE_PLL0_EN|[!ELSE!]FBRE_PLL0_DIS|[!ENDIF!]
            [!IF "num:i($FBRE_CMU0_OLR) = '1'"!]FBRE_CMU0_OLR_EN|[!ELSE!]FBRE_CMU0_OLR_DIS|[!ENDIF!]
            [!IF "num:i($FBRE_CMU0_FHL) = '1'"!]FBRE_CMU0_FHL_EN|[!ELSE!]FBRE_CMU0_FHL_DIS|[!ENDIF!]
            [!IF "num:i($FBRE_LVD45) = '1'"!]FBRE_LVD45_EN|[!ELSE!]FBRE_LVD45_DIS|[!ENDIF!]
            [!IF "num:i($FBRE_FLASH) = '1'"!]FBRE_FLASH_EN|[!ELSE!]FBRE_FLASH_DIS|[!ENDIF!]
            [!IF "num:i($FBRE_EXR) = '1'"!]FBRE_EXR_EN),[!ELSE!]FBRE_EXR_DIS),[!ENDIF!]    /* Ext_PinReset   */


 [!ENDCODE!]
[!IF "(ecu:get('MCU.PCU') = 'true')"!][!//
[!NOCODE!]
 [!VAR "Power"!][!CALL "POW"!][!ENDVAR!]
 [!ENDNOCODE!]
[!ENDIF!][!//
        [!CODE!]
[!IF "(ecu:get('MCU.PCU') = 'true')"!][!//
        (uint16)[!"num:inttohex($Power,4)"!],  /* PowerDomain */
[!ENDIF!][!//
        [!"num:inttohex(McuTimeout,8)"!]UL,  /* Timeout */
 [!ENDCODE!]
 [!NOCODE!]
     [!VAR "TC"!]
        [!VAR "iTC"!]
            [!CALL "BOOL2INT","VALUE"="McuInterruptTransition/McuTransitionComplete"!]
        [!ENDVAR!]
        [!"$iTC"!]
     [!ENDVAR!]
     [!VAR "ES"!]
        [!VAR "iES"!]
            [!CALL "BOOL2INT","VALUE"="McuInterruptTransition/McuSafeMode"!]
        [!ENDVAR!]
        [!"bit:shl($iES,1)"!]
     [!ENDVAR!]
     [!VAR "IM"!]
        [!VAR "iIM"!]
            [!CALL "BOOL2INT","VALUE"="McuInterruptTransition/McuInvalidMode"!]
        [!ENDVAR!]
        [!"bit:shl($iIM,2)"!]
     [!ENDVAR!]
     [!VAR "IC"!]
        [!VAR "iIC"!]
            [!CALL "BOOL2INT","VALUE"="McuInterruptTransition/McuInvalidConfiguration"!]
        [!ENDVAR!]
        [!"bit:shl($iIC,3)"!]
     [!ENDVAR!]
 [!ENDNOCODE!]
        [!CODE!]       (uint8)[!"num:inttohex(($TC + $ES + $IM +$IC),2)"!], /* IsrMode */ [!ENDCODE!]
[!//


[!ENDNOCODE!]
[!NOCODE!][!//

    [!VAR "PFCR0"!]
        [!CALL "MCUFlashPFCR0", "B02RWWC" = "McuFlashPFCR0/ReadWhileWriteControl","B0P0BCFG" = "McuFlashPFCR0/Port0PageBufferConfiguration", "B02P0DPFE" = "McuFlashPFCR0/Port0DataPrefetchEnable", "B02P0IPFE" = "McuFlashPFCR0/Port0InstructionPrefetchEnable", "B02P0PFLM" = "McuFlashPFCR0/Port0PrefetchLimit", "B02P0BFE" = "McuFlashPFCR0/Port0BufferEnable"!]
    [!ENDVAR!]
    [!VAR "PFCR1"!]
        [!CALL "MCUFlashPFCR1", "B1RWWC" = "McuFlashPFCR1/ReadWhileWriteControl","B1P0BFE" = "McuFlashPFCR1/Port0BufferEnable"!]
    [!ENDVAR!]
    [!VAR "PFAPR"!]
        [!CALL "MCUFlashPFAPR", "M2PFD" = "McuFlashPFAPR/Master2PrefetchDisable", "M0PFD" = "McuFlashPFAPR/Master0PrefetchDisable","M2AP" = "McuFlashPFAPR/Master2AccessProtection","M0AP" = "McuFlashPFAPR/Master0AccessProtection"!]
    [!ENDVAR!]

    [!VAR "CPR0"="num:hextoint('0x00010203')"!]
    [!VAR "CPR4"="num:hextoint('0x04050607')"!]
    [!VAR "CPR8"="num:hextoint('0x08090A0B')"!]
    [!VAR "CPR12"="num:hextoint('0x0C0D0E0F')"!]
    [!VAR "EDMA_CR"="0"!]
    [!VAR "CHCFG0"="0"!]
    [!VAR "CHCFG4"="0"!]
    [!VAR "CHCFG8"="0"!]
    [!VAR "CHCFG12"="0"!]
       [!VAR "count" = "0"!]
   [!VAR "EDMAcount"="num:i(count(McuDMAMUXandEDMAConfig/*))"!]
  [!IF "$EDMAcount!=0"!][!// only if McuDMAMUXandEDMAConfig exists
    [!VAR "RegValue"!]
    [!CALL "EDMACR","ERCA" = "McuDMAMUXandEDMAConfig/ERCA","EDBG" = "McuDMAMUXandEDMAConfig/EDBG", "ERGA" = "McuDMAMUXandEDMAConfig/ERGA", "HOE" = "McuDMAMUXandEDMAConfig/HOE", "HALT" = "McuDMAMUXandEDMAConfig/HALT", "CLM" = "McuDMAMUXandEDMAConfig/CLM", "EMLM" = "McuDMAMUXandEDMAConfig/EMLM", "GRP0PRI" = "McuDMAMUXandEDMAConfig/GRP0PRI", "EBW" = "McuDMAMUXandEDMAConfig/EBW"!]
    [!ENDVAR!]
    [!IF "ecu:get('Mcu.McuModuleConfiguration.McuDMAMUXandEDMAConfig.DmaActive') = 'true'"!]
    [!VAR "EDMA_CR"="$RegValue"!]
    [!VAR "CPR0"="McuDMAMUXandEDMAConfig/eDMAChannelPriority0"!]
    [!VAR "CPR4"="McuDMAMUXandEDMAConfig/eDMAChannelPriority4"!]
    [!VAR "CPR8"="McuDMAMUXandEDMAConfig/eDMAChannelPriority8"!]
    [!VAR "CPR12"="McuDMAMUXandEDMAConfig/eDMAChannelPriority12"!]
    [!VAR "RegValue"="0"!]  
    [!LOOP "McuDMA/*"!]
     [!VAR "PCindex" = "@index"!]
        [!VAR "DMAChannelNumber" = "DMAChannelId"!]
        [!IF "$DMAChannelNumber<ecu:get('Mcu.DmaModule.Source.Number')"!]
            [!VAR "index" = "num:i($DMAChannelNumber div 4)"!]
            [!VAR "subindex" = "num:i($DMAChannelNumber mod 4)"!]
            [!IF "DMAChannelEnable"!] [!VAR "DMAen"="1"!][!ELSE!][!VAR "DMAen"="0"!][!ENDIF!]
            [!IF "node:exists('DMAChannelTriggerEnable')"!][!IF "DMAChannelTriggerEnable"!][!VAR "DMAtrg"="1"!][!ELSE!][!VAR "DMAtrg"="0"!][!ENDIF!][!ELSE!][!VAR "DMAtrg"="0"!][!ENDIF!]
            [!IF "$DMAChannelNumber>3"!]
            [!IF "$DMAen=1"!]
            [!IF "$DMAtrg=1"!]
         [!ERROR!]
         channels 4 to 15 may only be configured to disabled or normal mode not in Periodic trigger mode.current value is ENBL=1 and TRIG=1.
[!ENDERROR!]
        [!ENDIF!]
        [!ENDIF!]
        [!ENDIF!]
            [!IF "McuDMASource = 'DSPI0_TX'"!]
            [!VAR "DMASrc" = "1"!]
            [!ELSEIF "McuDMASource = 'DSPI0_RX'"!]
            [!VAR "DMASrc" = "2"!]
            [!ELSEIF "McuDMASource = 'DSPI1_TX'"!]
            [!VAR "DMASrc" = "3"!]
            [!ELSEIF "McuDMASource = 'DSPI1_RX'"!]
            [!VAR "DMASrc" = "4"!]
            [!ELSEIF "McuDMASource = 'DSPI2_TX'"!]
            [!VAR "DMASrc" = "5"!]
            [!ELSEIF "McuDMASource = 'DSPI2_RX'"!]
            [!VAR "DMASrc" = "6"!]
            [!ELSEIF "McuDMASource = 'DSPI3_TX'"!]
            [!VAR "DMASrc" = "7"!]
            [!ELSEIF "McuDMASource = 'DSPI3_RX'"!]
            [!VAR "DMASrc" = "8"!]
            [!ELSEIF "McuDMASource = 'DSPI4_TX'"!]
            [!VAR "DMASrc" = "9"!]
            [!ELSEIF "McuDMASource = 'DSPI4_RX'"!]
            [!VAR "DMASrc" = "10"!]
            [!ELSEIF "McuDMASource = 'DSPI5_TX'"!]
            [!VAR "DMASrc" = "11"!]
            [!ELSEIF "McuDMASource = 'DSPI5_RX'"!]
            [!VAR "DMASrc" = "12"!]
            [!ELSEIF "McuDMASource = 'EMIOS0_CH0'"!]
            [!VAR "DMASrc" = "17"!]
            [!ELSEIF "McuDMASource = 'EMIOS0_CH1'"!]
            [!VAR "DMASrc" = "18"!]
            [!ELSEIF "McuDMASource = 'EMIOS0_CH9'"!]
            [!VAR "DMASrc" = "19"!]
            [!ELSEIF "McuDMASource = 'EMIOS0_CH18'"!]
            [!VAR "DMASrc" = "20"!]
            [!ELSEIF "McuDMASource = 'EMIOS0_CH25'"!]
            [!VAR "DMASrc" = "21"!]
            [!ELSEIF "McuDMASource = 'EMIOS0_CH26'"!]
            [!VAR "DMASrc" = "22"!]
            [!ELSEIF "McuDMASource = 'EMIOS1_CH0'"!]
            [!VAR "DMASrc" = "23"!]
            [!ELSEIF "McuDMASource = 'EMIOS1_CH9'"!]
            [!VAR "DMASrc" = "24"!]
            [!ELSEIF "McuDMASource = 'EMIOS1_CH17'"!]
            [!VAR "DMASrc" = "25"!]
            [!ELSEIF "McuDMASource = 'EMIOS1_CH18'"!]
            [!VAR "DMASrc" = "26"!]
            [!ELSEIF "McuDMASource = 'EMIOS1_CH25'"!]
            [!VAR "DMASrc" = "27"!]
            [!ELSEIF "McuDMASource = 'EMIOS1_CH26'"!]
            [!VAR "DMASrc" = "28"!]
            [!ELSEIF "McuDMASource = 'ADC0_EOC'"!]
            [!VAR "DMASrc" = "29"!]
            [!ELSEIF "McuDMASource = 'ADC1_EOC'"!]
            [!VAR "DMASrc" = "30"!]
            [!ELSEIF "McuDMASource = 'IIC_RX'"!]
            [!VAR "DMASrc" = "31"!]
            [!ELSEIF "McuDMASource = 'IIC_TX'"!]
            [!VAR "DMASrc" = "32"!]
            [!ELSEIF "McuDMASource = 'LINFLEXD0_RX'"!]
            [!VAR "DMASrc" = "33"!]
            [!ELSEIF "McuDMASource = 'LINFLEXD0_TX'"!]
            [!VAR "DMASrc" = "34"!]
            [!ELSEIF "McuDMASource = 'LINFLEXD1_RX'"!]
            [!VAR "DMASrc" = "35"!]
            [!ELSEIF "McuDMASource = 'LINFLEXD1_TX'"!]
            [!VAR "DMASrc" = "36"!]
            [!ELSEIF "McuDMASource = 'ALWAYS_ENABLED_0'"!]
            [!VAR "DMASrc" = "60"!]
            [!ELSEIF "McuDMASource = 'ALWAYS_ENABLED_1'"!]
            [!VAR "DMASrc" = "61"!]
            [!ELSEIF "McuDMASource = 'ALWAYS_ENABLED_2'"!]
            [!VAR "DMASrc" = "62"!]
            [!ELSEIF "McuDMASource = 'ALWAYS_ENABLED_3'"!]
            [!VAR "DMASrc" = "63"!]
            [!ELSE!]
            [!VAR "DMASrc" = "0"!]
            [!ENDIF!]
            [!IF "$index=0"!]
                [!VAR "tmpindex"="num:i(0+8*$subindex)"!]
                [!CALL "BitGroup2RegValue", "RegValue" = "$CHCFG0"  ,"Value"= "$DMAen" , "StartBit" = "num:i(0+8*$subindex)", "BitWidth" = "1"!]
                [!CALL "BitGroup2RegValue", "RegValue" = "$RegValue","Value"= "$DMAtrg", "StartBit" = "num:i(1+8*$subindex)", "BitWidth" = "1"!]
                [!CALL "BitGroup2RegValue", "RegValue" = "$RegValue","Value"= "$DMASrc", "StartBit" = "num:i(7+8*$subindex)", "BitWidth" = "6"!]
                [!VAR "CHCFG0"="$RegValue"!]
            [!ELSEIF "$index=1"!]
                [!CALL "BitGroup2RegValue", "RegValue" = "$CHCFG4"  ,"Value"= "$DMAen" , "StartBit" = "num:i(0+8*$subindex)", "BitWidth" = "1"!]
                [!CALL "BitGroup2RegValue", "RegValue" = "$RegValue","Value"= "$DMAtrg", "StartBit" = "num:i(1+8*$subindex)", "BitWidth" = "1"!]
                [!CALL "BitGroup2RegValue", "RegValue" = "$RegValue","Value"= "$DMASrc", "StartBit" = "num:i(7+8*$subindex)", "BitWidth" = "6"!]
                [!VAR "CHCFG4"="$RegValue"!]
            [!ELSEIF "$index=2"!]
                [!CALL "BitGroup2RegValue", "RegValue" = "$CHCFG8"  ,"Value"= "$DMAen" , "StartBit" = "num:i(0+8*$subindex)", "BitWidth" = "1"!]
                [!CALL "BitGroup2RegValue", "RegValue" = "$RegValue","Value"= "$DMAtrg", "StartBit" = "num:i(1+8*$subindex)", "BitWidth" = "1"!]
                [!CALL "BitGroup2RegValue", "RegValue" = "$RegValue","Value"= "$DMASrc", "StartBit" = "num:i(7+8*$subindex)", "BitWidth" = "6"!]
                [!VAR "CHCFG8"="$RegValue"!]
            [!ELSEIF "$index=3"!]
                [!CALL "BitGroup2RegValue", "RegValue" = "$CHCFG12" ,"Value"= "$DMAen" , "StartBit" = "num:i(0+8*$subindex)", "BitWidth" = "1"!]
                [!CALL "BitGroup2RegValue", "RegValue" = "$RegValue","Value"= "$DMAtrg", "StartBit" = "num:i(1+8*$subindex)", "BitWidth" = "1"!]
                [!CALL "BitGroup2RegValue", "RegValue" = "$RegValue","Value"= "$DMASrc", "StartBit" = "num:i(7+8*$subindex)", "BitWidth" = "6"!]
                [!VAR "CHCFG12"="$RegValue"!]
            [!ENDIF!]
        [!ENDIF!][!VAR "count"= "$count+1"!]
    [!ENDLOOP!]
    [!ENDIF!]
[!ENDIF!]
[!ENDNOCODE!][!//
    [!CODE!]    {{(uint8)[!"num:inttohex(bit:shr($CHCFG0,24))"!], (uint8)[!"num:inttohex(bit:and( bit:shr($CHCFG0,16), 255))"!], (uint8)[!"num:inttohex(bit:and( bit:shr($CHCFG0,8), 255))"!], (uint8)[!"num:inttohex(bit:and( bit:shr($CHCFG0,0), 255))"!], /* DMAMUX 0, 1, 2, 3 */[!ENDCODE!] 
    [!CODE!]    (uint8)[!"num:inttohex(bit:shr($CHCFG4,24))"!], (uint8)[!"num:inttohex(bit:and( bit:shr($CHCFG4,16), 255))"!], (uint8)[!"num:inttohex(bit:and( bit:shr($CHCFG4,8), 255))"!], (uint8)[!"num:inttohex(bit:and( bit:shr($CHCFG4,0), 255))"!], /* DMAMUX 4, 5, 6, 7 */[!ENDCODE!]
    [!CODE!]    (uint8)[!"num:inttohex(bit:shr($CHCFG8,24))"!], (uint8)[!"num:inttohex(bit:and( bit:shr($CHCFG8,16), 255))"!], (uint8)[!"num:inttohex(bit:and( bit:shr($CHCFG8,8), 255))"!], (uint8)[!"num:inttohex(bit:and( bit:shr($CHCFG8,0), 255))"!], /* DMAMUX 8, 9, 10, 11 */[!ENDCODE!]
    [!CODE!]    (uint8)[!"num:inttohex(bit:shr($CHCFG12,24))"!], (uint8)[!"num:inttohex(bit:and( bit:shr($CHCFG12,16), 255))"!], (uint8)[!"num:inttohex(bit:and( bit:shr($CHCFG12,8), 255))"!], (uint8)[!"num:inttohex(bit:and( bit:shr($CHCFG12,0), 255))"!]}}, /* DMAMUX 12, 13, 14, 15 */[!ENDCODE!] 
    [!CODE!]    {{(uint32)[!"num:inttohex($EDMA_CR,8)"!]UL},            /* EDMA.CR */[!ENDCODE!]
    [!CODE!]    {(uint8)[!"num:inttohex(bit:and(bit:shr($CPR0,24),255),2)"!]U, (uint8)[!"num:inttohex(bit:and(bit:shr($CPR0,16),255),2)"!]U, (uint8)[!"num:inttohex(bit:and(bit:shr($CPR0,8),255),2)"!]U, (uint8)[!"num:inttohex(bit:and($CPR0,255),2)"!]U, /* EDMA.CPR0,1,2,3 */[!ENDCODE!]    
    [!CODE!]    (uint8)[!"num:inttohex(bit:and(bit:shr($CPR4,24),255),2)"!]U, (uint8)[!"num:inttohex(bit:and(bit:shr($CPR4,16),255),2)"!]U, (uint8)[!"num:inttohex(bit:and(bit:shr($CPR4,8),255),2)"!]U, (uint8)[!"num:inttohex(bit:and($CPR4,255),2)"!]U, /* EDMA.CPR4,5,6,7 */[!ENDCODE!]     
    [!CODE!]    (uint8)[!"num:inttohex(bit:and(bit:shr($CPR8,24),255),2)"!]U, (uint8)[!"num:inttohex(bit:and(bit:shr($CPR8,16),255),2)"!]U, (uint8)[!"num:inttohex(bit:and(bit:shr($CPR8,8),255),2)"!]U, (uint8)[!"num:inttohex(bit:and($CPR8,255),2)"!]U, /* EDMA.CPR8,9,10,11 */[!ENDCODE!]   
    [!CODE!]    (uint8)[!"num:inttohex(bit:and(bit:shr($CPR12,24),255),2)"!]U, (uint8)[!"num:inttohex(bit:and(bit:shr($CPR12,16),255),2)"!]U, (uint8)[!"num:inttohex(bit:and(bit:shr($CPR12,8),255),2)"!]U, (uint8)[!"num:inttohex(bit:and($CPR12,255),2)"!]U}, /* EDMA.CPR12,13,14,15 */[!ENDCODE!]    
    },          
    [!CODE!]    (uint32)[!"num:inttohex($PFCR0,8)"!]UL,         /* PFCR0 */[!ENDCODE!]
    [!CODE!]    (uint32)[!"num:inttohex($PFCR1,8)"!]UL,         /* PFCR1 */[!ENDCODE!]
    [!CODE!]    (uint32)[!"num:inttohex($PFAPR,8)"!]UL,         /* PFAPR */[!ENDCODE!]
 };[!// End of McuModeSettingConf
[!//

CONST(Mcu_ConfigType, MCU_CONST) MCU_INIT_CONFIG_PC =
    {
        [!IF "McuClockSrcFailureNotification = 'ENABLED'"!]MCU_CLOCKNOTIFICATION_ENABLE[!ELSE!]MCU_CLOCKNOTIFICATION_DISABLE[!ENDIF!],    /* globally enable/disable SCM, loss of clock and loss of lock notification */
        [!"num:i(count(McuRamSectorSettingConf/*))"!]UL,                       /* number of ram sections */
        (uint8) [!"num:i(count(McuModeSettingConf/*))"!]U,                       /* number of low power modes */
        (uint8) [!"num:i(count(McuClockSettingConfig/*))"!]U,                       /* number of clock settings */
        [!IF "num:i(count(McuRamSectorSettingConf/*))>0"!]Mcu_RamConfigPC_[!"num:i(@index+1)"!],[!ELSE!]NULL_PTR,[!ENDIF!]             /* pointer to ram section configurations */
        [!IF "num:i(count(McuModeSettingConf/*))>0"!]Mcu_ModeConfigPC_[!"num:i(@index+1)"!],[!ELSE!]NULL_PTR,[!ENDIF!]            /* pointer to low power mode configurations */
        Mcu_ClockConfigPC_[!"num:i(@index+1)"!],           /* pointer to clock settings configurations */
        &McuLLD_ConfigPC_[!"num:i(@index+1)"!],             /*  pointer to low level*/
#if (MCU_DISABLE_DEM_REPORT_ERROR_STATUS == STD_ON)
        [!IF "$McuDemErrorEnable"!][!//
        [!IF "node:exists(./McuDemEventParameterRefs/MCU_E_CLOCK_FAILURE)"!][!//
        [!IF "node:exists(node:ref(./McuDemEventParameterRefs/MCU_E_CLOCK_FAILURE))"!][!//
         { (uint32)STD_ON, [!"node:value(node:ref(./McuDemEventParameterRefs/MCU_E_CLOCK_FAILURE)/DemEventId)"!]U}, /* MCU_E_CLOCK_FAILURE parameters*/ [!//
        [!ELSE!][!//
         [!ERROR "Invalid reference for MCU_E_ERROR"!][!//
        [!ENDIF!][!//
        [!ELSE!][!//
         {(uint32)STD_OFF, 0U}, /* MCU_E_CLOCK_FAILURE parameters*/[!//
        [!ENDIF!][!// 
        [!IF "node:exists(./McuDemEventParameterRefs/MCU_E_LOCK_FAILURE)"!][!//
        [!IF "node:exists(node:ref(./McuDemEventParameterRefs/MCU_E_LOCK_FAILURE))"!][!//
         { (uint32)STD_ON, [!"node:value(node:ref(./McuDemEventParameterRefs/MCU_E_LOCK_FAILURE)/DemEventId)"!]U}, /* MCU_E_LOCK_FAILURE parameters*/ [!//
        [!ELSE!][!//
         [!ERROR "Invalid reference for MCU_E_ERROR"!][!//
        [!ENDIF!][!//
        [!ELSE!][!//
         {(uint32)STD_OFF, 0U}, /* MCU_E_LOCK_FAILURE parameters*/[!//
        [!ENDIF!][!// 
        [!IF "node:exists(./McuDemEventParameterRefs/MCU_E_QUARTZ_FAILURE)"!][!//
        [!IF "node:exists(node:ref(./McuDemEventParameterRefs/MCU_E_QUARTZ_FAILURE))"!][!//
         { (uint32)STD_ON, [!"node:value(node:ref(./McuDemEventParameterRefs/MCU_E_QUARTZ_FAILURE)/DemEventId)"!]U}, /* MCU_E_QUARTZ_FAILURE parameters*/ [!//
        [!ELSE!][!//
         [!ERROR "Invalid reference for MCU_E_ERROR"!][!//
        [!ENDIF!][!//
        [!ELSE!][!//
         {(uint32)STD_OFF, 0U}, /* MCU_E_QUARTZ_FAILURE parameters*/[!//
        [!ENDIF!][!// 
        [!IF "node:exists(./McuDemEventParameterRefs/MCU_E_TIMEOUT_TRANSITION)"!][!//
        [!IF "node:exists(node:ref(./McuDemEventParameterRefs/MCU_E_TIMEOUT_TRANSITION))"!][!//
         { (uint32)STD_ON, [!"node:value(node:ref(./McuDemEventParameterRefs/MCU_E_TIMEOUT_TRANSITION)/DemEventId)"!]U} /* MCU_E_TIMEOUT_TRANSITION parameters*/ [!//
        [!ELSE!][!//
           [!ERROR "Invalid reference for MCU_E_ERROR"!][!//
        [!ENDIF!][!//
        [!ELSE!][!//
           {(uint32)STD_OFF, 0U} /* MCU_E_TIMEOUT_TRANSITION parameters*/[!//
        [!ENDIF!][!// 
        [!ELSE!][!//
            {(uint32)STD_OFF, 0U},/* MCU_E_CLOCK_FAILURE parameters*/
            {(uint32)STD_OFF, 0U},/* MCU_E_LOCK_FAILURE parameters*/
            {(uint32)STD_OFF, 0U},/* MCU_E_QUARTZ_FAILURE parameters*/
            {(uint32)STD_OFF, 0U}/* MCU_E_TIMEOUT_TRANSITION parameters*/
        [!ENDIF!][!// 
#endif /* MCU_DISABLE_DEM_REPORT_ERROR_STATUS== STD_ON */  
    };
/* put [!"node:name(.)"!] structure into specified section */
[!ENDLOOP!][!//
#endif /* MCU_PRECOMPILE_SUPPORT */
/*
* @violates @ref Mcu_cfg_c_REF_3 Identifiers (internal and external) shall not rely on the significance of more than 31
* characters.
*/
#define MCU_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/*
* @violates @ref Mcu_cfg_c_REF_2 MISRA 2004 Required Rule 19.15, Repeated include file
* @violates @ref Mcu_cfg_c_REF_6 MISRA 2004 Advisory Rule 19.1, only preprocessor
*           statements and comments before '#include' MemMap.h
*/

#include "MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
