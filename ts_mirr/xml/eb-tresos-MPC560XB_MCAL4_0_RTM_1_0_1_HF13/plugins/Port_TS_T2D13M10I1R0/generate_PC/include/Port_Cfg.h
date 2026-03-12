[!CODE!][!//
/**
* @file    Port_Cfg.h
*
* @version 1.0.1
* @brief   AUTOSAR Port - PORT driver configuration.
* @details This file contains the PORT driver precompile configuration.
*
* @addtogroup Port
* @{
*/
/*==================================================================================================
*   Project              : AUTOSAR 4.0 MCAL
*   Platform             : PA
*   Peripheral           : SIUL
*   Dependencies         : none
*
*   Autosar Version      : 4.0.3
*   Autosar Revision     : ASR_REL_4_0_REV_0003
*   Autosar Conf.Variant :
*   SW Version           : 1.0.1
*   Build Version        : MPC560xB_MCAL_1_0_1_RTM_HF11_ASR_REL_4_0_REV_0003_20161011
*
*   (c) Copyright 2006-2016 Freescale Semiconductor Inc and STMicroelectronics
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
==================================================================================================*/


#ifndef PORT_CFG_H
#define PORT_CFG_H

#ifdef __cplusplus
extern "C" {
#endif

/**
* @page misra_violations MISRA-C:2004 violations
*
* @section PORT_CFG_REF_1
* Violates MISRA 2004 Advisory Rule 19.1, only preprocessor statements and comments before '#include'
* This is an Autosar requirement about the memory management.
*
* @section PORT_CFG_REF_2
* Violates MISRA 2004 Required Rule 19.15, Repeated include file MemMap.h
* There are different kinds of execution code sections.
*
* @section PORT_CFG_REF_3
* Violates MISRA 2004 Required Rule 5.1,
* Identifiers (internal and external) shall not rely on the significance of more than 31
* characters.
*
* @section PORT_CFG_REF_4
* Violates MISRA 2004 Required Rule 19.4, : C macros shall only expand to a braced initializer, a constant, a string literal, a
* parenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct. 
*
* @section PORT_CFG_REF_6
* Violates MISRA 2004 Required Rule 8.7, Objects shall be defined at block scope if they are
* only accessed from within a single function.
*/
[!INCLUDE "Port_VersionCheck_Inc.m"!][!//
/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
/**
* @file    Port_Cfg.h
* @implements DPORT00010
*/
#include "Port_Siul_LLD_CfgEx.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/**
* @brief Parameters that shall be published within the Port driver header file and also in the
*        module's description file
* @details The integration of incompatible files shall be avoided.
* @implements   DPORT04001
*/
#define PORT_VENDOR_ID_CFG_H                       43
/*
* @violates @ref PORT_CFG_REF_3 Identifiers (internal and external) shall not rely on the significance of more than 31
* characters.
*/
#define PORT_AR_RELEASE_MAJOR_VERSION_CFG_H        4
/*
* @violates @ref PORT_CFG_REF_3 Identifiers (internal and external) shall not rely on the significance of more than 31
* characters.
*/
#define PORT_AR_RELEASE_MINOR_VERSION_CFG_H        0
/*
* @violates @ref PORT_CFG_REF_3 Identifiers (internal and external) shall not rely on the significance of more than 31
* characters.
*/
#define PORT_AR_RELEASE_REVISION_VERSION_CFG_H     3
#define PORT_SW_MAJOR_VERSION_CFG_H                1
#define PORT_SW_MINOR_VERSION_CFG_H                0
#define PORT_SW_PATCH_VERSION_CFG_H                1

/*==================================================================================================
*                               FILE VERSION CHECKS
==================================================================================================*/
/**
* @file    Port_Cfg.h
* @implements   DPORT06001
*/
/* Check if Port_Cfg.h and Port_Siul_LLD_CfgEx.h file are of the same vendor */
#if (PORT_VENDOR_ID_CFG_H != SIUL_VENDOR_ID_EXT_H)
    #error "Port_Cfg.h and Port_Siul_LLD_CfgEx.h have different vendor ids"
#endif
/* Check if Port_Cfg.h and Port_Siul_LLD_CfgEx.h file are of the same Autosar version */
#if ((PORT_AR_RELEASE_MAJOR_VERSION_CFG_H != SIUL_AR_RELEASE_MAJOR_VERSION_EXT_H) || \
     (PORT_AR_RELEASE_MINOR_VERSION_CFG_H != SIUL_AR_RELEASE_MINOR_VERSION_EXT_H) || \
     (PORT_AR_RELEASE_REVISION_VERSION_CFG_H != SIUL_AR_RELEASE_REVISION_VERSION_EXT_H))
    #error "AutoSar Version Numbers of Port_Cfg.h and Port_Siul_LLD_CfgEx.h are different"
#endif
/* Check if Port_Cfg.h and Port_Siul_LLD_CfgEx.h file are of the same software version */
#if ((PORT_SW_MAJOR_VERSION_CFG_H != SIUL_SW_MAJOR_VERSION_EXT_H) || \
     (PORT_SW_MINOR_VERSION_CFG_H != SIUL_SW_MINOR_VERSION_EXT_H) || \
     (PORT_SW_PATCH_VERSION_CFG_H != SIUL_SW_PATCH_VERSION_EXT_H))
  #error "Software Version Numbers of Port_Cfg.h and Port_Siul_LLD_CfgEx.h are different"
#endif

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
* @brief   Structure needed by @p Port_Init().
* @details The structure @p Port_ConfigType is a type for the external data
*          structure containing the initialization data for the PORT Driver.
* @note    The user must use the symbolic names defined in the configuration
*          tool.
*
* @implements       DPORT04002, DPORT04019, DPORT04020, DPORT04021,
*
* @api
*/
typedef struct
{
    VAR(uint8,PORT_VAR) numPins;                                                           /**< @brief Number of pins Configured */
    VAR(uint16,PORT_VAR) NoUnUsedPins;                                                     /**< @brief Number of pins Unused */
    P2CONST(uint16,AUTOMATIC,PORT_APPL_CONST)Port_NoUnUsedPadsArray;                       /**< @brief Unused pins array */
    P2CONST(Port_LLD_UnUsedPinConfigType,AUTOMATIC,PORT_APPL_CONST) Port_LLD_UnUsedPinPtr;  /**< @brief Default pad configuration */
    P2CONST(Port_LLD_PinConfigType,AUTOMATIC,PORT_APPL_CONST) Port_LLD_PinConfPtr;         /**< @brief pin default configuration */
    P2CONST(Port_LLD_PadSelConfigType,AUTOMATIC,PORT_APPL_CONST) Port_LLD_PadSelConfPtr;   /**< @brief pad selection default configuration */
} Port_ConfigType;

/**
* @brief Settings for a PSMI register
* @details The structure @p Pad_PSMI_Setting manages ExtraFunctions PinMode.
* 
* @implements DPORT04003
* @api
*/
typedef struct
{
    VAR(uint8,PORT_VAR) PSMI_id;   /**< @brief The number of the PSMI register to be configured */
    VAR(uint8,PORT_VAR) PSMI_code; /**< @brief The value written in the reg for signal allocation */
} Pad_PSMI_Setting;

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/**
* @brief Show the IPV used.
* @note This define can be used by test phase.
* @implements
*/
#define IPV_SIUL_USED

/*
* @brief Enable/Disable Development Error Detection
* @implements   DPORT04012
*/
#define PORT_DEV_ERROR_DETECT           ([!IF "PortGeneral/PortDevErrorDetect"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])
/**
* @brief Use/remove Port_SetPinDirection function from the compiled driver
* @implements   DPORT04013
*/
#define PORT_SET_PIN_DIRECTION_API      ([!IF "PortGeneral/PortSetPinDirectionApi"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])
/**
* @brief Use/remove Port_SetPinMode function from the compiled driver
* @implements   DPORT04014
*/
#define PORT_SET_PIN_MODE_API           ([!IF "PortGeneral/PortSetPinModeApi"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])
/**
* @brief Use/remove Port_GetVersionInfo function from the compiled driver
* @implements   DPORT04015
*/
#define PORT_VERSION_INFO_API           ([!IF "PortGeneral/PortVersionInfoApi"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])

/**
@brief Enable/Disable Port Pin Abstraction Mode 
*/
#define PORT_PIN_ABSTRACTION_MODE_API           ([!IF "PortGeneral/PortPinAbstractedMode"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])

[!IF "PortGeneral/PortPinAbstractedMode"!]
/*==================================================================================================
                                 DEFINES AND MACROS - ABSTRACTION MODE
==================================================================================================*/
[!INCLUDE "BOLERO_Resource.m"!][!//
[!"$PinMapAbstractedMode"!]
[!ENDIF!][!//


[!LOOP "PortConfigSet/*"!]
[!NOCODE!][!//
[!VAR "OuterLoopCounter" = "0"!][!//
[!VAR "InnerLoopCounter" = "0"!][!//
[!LOOP "PortContainer/*"!][!//
[!LOOP "PortPin/*"!][!//
[!VAR "OuterLoopCounter" = "$OuterLoopCounter + 1"!]
[!VAR "InnerLoopCounter" = "0"!]
[!VAR "Matchcounter" = "0"!]
[!VAR "Id" = "PortPinPcr"!]
[!VAR "Name" = "node:name(.)"!]
[!LOOP "../../../../PortContainer/*"!][!//
[!LOOP "PortPin/*"!][!//
[!VAR "InnerLoopCounter" = "$InnerLoopCounter + 1"!]
[!IF "$OuterLoopCounter >= $InnerLoopCounter"!]
[!IF "($Id = PortPinPcr)"!]
[!VAR "Matchcounter" = "$Matchcounter + 1"!]
[!ENDIF!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//
[!ENDLOOP!][!//
[!IF "$Matchcounter = 1"!]
[!ELSE!]
[!ERROR "PortPinPcr is repeated for two or more ports."!]
[!ENDIF!][!//
[!ENDLOOP!][!//
[!ENDLOOP!][!//
[!LOOP "PortContainer/*"!][!//
[!LOOP "PortPin/*"!][!//
[!VAR "PortPinPcrVar" = "PortPinPcr"!][!//
[!IF "($PortPinPcrVar>ecu:get('PortMaxPinNumber'))"!][!//
[!ERROR!][!//
[!"name(.)"!] [!"': PortPinPcr '"!] [!"string($PortPinPcrVar)"!] [!"concat('- Physical pin numbers greater then ',ecu:get('PortMaxPinNumber'),' are not available in this package')"!][!//
[!ENDERROR!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//
[!ENDLOOP!][!//
[!ENDNOCODE!][!//
[!ENDLOOP!][!//
/**
* @file    Port_Cfg.h
* @brief Port Pin symbolic names
* @details Get All Symbolic Names from configuration tool
* @implements DPORT04016
*/
[!LOOP "PortConfigSet/*"!][!//
[!LOOP "PortContainer/*"!][!//
[!VAR "ContName" = "node:name(.)"!][!//
[!LOOP "PortPin/*"!][!//
[!VAR "PortPinIdVar"="PortPinId"!][!//
#define PortConf_PortPin_[!"node:name(.)"!]  [!"num:i($PortPinIdVar - 1)"!]
[!ENDLOOP!][!//
[!ENDLOOP!][!//
[!ENDLOOP!][!//

/**
* @brief The last supported pin number
*/
#define PORT_MAX_PIN_PACKAGE     ((uint8)([!"ecu:get('PortMaxPinNumber')"!]))

/**
* @brief Number of PSMI registers
* @details Platform constant
*/
#define PORT_NMBR_PSMI_REGS     ((uint8)([!"ecu:get('PortMaxPSMIRegs')"!]))
/**
* @brief Number of available pad modes options
* @details Platform constant
*/
#define PAD_MODE_OPTIONS        ((Port_PinModeType)([!"ecu:get('PortPadModeNumber')"!]))
/**
* @brief Number of pad 16 blocks
* @details Platform constant
*/
#define PAD_16BLOCK_NO          ((uint8)([!"ecu:get('PortPin16BlocksNo')"!]))

[!IF "IMPLEMENTATION_CONFIG_VARIANT='VariantPostBuild'"!]
#ifndef PORT_PRECOMPILE_SUPPORT
/**
* @brief Declaration of config sets for PostBuild configuration
*/
#define PORT_CONFIG_PB
/**
 * @brief Number of unused pin intervals
*/
[!LOOP "PortConfigSet/*"!][!//
[!VAR "MaxNoOfPins" = "num:i(ecu:get('PortMaxPinNumber')+1)"!][!//
[!VAR "UnimplementedPadsNumber" = "num:i(count(ecu:list('PortUnimplementedPAD')))"!][!//
[!VAR "UserPadsNumber" = "num:i(count(PortContainer/*/PortPin/*))"!][!//
[!LOOP "PortContainer/*/PortPin/*"!][!//
[!IF "contains(concat(',',string(ecu:get('PortUnimplementedPAD')),','),concat(',',PortPinPcr,','))"!][!//
[!VAR "UnimplementedPadsNumber"= "$UnimplementedPadsNumber - 1"!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//
[!VAR "DefaultPinNumber" = "$UnimplementedPadsNumber + $UserPadsNumber"!][!//
[!VAR "NoOfUnusedPins" = "num:i(($MaxNoOfPins - $DefaultPinNumber))"!][!//
#define Port_NoUnUsedPins_[!"@index"!]    [!"$NoOfUnusedPins"!]U
[!ENDLOOP!][!//

/**
* @brief The maximum number of configured pins
*/
[!LOOP "PortConfigSet/*"!]
#define PORT_MAX_PIN_SETTINGS_[!"@index"!]   ((uint8)([!"num:i(count(PortContainer/*/PortPin/*))"!]))[!ENDLOOP!]
/*
* @violates @ref PORT_CFG_REF_3 Identifiers (internal and external) shall not rely on the significance of more than 31
* characters.
*/
#define PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
/*
* @violates @ref PORT_CFG_REF_1 only preprocessor statements and comments before '#include'
* @violates @ref PORT_CFG_REF_2 Repeated include file MemMap.h
*/
#include "MemMap.h"

[!LOOP "PortConfigSet/*"!]

/**
* @brief External declaration of the Port configuration structures for post-build mode
* @implements DPORT04017
*/
extern CONST(Port_ConfigType, PORT_CONST) [!"node:name(.)"!];[!ENDLOOP!]

/**
* @brief External declaration of the Port pad functionality extra settings array
* @implements DPORT04018
*/
/*
* @violates @ref PORT_CFG_REF_6 Objects shall be defined at block scope if they are
* only accessed from within a single function.
*/
extern CONST(Pad_PSMI_Setting,PORT_CONST) Pad_funct_extrasettings[[!"ecu:get('PortModeSettingsLinesNo')"!]][[!"ecu:get('PortModeSettingsColNo')"!]];
/*
* @violates @ref PORT_CFG_REF_3 Identifiers (internal and external) shall not rely on the significance of more than 31
* characters.
*/
#define PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/*
* @violates @ref PORT_CFG_REF_1 only preprocessor statements and comments before '#include'
* @violates @ref PORT_CFG_REF_2 Repeated include file MemMap.h
*/
#include "MemMap.h"

#endif
[!ENDIF!][!//

[!IF "IMPLEMENTATION_CONFIG_VARIANT='VariantPreCompile'"!]
/**
* @brief Port driver Pre-Compile configuration switch
*/
#define PORT_PRECOMPILE_SUPPORT
/**
 * @brief Port driver OSC mode setting switch
*/
#define PORT_OSC_SUPPORT

/**
* @brief Declaration of configuration settings for PC configuration
*/
#define PORT_CONFIG_PC
/**
* @brief The maximum number of configured pins
*/
#define PORT_MAX_PIN_SETTINGS   ((uint8)([!"num:i(count(PortConfigSet/*[1]/PortContainer/*/PortPin/*))"!]))

/*
* @violates @ref PORT_CFG_REF_3 Identifiers (internal and external) shall not rely on the significance of more than 31
* characters.
*/
#define PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
/*
* @violates @ref PORT_CFG_REF_1 only preprocessor statements and comments before '#include'
* @violates @ref PORT_CFG_REF_2 Repeated include file MemMap.h
*/
#include "MemMap.h"

/**
* @brief External declaration of the Port configuration structure for pre-compiled mode
* @implements DPORT04019
*/
/*
* @violates @ref PORT_CFG_REF_6 Objects shall be defined at block scope if they are
* only accessed from within a single function.
*/
extern CONST(Port_ConfigType, PORT_CONST) Port_ConfigPC;

/**
* @brief External declaration of the Port pad functionality extra settings array
* @implements DPORT04020
*/
/*
* @violates @ref PORT_CFG_REF_6 Objects shall be defined at block scope if they are
* only accessed from within a single function.
*/
extern CONST(Pad_PSMI_Setting,PORT_CONST) Pad_funct_extrasettings[[!"ecu:get('PortModeSettingsLinesNo')"!]][[!"ecu:get('PortModeSettingsColNo')"!]];

/*
* @violates @ref PORT_CFG_REF_3 Identifiers (internal and external) shall not rely on the significance of more than 31
* characters.
*/
#define PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/*
* @violates @ref PORT_CFG_REF_1 only preprocessor statements and comments before '#include'
* @violates @ref PORT_CFG_REF_2 Repeated include file MemMap.h
*/
#include "MemMap.h"

/**
 * @brief Number of unused pin intervals
*/
[!LOOP "PortConfigSet/*[1]"!][!//
[!VAR "MaxNoOfPins" = "num:i(ecu:get('PortMaxPinNumber')+1)"!][!//
[!VAR "UnimplementedPadsNumber" = "num:i(count(ecu:list('PortUnimplementedPAD')))"!][!//
[!VAR "UserPadsNumber" = "num:i(count(PortContainer/*/PortPin/*))"!][!//
[!LOOP "PortContainer/*/PortPin/*"!][!//
[!IF "contains(concat(',',string(ecu:get('PortUnimplementedPAD')),','),concat(',',PortPinPcr,','))"!][!//
[!VAR "UnimplementedPadsNumber"= "$UnimplementedPadsNumber - 1"!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//
[!VAR "DefaultPinNumber" = "$UnimplementedPadsNumber + $UserPadsNumber"!][!//
[!VAR "NoOfUnusedPins" = "num:i(($MaxNoOfPins - $DefaultPinNumber))"!][!//
#define Port_NoUnUsedPins    [!"$NoOfUnusedPins"!]U
[!ENDLOOP!][!//
[!ENDIF!][!//
/*==================================================================================================
                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*
* @violates @ref PORT_CFG_REF_3 Identifiers (internal and external) shall not rely on the significance of more than 31
* characters.
*/
#define PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
/*
* @violates @ref PORT_CFG_REF_1 only preprocessor statements and comments before '#include'
* @violates @ref PORT_CFG_REF_2 Repeated include file MemMap.h
*/
#include "MemMap.h"

#if (PORT_SET_PIN_MODE_API == STD_ON)
/**
* @brief External declaration of the Port pin description array
* @implements DPORT04021
*/
/*
* @violates @ref PORT_CFG_REF_6 Objects shall be defined at block scope if they are
* only accessed from within a single function.
*/
extern CONST(uint16, PORT_CONST) Port_PinDescription[[!"ecu:get('PortPadModeNumber')"!]][[!"ecu:get('PortPin16BlocksNo')"!]];
#endif

/*
* @violates @ref PORT_CFG_REF_3 Identifiers (internal and external) shall not rely on the significance of more than 31
* characters.
*/
#define PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/*
* @violates @ref PORT_CFG_REF_1 only preprocessor statements and comments before '#include'
* @violates @ref PORT_CFG_REF_2 Repeated include file MemMap.h
*/
#include "MemMap.h"
/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
/* @implements DPORT00004 */
#define PORT_START_SEC_CODE
/*
* @violates @ref PORT_CFG_REF_1 only preprocessor statements and comments before '#include'
* @violates @ref PORT_CFG_REF_2 Repeated include file MemMap.h
*/
#include "MemMap.h"

#define PORT_STOP_SEC_CODE
/*
* @violates @ref PORT_CFG_REF_1 only preprocessor statements and comments before '#include'
* @violates @ref PORT_CFG_REF_2 Repeated include file MemMap.h
*/
#include "MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* PORT_CFG_H */

/** @} */

/* End of File */
[!NOCODE!][!//
[!ENDNOCODE!][!//
[!ENDCODE!][!//
