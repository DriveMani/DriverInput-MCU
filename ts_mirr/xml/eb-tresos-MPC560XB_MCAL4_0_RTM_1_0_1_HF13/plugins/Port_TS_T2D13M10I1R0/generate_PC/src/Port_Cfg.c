[!CODE!][!//
/**
* @file    Port_Cfg.c
*
* @version 1.0.1
* @brief   AUTOSAR Port - PORT driver configuration.
* @details This file contains the PORT driver precompile configuration.
*
* @addtogroup  Port
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

#ifdef __cplusplus
extern "C" {
#endif

/**
* @page misra_violations MISRA-C:2004 violations
*
* @section PORT_CFG_REF_1
* Violates MISRA 2004 Advisory Rule 19.1, only preprocessor statements and comments before "#include"
* This violation is not fixed since the inclusion of MemMap.h is as per Autosar requirement.
*
* @section PORT_CFG_REF_2
* Violates MISRA 2004 Required Rule 10.1, Implicit conversion changes signedness.
* Many type conversions are implemented in MACROS. The code was tested successfully with 3 different compilers.
*
* @section PORT_CFG_REF_3
* Violates MISRA 2004 Required Rule 19.15, Precautions shall be taken in order to prevent the
* contents of a header being included twice.
* This comes from the order of includes in the .c file and from include dependencies. As a safe
* approach, any file must include all its dependencies. Header files are already protected against
* double inclusions.
*
* @section PORT_CFG_REF_4
* Violates MISRA 2004 Required Rule 1.4, The compiler/linker shall be checked to ensure that
* 31 character signifiance and case sensitivity are supported for external identifiers.
* This violation is due to the requirement that requests to have a file version check.
*
* @section PORT_CFG_REF_5
* Violates MISRA 2004 Required Rule 8.10, All declarations and definitions of objects or 
* functions at file scope shall have internal linkage unless external linkage is required.
* State variables may be used by LLD layer.
*
* @section PORT_CFG_REF_6
* Violates MISRA 2004 Required Rule 5.1,
* Identifiers (internal and external) shall not rely on the significance of more than 31
* characters.
*/

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
/**
* @file    Port_Cfg.c
* @implements   DPORT00011
*/
#include "Port.h"

[!INCLUDE "Port_VersionCheck_Src.m"!][!//
#ifdef PORT_PRECOMPILE_SUPPORT
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/**
* @file         Port_Cfg.c
* @brief        Parameters that shall be published within the Port driver header file and also in the
*               module's description file
* @details      The integration of incompatible files shall be avoided.
* @implements   DPORT04022
*/
#define PORT_VENDOR_ID_CFG_C                       43
/*
* @violates @ref PORT_CFG_REF_4 The compiler/linker shall be checked to ensure that 31 character
* signifiance and case sensitivity are supported for external identifiers.
*/
/*
* @violates @ref PORT_CFG_REF_6 Identifiers (internal and external) shall not rely on the significance of more than 31
* characters.
*/
#define PORT_AR_RELEASE_MAJOR_VERSION_CFG_C        4
/*
* @violates @ref PORT_CFG_REF_4 The compiler/linker shall be checked to ensure that 31 character
* signifiance and case sensitivity are supported for external identifiers.
*/
/*
* @violates @ref PORT_CFG_REF_6 Identifiers (internal and external) shall not rely on the significance of more than 31
* characters.
*/
#define PORT_AR_RELEASE_MINOR_VERSION_CFG_C        0
/*
* @violates @ref PORT_CFG_REF_4 The compiler/linker shall be checked to ensure that 31 character
* signifiance and case sensitivity are supported for external identifiers.
*/
/*
* @violates @ref PORT_CFG_REF_6 Identifiers (internal and external) shall not rely on the significance of more than 31
* characters.
*/
#define PORT_AR_RELEASE_REVISION_VERSION_CFG_C     3
#define PORT_SW_MAJOR_VERSION_CFG_C                1
#define PORT_SW_MINOR_VERSION_CFG_C                0
#define PORT_SW_PATCH_VERSION_CFG_C                1

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/**
* @file         Port_Cfg.c
* @implements   DPORT06001
*/
/* Check if Port_Cfg.c and Port.h are of the same vendor */
#if (PORT_VENDOR_ID_CFG_C != PORT_VENDOR_ID)
    #error "Port_Cfg.c and Port.h have different vendor ids"
#endif

/* Check if Port_Cfg.c and Port.h file are of the same Autosar version */
#if ((PORT_AR_RELEASE_MAJOR_VERSION_CFG_C != PORT_AR_RELEASE_MAJOR_VERSION) || \
     (PORT_AR_RELEASE_MINOR_VERSION_CFG_C != PORT_AR_RELEASE_MINOR_VERSION) || \
     (PORT_AR_RELEASE_REVISION_VERSION_CFG_C != PORT_AR_RELEASE_REVISION_VERSION))
   #error "AutoSar Version Numbers of Port_Cfg.c and Port.h are different"
#endif

/* Check if Port_Cfg.c and Port.h are of the same software version */
#if ((PORT_SW_MAJOR_VERSION_CFG_C != PORT_SW_MAJOR_VERSION) || \
     (PORT_SW_MINOR_VERSION_CFG_C != PORT_SW_MINOR_VERSION) || \
     (PORT_SW_PATCH_VERSION_CFG_C != PORT_SW_PATCH_VERSION))
    #error "Software Version Numbers of Port_Cfg.c and Port.h are different"
#endif

/*
* @violates @ref PORT_CFG_REF_6 Identifiers (internal and external) shall not rely on the significance of more than 31
* characters.
*/
#define PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
/**
* @file  Port_Cfg.c
* @implements   DPORT00012
*/
/* @violates @ref PORT_CFG_REF_1 only preprocessor statements and comments before '#include' */
/*
* @violates @ref PORT_CFG_REF_3 Precautions shall be taken in order to prevent
* the contents of a header file being included twice
*/
#include "MemMap.h"
[!NOCODE!][!//
[!/******************************************************************************/!][!//
[!/* Variable used to store Mode selected option                                */!][!//
[!/******************************************************************************/!][!//
[!/* Include package file in order to get valid Pins */!][!//
[!IF "((ecu:get('PortPackage'))='Port_P64pin_LQFP')"!]
[!INCLUDE "BOLERO_Resource.m"!][!//
[!ENDIF!][!//
[!IF "((ecu:get('PortPackage'))='Port_P100pin_LQFP')"!]
[!INCLUDE "BOLERO_Resource.m"!][!//
[!ENDIF!][!//
[!IF "((ecu:get('PortPackage'))='Port_P144pin_LQFP')"!]
[!INCLUDE "BOLERO_Resource.m"!][!//
[!ENDIF!][!//
[!IF "((ecu:get('PortPackage'))='Port_P208pin_BGA')"!]
[!INCLUDE "BOLERO_Resource.m"!][!//
[!ENDIF!][!//
[!IF "((ecu:get('PortPackage'))='Port_P176pin_LQFP')"!]
[!INCLUDE "BOLERO_Resource.m"!][!//
[!ENDIF!][!//
[!IF "((ecu:get('PortPackage'))='Port_P64pin256K_LQFP')"!]
[!INCLUDE "BOLERO_256K_Resource.m"!][!//
[!ENDIF!][!//
[!IF "((ecu:get('PortPackage'))='Port_P100pin256K_LQFP')"!]
[!INCLUDE "BOLERO_256K_Resource.m"!][!//
[!ENDIF!][!//
[!//
[!//
[!/*****************************************************************************/!][!//
[!/*                          MACRO GetAltConf                                 */!][!//
[!/*****************************************************************************/!][!//
[!/* Get the Alternative Mode configuration for selected pin */!][!//
[!MACRO "GetAltConf"!][!//
[!NOCODE!][!//
[!/* Alternative Mode 0 is the GPIO */!][!//
[!IF "text:match(./PortPinMode,'GPIO')"!][!//
  [!VAR "PinMode"="string('GPIO')"!][!//
[!ELSE!][!//
  [!VAR "PinMode"="concat(./PortPinMode,'_PORT',number(./PortPinPcr))"!][!//
[!ENDIF!][!//
[!VAR "PinAltConf"="number(substring-after(substring-before((substring-after($PinMap,$PinMode)),':'),';'))"!][!//
[!ENDNOCODE!][!//
[!ENDMACRO!][!//
[!/*****************************************************************************/!][!//
[!//
[!//
[!/*****************************************************************************/!][!//
[!/*                            MACRO GetPCR                                   */!][!//
[!/*****************************************************************************/!][!//
[!/* Fill the PCR register for the selected pin */!][!//
[!MACRO "GetPCR"!][!//
[!NOCODE!][!//
[!VAR "PinPCR"="num:i(0)"!][!//
[!/* Get the Alternative Mode configuration and fill the PCR */!][!//
[!CALL "GetAltConf"!][!//
[!IF "($PinAltConf = 4)"!][!//
  [!VAR "PinPCR"="bit:or($PinPCR,bit:shl(1,13))"!][!//
[!ELSE!][!//
  [!IF "($PinAltConf = 5)"!][!//
    [!VAR "PinPCR"="bit:or($PinPCR,bit:shl(1,8))"!][!//
    [!/* Check if weak pull up/down is enabled */!][!//
    [!IF "./PortPinWpe"!][!//
      [!VAR "PinPCR"="bit:or($PinPCR,bit:shl(1,1))"!][!//
    [!ENDIF!][!//
    [!/* Check whether weak pull-up or weak pull-down is selected */!][!//
    [!IF "./PortPinWps"!][!//
      [!VAR "PinPCR"="bit:or($PinPCR,1)"!][!//
    [!ENDIF!][!//
  [!ELSE!][!//
    [!IF "($PinAltConf = 7)"!][!//
      [!VAR "PinPCR"="bit:or($PinPCR,bit:shl(1,8))"!][!//
      [!/* Check if weak pull up/down is enabled */!][!//
      [!IF "./PortPinWpe"!][!//
        [!VAR "PinPCR"="bit:or($PinPCR,bit:shl(1,1))"!][!//
      [!ENDIF!][!//
      [!/* Check whether weak pull-up or weak pull-down is selected */!][!//
      [!IF "./PortPinWps"!][!//
        [!VAR "PinPCR"="bit:or($PinPCR,1)"!][!//
      [!ENDIF!][!//
    [!ELSE!][!//
      [!IF "($PinAltConf = 8)"!][!//
        [!VAR "PinPCR"="bit:or($PinPCR,bit:shl(1,8))"!][!//
        [!/* Check if weak pull up/down is enabled */!][!//
        [!IF "./PortPinWpe"!][!//
          [!VAR "PinPCR"="bit:or($PinPCR,bit:shl(1,1))"!][!//
        [!ENDIF!][!//
        [!/* Check whether weak pull-up or weak pull-down is selected */!][!//
        [!IF "./PortPinWps"!][!//
          [!VAR "PinPCR"="bit:or($PinPCR,1)"!][!//
        [!ENDIF!][!//
      [!ELSE!][!//
        [!IF "($PinAltConf = 6)"!][!//
        [!ELSE!][!//
          [!VAR "PinPCR"="bit:or($PinPCR,bit:shl($PinAltConf,10))"!][!//

          [!/* Check if the pin is configured as input or output */!][!//
          [!IF "boolean(./PortPinDirection)"!][!//
            [!IF "text:match(./PortPinDirection,'PORT_PIN_OUT')"!][!//
              [!VAR "PinPCR"="bit:or($PinPCR,bit:shl(1,9))"!][!//
              [!/* Check if safe mode control is enabled */!][!//
              [!IF "./PortPinSafeMode"!][!//
                [!VAR "PinPCR"="bit:or($PinPCR,bit:shl(1,14))"!][!//
              [!ENDIF!][!//
            [!ENDIF!][!//
            [!IF "text:match(./PortPinDirection,'PORT_PIN_IN')"!][!//
              [!VAR "PinPCR"="bit:or($PinPCR,bit:shl(1,8))"!][!//
            [!ENDIF!][!//
          [!ENDIF!][!//

          [!/* Disable input and output buffer */!][!//
          [!IF "text:match(./PortPinDirection,'PORT_PIN_DISABLED')"!][!//
              [!VAR "PinPCR"="bit:or($PinPCR,bit:shl(0,8))"!][!//
              [!VAR "PinPCR"="bit:or($PinPCR,bit:shl(0,9))"!][!//
          [!ENDIF!][!//

          [!/* Check if open drain output is enabled */!][!//
          [!IF "boolean(./PortPinOde)"!][!//
            [!IF "./PortPinOde"!][!//
              [!VAR "PinPCR"="bit:or($PinPCR,bit:shl(1,5))"!][!//
            [!ENDIF!][!//
          [!ENDIF!][!//

          [!/* Check if slew rate control is enabled */!][!//
          [!IF "(./PortPinSlewRate = 'FastestConfiguration')"!][!//
            [!VAR "PinPCR"="bit:or($PinPCR,bit:shl(1,2))"!][!//
          [!ENDIF!][!//

          [!/* Check if weak pull up/down is enabled */!][!//
          [!IF "./PortPinWpe"!][!//
            [!VAR "PinPCR"="bit:or($PinPCR,bit:shl(1,1))"!][!//
          [!ENDIF!][!//

          [!/* Check whether weak pull-up or weak pull-down is selected */!][!//
          [!IF "./PortPinWps"!][!//
            [!VAR "PinPCR"="bit:or($PinPCR,1)"!][!//
          [!ENDIF!][!//

          [!IF "./PortPinReadback"!][!//
            [!VAR "PinPCR"="bit:or($PinPCR,bit:shl(1,8))"!][!//
          [!ENDIF!][!//

          [!/* Check if read status is enabled */!][!//
          [!IF "boolean(./PortReadStatusEnable)"!][!//
            [!VAR "PinPCR"="bit:or($PinPCR,bit:shl(1,8))"!][!//
          [!ENDIF!][!//
        [!ENDIF!][!//
      [!ENDIF!][!//
    [!ENDIF!][!//
  [!ENDIF!][!//
[!ENDIF!][!//
[!ENDNOCODE!][!//
[!"num:inttohex($PinPCR,4)"!][!//
[!ENDMACRO!][!//
[!/*****************************************************************************/!][!//
[!//
[!//
[!/*****************************************************************************/!][!//
[!/*                            MACRO GetPDO                                   */!][!//
[!/*****************************************************************************/!][!//
[!/* Get the Alternative Mode configuration for selected pin */!][!//
[!MACRO "GetPDO"!][!//
[!NOCODE!][!//
[!/* Alternative Mode 0 is the GPIO */!][!//
[!IF "boolean(./PortPinLevelValue)"!][!//
  [!IF "text:match(./PortPinLevelValue,'PORT_PIN_LEVEL_LOW')"!][!//
    [!VAR "PinPDO"="num:i(0)"!][!//
  [!ELSE!][!//
    [!VAR "PinPDO"="num:i(1)"!][!//
  [!ENDIF!][!//
[!ELSE!][!//
  [!VAR "PinPDO"="num:i(-1)"!][!//
[!ENDIF!][!//
[!ENDNOCODE!][!//
[!"$PinPDO"!][!//
[!ENDMACRO!][!//
[!/*****************************************************************************/!][!//
[!//
[!//
[!/*****************************************************************************/!][!//
[!/*                          MACRO GetDirConf                                 */!][!//
[!/*****************************************************************************/!][!//
[!/* Get the Alternative Mode configuration for selected pin */!][!//
[!MACRO "GetDirConf"!][!//
[!NOCODE!][!//
[!/* Alternative Mode 0 is the GPIO */!][!//
[!IF "boolean(./PortPinDirectionChangeable)"!][!//
  [!IF "./PortPinDirectionChangeable"!][!//
    [!VAR "Direction"= "string('(boolean)TRUE')"!][!//
  [!ELSE!][!//
    [!VAR "Direction"= "string('(boolean)FALSE')"!][!//
  [!ENDIF!][!//
[!ELSE!][!//
  [!VAR "Direction"= "string('(boolean)FALSE')"!][!//
[!ENDIF!][!//
[!ENDNOCODE!][!//
[!"$Direction"!][!//
[!ENDMACRO!][!//
[!/*****************************************************************************/!][!//
[!//
[!//
[!/*****************************************************************************/!][!//
[!/*                          MACRO GetModeChang                               */!][!//
[!/*****************************************************************************/!][!//
[!MACRO "GetModeChang"!][!//
[!NOCODE!][!//
[!/* Alternative Mode 0 is the GPIO */!][!//
[!IF "boolean(./PortPinModeChangeable)"!][!//
  [!IF "./PortPinModeChangeable"!][!//
    [!VAR "ModeChang"= "string('(boolean)TRUE')"!][!//
  [!ELSE!][!//
    [!VAR "ModeChang"= "string('(boolean)FALSE')"!][!//
  [!ENDIF!][!//
[!ELSE!][!//
  [!VAR "ModeChang"= "string('(boolean)FALSE')"!][!//
[!ENDIF!][!//
[!ENDNOCODE!][!//
[!"$ModeChang"!][!//
[!ENDMACRO!][!//
[!ENDNOCODE!][!//

[!LOOP "PortConfigSet/*[1]"!]
[!VAR "count"= "1"!][!//
[!VAR "Maxcount"= "num:i(count(PortContainer/*/PortPin/*))-1"!][!//
[!VAR "LoopVar"="1"!][!//

[!VAR "MaxcountDefaultPin"="ecu:get('PortMaxPinNumber')"!][!//
[!VAR "counter"="0"!][!//
/*
* @violates @ref PORT_CFG_REF_2 Violates MISRA 2004 Required Rules 10.1,Implicit conversion changes signedness.
*/
#if (Port_NoUnUsedPins != 0)
/**
 * @brief NoDefaultPadsArray is an array containing Unimplemented pads and User pads
 */
/*
* @violates @ref PORT_CFG_REF_5 Violates MISRA 2004 Required Rule 8.10
*/
CONST(uint16, PORT_CONST) Port_NoUnUsedPadsArrayDefault[Port_NoUnUsedPins]=
{
[!FOR "x" = "0" TO "ecu:get('PortMaxPinNumber')"!][!//
[!VAR "PinUsed"="0"!][!//
[!LOOP "PortContainer/*/PortPin/*"!][!//
[!IF "$PinUsed=0"!][!//
[!IF "num:i(./PortPinPcr)=$x"!][!//
[!VAR "PinUsed"="$PinUsed + 1"!][!//
[!ENDIF!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//
[!IF "$PinUsed=0"!][!//
[!IF "contains(concat(',',string(ecu:get('PortUnimplementedPAD')),','),concat(',',$x,','))"!][!//
[!VAR "PinUsed"="$PinUsed + 1"!][!//
[!ENDIF!][!//
[!ENDIF!][!//
[!IF "$PinUsed=0"!][!//
[!IF "$counter=0"!][!//
(uint16)[!"$x"!][!//
[!ELSE!][!//
,
(uint16)[!"$x"!][!//
[!ENDIF!][!//
[!VAR "counter"= "$counter+1"!][!//
[!ENDIF!][!//
[!ENDFOR!][!//

};
#endif

/**
 * @brief Default Configuration for Pins not initialized
 */
/*
* @violates @ref PORT_CFG_REF_5 Violates MISRA 2004 Required Rule 8.10
*/
CONST(Port_LLD_UnUsedPinConfigType, PORT_CONST) Port_LLD_UnUsedPin[1] =
{
 /**
   * @note: Configuration of Default pin
   */
   [!LOOP "UnUsedPortPin"!][!//
   {(uint16)[!CALL "GetPCR"!], (sint8)[!CALL "GetPDO"!]}
   [!ENDLOOP!][!//
};
/*
* @violates @ref PORT_CFG_REF_5 All declarations and definitions of objects or
* functions at file scope shall have internal linkage unless external linkage is required.
*/
CONST(Port_LLD_PinConfigType, PORT_CONST) Port_LLD_PinConfigDefault[PORT_MAX_PIN_SETTINGS]=
{
/**
* @violates @ref PORT_CFG_REF_2 Violates MISRA 2004 Required Rules 10.1,Implicit conversion changes signedness.
*/
[!FOR "x" = "0" TO "num:i(count(PortContainer/*/PortPin/*))"!][!//
[!LOOP "PortContainer/*/PortPin/*"!][!//
[!VAR "Loop"="num:i($LoopVar)"!][!//
[!IF "PortPinId=$Loop"!][!//
[!IF "$Maxcount>=$count"!][!//
  {(uint8)[!"./PortPinPcr"!], (uint16)[!CALL "GetPCR"!], (sint8)[!CALL "GetPDO"!], [!CALL "GetDirConf"!], [!CALL "GetModeChang"!]},
[!ELSE!][!//
  {(uint8)[!"./PortPinPcr"!], (uint16)[!CALL "GetPCR"!], (sint8)[!CALL "GetPDO"!], [!CALL "GetDirConf"!], [!CALL "GetModeChang"!]}
[!ENDIF!][!//
[!VAR "count"= "$count+1"!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//
[!VAR "LoopVar"="$LoopVar + 1"!][!//
[!ENDFOR!][!//
};

/**
 * @brief Pad selection default configuration
 */
 /*
* @violates @ref PORT_CFG_REF_2 Violates MISRA 2004 Required Rule 10.1, Implicit
* conversion changes signedness.
*/
/*
* @violates @ref PORT_CFG_REF_5 Violates MISRA 2004 Required Rule 8.10
*/
CONST(Port_LLD_PadSelConfigType, PORT_CONST) Port_LLD_PadSelConfigDefault[PORT_NMBR_PSMI_REGS]=
{
[!NOCODE!]
[!/* PSMI0 */!]
[!VAR "cPSMI0"="0"!][!//
[!VAR "cPSMI1"="0"!][!//
[!VAR "cPSMI2"="0"!][!//
[!VAR "cPSMI3"="0"!][!//
[!VAR "cPSMI4"="0"!][!//
[!VAR "cPSMI5"="0"!][!//
[!VAR "cPSMI6"="0"!][!//
[!VAR "cPSMI7"="0"!][!//
[!VAR "cPSMI8"="0"!][!//
[!VAR "cPSMI9"="0"!][!//
[!VAR "cPSMI10"="0"!][!//
[!VAR "cPSMI11"="0"!][!//
[!VAR "cPSMI12"="0"!][!//
[!VAR "cPSMI13"="0"!][!//
[!VAR "cPSMI14"="0"!][!//
[!VAR "cPSMI15"="0"!][!//
[!VAR "cPSMI16"="0"!][!//
[!VAR "mode_pin"="0"!][!//
[!VAR "crt_PSMI"="0"!][!//
[!LOOP "PortContainer/*"!][!//
[!LOOP "PortPin/*"!][!//
[!VAR "mode_pin"="concat(./PortPinMode,'_PORT',number(./PortPinPcr))"!][!//
[!VAR "nr_PSMI"="0"!][!//
[!/* PSMI 0*/!]
[!IF "contains($PSMI0, $mode_pin)"!][!//
  [!VAR "crt_PSMI"="number(substring-after(substring-before((substring-after($PSMI0,$mode_pin)),':'),';'))"!][!//
  [!VAR "cPSMI0"="bit:or($cPSMI0,$crt_PSMI)"!][!//
[!ENDIF!][!//
[!/* PSMI 1*/!]
[!IF "contains($PSMI1, $mode_pin)"!][!//
  [!VAR "crt_PSMI"="number(substring-after(substring-before((substring-after($PSMI1,$mode_pin)),':'),';'))"!][!//
  [!VAR "cPSMI1"="bit:or($cPSMI1,$crt_PSMI)"!][!//
[!ENDIF!][!//
[!/* PSMI 2*/!]
[!IF "contains($PSMI2, $mode_pin)"!][!//
  [!VAR "crt_PSMI"="number(substring-after(substring-before((substring-after($PSMI2,$mode_pin)),':'),';'))"!][!//
  [!VAR "cPSMI2"="bit:or($cPSMI2,$crt_PSMI)"!][!//
[!ENDIF!][!//
[!/* PSMI 3*/!]
[!IF "contains($PSMI3, $mode_pin)"!][!//
  [!VAR "crt_PSMI"="number(substring-after(substring-before((substring-after($PSMI3,$mode_pin)),':'),';'))"!][!//
  [!VAR "cPSMI3"="bit:or($cPSMI3,$crt_PSMI)"!][!//
[!ENDIF!][!//
[!/* PSMI 4*/!]
[!IF "contains($PSMI4, $mode_pin)"!][!//
  [!VAR "crt_PSMI"="number(substring-after(substring-before((substring-after($PSMI4,$mode_pin)),':'),';'))"!][!//
  [!VAR "cPSMI4"="bit:or($cPSMI4,$crt_PSMI)"!][!//
[!ENDIF!][!//
[!/* PSMI 5*/!]
[!IF "contains($PSMI5, $mode_pin)"!][!//
  [!VAR "crt_PSMI"="number(substring-after(substring-before((substring-after($PSMI5,$mode_pin)),':'),';'))"!][!//
  [!VAR "cPSMI5"="bit:or($cPSMI5,$crt_PSMI)"!][!//
[!ENDIF!][!//
[!VAR "nr_PSMI" = "6"!]
[!IF "($nr_PSMI<ecu:get('PortMaxPSMIRegs'))"!][!//
[!/* PSMI 6*/!]
  [!IF "contains($PSMI6, $mode_pin)"!][!//
    [!VAR "crt_PSMI"="number(substring-after(substring-before((substring-after($PSMI6,$mode_pin)),':'),';'))"!][!//
    [!VAR "cPSMI6"="bit:or($cPSMI6,$crt_PSMI)"!][!//
  [!ENDIF!][!//
  [!VAR "nr_PSMI" = "$nr_PSMI+1"!]
[!ENDIF!][!//
[!IF "($nr_PSMI<ecu:get('PortMaxPSMIRegs'))"!][!//
[!/* PSMI 7*/!]
  [!IF "contains($PSMI7, $mode_pin)"!][!//
    [!VAR "crt_PSMI"="number(substring-after(substring-before((substring-after($PSMI7,$mode_pin)),':'),';'))"!][!//
    [!VAR "cPSMI7"="bit:or($cPSMI7,$crt_PSMI)"!][!//
  [!ENDIF!][!//
  [!VAR "nr_PSMI" = "$nr_PSMI+1"!]
[!ENDIF!][!//
[!IF "($nr_PSMI<ecu:get('PortMaxPSMIRegs'))"!][!//
[!/* PSMI 8*/!]
  [!IF "contains($PSMI8, $mode_pin)"!][!//
    [!VAR "crt_PSMI"="number(substring-after(substring-before((substring-after($PSMI8,$mode_pin)),':'),';'))"!][!//
    [!VAR "cPSMI8"="bit:or($cPSMI8,$crt_PSMI)"!][!//
  [!ENDIF!][!//
  [!VAR "nr_PSMI" = "$nr_PSMI+1"!]
  [!IF "($nr_PSMI<ecu:get('PortMaxPSMIRegs'))"!][!//
[!/* PSMI 9*/!]
    [!IF "contains($PSMI9, $mode_pin)"!][!//
      [!VAR "crt_PSMI"="number(substring-after(substring-before((substring-after($PSMI9,$mode_pin)),':'),';'))"!][!//
      [!VAR "cPSMI9"="bit:or($cPSMI9,$crt_PSMI)"!][!//
    [!ENDIF!][!//
    [!VAR "nr_PSMI" = "$nr_PSMI+1"!]
    [!IF "($nr_PSMI<ecu:get('PortMaxPSMIRegs'))"!][!//
[!/* PSMI 10*/!]
      [!IF "contains($PSMI10, $mode_pin)"!][!//
        [!VAR "crt_PSMI"="number(substring-after(substring-before((substring-after($PSMI10,$mode_pin)),':'),';'))"!][!//
        [!VAR "cPSMI10"="bit:or($cPSMI10,$crt_PSMI)"!][!//
      [!ENDIF!][!//
      [!VAR "nr_PSMI" = "$nr_PSMI+1"!]
      [!IF "($nr_PSMI<ecu:get('PortMaxPSMIRegs'))"!][!//
[!/* PSMI 11*/!]
        [!IF "contains($PSMI11, $mode_pin)"!][!//
          [!VAR "crt_PSMI"="number(substring-after(substring-before((substring-after($PSMI11,$mode_pin)),':'),';'))"!][!//
          [!VAR "cPSMI11"="bit:or($cPSMI11,$crt_PSMI)"!][!//
        [!ENDIF!][!//
        [!VAR "nr_PSMI" = "$nr_PSMI+1"!]
        [!IF "($nr_PSMI<ecu:get('PortMaxPSMIRegs'))"!][!//
[!/* PSMI 12*/!]
          [!IF "contains($PSMI12, $mode_pin)"!][!//
            [!VAR "crt_PSMI"="number(substring-after(substring-before((substring-after($PSMI12,$mode_pin)),':'),';'))"!][!//
            [!VAR "cPSMI12"="bit:or($cPSMI12,$crt_PSMI)"!][!//
          [!ENDIF!][!//
          [!VAR "nr_PSMI" = "$nr_PSMI+1"!]
          [!IF "($nr_PSMI<ecu:get('PortMaxPSMIRegs'))"!][!//
[!/* PSMI 13*/!]
            [!IF "contains($PSMI13, $mode_pin)"!][!//
              [!VAR "crt_PSMI"="number(substring-after(substring-before((substring-after($PSMI13,$mode_pin)),':'),';'))"!][!//
              [!VAR "cPSMI13"="bit:or($cPSMI13,$crt_PSMI)"!][!//
            [!ENDIF!][!//
            [!VAR "nr_PSMI" = "$nr_PSMI+1"!]
            [!IF "($nr_PSMI<ecu:get('PortMaxPSMIRegs'))"!][!//
[!/* PSMI 14*/!]
              [!IF "contains($PSMI14, $mode_pin)"!][!//
                [!VAR "crt_PSMI"="number(substring-after(substring-before((substring-after($PSMI14,$mode_pin)),':'),';'))"!][!//
                [!VAR "cPSMI14"="bit:or($cPSMI14,$crt_PSMI)"!][!//
              [!ENDIF!][!//
              [!VAR "nr_PSMI" = "$nr_PSMI+1"!]
              [!IF "($nr_PSMI<ecu:get('PortMaxPSMIRegs'))"!][!//
[!/* PSMI 15*/!]
                [!IF "contains($PSMI15, $mode_pin)"!][!//
                  [!VAR "crt_PSMI"="number(substring-after(substring-before((substring-after($PSMI15,$mode_pin)),':'),';'))"!][!//
                  [!VAR "cPSMI15"="bit:or($cPSMI15,$crt_PSMI)"!][!//
                [!ENDIF!][!//
                [!VAR "nr_PSMI" = "$nr_PSMI+1"!]
                [!IF "($nr_PSMI<ecu:get('PortMaxPSMIRegs'))"!][!//
[!/* PSMI 16*/!]
                  [!IF "contains($PSMI16, $mode_pin)"!][!//
                    [!VAR "crt_PSMI"="number(substring-after(substring-before((substring-after($PSMI16,$mode_pin)),':'),';'))"!][!//
                    [!VAR "cPSMI16"="bit:or($cPSMI16,$crt_PSMI)"!][!//
                  [!ENDIF!][!//
                  [!VAR "nr_PSMI" = "$nr_PSMI+1"!]
                [!ENDIF!][!//
              [!ENDIF!][!//
            [!ENDIF!][!//
          [!ENDIF!][!//
        [!ENDIF!][!//
      [!ENDIF!][!//
    [!ENDIF!][!//
  [!ENDIF!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//
[!ENDLOOP!][!//
[!ENDNOCODE!][!//
         (uint32)[!"num:inttohex($cPSMI0, 8)"!],
         (uint32)[!"num:inttohex($cPSMI1, 8)"!],
         (uint32)[!"num:inttohex($cPSMI2, 8)"!],
         (uint32)[!"num:inttohex($cPSMI3, 8)"!],
         (uint32)[!"num:inttohex($cPSMI4, 8)"!],[!//
[!IF "((ecu:get('PortMaxPSMIRegs')) ='6')"!]
         (uint32)[!"num:inttohex($cPSMI5, 8)"!]
};
[!ELSE!]
      (uint32)[!"num:inttohex($cPSMI5, 8)"!],[!//
[!IF "((ecu:get('PortMaxPSMIRegs')) ='7')"!]
         (uint32)[!"num:inttohex($cPSMI6, 8)"!]
};
[!ELSE!]
         (uint32)[!"num:inttohex($cPSMI6, 8)"!],[!//
  [!IF "((ecu:get('PortMaxPSMIRegs')) ='8')"!]
         (uint32)[!"num:inttohex($cPSMI7, 8)"!]
};
  [!ELSE!]
         (uint32)[!"num:inttohex($cPSMI7, 8)"!],[!//
    [!IF "((ecu:get('PortMaxPSMIRegs')) ='9')"!]
         (uint32)[!"num:inttohex($cPSMI8, 8)"!]
};
    [!ELSE!]
         (uint32)[!"num:inttohex($cPSMI8, 8)"!],[!//
      [!IF "((ecu:get('PortMaxPSMIRegs')) ='10')"!]
         (uint32)[!"num:inttohex($cPSMI9, 8)"!]
};
      [!ELSE!]
         (uint32)[!"num:inttohex($cPSMI9, 8)"!],[!//
        [!IF "((ecu:get('PortMaxPSMIRegs')) ='11')"!]
         (uint32)[!"num:inttohex($cPSMI10, 8)"!]
};
        [!ELSE!]
         (uint32)[!"num:inttohex($cPSMI10, 8)"!],[!//
          [!IF "((ecu:get('PortMaxPSMIRegs')) ='12')"!]
         (uint32)[!"num:inttohex($cPSMI11, 8)"!]
};
          [!ELSE!]
         (uint32)[!"num:inttohex($cPSMI11, 8)"!],[!//
            [!IF "((ecu:get('PortMaxPSMIRegs')) ='13')"!]
         (uint32)[!"num:inttohex($cPSMI12, 8)"!]
};
            [!ELSE!]
         (uint32)[!"num:inttohex($cPSMI12, 8)"!],[!//
              [!IF "((ecu:get('PortMaxPSMIRegs')) ='14')"!]
         (uint32)[!"num:inttohex($cPSMI13, 8)"!]
};
              [!ELSE!]
         (uint32)[!"num:inttohex($cPSMI13, 8)"!],[!//
                [!IF "((ecu:get('PortMaxPSMIRegs')) ='15')"!]
         (uint32)[!"num:inttohex($cPSMI14, 8)"!]
};
                [!ELSE!]
         (uint32)[!"num:inttohex($cPSMI14, 8)"!],[!//
                  [!IF "((ecu:get('PortMaxPSMIRegs')) ='16')"!]
         (uint32)[!"num:inttohex($cPSMI15, 8)"!]
};
                  [!ELSE!]
         (uint32)[!"num:inttohex($cPSMI15, 8)"!],[!//
         (uint32)[!"num:inttohex($cPSMI16, 8)"!]
};
                  [!ENDIF!][!//
                [!ENDIF!][!//
              [!ENDIF!][!//
            [!ENDIF!][!//
          [!ENDIF!][!//
        [!ENDIF!][!//
      [!ENDIF!][!//
    [!ENDIF!][!//
  [!ENDIF!][!//
[!ENDIF!][!//
[!ENDIF!][!//


/**
* @brief This table contains all the Configured Port Pin parameters and the
*        number of Port Pins configured by the tool for the pre-compiled mode
*/
/*
* @violates @ref PORT_CFG_REF_5 Violates MISRA 2004 Required Rule 8.10
*/
CONST(Port_ConfigType, PORT_CONST) Port_ConfigPC =
{
  PORT_MAX_PIN_SETTINGS,
  Port_NoUnUsedPins,
/*
* @violates @ref PORT_CFG_REF_2 Violates MISRA 2004 Required Rule 10.1, Implicit
* conversion changes signedness.
*/ 
#if (Port_NoUnUsedPins != 0)
  Port_NoUnUsedPadsArrayDefault,
#else
  NULL_PTR,
#endif
  Port_LLD_UnUsedPin,
  Port_LLD_PinConfigDefault,
/*
* @violates @ref PORT_CFG_REF_2 Violates MISRA 2004 Required Rule 10.1, Implicit
* conversion changes signedness.
*/
  Port_LLD_PadSelConfigDefault
};
[!ENDLOOP!]

#if (PORT_SET_PIN_MODE_API == STD_ON)

[!IF "((ecu:get('PortPackage'))='Port_P64pin256K_LQFP')"!]
/**
 * @brief Port Pin description data
 * @remarks Covers MCAL2881
*/
/*
* @violates @ref PORT_CFG_REF_5 Violates MISRA 2004 Required Rule 8.10
 */
CONST (uint16, PORT_VAR) Port_PinDescription[[!"ecu:get('PortPadModeNumber')"!]][[!"ecu:get('PortPin16BlocksNo')"!]] =
{  [!"$CHECK_1"!]};

/**
 * @brief Port PSMI settings data
 */
/*
* @violates @ref PORT_CFG_REF_5 Violates MISRA 2004 Required Rule 8.10
*/
CONST(Pad_PSMI_Setting,PORT_CONST) Pad_funct_extrasettings[[!"ecu:get('PortModeSettingsLinesNo')"!]][[!"ecu:get('PortModeSettingsColNo')"!]]=
{  [!"$ALTERNATE_PSMI_1"!]};
[!ENDIF!]

[!IF "((ecu:get('PortPackage'))='Port_P100pin256K_LQFP')"!]
/**
 * @brief Port Pin description data
 * @remarks Covers MCAL2881
*/
/*
* @violates @ref PORT_CFG_REF_5 Violates MISRA 2004 Required Rule 8.10
 */
CONST (uint16, PORT_VAR) Port_PinDescription[[!"ecu:get('PortPadModeNumber')"!]][[!"ecu:get('PortPin16BlocksNo')"!]] =
{  [!"$CHECK_2"!]};
/**
 * @brief Port PSMI settings data
 */
/*
* @violates @ref PORT_CFG_REF_5 Violates MISRA 2004 Required Rule 8.10
*/
CONST(Pad_PSMI_Setting,PORT_CONST) Pad_funct_extrasettings[[!"ecu:get('PortModeSettingsLinesNo')"!]][[!"ecu:get('PortModeSettingsColNo')"!]]=
{  [!"$ALTERNATE_PSMI_2"!]};
[!ENDIF!]

[!IF "((ecu:get('PortPackage'))='Port_P100pin512K_LQFP')"!]
/**
 * @brief Port Pin description data
 * @remarks Covers MCAL2881
 */
/*
* @violates @ref PORT_CFG_REF_5 Violates MISRA 2004 Required Rule 8.10
*/
CONST (uint16, PORT_VAR) Port_PinDescription[[!"ecu:get('PortPadModeNumber')"!]][[!"ecu:get('PortPin16BlocksNo')"!]] =
{  [!"$CHECK_3"!]};
/**
 * @brief Port PSMI settings data
 */
/*
* @violates @ref PORT_CFG_REF_5 Violates MISRA 2004 Required Rule 8.10
*/
CONST(Pad_PSMI_Setting,PORT_CONST) Pad_funct_extrasettings[[!"ecu:get('PortModeSettingsLinesNo')"!]][[!"ecu:get('PortModeSettingsColNo')"!]]=
{  [!"$ALTERNATE_PSMI_3"!]};
[!ENDIF!]

[!IF "((ecu:get('PortPackage'))='Port_P144pin512K_LQFP')"!]
/**
@brief Port Pin description data
@remarks Covers MCAL2881
*/
/*
* @violates @ref PORT_CFG_REF_5 Violates MISRA 2004 Required Rule 8.10
*/
CONST (uint16, PORT_VAR) Port_PinDescription[[!"ecu:get('PortPadModeNumber')"!]][[!"ecu:get('PortPin16BlocksNo')"!]] =
{  [!"$CHECK_4"!]};
/**
@brief Port PSMI settings data
*/
/*
* @violates @ref PORT_CFG_REF_5 Violates MISRA 2004 Required Rule 8.10
*/
CONST(Pad_PSMI_Setting,PORT_CONST) Pad_funct_extrasettings[[!"ecu:get('PortModeSettingsLinesNo')"!]][[!"ecu:get('PortModeSettingsColNo')"!]]=
{  [!"$ALTERNATE_PSMI_4"!]};
[!ENDIF!]

[!IF "((ecu:get('PortPackage'))='Port_P100pin1024K_LQFP')"!]
/**
 * @brief Port Pin description data
 * @remarks Covers MCAL2881
 */
/*
* @violates @ref PORT_CFG_REF_5 Violates MISRA 2004 Required Rule 8.10
*/
CONST (uint16, PORT_VAR) Port_PinDescription[[!"ecu:get('PortPadModeNumber')"!]][[!"ecu:get('PortPin16BlocksNo')"!]] =
{  [!"$CHECK_3"!]};
/**
 * @brief Port PSMI settings data
 */
/*
* @violates @ref PORT_CFG_REF_5 Violates MISRA 2004 Required Rule 8.10
*/
CONST(Pad_PSMI_Setting,PORT_CONST) Pad_funct_extrasettings[[!"ecu:get('PortModeSettingsLinesNo')"!]][[!"ecu:get('PortModeSettingsColNo')"!]]=
{  [!"$ALTERNATE_PSMI_3"!]};
[!ENDIF!]

[!IF "((ecu:get('PortPackage'))='Port_P144pin1024K_LQFP')"!]
/**
@brief Port Pin description data
@remarks Covers MCAL2881
*/
/*
* @violates @ref PORT_CFG_REF_5 Violates MISRA 2004 Required Rule 8.10
*/
CONST (uint16, PORT_VAR) Port_PinDescription[[!"ecu:get('PortPadModeNumber')"!]][[!"ecu:get('PortPin16BlocksNo')"!]] =
{  [!"$CHECK_4"!]};
/**
@brief Port PSMI settings data
*/
/*
* @violates @ref PORT_CFG_REF_5 Violates MISRA 2004 Required Rule 8.10
*/
CONST(Pad_PSMI_Setting,PORT_CONST) Pad_funct_extrasettings[[!"ecu:get('PortModeSettingsLinesNo')"!]][[!"ecu:get('PortModeSettingsColNo')"!]]=
{  [!"$ALTERNATE_PSMI_4"!]};
[!ENDIF!]

[!IF "((ecu:get('PortPackage'))='Port_P176pin1024K_LQFP')"!]
/**
@brief Port Pin description data
@remarks Covers MCAL2881
*/
/*
* @violates @ref PORT_CFG_REF_5 Violates MISRA 2004 Required Rule 8.10
*/
CONST (uint16, PORT_VAR) Port_PinDescription[[!"ecu:get('PortPadModeNumber')"!]][[!"ecu:get('PortPin16BlocksNo')"!]] =
{  [!"$CHECK_5"!]};
/**
@brief Port PSMI settings data
*/
/*
* @violates @ref PORT_CFG_REF_5 Violates MISRA 2004 Required Rule 8.10
*/
CONST(Pad_PSMI_Setting,PORT_CONST) Pad_funct_extrasettings[[!"ecu:get('PortModeSettingsLinesNo')"!]][[!"ecu:get('PortModeSettingsColNo')"!]]=
{  [!"$ALTERNATE_PSMI_5"!]};
[!ENDIF!]

[!IF "(ecu:get('PortBoleroFamily') = 512)"!]
/**
 * @brief Port Pin description data
 * @remarks Covers MCAL2881
 */
/*
* @violates @ref PORT_CFG_REF_5 Violates MISRA 2004 Required Rule 8.10
*/
CONST (uint16, PORT_VAR) Port_PinDescription[[!"ecu:get('PortPadModeNumber')"!]][[!"ecu:get('PortPin16BlocksNo')"!]] =
{  [!"$CHECK_512"!]};

/**
 * @brief Port PSMI settings data
 */
/*
* @violates @ref PORT_CFG_REF_5 Violates MISRA 2004 Required Rule 8.10
*/
CONST(Pad_PSMI_Setting,PORT_CONST) Pad_funct_extrasettings[[!"ecu:get('PortModeSettingsLinesNo')"!]][[!"ecu:get('PortModeSettingsColNo')"!]]=
{  [!"$ALTERNATE_PSMI_512"!]};
[!ENDIF!][!//

[!IF "(ecu:get('PortBoleroFamily') = 1500)"!]
/**
 * @brief Port Pin description data
 * @remarks Covers MCAL2881
 */
/*
* @violates @ref PORT_CFG_REF_5 Violates MISRA 2004 Required Rule 8.10
*/
CONST (uint16, PORT_VAR) Port_PinDescription[[!"ecu:get('PortPadModeNumber')"!]][[!"ecu:get('PortPin16BlocksNo')"!]] =
{  [!"$CHECK_1M5"!]};
  [!IF "(ecu:get('PortMaxPinNumber') = 122)"!]
/**
 * @brief Port PSMI settings data
 */
/*
* @violates @ref PORT_CFG_REF_5 Violates MISRA 2004 Required Rule 8.10
*/
CONST(Pad_PSMI_Setting,PORT_CONST) Pad_funct_extrasettings[[!"ecu:get('PortModeSettingsLinesNo')"!]][[!"ecu:get('PortModeSettingsColNo')"!]]=
{  [!"$ALTERNATE_PSMI_512"!]};
  [!ELSE!]
/**
 * @brief Port PSMI settings data
 */
/*
* @violates @ref PORT_CFG_REF_5 Violates MISRA 2004 Required Rule 8.10
*/
CONST(Pad_PSMI_Setting,PORT_CONST) Pad_funct_extrasettings[[!"ecu:get('PortModeSettingsLinesNo')"!]][[!"ecu:get('PortModeSettingsColNo')"!]]=
{  [!"$ALTERNATE_PSMI_1M5"!]};
  [!ENDIF!][!//
[!ENDIF!][!//
#endif

/*
* @violates @ref PORT_CFG_REF_6 Identifiers (internal and external) shall not rely on the significance of more than 31
* characters.
*/
#define PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/**
 * @file  Port_Cfg.c
 * @violates @ref PORT_CFG_REF_1 Declaration before '#include'
 * @violates @ref PORT_CFG_REF_3 Repeated include file MemMap.h
 */
#include "MemMap.h"

#endif    /* PORT_PRECOMPILE_SUPPORT*/

#ifdef __cplusplus
}
#endif
/** @} */

/* End of File */
[!NOCODE!][!//
[!ENDNOCODE!][!//
[!ENDCODE!][!//
