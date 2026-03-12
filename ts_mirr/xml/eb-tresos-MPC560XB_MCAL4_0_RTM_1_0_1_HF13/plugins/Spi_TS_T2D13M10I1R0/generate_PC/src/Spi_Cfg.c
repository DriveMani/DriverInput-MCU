[!NOCODE!][!//
[!//====================================================================================================
[!//*   @file    Spi_Cfg.c
[!//*   @version 1.0.1
[!//*
[!//*   @brief   AUTOSAR Spi - Pre-Compile (PC) configuration data code template.
[!//*   @details Code template for Pre-Compile(PC) configuration file generation.
[!//*
[!//*   @addtogroup [SPI_MODULE]
[!//*   @{
[!//*/
[!//*==================================================================================================
[!//*   Project              : AUTOSAR 4.0 MCAL
[!//*   Platform             : PA
[!//*   Peripheral           : DSPI
[!//*   Dependencies         : 
[!//*
[!//*   Autosar Version      : 4.0.3
[!//*   Autosar Revision     : ASR_REL_4_0_REV_0003
[!//*   Autosar Conf.Variant :
[!//*   SW Version           : 1.0.1
[!//*   Build Version        : MPC560xB_MCAL_1_0_1_RTM_ASR_REL_4_0_REV_0003_20140606
[!//*
[!//*   (c) Copyright 2006-2014 Freescale Semiconductor Inc and STMicroelectronics
[!//*   All Rights Reserved.
[!//==================================================================================================*/
[!//*==================================================================================================
[!//[!//==================================================================================================*/

[!NOCODE!]
[!VAR "SpiDemErrorEnable" = "'false'"!]
[!IF "SpiNonAUTOSAR/SpiDisableDemReportErrorStatus ='false'"!][!//
    [!VAR "nconf" = "count(SpiDriver/*)"!]
    [!VAR "iconf" = "0"!]
    [!FOR "iconf" = "1" TO "$nconf"!]
        [!IF "node:exists(SpiDriver/*[$iconf]/SpiDemEventParameterRefs)"!]
            [!VAR "SpiDemErrorEnable" = "'true'"!]
        [!ENDIF!]
    [!ENDFOR!]
[!ENDIF!]
[!ENDNOCODE!]

[!VAR "Spislavesupported" = "0"!][!//
[!VAR "Spislavesupported1" = "0"!][!//
[!LOOP "SpiDriver/*"!] [!//
    [!LOOP "SpiSequence/*"!]
        [!LOOP "SpiJobAssignment/*"!]
        [!SELECT "node:ref(node:current())"!] [!//
            [!SELECT "node:ref(SpiDeviceAssignment)"!] [!//
            [!IF "SpiSlaveMode = 'true'"!] [!//
                [!VAR "Spislavesupported" = "1"!][!//
                [!VAR "Spislavesupported1" = "1"!][!//
            [!ENDIF!] [!//
            [!ENDSELECT!] [!//
        [!IF "$Spislavesupported1=1"!] [!//
            [!IF "(count(SpiChannelList/*))!=1"!]
            [!ERROR "Channel error(In slave mode only one channel needs to be configured)"!]
            [!ENDIF!]
        [!ENDIF!]

        [!ENDSELECT!] [!//
        [!ENDLOOP!] [!//

        [!IF "$Spislavesupported1=1"!] [!//
            [!IF "count(SpiJobAssignment/*)!=1"!]
            [!ERROR "Job error(In slave mode only one Job needs to be configured)"!]
            [!ENDIF!]
        [!ENDIF!]
    [!VAR "Spislavesupported1" = "0"!][!//
    [!ENDLOOP!] [!//
[!ENDLOOP!] [!//

[!VAR "spiPath" = "node:path(.)"!][!//
[!LOOP "SpiDriver/*"!] [!//
    [!LOOP "SpiSequence/*"!]
        [!LOOP "SpiJobAssignment/*"!]
        [!SELECT "node:ref(node:current())"!] [!//
            [!SELECT "node:ref(SpiDeviceAssignment)"!] [!//
            [!IF "SpiSlaveMode = 'true'"!] [!//
                [!VAR "varSpiSlaveunit"="string(substring-after(node:value(SpiHwUnit),'CSIB')+1)"!][!//
                [!IF "node:value(concat($spiPath,'/SpiGeneral/SpiPhyUnit/*[',$varSpiSlaveunit,']/SpiPhyUnitMode')) != 'SPI_SLAVE' "!][!//
                [!ERROR!]As the device [!"@name"!] selected to slave mode, hardware unit mapped to this Device has to be in slave mode.[!ENDERROR!][!//
                [!ENDIF!] [!//
            [!ENDIF!] [!//
            [!IF "SpiSlaveMode = 'false'"!] [!//
                [!VAR "varSpiSlaveunit"="string(substring-after(node:value(SpiHwUnit),'CSIB')+1)"!][!//
                [!IF "node:value(concat($spiPath,'/SpiGeneral/SpiPhyUnit/*[',$varSpiSlaveunit,']/SpiPhyUnitMode')) != 'SPI_MASTER' "!][!//
                [!ERROR!]As the device [!"@name"!] is not selected to slave mode, hardware unit mapped to this Device has to be in Master mode.[!ENDERROR!][!//
                [!ENDIF!] [!//
            [!ENDIF!] [!//
            [!ENDSELECT!] [!//
        [!ENDSELECT!] [!//
        [!ENDLOOP!] [!//
    [!ENDLOOP!] [!//
[!ENDLOOP!] [!//

[!MACRO "DetermineOptimalTimeSettings"!]
  [!VAR "OptimalAbsoluteTimeError" = "1000000"!]
  [!VAR "OptimalRelativeTimeError" = "0"!]
  [!VAR "OptimalTime" = "0"!]
  [!VAR "OptimalPrescaler" = "0"!]
  [!VAR "OptimalScaler" = "0"!]
  [!// if $DesiredTime=0, initialized values are OK; no further calculations needed
  [!IF "$DesiredTime > 0.0"!]
    [!FOR "Prescaler_Count" = "0" TO "3"!]
      [!VAR "Prescaler" = "$Prescaler_Count*2 + 1"!]
      [!VAR "Scaler" = "2"!]
      [!FOR "Scaler_Count" = "0" TO "15"!]
        [!VAR "CalculatedTime" = "$Prescaler * 1000 * $Scaler div $BusClock"!]
        [!VAR "RelativeTimeError" = "($CalculatedTime div $DesiredTime) - 1 "!]
        [!VAR "AbsoluteTimeError" = "$RelativeTimeError"!]
        [!IF "$AbsoluteTimeError < 0"!][!VAR "AbsoluteTimeError" = "$AbsoluteTimeError * (-1)"!][!ENDIF!]
        [!IF "$AbsoluteTimeError < $OptimalAbsoluteTimeError"!]
          [!VAR "OptimalAbsoluteTimeError" = "$AbsoluteTimeError"!]
          [!VAR "OptimalRelativeTimeError" = "$RelativeTimeError"!]
          [!VAR "OptimalTime" = "$CalculatedTime"!]
          [!VAR "OptimalPrescaler" = "$Prescaler"!]
          [!VAR "OptimalScaler" = "$Scaler"!]
        [!ENDIF!]
        [!VAR "Scaler" = "$Scaler*2"!]
      [!ENDFOR!]
    [!ENDFOR!]
  [!ENDIF!][!//"$DesiredTime > 0.0"
[!ENDMACRO!]

[!MACRO "DetermineOptimalBaudrateSettings"!]
  [!VAR "OptimalAbsoluteBaudrateError" = "1000000"!]
  [!VAR "OptimalRelativeBaudrateError" = "0"!]
  [!VAR "OptimalBaudrate" = "0"!]
  [!VAR "OptimalDouble" = "0"!]
  [!VAR "OptimalPrescaler" = "0"!]
  [!VAR "OptimalScaler" = "0"!]
  [!FOR "Double" = "0" TO "1"!]
    [!FOR "Prescaler_Count" = "0" TO "3"!]
      [!VAR "Prescaler" = "$Prescaler_Count*2 + 1"!]
      [!IF "$Prescaler = 1"!][!VAR "Prescaler" = "2"!][!ENDIF!]
      [!VAR "Scaler" = "2"!]
      [!FOR "Scaler_Count" = "0" TO "15"!]
        [!VAR "CalculatedBaudrate" = "1000000 * $BusClock * (1+ $Double) div ($Prescaler * $Scaler)"!]
        [!// DesiredBaudrate is always positive
        [!VAR "RelativeBaudrateError" = "($CalculatedBaudrate div $DesiredBaudrate) - 1 "!]
        [!VAR "AbsoluteBaudrateError" = "$RelativeBaudrateError"!]
        [!IF "$AbsoluteBaudrateError < 0"!][!VAR "AbsoluteBaudrateError" = "$AbsoluteBaudrateError * (-1)"!][!ENDIF!]
        [!IF "$AbsoluteBaudrateError < $OptimalAbsoluteBaudrateError"!]
          [!VAR "OptimalAbsoluteBaudrateError" = "$AbsoluteBaudrateError"!]
          [!VAR "OptimalRelativeBaudrateError" = "$RelativeBaudrateError"!]
          [!VAR "OptimalBaudrate" = "$CalculatedBaudrate"!]
          [!VAR "OptimalDouble" = "$Double"!]
          [!VAR "OptimalPrescaler" = "$Prescaler"!]
          [!VAR "OptimalScaler" = "$Scaler"!]
        [!ENDIF!]
        [!IF "$Scaler = 4"!]
          [!VAR "Scaler" = "6"!]
        [!ELSEIF "$Scaler = 6"!]
          [!VAR "Scaler" = "8"!]
        [!ELSE!]
          [!VAR "Scaler" = "$Scaler*2"!]
        [!ENDIF!]
      [!ENDFOR!]
    [!ENDFOR!]
  [!ENDFOR!]
[!ENDMACRO!]

[!IF "$Spislavesupported=1"!] [!//

    [!MACRO "GenerateSlaveDeviceInfo"!]
        (uint32)([!IF "SpiShiftClockIdleLevel = 'LOW'"!]DSPI_CTAR_CPOL_LOW[!//
    [!ELSEIF "SpiShiftClockIdleLevel = 'HIGH'"!]DSPI_CTAR_CPOL_HIGH[!//
    [!ELSE!][!ERROR "Illegal value for SpiShiftClockIdleLevel"!][!//
    [!ENDIF!] | /* Clock Polarity (Idle State) */
                    [!IF "SpiDataShiftEdge = 'LEADING'"!][!WS "8"!]    DSPI_CTAR_CPHA_LEADING[!//
    [!ELSEIF "SpiDataShiftEdge = 'TRAILING'"!][!WS "8"!]    DSPI_CTAR_CPHA_TRAILING[!//
    [!ELSE!][!ERROR "Illegal value for SpiDataShiftEdge"!][!//
    [!ENDIF!] | (uint32)0 ),

    (uint32)[!WS "8"!]0x00000000u,
    [!IF "SpiCsPolarity = 'HIGH'"!][!//
        [!WS "8"!]    DSPI_[!"SpiCsIdentifier"!]_IDLEHIGH[!//
    [!ELSE!][!//
    [!WS "8"!](uint32)0u[!//
    [!ENDIF!][!WS "2"!]/* Chip select polarity */
    [!ENDMACRO!]

[!ENDIF!]

[!MACRO "GenerateExternalDeviceInfo"!]
[!NOCODE!][!//
  [!//
  [!VAR "BusClock" = "$BusClockNormal"!][!//
  [!VAR "DesiredTime" = "num:i(SpiTimeCs2Clk * 1000000000)"!]
  [!CALL "DetermineOptimalTimeSettings"!]
  [!VAR "OptimalPCSCLK" = "$OptimalPrescaler"!]
  [!VAR "OptimalSCSCLK" = "$OptimalScaler"!]
  [!VAR "OptimalTimeCs2Clk" = "$OptimalTime"!]
  [!VAR "OptimalTimeCs2ClkError" = "$OptimalRelativeTimeError"!]
  [!//
  [!VAR "DesiredTime" = "num:i(SpiTimeClk2Cs * 1000000000)"!]
  [!CALL "DetermineOptimalTimeSettings"!]
  [!VAR "OptimalPASC" = "$OptimalPrescaler"!]
  [!VAR "OptimalSASC" = "$OptimalScaler"!]
  [!VAR "OptimalTimeClk2Cs" = "$OptimalTime"!]
  [!VAR "OptimalTimeClk2CsError" = "$OptimalRelativeTimeError"!]
  [!//
  [!VAR "DesiredTime" = "num:i(SpiTimeCs2Cs * 1000000000)"!]
  [!CALL "DetermineOptimalTimeSettings"!]
  [!VAR "OptimalPDT" = "$OptimalPrescaler"!]
  [!VAR "OptimalSDT" = "$OptimalScaler"!]
  [!VAR "OptimalTimeCs2Cs" = "$OptimalTime"!]
  [!VAR "OptimalTimeCs2CsError" = "$OptimalRelativeTimeError"!]
  [!//
  [!VAR "DesiredBaudrate" = "SpiBaudrate"!]
  [!CALL "DetermineOptimalBaudrateSettings"!]
  [!VAR "OptimalPBR" = "$OptimalPrescaler"!]
  [!VAR "OptimalSBR" = "$OptimalScaler"!]
  [!VAR "OptimalDBR" = "$OptimalDouble"!]
  [!VAR "OptimalBaudrateNormal" = "$OptimalBaudrate"!]
  [!VAR "OptimalRelativeBaudrateErrorNormal" = "$OptimalRelativeBaudrateError"!]
  [!//
  [!IF "$DualClockEnabled = 'true'"!][!//
    [!VAR "BusClock" = "$BusClockAlternate"!][!//
    [!VAR "DesiredTime" = "num:i(SpiTimeCs2Clk * 1000000000)"!]
    [!CALL "DetermineOptimalTimeSettings"!]
    [!VAR "OptimalPCSCLKAlternate" = "$OptimalPrescaler"!]
    [!VAR "OptimalSCSCLKAlternate" = "$OptimalScaler"!]
    [!VAR "OptimalTimeCs2ClkAlternate" = "$OptimalTime"!]
    [!VAR "OptimalTimeCs2ClkErrorAlternate" = "$OptimalRelativeTimeError"!]
    [!//
    [!VAR "DesiredTime" = "num:i(SpiTimeClk2Cs * 1000000000)"!]
    [!CALL "DetermineOptimalTimeSettings"!]
    [!VAR "OptimalPASCAlternate" = "$OptimalPrescaler"!]
    [!VAR "OptimalSASCAlternate" = "$OptimalScaler"!]
    [!VAR "OptimalTimeClk2CsAlternate" = "$OptimalTime"!]
    [!VAR "OptimalTimeClk2CsErrorAlternate" = "$OptimalRelativeTimeError"!]
    [!//
    [!VAR "DesiredTime" = "num:i(SpiTimeCs2Cs * 1000000000)"!]
    [!CALL "DetermineOptimalTimeSettings"!]
    [!VAR "OptimalPDTAlternate" = "$OptimalPrescaler"!]
    [!VAR "OptimalSDTAlternate" = "$OptimalScaler"!]
    [!VAR "OptimalTimeCs2CsAlternate" = "$OptimalTime"!]
    [!VAR "OptimalTimeCs2CsErrorAlternate" = "$OptimalRelativeTimeError"!]
    [!//
    [!VAR "DesiredBaudrate" = "SpiBaudrate"!]
    [!CALL "DetermineOptimalBaudrateSettings"!]
    [!VAR "OptimalPBRAlternate" = "$OptimalPrescaler"!]
    [!VAR "OptimalSBRAlternate" = "$OptimalScaler"!]
    [!VAR "OptimalDBRAlternate" = "$OptimalDouble"!]
    [!VAR "OptimalBaudrateAlternate" = "$OptimalBaudrate"!]
    [!VAR "OptimalRelativeBaudrateErrorAlternate" = "$OptimalRelativeBaudrateError"!]
  [!ENDIF!][!// "$DualClockEnabled = 'true'"
  [!//
[!ENDNOCODE!][!//
[!IF "$DualClockEnabled = 'true'"!][!//
          {
            /* Normal Mode */
[!ENDIF!][!//
            (uint32)([!IF "SpiShiftClockIdleLevel = 'LOW'"!]DSPI_CTAR_CPOL_LOW[!//
[!ELSEIF "SpiShiftClockIdleLevel = 'HIGH'"!]DSPI_CTAR_CPOL_HIGH[!//
[!ELSE!][!ERROR "Illegal value for SpiShiftClockIdleLevel"!][!//
[!ENDIF!] | /* Clock Polarity (Idle State) */
                [!IF "SpiDataShiftEdge = 'LEADING'"!][!WS "8"!]    DSPI_CTAR_CPHA_LEADING[!//
[!ELSEIF "SpiDataShiftEdge = 'TRAILING'"!][!WS "8"!]    DSPI_CTAR_CPHA_TRAILING[!//
[!ELSE!][!ERROR "Illegal value for SpiDataShiftEdge"!][!//
[!ENDIF!] | /* Clock Phase */
            DSPI_CTAR_PCSCLK_[!"num:i($OptimalPCSCLK)"!] | DSPI_CTAR_SCSCLK_[!"num:i($OptimalSCSCLK)"!] | /* TimeCs2Clk: Should=[!"num:i(SpiTimeCs2Clk * 1000000000)"!], Is=[!"num:i($OptimalTimeCs2Clk)"!], Error=[!"round(10000*$OptimalTimeCs2ClkError) div 100"!]% */
            DSPI_CTAR_PASC_[!"num:i($OptimalPASC)"!] | DSPI_CTAR_SASC_[!"num:i($OptimalSASC)"!] | /* TimeClk2Cs: Should=[!"num:i(SpiTimeClk2Cs * 1000000000)"!], Is=[!"num:i($OptimalTimeClk2Cs)"!], Error=[!"round(10000*$OptimalTimeClk2CsError) div 100"!]% */
            DSPI_CTAR_PDT_[!"num:i($OptimalPDT)"!] | DSPI_CTAR_SDT_[!"num:i($OptimalSDT)"!] | /* TimeCs2Cs: Should=[!"num:i(SpiTimeCs2Cs * 1000000000)"!], Is=[!"num:i($OptimalTimeCs2Cs)"!], Error=[!"round(10000*$OptimalTimeCs2CsError) div 100"!]% */
            DSPI_CTAR_PBR_[!"num:i($OptimalPBR)"!] | DSPI_CTAR_SBR_[!"num:i($OptimalSBR)"!] | DSPI_CTAR_DBR_[!"num:i($OptimalDBR)"!]), /* Baudrate: Should=[!"SpiBaudrate"!], Is=[!"num:i($OptimalBaudrateNormal)"!], Error=[!"round(10000*$OptimalRelativeBaudrateErrorNormal) div 100"!]% */
[!IF "$DualClockEnabled = 'true'"!][!//
            /* Alternate Mode */
            (uint32)([!IF "SpiShiftClockIdleLevel = 'LOW'"!]DSPI_CTAR_CPOL_LOW[!//
[!ELSEIF "SpiShiftClockIdleLevel = 'HIGH'"!]DSPI_CTAR_CPOL_HIGH[!//
[!ELSE!][!ERROR "Illegal value for SpiShiftClockIdleLevel"!][!//
[!ENDIF!] | /* Clock Polarity (Idle State) */
            [!IF "SpiDataShiftEdge = 'LEADING'"!][!WS "8"!]    DSPI_CTAR_CPHA_LEADING[!//
[!ELSEIF "SpiDataShiftEdge = 'TRAILING'"!][!WS "8"!]    DSPI_CTAR_CPHA_TRAILING[!//
[!ELSE!][!ERROR "Illegal value for SpiDataShiftEdge"!][!//
[!ENDIF!] | /* Clock Phase */
            DSPI_CTAR_PCSCLK_[!"num:i($OptimalPCSCLKAlternate)"!] | DSPI_CTAR_SCSCLK_[!"num:i($OptimalSCSCLKAlternate)"!] | /* TimeCs2Clk: Should=[!"num:i(SpiTimeCs2Clk * 1000000000)"!], Is=[!"num:i($OptimalTimeCs2ClkAlternate)"!], Error=[!"round(10000*$OptimalTimeCs2ClkErrorAlternate) div 100"!]% */
            DSPI_CTAR_PASC_[!"num:i($OptimalPASCAlternate)"!] | DSPI_CTAR_SASC_[!"num:i($OptimalSASCAlternate)"!] | /* TimeClk2Cs: Should=[!"num:i(SpiTimeClk2Cs * 1000000000)"!], Is=[!"num:i($OptimalTimeClk2CsAlternate)"!], Error=[!"round(10000*$OptimalTimeClk2CsErrorAlternate) div 100"!]% */
            DSPI_CTAR_PDT_[!"num:i($OptimalPDTAlternate)"!] | DSPI_CTAR_SDT_[!"num:i($OptimalSDTAlternate)"!] | /* TimeCs2Cs: Should=[!"num:i(SpiTimeCs2Cs * 1000000000)"!], Is=[!"num:i($OptimalTimeCs2CsAlternate)"!], Error=[!"round(10000*$OptimalTimeCs2CsErrorAlternate) div 100"!]% */
            DSPI_CTAR_PBR_[!"num:i($OptimalPBRAlternate)"!] | DSPI_CTAR_SBR_[!"num:i($OptimalSBRAlternate)"!] | DSPI_CTAR_DBR_[!"num:i($OptimalDBRAlternate)"!]) /* Baudrate: Should=[!"SpiBaudrate"!], Is=[!"num:i($OptimalBaudrateAlternate)"!], Error=[!"round(10000*$OptimalRelativeBaudrateErrorAlternate) div 100"!]% */
          },
[!ENDIF!][!//
[!IF "SpiEnableCs = 'true'"!]
            (uint32)(DSPI_CMD_[!"SpiCsIdentifier"!] | /* Chip Select Pin */
                [!IF "SpiCsContinous = 'False'"!][!WS "8"!]    DSPI_CMD_CONTINOUS_FALSE[!//
    [!ELSEIF "SpiCsContinous = 'True'"!][!WS "8"!]    DSPI_CMD_CONTINOUS_TRUE[!//
[!ELSE!][!ERROR "Illegal value for SpiCsContinous"!][!//
[!ENDIF!]), /* Continous chip select */
[!ELSE!][!WS "8"!]0x00000000u,
[!ENDIF!]
            [!IF "SpiCsPolarity = 'HIGH'"!][!//
        [!WS "8"!]    DSPI_[!"SpiCsIdentifier"!]_IDLEHIGH[!//
[!ELSE!][!//
[!WS "8"!](uint32)0u[!//
[!ENDIF!][!WS "2"!]/* Chip select polarity */
[!ENDMACRO!]

[!ENDNOCODE!][!//
[!//
[!//
[!//
[!CODE!][!//
/**
*   @file    Spi_Cfg.c
*   @version 1.0.1
*
*   @brief   AUTOSAR Spi - Pre-Compile (PC) configuration data code template.
*   @details Code template for Pre-Compile(PC) configuration file generation.
*
*   @addtogroup [SPI_MODULE]
*   @{
*/
/*==================================================================================================
*   Project              : AUTOSAR 4.0 MCAL
*   Platform             : PA
*   Peripheral           : DSPI
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

#ifdef __cplusplus
extern "C"{
#endif

/**
* @page misra_violations MISRA-C:2004 violations
*
* @section Spi_Cfg_c_REF_1
* Violates MISRA 2004 Advisory Rule 19.1,
* #include statements in a file should only be preceded by other preprocessor directives or comments.
* AUTOSAR imposes the specification of the sections in which certain parts of the driver must be placed.
*
* @section Spi_Cfg_c_REF_2
* Violates MISRA 2004 Required Rule 19.15,
* Precautions shall be taken in order to prevent the contents of a header file being included twice.
* This comes from the order of includes in the .c file and from include dependencies. As a safe
* approach, any file must include all its dependencies. Header files are already protected against
* double inclusions. The inclusion of MemMap.h is as per Autosar requirement MEMMAP003.
*
* @section Spi_Cfg_c_REF_3
* Violates MISRA 2004 Required Rule 1.4,
* This violation is not fixed since naming convention of Identifiers are followed as per Autosar
* standards, some times which may exceeds more than 31 characters.
*
* @section Spi_Cfg_c_REF_4
* Violates MISRA 2004 Required Rule 10.1,
* The value of an expression of integer type shall not be implicitly
* converted to a different underlying type
*
* @section Spi_Cfg_c_REF_5
* Violates MISRA 2004 Required Rule 5.1, This violation is not fixed since naming convention of
* Identifiers (internal and external) are followed as per Autosar standards, some times which may
* exceeds more than 31 characters.
*/


/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
/*
* @file           Spi_Cfg.c
* @implements     DSPI02635.
*/
#include "Spi.h"
#include "Reg_eSys_DSPI.h"


#if (SPI_CONFIG_VARIANT == SPI_VARIANT_PRECOMPILE)

/*==================================================================================================
*                                         LOCAL MACROS
==================================================================================================*/
/**
* @file         Spi_Cfg.c
* @implements   DSPI02049
*/
/*
* @violates @ref Spi_Cfg_c_REF_3 The compiler/linker shall be checked to ensure that 31 character 
* signifiance and case sensitivity are supported for external identifiers.
*/

#define SPI_MODULE_ID_CFG_C                        83
#define SPI_VENDOR_ID_CFG_C                        43
/*
* @violates @ref Spi_Cfg_c_REF_3 The compiler/linker shall be checked to ensure that 31 character
* signifiance and case sensitivity are supported for external identifiers.
*/
 /*
* @violates @ref Spi_Cfg_c_REF_5 This is required as per autosar Requirement, 
*/
#define SPI_AR_RELEASE_MAJOR_VERSION_CFG_C         4
/*
* @violates @ref Spi_Cfg_c_REF_3 The compiler/linker shall be checked to ensure that 31 character
* signifiance and case sensitivity are supported for external identifiers.
*/
 /*
* @violates @ref Spi_Cfg_c_REF_5 This is required as per autosar Requirement, 
*/
#define SPI_AR_RELEASE_MINOR_VERSION_CFG_C         0
/*
* @violates @ref Spi_Cfg_c_REF_3 The compiler/linker shall be checked to ensure that 31 character
* signifiance and case sensitivity are supported for external identifiers.
*/
 /*
* @violates @ref Spi_Cfg_c_REF_5 This is required as per autosar Requirement, 
*/
#define SPI_AR_RELEASE_REVISION_VERSION_CFG_C      3
#define SPI_SW_MAJOR_VERSION_CFG_C                 1
#define SPI_SW_MINOR_VERSION_CFG_C                 0
#define SPI_SW_PATCH_VERSION_CFG_C                 1

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and SPI header file are of the same vendor */
#if (SPI_VENDOR_ID_CFG_C != SPI_VENDOR_ID_CFG)
    #error "Spi_Cfg.c and Spi_Cfg.h have different vendor ids"
#endif
/* Check if current file and SPI header file are of the same Autosar version */
#if ((SPI_AR_RELEASE_MAJOR_VERSION_CFG_C    != SPI_AR_RELEASE_MAJOR_VERSION_CFG) || \
     (SPI_AR_RELEASE_MINOR_VERSION_CFG_C    != SPI_AR_RELEASE_MINOR_VERSION_CFG) || \
     (SPI_AR_RELEASE_REVISION_VERSION_CFG_C != SPI_AR_RELEASE_REVISION_VERSION_CFG))
    #error "AutoSar Version Numbers of Spi_Cfg.c and Spi_Cfg.h are different"
#endif
/* Check if current file and SPI header file are of the same Software version */
#if ((SPI_SW_MAJOR_VERSION_CFG_C != SPI_SW_MAJOR_VERSION_CFG) || \
     (SPI_SW_MINOR_VERSION_CFG_C != SPI_SW_MINOR_VERSION_CFG) || \
     (SPI_SW_PATCH_VERSION_CFG_C != SPI_SW_PATCH_VERSION_CFG))
    #error "Software Version Numbers of Spi_Cfg.c and Spi_Cfg.h are different"
#endif

/*==================================================================================================
*                         LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/


/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/


/*==================================================================================================
*                                  LOCAL FUNCTION PROTOTYPES
==================================================================================================*/


/*==================================================================================================
*                                      LOCAL FUNCTIONS
==================================================================================================*/
#define SPI_START_SEC_CODE
/*
* @violates @ref Spi_Cfg_c_REF_1 #include statements in a file should only be preceded
*        by other preprocessor directives or comments.
* @violates @ref Spi_Cfg_c_REF_2 Precautions shall be taken in order to prevent the contents
*        of a header file being included twice.
*/
#include "MemMap.h"

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
/* Job start Notifications */
[!LOOP "SpiDriver/*/SpiJob/*"!][!//
[!VAR "WhiteSpaceInstartJobNotification"="normalize-space(SpiJobStartNotification)"!]
[!IF "(string-length($WhiteSpaceInstartJobNotification)>0) and (SpiJobStartNotification!='NULL_PTR') and (SpiJobStartNotification!='NULL')"!][!//
extern void [!"SpiJobStartNotification"!](void); /* start job Notification for Job '[!"name(.)"!]' */
[!ENDIF!][!//
[!ENDLOOP!][!//
[!//

/* Job End Notifications */
[!LOOP "SpiDriver/*[1]/SpiJob/*"!][!//
[!VAR "WhiteSpaceInJobEndNotification"="normalize-space(SpiJobEndNotification)"!]
[!IF "(string-length($WhiteSpaceInJobEndNotification)>0) and (SpiJobEndNotification!='NULL_PTR') and (SpiJobEndNotification!='NULL')"!][!//
extern void [!"SpiJobEndNotification"!](void); /* End Notification for Job '[!"name(.)"!]' */
[!ENDIF!][!//
[!ENDLOOP!][!//

/* Sequence End Notifications */
[!NOCODE!]
[!LOOP "SpiDriver/*[1]/SpiSequence/*"!][!//
[!VAR "WhiteSpaceInSeqEndNotification"="normalize-space(SpiSeqEndNotification)"!]
[!IF "(string-length($WhiteSpaceInSeqEndNotification)>0)  and (SpiSeqEndNotification!='NULL_PTR') and (SpiSeqEndNotification!='NULL')"!][!//
[!CODE!]
extern void [!"SpiSeqEndNotification"!](void); /* End Notification for Sequence '[!"name(.)"!]' */
[!ENDCODE!]
[!ENDIF!]
[!ENDLOOP!][!//
[!ENDNOCODE!]

#define SPI_STOP_SEC_CODE
/*
* @violates @ref Spi_Cfg_c_REF_1 #include statements in a file should only be preceded
*        by other preprocessor directives or comments.
* @violates @ref Spi_Cfg_c_REF_2 Precautions shall be taken in order to prevent the contents
*        of a header file being included twice.
*/
#include "MemMap.h"

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/
 /*
* @violates @ref Spi_Cfg_c_REF_5 This is required as per autosar Requirement, 
*/
#define SPI_START_SEC_VAR_NO_INIT_UNSPECIFIED
/*
* @violates @ref Spi_Cfg_c_REF_1 #include statements in a file should only be preceded
*        by other preprocessor directives or comments.
* @violates @ref Spi_Cfg_c_REF_2 Precautions shall be taken in order to prevent the contents
*        of a header file being included twice.
*/
#include "MemMap.h"

[!VAR "spiPath" = "node:path(.)"!][!//

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/
/*  Buffers Descriptors for EB Channels (if any) */
[!LOOP "SpiDriver/*[1]/SpiChannel/*"!][!//
[!IF "SpiChannelType = 'EB'"!][!//
[!IF "node:exists(../../../../SpiNonAUTOSAR/SpiForceDataType) and (node:value(../../../../SpiNonAUTOSAR/SpiForceDataType) = 'true')"!][!//
[!IF "num:i(SpiDataWidth) > 8"!][!//
VAR_ALIGN(static VAR(Spi_BufferDescriptor, SPI_VAR) Buffer_PC[!"name(.)"!], 2)
[!ELSE!][!//
static VAR(Spi_BufferDescriptor, SPI_VAR) Buffer_PC[!"name(.)"!];
[!ENDIF!][!//
[!ELSE!][!//
static VAR(Spi_BufferDescriptor, SPI_VAR) Buffer_PC[!"name(.)"!];
[!ENDIF!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//

/* Allocate Buffers for IB Channels (if any) */

[!LOOP "SpiDriver/*[1]/SpiChannel/*"!][!//
[!IF "SpiChannelType = 'IB'"!][!//
[!IF "node:exists(../../../../SpiNonAUTOSAR/SpiForceDataType) and (node:value(../../../../SpiNonAUTOSAR/SpiForceDataType) = 'true')"!][!//
[!IF "num:i(SpiDataWidth) > 8"!][!//
VAR_ALIGN(static VAR(Spi_DataType, SPI_VAR) BufferTX_PC[!"name(.)"!][[!"SpiIbNBuffers"!]], 2)
VAR_ALIGN(static VAR(Spi_DataType, SPI_VAR) BufferRX_PC[!"name(.)"!][[!"SpiIbNBuffers"!]], 2)
[!ELSE!][!//
static VAR(Spi_DataType, SPI_VAR) BufferTX_PC[!"name(.)"!][[!"SpiIbNBuffers"!]];
static VAR(Spi_DataType, SPI_VAR) BufferRX_PC[!"name(.)"!][[!"SpiIbNBuffers"!]];
[!ENDIF!][!//
[!ELSE!][!//
static VAR(Spi_DataType, SPI_VAR) BufferTX_PC[!"name(.)"!][[!"SpiIbNBuffers"!]];
static VAR(Spi_DataType, SPI_VAR) BufferRX_PC[!"name(.)"!][[!"SpiIbNBuffers"!]];
[!ENDIF!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//

 /*
* @violates @ref Spi_Cfg_c_REF_5 This is required as per autosar Requirement, 
*/
#define SPI_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
/*
* @violates @ref Spi_Cfg_c_REF_1 #include statements in a file should only be preceded
*        by other preprocessor directives or comments.
* @violates @ref Spi_Cfg_c_REF_2 Precautions shall be taken in order to prevent the contents
*        of a header file being included twice.
*/
#include "MemMap.h"


/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/
 /*
* @violates @ref Spi_Cfg_c_REF_5 This is required as per autosar Requirement, 
*/
#define SPI_START_SEC_CONFIG_DATA_UNSPECIFIED
/*
* @violates @ref Spi_Cfg_c_REF_1 #include statements in a file should only be preceded
*        by other preprocessor directives or comments.
* @violates @ref Spi_Cfg_c_REF_2 Precautions shall be taken in order to prevent the contents
*        of a header file being included twice.
*/
#include "MemMap.h"

/*  Buffers Descriptors for IB Channels (if any) */
[!LOOP "SpiDriver/*[1]/SpiChannel/*"!][!//
[!IF "SpiChannelType = 'IB'"!][!//
static CONST(Spi_BufferDescriptor, SPI_CONST) Buffer_PC[!"name(.)"!] =
{
    BufferTX_PC[!"name(.)"!],
    BufferRX_PC[!"name(.)"!]
};
[!ENDIF!][!//
[!ENDLOOP!][!//

[!VAR "idx" = "1"!][!//
[!VAR "LoopVar"="0"!][!//
[!VAR "count" = "count(SpiDriver/*[1]/SpiChannel/*)"!][!//
/* Channel Configuration */
static CONST(Spi_ChannelConfig, SPI_CONST) SpiChannelConfig_PC[[!"num:i($count)"!]] =
{
[!FOR "x" = "0" TO "num:i(count(SpiDriver/*[1]/SpiChannel/*))"!][!//
[!LOOP "SpiDriver/*[1]/SpiChannel/*"!][!//
[!VAR "Loop"="num:i($LoopVar)"!][!//
[!IF "SpiChannelId = $Loop"!][!//
    {
        /* [!"name(.)"!]*/
        [!"SpiChannelType"!],
        [!"SpiDefaultData"!]U,
[!IF "SpiChannelType = 'IB'"!][!//
        [!"SpiIbNBuffers"!]U,
[!ENDIF!][!//
[!IF "SpiChannelType = 'EB'"!][!//
        [!"SpiEbMaxLength"!]U,
[!ENDIF!][!//
        &Buffer_PC[!"name(.)"!],
        &SpiChannelState[[!"SpiChannelId"!]]
    }[!IF "$idx!=$count"!],[!ENDIF!]
[!VAR "idx" = "$idx + 1"!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//
[!VAR "LoopVar"="$LoopVar + 1"!][!//
[!CR!][!ENDFOR!][!//
};

/* Channel to Job Assignment */
[!/* Retrieves all Channel assignments */!]
[!LOOP "SpiDriver/*[1]/SpiJob/*"!][!//
 /*
* @violates @ref Spi_Cfg_c_REF_5 This is required as per autosar Requirement, 
*/
static CONST(Spi_ChannelType, SPI_CONST) [!"name(.)"!]_ChannelAssignment_PC[[!"num:i(count(SpiChannelList/*))"!]] = {[!//
[!LOOP "SpiChannelList/*"!][!//
[!IF "@index > 0"!],[!ENDIF!][!//
SpiConf_SpiChannel_[!"name(node:ref(SpiChannelAssignment))"!][!//
[!ENDLOOP!]};
[!ENDLOOP!][!//

/* Job Configuration */
[!//
[!VAR "DualClockEnabled" = "node:exists(SpiNonAUTOSAR/SpiEnableDualClockMode) and (node:value(SpiNonAUTOSAR/SpiEnableDualClockMode) = 'true')"!][!//
[!SELECT "node:ref(SpiGeneral/SpiClockRef)"!][!//
[!VAR "SpiPeriphFrequency" = "McuClockReferencePointFrequency"!][!//
[!ENDSELECT!][!//
[!VAR "BusClockNormal" = "string($SpiPeriphFrequency div 1000000)"!][!//
[!IF "$DualClockEnabled = 'true'"!][!//
[!SELECT "node:ref(SpiNonAUTOSAR/SpiAlternateClockRef)"!][!//
[!VAR "SpiPeriphFrequency" = "McuClockReferencePointFrequency"!][!//
[!ENDSELECT!][!//
[!VAR "BusClockAlternate" = "string($SpiPeriphFrequency div 1000000)"!][!//
[!ENDIF!][!//
[!//
[!VAR "idx" = "1"!][!//
[!VAR "LoopVar"="0"!][!//
[!VAR "count" = "count(SpiDriver/*[1]/SpiJob/*)"!][!//
static CONST(Spi_JobConfig, SPI_CONST) SpiJobConfig_PC[[!"num:i($count)"!]] =
{
[!FOR "x" = "0" TO "num:i(count(SpiDriver/*[1]/SpiJob/*))"!][!//
[!LOOP "SpiDriver/*[1]/SpiJob/*"!][!//
[!VAR "Loop"="num:i($LoopVar)"!][!//
[!IF "SpiJobId = $Loop"!][!//
    {
[!VAR "WhiteSpaceInJobEndNotification1"="normalize-space(SpiJobEndNotification)"!]
[!VAR "WhiteSpaceInstartJobNotification1"="normalize-space(SpiJobStartNotification)"!]
        /* [!"name(.)"!] */
        (Spi_ChannelType)[!"num:i(count(SpiChannelList/*))"!]u,
        [!"name(.)"!]_ChannelAssignment_PC, /* List of Channels */
[!IF "(string-length($WhiteSpaceInJobEndNotification1)>0) and (SpiJobEndNotification!='NULL_PTR') and (SpiJobEndNotification!='NULL')"!][!//
        &[!"SpiJobEndNotification"!][!//
[!ELSE!][!//
        NULL_PTR[!//
[!ENDIF!], /* End Notification */
[!IF "(string-length($WhiteSpaceInstartJobNotification1)>0) and (SpiJobStartNotification!='NULL_PTR') and (SpiJobStartNotification!='NULL')"!][!//
        &[!"SpiJobStartNotification"!][!//
[!ELSE!][!//
        NULL_PTR[!//
[!ENDIF!], /* Start Notification */
        (sint8)[!"SpiJobPriority"!], /* Priority */
        &SpiJobState[[!"SpiJobId"!]], /* JobState instance */
        [!"node:value(node:ref(SpiDeviceAssignment)/SpiHwUnit)"!], /* HWUnit index */
[!VAR "varSpiHwUnit"="string(substring-after(node:value(node:ref(SpiDeviceAssignment)/SpiHwUnit),'CSIB')+1)"!][!//
        [!"node:value(concat($spiPath,'/SpiGeneral/SpiPhyUnit/*[',$varSpiHwUnit,']/SpiPhyUnitMapping'))"!]_OFFSET, /* DSPI device HW unit offset */
        /* External Device Settings */
        [!SELECT "node:ref(SpiDeviceAssignment)"!]
        [!WS "8"!][!"name(.)"!], /* External Device */
        {
        [!IF "SpiSlaveMode = 'false'"!]
        [!CALL "GenerateExternalDeviceInfo"!]
        [!ELSE!]
        [!CALL "GenerateSlaveDeviceInfo"!]
        [!ENDIF!]
        }
        [!ENDSELECT!]
    }[!IF "$idx!=$count"!],[!ENDIF!]
[!VAR "idx" = "$idx + 1"!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//
[!VAR "LoopVar"="$LoopVar + 1"!][!//
[!CR!][!ENDFOR!][!//
};

/* Job to Sequence Assignment */
[!LOOP "SpiDriver/*[1]/SpiSequence/*"!][!//
 /*
* @violates @ref Spi_Cfg_c_REF_5 This is required as per autosar Requirement, 
*/
static CONST(Spi_JobType, SPI_CONST) [!"name(.)"!]_JobAssignment_PC[[!"num:i(count(SpiJobAssignment/*))"!]] = {[!//
[!LOOP "SpiJobAssignment/*"!][!//
[!/* Check if reference node has the name "Job". We need to avoid the name "Job" */!][!//
[!/* driver shall run into problems if a name "Job" is founded */!][!//
[!IF "name(node:ref(.)) = 'Job'"!][!//
Job_default[!//
[!ELSE!][!//
[!IF "@index > 0"!],[!ENDIF!][!//
SpiConf_SpiJob_[!"name(node:ref(.))"!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//
};
[!ENDLOOP!][!//

/* Sequence Configuration */
[!VAR "idx" = "1"!][!//
[!VAR "LoopVar"="0"!][!//
[!VAR "count" = "count(SpiDriver/*[1]/SpiSequence/*)"!][!//
static CONST(Spi_SequenceConfig, SPI_CONST) SpiSequenceConfig_PC[[!"num:i($count)"!]] =
{
[!FOR "x" = "0" TO "num:i(count(SpiDriver/*[1]/SpiSequence/*))"!][!//
[!LOOP "SpiDriver/*[1]/SpiSequence/*"!][!//
[!VAR "Loop"="num:i($LoopVar)"!][!//
[!IF "SpiSequenceId = $Loop"!][!//
    {  /* [!"name(.)"!] */
[!VAR "WhiteSpaceInSeqEndNotification1"="normalize-space(SpiSeqEndNotification)"!]
        (Spi_JobType)[!"num:i(count(SpiJobAssignment/*))"!]u,
        [!"name(.)"!]_JobAssignment_PC, /* List of Jobs */
[!IF "(string-length($WhiteSpaceInSeqEndNotification1)>0) and (SpiSeqEndNotification!='NULL_PTR') and (SpiSeqEndNotification!='NULL')"!][!//
        [!//
&[!//
[!"SpiSeqEndNotification"!][!//
[!ELSE!][!//
        NULL_PTR[!//
[!ENDIF!], /* End Notification */
        [!WS "8"!][!IF "SpiInterruptibleSequence"!](uint8)TRUE[!ELSE!](uint8)FALSE[!ENDIF!] /* Interruptible */
    }[!IF "$idx!=$count"!],[!ENDIF!]
[!VAR "idx" = "$idx + 1"!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//
[!VAR "LoopVar"="$LoopVar + 1"!][!//
[!CR!][!ENDFOR!][!//
};

/*---------------------------------------------------------------------------
*            SPI Driver Implementation Specific Configuration
-----------------------------------------------------------------------------*/

[!VAR "idx" = "1"!][!//
[!VAR "LoopVar"="0"!][!//
[!VAR "count" = "count(SpiDriver/*[1]/SpiChannel/*)"!][!//
/* DspiChannelAttributesConfig_PC[!"@index"!] Channel Attribute Configuration of [!"name(.)"!]*/
static CONST(Spi_LLD_ChannelAttributesConfig, SPI_CONST) DspiChannelAttributesConfig_PC[[!"num:i($count)"!]] =
{
[!FOR "x" = "0" TO "num:i(count(SpiDriver/*[1]/SpiChannel/*))"!][!//
[!LOOP "SpiDriver/*[1]/SpiChannel/*"!][!//
[!VAR "Loop"="num:i($LoopVar)"!][!//
[!IF "SpiChannelId = $Loop"!][!//
[!IF "node:exists(../../../../SpiNonAUTOSAR/SpiForceDataType) and (node:value(../../../../SpiNonAUTOSAR/SpiForceDataType) = 'true')"!][!//
[!IF "num:i(SpiDataWidth) > 8"!][!//
    {(uint32)(DSPI_CMD_[!"SpiTransferStart"!] | DSPI_CMD_WIDTH_[!"SpiDataWidth"!]),SPI_DATA_WIDTH_16}[!//
[!ELSE!][!//
    {(uint32)(DSPI_CMD_[!"SpiTransferStart"!] | DSPI_CMD_WIDTH_[!"SpiDataWidth"!]),SPI_DATA_WIDTH_8}[!//
[!ENDIF!][!//
[!ELSE!][!//
    {(uint32)(DSPI_CMD_[!"SpiTransferStart"!] | DSPI_CMD_WIDTH_[!"SpiDataWidth"!])}[!//
[!ENDIF!][!//
[!IF "$idx!=$count"!],[!ENDIF!]
[!VAR "idx" = "$idx + 1"!][!//
[!ENDIF!][!//
[!ENDLOOP!][!//
[!VAR "LoopVar"="$LoopVar + 1"!][!//
[!CR!][!ENDFOR!][!//
};

[!VAR "var"= "1"!][!VAR "deviceattribute"= "num:i(count(SpiDriver/*[1]/SpiExternalDevice/*))-1"!][!//
/* DspiDeviceAttributesConfig_PC[!"@index"!] Device Attribute Configuration of [!"name(.)"!]*/
static CONST(Spi_LLD_DeviceAttributesConfig, SPI_CONST) DspiDeviceAttributesConfig_PC[[!"num:i(count(SpiDriver/*[1]/SpiExternalDevice/*))"!]] =
{
[!AUTOSPACING!][!LOOP "SpiDriver/*[1]/SpiExternalDevice/*"!][!//
    {  /* [!"name(.)"!] */
        [!IF "SpiSlaveMode = 'false'"!]
        [!CALL "GenerateExternalDeviceInfo"!]
        [!ELSE!]
        [!CALL "GenerateSlaveDeviceInfo"!]
        [!ENDIF!]
    }[!IF "$deviceattribute>=$var"!],[!ENDIF!][!VAR "var"= "$var+1"!][!//
[!CR!][!ENDLOOP!][!//
};

static CONST(Spi_AttributesConfig, SPI_CONST) SpiAttributesConfig_PC = {
     DspiChannelAttributesConfig_PC,
     DspiDeviceAttributesConfig_PC
};

/* Array of DSPI Unit configurations */
static CONST(Spi_HWUnitConfig, SPI_CONST) HWUnitConfig_PC[SPI_MAX_HWUNIT] =
{
[!VAR "var"= "1"!][!VAR "numdevices"= "num:i(count(SpiGeneral/SpiPhyUnit/*))-1"!][!//
[!AUTOSPACING!][!LOOP "SpiGeneral/SpiPhyUnit/*"!][!//
    { [!"SpiPhyUnitMapping"!]_OFFSET, [!//
[!IF "SpiPhyUnitMode = 'SPI_SLAVE'"!][!//
(uint8)SPI_SLAVE, [!//
[!ELSE!][!//
(uint8)SPI_MASTER, [!//
[!ENDIF!][!//
[!IF "SpiPhyUnitSync = 'true'"!][!//
SPI_PHYUNIT_SYNC[!//
[!ELSE!][!//
SPI_PHYUNIT_ASYNC[!//
[!IF "ecu:get('SpiDMAPresent') = 'TRUE' and node:exists(../../SpiGlobalDmaEnable) and ../../SpiGlobalDmaEnable = 'true'"!][!//
[!IF "node:exists(SpiPhyUnitAsyncMethod) and SpiPhyUnitAsyncMethod = 'DMA'"!][!//
, (uint16)TRUE, [!"SpiPhyTxDmaChannel"!]u, [!"SpiPhyTxDmaChannelAux"!]u, [!"SpiPhyRxDmaChannel"!]u[!//
[!ELSE!][!//
, (uint16)FALSE[!//
[!ENDIF!][!//
[!ENDIF!][!//
[!ENDIF!][!//
 }[!IF "$numdevices>=$var"!],[!ENDIF!][!VAR "var"= "$var+1"!][!//
[!CR!][!ENDLOOP!][!//
};

/*==================================================================================================
*                                       GLOBAL CONSTANTS
==================================================================================================*/
/* Driver Configuration */
CONST(Spi_ConfigType, SPI_CONST) SpiDriverConfig_PC =
{
    [!"num:i(count(SpiDriver/*[1]/SpiExternalDevice/*))"!]u,
    [!"num:i(count(SpiDriver/*[1]/SpiChannel/*))"!]u,
    [!"num:i(count(SpiDriver/*[1]/SpiJob/*))"!]u,
    [!"num:i(count(SpiDriver/*[1]/SpiSequence/*))"!]u,
    SpiChannelConfig_PC,
    SpiJobConfig_PC,
    SpiSequenceConfig_PC,
    &SpiAttributesConfig_PC,
    HWUnitConfig_PC,
    /**
    * @brief   DEM error parameters
    */
#if (SPI_DISABLE_DEM_REPORT_ERROR_STATUS == STD_ON)
[!IF "$SpiDemErrorEnable"!][!//
[!IF "node:exists(SpiDriver/*[1]/SpiDemEventParameterRefs/SPI_E_HARDWARE_ERROR)"!][!//
[!IF "node:exists(node:ref(SpiDriver/*[1]/SpiDemEventParameterRefs/SPI_E_HARDWARE_ERROR))"!][!//
    { (uint32)STD_ON, [!"node:value(node:ref(SpiDriver/*[1]/SpiDemEventParameterRefs/SPI_E_HARDWARE_ERROR)/DemEventId)"!]U} /* SPI_E_HARDWARE_ERROR parameters*/ [!//
[!ELSE!][!//
    [!ERROR "Invalid reference for SPI_E_HARDWARE_ERROR"!][!//
[!ENDIF!][!//
[!ELSE!][!//
    {(uint32)STD_OFF, 0U} /* SPI_E_HARDWARE_ERROR parameters*/[!//
[!ENDIF!][!// 
[!ELSE!][!//
    {(uint32)STD_OFF, 0U}/* SPI_E_HARDWARE_ERROR parameters*/ [!//
[!ENDIF!][!CR!][!// 
#endif /* SPI_DISABLE_DEM_REPORT_ERROR_STATUS == STD_ON */  
};

 /*
* @violates @ref Spi_Cfg_c_REF_5 This is required as per autosar Requirement, 
*/
#define SPI_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/*
* @violates @ref Spi_Cfg_c_REF_1 #include statements in a file should only be preceded
*        by other preprocessor directives or comments.
* @violates @ref Spi_Cfg_c_REF_2 Precautions shall be taken in order to prevent the contents
*        of a header file being included twice.
*/
#include "MemMap.h"


#endif  /* (SPI_CONFIG_VARIANT == SPI_VARIANT_PRECOMPILE) */

#ifdef __cplusplus
}
#endif

/** @} */
[!ENDCODE!]
