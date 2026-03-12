[!CODE!][!//
/**
*   @file    Dio_Cfg.h
*   @version 1.0.1
*
*   @brief   AUTOSAR Dio configuration header.
*   @details This file is the Autosar DIO driver configuration header. This
*            file is automatically generated, do not modify manually.
*
*   @requirements .
*   @implements   DDIO04010.
*
*   @addtogroup DIO_CFG
*   @{
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
*   Build Version        : MPC560xB_MCAL_1_0_1_RTM_ASR_REL_4_0_REV_0003_20140606
*
*   (c) Copyright 2006-2014 Freescale Semiconductor Inc and STMicroelectronics
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
==================================================================================================*/

#ifndef DIO_CFG_H
#define DIO_CFG_H

#ifdef __cplusplus
extern "C" {
#endif

/**
* @page misra_violations MISRA-C:2004 violations
*
* @section Dio_CFG_REF_2
* Violates MISRA 2004 Required Rule 19.15, Repeated include file
* This comes from the order of includes in the .c file and from include dependencies. As a safe
* approach, any file must include all its dependencies. Header files are already protected against
* double inclusions.
*
* @section Dio_CFG_REF_3
* Violates MISRA 2004 Required Rule 1.4, The compiler/linker shall be checked to ensure that 
* 31 character signifiance and case sensitivity are supported for external identifiers.
*
* @section Dio_CFG_REF_4
* Violates MISRA 2004 Required Rule 5.1,
* Identifiers (internal and external) shall not rely on the significance of more than 31
* characters.
*
* @section Dio_CFG_REF_5
* Violates MISRA 2004 Required Rule 19.4, : C macros shall only expand to a braced initializer, a constant, a string literal, a
* parenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct. 
*
* @section Dio_CFG_REF_6
* Violates MISRA 2004 Required Rule 8.7, Objects shall be defined at block scope if they are only 
* accessed from within a single function.
*/
/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/


/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

#define DIO_VENDOR_ID_CFG                   43
/*
* @violates @ref Dio_CFG_REF_4 Identifiers (internal and external) shall not rely on the significance of more than 31
* characters.
*/
#define DIO_AR_RELEASE_MAJOR_VERSION_CFG    4
/*
* @violates @ref Dio_CFG_REF_4 Identifiers (internal and external) shall not rely on the significance of more than 31
* characters.
*/
/* @violates @ref Dio_CFG_REF_3 MISRA 2004 Advisory Rule 1.4, The compiler/linker shall be checked to ensure that
   31 character signifiance and case sensitivity are supported for external identifiers.
*/
#define DIO_AR_RELEASE_MINOR_VERSION_CFG    0
/*
* @violates @ref Dio_CFG_REF_4 Identifiers (internal and external) shall not rely on the significance of more than 31
* characters.
*/
/* @violates @ref Dio_CFG_REF_3 MISRA 2004 Advisory Rule 1.4, The compiler/linker shall be checked to ensure that
   31 character signifiance and case sensitivity are supported for external identifiers.
*/
#define DIO_AR_RELEASE_REVISION_VERSION_CFG 3
#define DIO_SW_MAJOR_VERSION_CFG            1
#define DIO_SW_MINOR_VERSION_CFG            0
#define DIO_SW_PATCH_VERSION_CFG            1

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/**
* @brief          Enable/Disable Development Error Detection.
*
* @implements     DDIO04017.
*
* @api
*/
#define DIO_DEV_ERROR_DETECT        ([!IF "DioGeneral/DioDevErrorDetect"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])

/**
* @brief          Function @p Dio_GetVersionInfo() enable switch.
*
* @api
*/
#define DIO_VERSION_INFO_API        ([!IF "DioGeneral/DioVersionInfoApi"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])

/**
* @brief          Function @p Dio_FlipChannel() enable switch.
*
* @api
*/
#define DIO_FLIP_CHANNEL_API        ([!IF "DioGeneral/DioFlipChannelApi"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])

/**
* @brief          Function @p Dio_MaskedWritePort() enable switch.
*
* @api
*/
#define DIO_MASKEDWRITEPORT_API     ([!IF "DioGeneral/DioMaskedWritePortApi"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])

/**
* @brief          Undefined pins masking enable switch.
*
* @api
*/
#define DIO_READZERO_UNDEFINEDPORTS ([!IF "DioGeneral/DioReadZeroForUndefinedPortPins"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])

[!IF "DioGeneral/DioDevErrorDetect"!][!//
/**
* @brief          Number of pin intervals.
*
* @note           Used for DET checking.
*
* @api
*/
/*
* @violates @ref Dio_CFG_REF_5 MISRA 2004 Required Rule 19.4, : C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct. 
*/
#define DIO_PIN_INTERVALS           (uint8)[!"num:inttohex(count(ecu:list('Dio.AvailablePins')))"!]

[!ELSE!][!//
[!ENDIF!][!//
[!IF "DioGeneral/DioDevErrorDetect"!][!//
/**
* @brief          Number of port intervals.
* @note           Used for @p DIO_READZERO_UNDEFINEDPORTS.
*
* @api
*/
/*
* @violates @ref Dio_CFG_REF_5 MISRA 2004 Required Rule 19.4, : C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct. 
*/
#define DIO_PORT_INTERVALS          (uint8)[!"num:inttohex(count(ecu:list('Dio.AvailablePorts')))"!]

[!ELSE!][!//
[!ENDIF!][!//
/*
* @violates @ref Dio_CFG_REF_5 MISRA 2004 Required Rule 19.4, : C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct. 
*/
[!IF "DioGeneral/DioReadZeroForUndefinedPortPins"!][!//
/**
* @brief          Number of ports.
*
* @note           Used for DET checking.
*
* @api
*/
#define DIO_AVAILABLE_PORTS         (uint8)[!"num:inttohex(num:i(number(substring-before(substring-after(ecu:list('Dio.AvailablePorts'),','),']'))) + 1) "!]

[!ELSE!][!//
[!ENDIF!][!//
[!IF "DioGeneral/DioDevErrorDetect"!][!//
[!IF "count(ecu:list('Dio.AvailablePins')) mod 2 = 1"!][!ERROR "one of the pins intervals is not complete. check resource file"!][!ENDIF!][!//
[!IF "count(ecu:list('Dio.AvailablePorts')) mod 2 = 1"!][!ERROR "one of the ports intervals is not complete. check resource file"!][!ENDIF!][!//
[!ENDIF!][!//
[!IF "IMPLEMENTATION_CONFIG_VARIANT='VariantPreCompile'"!][!//
/**
* @brief          Dio driver Pre-Compile configuration switch.
*
* @api
*/
#define DIO_PRECOMPILE_SUPPORT[!//

[!ELSE!][!//
[!ENDIF!][!//
/**
* @brief          Reversed port functionality enable switch.
*
* @api
*/
[!IF "DioGeneral/DioReversePortBits"!][!//
/*
* @violates @ref Dio_CFG_REF_5 MISRA 2004 Required Rule 19.4, : C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct. 
*/
#define DIO_REVERSEPORTBITS STD_ON

[!ELSE!][!//
/*
* @violates @ref Dio_CFG_REF_5 MISRA 2004 Required Rule 19.4, : C macros shall only expand to a braced initializer, a constant, a string
* literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct. 
*/
#define DIO_REVERSEPORTBITS STD_OFF

[!ENDIF!][!//
/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/**
* @brief          Type of a DIO port representation.
*
* @requirements   .
* @implements     DDIO04021.
*
* @api
*/
typedef uint8 Dio_PortType;

/*
* @brief          Type of a DIO channel representation.
*
* @requirements   .
* @implements     DDIO04019.
*
* @api
*/
typedef uint8 Dio_ChannelType;

/*
* @brief          Type of a DIO port levels representation.
*
* @requirements   .
* @implements     DDIO04020.
*
* @api
*/
typedef uint16 Dio_PortLevelType;

/**
* @brief          Type of a DIO channel levels representation.
*
* @requirements   .
* @implements     DDIO04024.
*
* @api
*/
typedef uint8 Dio_LevelType;

/**
* @brief          Type of a DIO configuration structure.
*
* @note           In this implementation there is no need for a configuration
*                 structure there is only a dummy field, it is recommended
*                 to initialize this field to zero.
*
* @requirements   .
* @implements     DDIO04023.
*
* @api
*/
typedef struct
{
    VAR(uint8, DIO_VAR) dummy;                /**< @brief Dummy field,
                                                   structs cannot be empty. */
} Dio_ConfigType;

/**
* @brief          Type of a DIO channel group representation.
*
* @requirements   .
* @implements     DDIO04022.
*
* @api
*/
typedef struct
{
    VAR(Dio_PortType, DIO_VAR) port;          /**< @brief Port identifier.  */
    VAR(uint8, DIO_VAR) offset;   /**< @brief Bit offset within
                                                   the port.                */
    VAR(Dio_PortLevelType, DIO_VAR) mask;     /**< @brief Group mask.       */
} Dio_ChannelGroupType;

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
/*
* @violates @ref Dio_CFG_REF_4 Identifiers (internal and external) shall not rely on the significance of more than 31
* characters.
*/
#define DIO_START_SEC_CONFIG_DATA_UNSPECIFIED

#include "MemMap.h"
/*
* @violates @ref Dio_CFG_REF_6 Objects shall be defined at block scope if they are only
* accessed from within a single function.
*/
[!IF "DioGeneral/DioDevErrorDetect"!]extern CONST(Dio_ChannelType, DIO_CONST) valid_pin_ranges[DIO_PIN_INTERVALS];[!ENDIF!]
/*
* @violates @ref Dio_CFG_REF_6 Objects shall be defined at block scope if they are only
* accessed from within a single function.
*/
[!IF "DioGeneral/DioDevErrorDetect"!]extern CONST(Dio_PortType, DIO_CONST) valid_port_ranges[DIO_PORT_INTERVALS];[!ENDIF!]
/*
* @violates @ref Dio_CFG_REF_6 Objects shall be defined at block scope if they are only
* accessed from within a single function.
*/
[!IF "DioGeneral/DioReadZeroForUndefinedPortPins"!]extern CONST(Dio_PortLevelType, DIO_CONST) undefined_portmask[DIO_AVAILABLE_PORTS];[!ENDIF!]

[!LOOP "DioConfig/*/DioPort/*"!][!//
[!VAR "crt_name"="node:name(.)"!][!//
[!VAR "n"="0"!][!//
[!LOOP "../../../*/DioPort/*"!][!//
[!IF "$crt_name=node:name(.)"!][!VAR "n"="$n+1"!][!ENDIF!][!//
[!ENDLOOP!][!//
[!IF "$n > 1"!][!ERROR "Port name duplicated. Port names must be unique even across configurations"!][!ENDIF!][!//
[!ENDLOOP!][!//
[!//
[!LOOP "DioConfig/*/DioPort/*/DioChannelGroup/*"!][!//
[!VAR "crt_name"="node:name(.)"!][!//
[!VAR "n"="0"!][!//
[!LOOP "../../../../../*/DioPort/*/DioChannelGroup/*"!][!//
[!IF "$crt_name=node:name(.)"!][!VAR "n"="$n+1"!][!ENDIF!][!//
[!ENDLOOP!][!//
[!IF "$n > 1"!][!ERROR "ChannelGroup name duplicated. Channel group names must be unique even across ports and configurations"!][!ENDIF!][!//
[!ENDLOOP!][!//
[!//
[!LOOP "DioConfig/*/DioPort/*/DioChannel/*"!][!//
[!VAR "crt_name"="node:name(.)"!][!//
[!VAR "n"="0"!][!//
[!LOOP "../../../../../*/DioPort/*/DioChannel/*"!][!//
[!IF "$crt_name=node:name(.)"!][!VAR "n"="$n+1"!][!ENDIF!][!//
[!ENDLOOP!][!//
[!IF "$n > 1"!][!ERROR "Channel name duplicated. Channel names must be unique even across ports and configurations"!][!ENDIF!][!//
[!ENDLOOP!][!//
[!//
/* ========== [!"node:name(.)"!] ========== */
[!IF "IMPLEMENTATION_CONFIG_VARIANT='VariantPreCompile'"!][!//
/* ========== Dio_ConfigPC ========== */
/*
* @violates @ref Dio_CFG_REF_6 Objects shall be defined at block scope if they are only
* accessed from within a single function.
*/
extern CONST(Dio_ConfigType, DIO_CONST) Dio_ConfigPC;
[!ELSE!][!//
[!LOOP "DioConfig/*"!][!//
extern CONST(Dio_ConfigType, DIO_CONST) [!"node:name(.)"!];
[!ENDLOOP!][!//
[!ENDIF!][!//

[!LOOP "DioConfig/*"!][!//
[!LOOP "DioPort/*"!][!//
[!VAR "PortId" = "DioPortId"!][!//
/* ---------- [!"node:name(.)"!] ---------- */

/**
* @brief          Symbolic name for the port [!"node:name(.)"!].
*
* @requirements   .
* @implements     DDIO04009.
*/
/*
* @violates @ref Dio_CFG_REF_5 MISRA 2004 Required Rule 19.4, : C macros shall only expand to a braced initializer, a constant, a string
*                          literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct. 
*/
#define DioConf_DioPort_[!"node:name(.)"!] (Dio_PortType)[!"num:inttohex($PortId,2)"!]U

[!LOOP "DioChannel/*"!][!//
[!VAR "PortChannelId" = "DioChannelId"!][!//
[!VAR "ChannelId" = "16*$PortId + $PortChannelId"!][!//
/**
* @brief          Symbolic name for the channel [!"node:name(.)"!].
*
* @requirements   .
* @implements     DDIO04008.
*/
/*
* @violates @ref Dio_CFG_REF_5 MISRA 2004 Required Rule 19.4, : C macros shall only expand to a braced initializer, a constant, a string
*                          literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct. 
*/
#define DioConf_DioChannel_[!"node:name(.)"!] (Dio_ChannelType)[!"num:inttohex($ChannelId,2)"!]U

[!ENDLOOP!][!//
[!LOOP "DioChannelGroup/*"!][!//
extern CONST(Dio_ChannelGroupType, DIO_CONST) [!"DioChannelGroupIdentification"!];

/**
* @brief        Symbolic name for the channel group [!"node:name(.)"!].
*
* @requirements .
* @implements   DDIO04025.
*/
/*
* @violates @ref Dio_CFG_REF_5 MISRA 2004 Required Rule 19.4, : C macros shall only expand to a braced initializer, a constant, a string
*                          literal, aparenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct. 
*/
/*
* @violates @ref Dio_CFG_REF_4 Identifiers (internal and external) shall not rely on the significance of more than 31
* characters.
*/
#define DioConf_DioChannelGroupIdentification_[!"node:name(.)"!] &[!"DioChannelGroupIdentification"!]

[!ENDLOOP!][!//
[!ENDLOOP!][!//
[!ENDLOOP!][!//
/*
* @violates @ref Dio_CFG_REF_4 MISRA 2004 Required Rule 5.1,Identifiers (internal and external) shall not rely on the significance of more than 31
* characters.
*/
#define DIO_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/*
* @violates @ref Dio_CFG_REF_2 Required Rule 19.15, Repeated include file.
*/
#include "MemMap.h"
/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif  /* DIO_CFG_H */

/** @} */
[!ENDCODE!][!//
