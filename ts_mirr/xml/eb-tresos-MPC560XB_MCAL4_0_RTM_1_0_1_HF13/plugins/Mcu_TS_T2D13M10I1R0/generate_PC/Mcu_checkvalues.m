/**
*   @file    Mcu_checkvalues.m
*   @version 1.0.1
*
*   @brief   AUTOSAR Mcu - File used by the C generation templates.
*   @details This file contains macros used by the C generation templates.
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

/* Macro to check one clock setting */

/* Macro to check one ram section */
[!MACRO "MCheckRamSection"!]
    [!VAR "tmp_m"="0"!]


    [!// stop generation if ram section base address is not aligned to 4 bytes
    [!VAR "tmp_m"="McuRamSectionBaseAddress"!]
    [!IF "$tmp_m mod 4 != 0"!]
        [!INFO!]
*****************
Error: Ram Section Base Address in [!"text:replace(node:path(.),'\/.+\/McuGeneralConfiguration','')"!] is not aligned to 4 bytes (current value: [!"$tmp_m"!])!
*****************
        [!ENDINFO!]
        [!//[!VAR "error"="$error+1"!]
    [!ENDIF!]

    [!// stop generation if ram section size is not multiple of 4
    [!VAR "tmp_m"="McuRamSectionSize"!]
    [!IF "$tmp_m mod 4 != 0"!]
        [!INFO!]
*****************
Error: Ram Section Size in [!"text:replace(node:path(.),'\/.+\/McuGeneralConfiguration','')"!] is not multiple of 4 (current value: [!"$tmp_m"!])!
*****************
        [!ENDINFO!]
        [!//[!VAR "error"="$error+1"!]
    [!ENDIF!]

[!ENDMACRO!]


/* Macro to check one mode setting  */
[!MACRO "LP_PARAM" , "MVR"!]
   [!NOCODE!][!//
                [!VAR "SMVR"!]
                        [!CALL "BOOL2INT", "VALUE"="$MVR"!]
                [!ENDVAR!]

                [!VAR "LP" = " bit:shl($SMVR,20)"!]
                [!ENDNOCODE!][!//
        [!"$LP"!]    
[!ENDMACRO!]


[!MACRO "START" ,"MODE" ,"SYSCLOCK" , "MODE", "XOSC", "PLL", "CFS", "DFS", "RCOSC","PDO"!]
   [!NOCODE!][!//
                [!VAR "CLOCK"!]
                        [!CALL "CLOCK2VALUE", "VALUE"="$SYSCLOCK"!]
                [!ENDVAR!]
                [!VAR "SMODE"!]
                        [!CALL "MODE2VALUE", "VALUE"="$MODE"!]
                [!ENDVAR!]
                [!VAR "SRCOSC"!]
                        [!CALL "BOOL2INT", "VALUE"="$RCOSC"!]
                [!ENDVAR!]
                [!VAR "SXOSC"!]
                        [!CALL "BOOL2INT", "VALUE"="$XOSC"!]
                [!ENDVAR!]
                [!VAR "SPLL"!]
                        [!CALL "BOOL2INT", "VALUE"="$PLL"!]
                [!ENDVAR!]
                [!VAR "FLS1"!]
                        [!CALL "FLS2VALUE", "VALUE"="$CFS"!]
                [!ENDVAR!]
                [!VAR "FLS2"!]
                        [!CALL "FLS2VALUE", "VALUE"="$DFS"!]
                [!ENDVAR!]
                [!VAR "SPDO"!]
                        [!CALL "BOOL2INT", "VALUE"="$PDO"!]     
                [!ENDVAR!]
                [!VAR "LP" = "$CLOCK +bit:shl($SRCOSC,4) + bit:shl($SXOSC,5) + bit:shl($SPLL,6) + bit:shl($FLS1,16) + bit:shl($FLS2,18) + bit:shl(1,20) + bit:shl($SPDO,23) + bit:shl($SMODE,28)"!]
                [!ENDNOCODE!][!//
        [!"$LP"!]
[!ENDMACRO!]


[!MACRO "XTAL","PASS","OSC","INT","DIV","STBY"!]

        [!VAR "SINT"!]
                [!CALL "BOOL2INT", "VALUE"="$INT"!]
        [!ENDVAR!]
        
        [!VAR "SSTBY"!]
                [!CALL "BOOL2INT", "VALUE"="$STBY"!]
        [!ENDVAR!]
        
        [!VAR "SDIV"!]
                [!"$DIV - 1"!]
        [!ENDVAR!]
        [!IF "$PASS='true'"!]
                [!"bit:shl(1,31) + bit:shl(0,16) + bit:shl(0,15) + bit:shl($SDIV,8) + $SSTBY"!]
        [!ELSE!]
                [!"bit:shl(0,31) + bit:shl($OSC,16) + bit:shl($SINT,15) + bit:shl($SDIV,8) + $SSTBY"!]
        [!ENDIF!]
[!ENDMACRO!]



[!MACRO "STBYMODE","BOOT""!]
        [!NOCODE!][!// 
                [!VAR "BM"!]
                        [!CALL "BOOL2INT", "VALUE"="$BOOT"!]
                [!ENDVAR!]
                [!VAR "MODE" = "bit:shl($BM,7)"!]
                [!ENDNOCODE!][!//
        [!"$MODE"!]
[!ENDMACRO!]


[!MACRO "RC","DIV","TRIM","STBY","TYPE"!]

                [!VAR "SSTBY"!]
                        [!CALL "BOOL2INT", "VALUE"="$STBY"!]
                [!ENDVAR!]
                [!VAR "SDIV"!]
                        [!"$DIV - 1"!]
                [!ENDVAR!]
                
                        [!IF "$TYPE='McuRC128KHz'"!]
                        [!VAR "OFFSET"="0"!]
                        [!ELSEIF "$TYPE='McuRC16MHz'"!]
                        [!VAR "OFFSET"="5"!]
                        [!ENDIF!]
                
                        [!"bit:shl($SDIV,8) + bit:shl($TRIM,16) + bit:shl($SSTBY,$OFFSET)"!]
[!ENDMACRO!]

[!MACRO "CLKOUTPUT","EN","DIV","SRC"!]
        [!IF "$EN='false'"!]
                [!"0"!]
        [!ELSE!]
                [!VAR "SOURCE"!]
                        [!IF "$SRC='Crystal'"!]
                                [!"0"!]
                        [!ELSEIF "$SRC='F16_MHz_RC_Internal'"!]
                                [!"1"!]
                        [!ELSE!]
                                [!"2"!]
                        [!ENDIF!]
                [!ENDVAR!]
                [!VAR "SDIV"!]
                        [!"number(text:grep(text:split($DIV, '_'), '[1-9]+')[1])"!]
                [!ENDVAR!]
                
                [!VAR "S2DIV"!]
                        [!IF "$SDIV=1"!]
                                [!"0"!]
                        [!ELSEIF "$SDIV=2"!]
                                [!"1"!]
                        [!ELSEIF "$SDIV=4"!]
                                [!"2"!]
                        [!ELSE!]
                                [!"3"!]
                        [!ENDIF!]
                [!ENDVAR!]
                
                [!"bit:shl($S2DIV,28) + bit:shl($SOURCE,24)+1"!]
        [!ENDIF!]
        
        
[!ENDMACRO!]




[!MACRO "BOOL2INT", "VALUE"!]
        [!IF "$VALUE = 'true'"!]
                [!"1"!]
        [!ELSE!]
                [!"0"!]
        [!ENDIF!]
[!ENDMACRO!]

[!MACRO "CLOCK2VALUE", "VALUE"!]
                [!IF "$VALUE = 'McuIntOscRC16MHz'"!]
                         [!"0"!]
                [!ELSEIF "$VALUE = 'McuDivIntOscRC16MHz'"!]
                         [!"1"!]
                [!ELSEIF "$VALUE = 'McuExtQuartzOsc'"!]
                         [!"2"!]
                [!ELSEIF "$VALUE = 'McuDivExtQuartzOsc'"!]
                         [!"3"!]
                [!ELSEIF "$VALUE = 'McuPLL'"!]
                         [!"4"!]
                [!ELSEIF "$VALUE = 'McuDisabled'"!]
                         [!"15"!]
                [!ENDIF!]
[!ENDMACRO!]


[!MACRO "MODE2VALUE", "VALUE"!]
        [!IF "$VALUE = 'SAFE'"!]
                 [!"2"!]
        [!ELSEIF "$VALUE = 'STANDBY'"!]
                 [!"13"!]
        [!ELSEIF "$VALUE = 'STOP'"!]
                 [!"10"!]
        [!ELSEIF "$VALUE = 'HALT'"!]
                 [!"8"!]
        [!ELSEIF "$VALUE = 'RUN3'"!]
                 [!"7"!]
        [!ELSEIF "$VALUE = 'RUN2'"!]
                 [!"6"!]
        [!ELSEIF "$VALUE = 'RUN1'"!]
                 [!"5"!]
        [!ELSEIF "$VALUE = 'RUN0'"!]
                [!"4"!]
        [!ELSEIF "$VALUE = 'DRUN'"!]
                [!"3"!]
        [!ENDIF!]
[!ENDMACRO!]



[!MACRO "FLS2VALUE", "VALUE"!]
        [!IF "$VALUE = 'PowerDown'"!]
                [!"1"!]
        [!ELSEIF "$VALUE = 'LowPower'"!]
                [!"2"!]
        [!ELSE!]
                [!"3"!]
        [!ENDIF!]
[!ENDMACRO!]



[!MACRO "PLL_MODE","VALUE"!]
        [!IF "$VALUE = 'Normal'"!]
                [!"0"!]
        [!ELSEIF "$VALUE = 'FM'"!]
                [!"1"!]
        [!ELSE!]
                [!"0"!]
        [!ENDIF!]
[!ENDMACRO!]


[!MACRO "PLL_PARAM","IDF","ODF","NDIV","SW","EN"!]
 [!VAR "SSW"!]
  [!CALL "BOOL2INT", "VALUE"="$SW"!]
 [!ENDVAR!]
 [!VAR "SEN"!]
  [!CALL "BOOL2INT", "VALUE"="$EN"!]
 [!ENDVAR!]
 [!VAR "SODF"!]
  [!IF "$ODF=2"!]
   [!"0"!]
  [!ELSEIF "$ODF=4"!]
   [!"1"!]
  [!ELSEIF "$ODF=8"!]
   [!"2"!]
  [!ELSEIF "$ODF=16"!]
   [!"3"!]
  [!ENDIF!]
 [!ENDVAR!]
 [!VAR "SIDF"!]
  [!"$IDF - 1"!]
 [!ENDVAR!]
 
 [!"bit:shl($SEN,2) + bit:shl($SSW,8) + bit:shl($NDIV,16) + bit:shl($SODF,24) + bit:shl($SIDF,26)"!]
 
[!ENDMACRO!]

[!MACRO "PLL_FMODE","FMOD","MD","SS","FREQ","IDF","NDIV"!]
        [!VAR "SSS"!]
                [!IF "$SS = 'Down_Spread'"!]
                        [!"1"!]
                [!ELSE!]
                        [!"0"!]
                [!ENDIF!]
        [!ENDVAR!]

        [!VAR "ModDepth"!]
                [!IF "$SS = 'Down_Spread'"!]
                        [!"2 * $MD"!]
                [!ELSE!]
                        [!"$MD"!]
                [!ENDIF!]
        [!ENDVAR!]

    [!VAR "X"!]
                [!"($FREQ div $IDF) div (4 * $FMOD)"!]
        [!ENDVAR!]
        [!VAR "Y"!]
                [!"round(((bit:shl(1,15)-1)*$ModDepth*$NDIV) div (500*$X))"!]
        [!ENDVAR!]
        [!"bit:shl($SSS,29) + bit:shl(1,15) + bit:shl($X,16) + $Y"!]
        
[!ENDMACRO!]

[!MACRO "PER_CLK"!]
        [!VAR "VALUE1"="0"!]
        [!VAR "VALUE2"="0"!]
        [!VAR "VALUE3"="0"!]
        
                [!VAR "SEN"!]
                        [!CALL "BOOL2INT", "VALUE"="McuPeripheralClkSet_0/McuPeripheralEnableClk"!]
                [!ENDVAR!]
                [!VAR "VALUE1"!]
                        [!"$VALUE1+bit:shl($SEN,31-8*0)"!]
                [!ENDVAR!]

                [!VAR "SEN"!]
                        [!CALL "BOOL2INT", "VALUE"="McuPeripheralClkSet_1/McuPeripheralEnableClk"!]
                [!ENDVAR!]
                [!VAR "VALUE1"!]
                        [!"$VALUE1+bit:shl($SEN,31-8*1)"!]
                [!ENDVAR!]

                [!VAR "SEN"!]
                        [!CALL "BOOL2INT", "VALUE"="McuPeripheralClkSet_2/McuPeripheralEnableClk"!]
                [!ENDVAR!]
                [!VAR "VALUE1"!]
                        [!"$VALUE1+bit:shl($SEN,31-8*2)"!]
                [!ENDVAR!]
        
                [!VAR "VALUE2"!]
                        [!IF "node:exists(McuPeripheralClkSet_0/McuPeripheralDivisorFactor)"!]
                                [!"$VALUE2+bit:shl(McuPeripheralClkSet_0/McuPeripheralDivisorFactor - 1,24-8*0)"!]
                        [!ELSE!]                        
                                [!"$VALUE2"!]
                        [!ENDIF!]
                [!ENDVAR!]
        
                [!VAR "VALUE2"!]
                        [!IF "node:exists(McuPeripheralClkSet_1/McuPeripheralDivisorFactor)"!]
                                [!"$VALUE2+bit:shl(McuPeripheralClkSet_1/McuPeripheralDivisorFactor - 1,24-8*1)"!]
                        [!ELSE!]                        
                                [!"$VALUE2"!]
                        [!ENDIF!]
                [!ENDVAR!]
        
                [!VAR "VALUE2"!]
                        [!IF "node:exists(McuPeripheralClkSet_2/McuPeripheralDivisorFactor)"!]
                                [!"$VALUE2+bit:shl(McuPeripheralClkSet_2/McuPeripheralDivisorFactor - 1,24-8*2)"!]
                        [!ELSE!]
                                [!"$VALUE2"!]
                        [!ENDIF!]
                [!ENDVAR!]
        
        [!"$VALUE1+$VALUE2"!]
        
[!ENDMACRO!]

                
[!MACRO "CLK_MON","PLL","DIV","HIGH","LOW","RCSROUCE"!]
        [!VAR "SPLL"!]
                [!CALL "BOOL2INT", "VALUE"="$PLL"!]
        [!ENDVAR!]
        [!VAR "HF"!]
                [!"num:i(($HIGH*64) div 16000000)"!]
        [!ENDVAR!]
        [!VAR "LF"!]
                [!"num:i(($LOW*64) div 16000000)"!]
        [!ENDVAR!]
        [!VAR "SRC"!]
          [!IF "$RCSROUCE='CK_IRCfast'"!]
           [!"0"!]
          [!ELSEIF "$RCSROUCE='CK_IRCslow'"!]
           [!"1"!]
          [!ELSEIF "$RCSROUCE='CK_32Kcrystal'"!]
           [!"2"!]
          [!ENDIF!]
        [!ENDVAR!]
        [!"bit:shl($SRC,27) + bit:shl($SPLL,26) + bit:shl($DIV,24) + bit:shl($LF,12) + $HF"!]
[!ENDMACRO!]


[!MACRO "RUN" , "DRUN","RUN3", "RUN2", "RUN1", "RUN0", "SAFE", "RESET"!]
        [!VAR "SDRUN"!]
                        [!CALL "BOOL2INT", "VALUE"="$DRUN"!]
        [!ENDVAR!]
        [!VAR "SRUN3"!]
                        [!CALL "BOOL2INT", "VALUE"="$RUN3"!]
        [!ENDVAR!]
        [!VAR "SRUN2"!]
                        [!CALL "BOOL2INT", "VALUE"="$RUN2"!]
        [!ENDVAR!]
        [!VAR "SRUN1"!]
                        [!CALL "BOOL2INT", "VALUE"="$RUN1"!]
        [!ENDVAR!]
        [!VAR "SRUN0"!]
                        [!CALL "BOOL2INT", "VALUE"="$RUN0"!]
        [!ENDVAR!]
        [!VAR "SSAFE"!]
                        [!CALL "BOOL2INT", "VALUE"="$SAFE"!]
        [!ENDVAR!]
        [!VAR "SRESET"!]
                        [!CALL "BOOL2INT", "VALUE"="$RESET"!]
        [!ENDVAR!]
        
        [!"bit:shl($SDRUN,3) + bit:shl($SRUN3,7) + bit:shl($SRUN2,6) + bit:shl($SRUN1,5) + bit:shl($SRUN0,4) + bit:shl($SSAFE,2)"!]
[!ENDMACRO!]


[!MACRO "LOWPOWER" , "STBY","STOP", "HALT"!]
        [!VAR "SSTBY"!]
                        [!CALL "BOOL2INT", "VALUE"="$STBY"!]
        [!ENDVAR!]
        [!VAR "SSTOP"!]
                        [!CALL "BOOL2INT", "VALUE"="$STOP"!]
        [!ENDVAR!]
        [!VAR "SHALT"!]
                        [!CALL "BOOL2INT", "VALUE"="$HALT"!]
        [!ENDVAR!]
        
        
        [!"bit:shl($SSTBY,5) + bit:shl($SSTOP,2) + bit:shl($SHALT,0)"!]
[!ENDMACRO!]

[!MACRO "EDMACR" , "ERCA","EDBG", "ERGA", "HOE", "HALT", "CLM", "EMLM", "GRP0PRI", "EBW"!]
    [!VAR "SERCA"!]
        [!CALL "BOOL2INT", "VALUE"="$ERCA"!]
    [!ENDVAR!]
    [!VAR "SEDBG"!]
        [!CALL "BOOL2INT", "VALUE"="$EDBG"!]
    [!ENDVAR!]
    [!VAR "SERGA"!]
        [!CALL "BOOL2INT", "VALUE"="$ERGA"!]
    [!ENDVAR!]
    [!VAR "SHOE"!]
        [!CALL "BOOL2INT", "VALUE"="$HOE"!]
    [!ENDVAR!]
    [!VAR "SHALT"!]
        [!CALL "BOOL2INT", "VALUE"="$HALT"!]
    [!ENDVAR!]
    [!VAR "SCLM"!]
        [!CALL "BOOL2INT", "VALUE"="$CLM"!]
    [!ENDVAR!]
    [!VAR "SEMLM"!]
        [!CALL "BOOL2INT", "VALUE"="$EMLM"!]
    [!ENDVAR!]
    [!VAR "SEBW"!]
        [!CALL "BOOL2INT", "VALUE"="$EBW"!]
    [!ENDVAR!]
        [!"bit:shl($GRP0PRI,8) + bit:shl($SEMLM,7) + bit:shl($SCLM,6) + bit:shl($SHALT,5) + bit:shl($SHOE,4) + bit:shl($SERGA,3) + bit:shl($SERCA,2) + bit:shl($SEDBG,1) + bit:shl($SEBW,0)"!]
[!ENDMACRO!]

[!MACRO "RESET" , "TYPE"!]
        [!VAR "VALUE1"="0"!]
        
        [!LOOP "McuResetSource/*"!]
                [!VAR "SEN"!]
                        [!IF "$TYPE='RESET'"!] 
                            [!IF "node:exists(McuEnableReset) and @index!=7 and @index!=8 and @index!=9"!]
                                    [!IF "McuEnableReset = 'true'"!]
                                                [!CALL "BOOL2INT", "VALUE"="'true'"!]
                                        [!ELSE!]
                                                [!CALL "BOOL2INT", "VALUE"="'false'"!]
                                        [!ENDIF!]
                                [!ELSE!]
                                        [!"0"!]
                                [!ENDIF!]
                                        [!IF "@index=0"!]
                                        [!VAR "OFFSET"="8"!]
                                        [!ELSEIF "@index=1"!]
                                        [!VAR "OFFSET"="7"!]
                                        [!ELSEIF "@index=2"!]
                                        [!VAR "OFFSET"="6"!]
                                        [!ELSEIF "@index=3"!]
                                        [!VAR "OFFSET"="5"!]
                                        [!ELSEIF "@index=4"!]
                                        [!VAR "OFFSET"="4"!]
                                        [!ELSEIF "@index=5"!]
                                        [!VAR "OFFSET"="1"!]
                                        [!ELSEIF "@index=6"!]
                                        [!VAR "OFFSET"="0"!]
                                        [!ELSE!]
                                        [!VAR "OFFSET"="0"!]
                                        [!ENDIF!]
                        [!ENDIF!]
                        [!IF "$TYPE='SAFE'"!] 
                            [!IF "node:exists(McuEnableInterrupt) and @index!=7 and @index!=8 and @index!=9"!]
                                        [!CALL "BOOL2INT", "VALUE"="McuEnableInterrupt"!]
                                [!ELSE!]
                                        [!"0"!]
                                [!ENDIF!]
                                        [!IF "@index=0"!]
                                        [!VAR "OFFSET"="8"!]
                                        [!ELSEIF "@index=1"!]
                                        [!VAR "OFFSET"="7"!]
                                        [!ELSEIF "@index=2"!]
                                        [!VAR "OFFSET"="6"!]
                                        [!ELSEIF "@index=3"!]
                                        [!VAR "OFFSET"="5"!]
                                        [!ELSEIF "@index=4"!]
                                        [!VAR "OFFSET"="4"!]
                                        [!ELSEIF "@index=5"!]
                                        [!VAR "OFFSET"="1"!]
                                        [!ELSEIF "@index=6"!]
                                        [!VAR "OFFSET"="0"!]
                                        [!ELSE!]
                                        [!VAR "OFFSET"="0"!]
                                        [!ENDIF!]
                        [!ENDIF!]
                        [!IF "$TYPE='PHASE'"!] 
                            [!IF "node:exists(McuResetPhase) and @index!=9"!]
                                        [!IF "McuResetPhase = 'PHASE_1'"!]
                                                [!"0"!]
                                        [!ELSE!]
                                                [!"1"!]
                                        [!ENDIF!]
                                [!ELSE!]
                                        [!"0"!]
                                [!ENDIF!]
                                        [!IF "@index=0"!]
                                        [!VAR "OFFSET"="8"!]
                                        [!ELSEIF "@index=1"!]
                                        [!VAR "OFFSET"="7"!]
                                        [!ELSEIF "@index=2"!]
                                        [!VAR "OFFSET"="6"!]
                                        [!ELSEIF "@index=3"!]
                                        [!VAR "OFFSET"="5"!]
                                        [!ELSEIF "@index=4"!]
                                        [!VAR "OFFSET"="4"!]
                                        [!ELSEIF "@index=8"!]
                                        [!VAR "OFFSET"="3"!]
                                        [!ELSEIF "@index=7"!]
                                        [!VAR "OFFSET"="2"!]
                                        [!ELSEIF "@index=5"!]
                                        [!VAR "OFFSET"="1"!]
                                        [!ELSEIF "@index=6"!]
                                        [!VAR "OFFSET"="0"!]
                                        [!ELSE!]
                                        [!VAR "OFFSET"="0"!]
                                        [!ENDIF!]
                        [!ENDIF!]
                        [!IF "$TYPE='PIN'"!] 
                            [!IF "node:exists(McuResetPin) and @index!=9"!]
                                        [!IF "McuResetPin = 'false'"!]
                                                [!CALL "BOOL2INT", "VALUE"="'true'"!]
                                        [!ELSE!]
                                                [!CALL "BOOL2INT", "VALUE"="'false'"!]
                                        [!ENDIF!]
                                [!ELSE!]
                                        [!"0"!]
                                [!ENDIF!]
                                        [!IF "@index=0"!]
                                        [!VAR "OFFSET"="8"!]
                                        [!ELSEIF "@index=1"!]
                                        [!VAR "OFFSET"="7"!]
                                        [!ELSEIF "@index=2"!]
                                        [!VAR "OFFSET"="6"!]
                                        [!ELSEIF "@index=3"!]
                                        [!VAR "OFFSET"="5"!]
                                        [!ELSEIF "@index=4"!]
                                        [!VAR "OFFSET"="4"!]
                                        [!ELSEIF "@index=8"!]
                                        [!VAR "OFFSET"="3"!]
                                        [!ELSEIF "@index=7"!]
                                        [!VAR "OFFSET"="2"!]
                                        [!ELSEIF "@index=5"!]
                                        [!VAR "OFFSET"="1"!]
                                        [!ELSEIF "@index=6"!]
                                        [!VAR "OFFSET"="0"!]
                                        [!ELSE!]
                                        [!VAR "OFFSET"="0"!]
                                        [!ENDIF!]
                        [!ENDIF!]
                        [!IF "$TYPE='DESTRESET'"!] 
                            [!IF "node:exists(McuEnableReset) and @index=9"!]
                                        [!IF "McuEnableReset = 'true'"!]
                                                [!CALL "BOOL2INT", "VALUE"="'true'"!]
                                        [!ELSE!]
                                                [!CALL "BOOL2INT", "VALUE"="'false'"!]
                                        [!ENDIF!]
                                [!ELSE!]
                                        [!"0"!]
                                [!ENDIF!]
                                        [!IF "@index=9"!]
                                        [!VAR "OFFSET"="2"!]
                                        [!ELSE!]
                                        [!VAR "OFFSET"="0"!]
                                        [!ENDIF!]
                        [!ENDIF!]       
                        [!IF "$TYPE='DESTSAFE'"!] 
                            [!IF "node:exists(McuEnableInterrupt) and @index=9"!]
                                [!CALL "BOOL2INT", "VALUE"="McuEnableInterrupt"!]
                            [!ELSE!]
                                [!"0"!]
                            [!ENDIF!]
                        [!IF "@index=9"!]
                        [!VAR "OFFSET"="2"!]
                        [!ELSE!]
                        [!VAR "OFFSET"="0"!]
                        [!ENDIF!]
                        
                        [!ENDIF!]                       
                [!ENDVAR!]
                
                
                
                [!VAR "VALUE1"!]
                        [!"bit:or($VALUE1, bit:shl($SEN,$OFFSET))"!]
                [!ENDVAR!]
                
        [!ENDLOOP!]
        
        [!"number($VALUE1)"!]
        
[!ENDMACRO!]


[!MACRO "MODE"!]
   
        [!VAR "PATH" ="'McuEnableMode'"!]
                
        [!VAR "STBY"!]
                [!IF "node:exists(node:ref($PATH)/McuModeSTBY)"!]
                    [!VAR "McuSTBY"!]
                                [!CALL "BOOL2INT","VALUE"="node:ref($PATH)/McuModeSTBY"!]
                        [!ENDVAR!]
                        [!"bit:shl($McuSTBY,13)"!]
                [!ELSE!]
                        [!"0"!]
                [!ENDIF!]
        [!ENDVAR!]
        
        [!VAR "STOP"!]
                [!IF "node:exists(node:ref($PATH)/McuModeStop)"!]
                        [!VAR "McuSTOP"!]
                                [!CALL "BOOL2INT","VALUE"="node:ref($PATH)/McuModeStop"!]
                        [!ENDVAR!]
                        [!"bit:shl($McuSTOP,10)"!]
                [!ELSE!]
                        [!"0"!]
                [!ENDIF!]
        [!ENDVAR!]
        
        [!VAR "HALT"!]
                [!IF "node:exists(node:ref($PATH)/McuModeHalt)"!]
                        [!VAR "McuHalt"!]
                                [!CALL "BOOL2INT","VALUE"="node:ref($PATH)/McuModeHalt"!]
                        [!ENDVAR!]
                        [!"bit:shl($McuHalt,8)"!]
                [!ELSE!]
                        [!"0"!]
                [!ENDIF!]
        [!ENDVAR!]
        
        [!VAR "RUN3"!]
                [!IF "node:exists(node:ref($PATH)/McuModeRun3)"!]
                        [!VAR "McuRun3"!]
                                [!CALL "BOOL2INT","VALUE"="node:ref($PATH)/McuModeRun3"!]
                        [!ENDVAR!]
                        [!"bit:shl($McuRun3,7)"!]
                [!ELSE!]
                        [!"0"!]
                [!ENDIF!]
        [!ENDVAR!]
        
        [!VAR "RUN2"!]
                [!IF "node:exists(node:ref($PATH)/McuModeRun2)"!]
                        [!VAR "McuRun2"!]
                                [!CALL "BOOL2INT","VALUE"="node:ref($PATH)/McuModeRun2"!]
                        [!ENDVAR!]
                        [!"bit:shl($McuRun2,6)"!]
                [!ELSE!]
                        [!"0"!]
                [!ENDIF!]
        [!ENDVAR!]
        
        [!VAR "RUN1"!]
                [!IF "node:exists(node:ref($PATH)/McuModeRun1)"!]
                        [!VAR "McuRun1"!]
                                [!CALL "BOOL2INT","VALUE"="node:ref($PATH)/McuModeRun1"!]
                        [!ENDVAR!]
                        [!"bit:shl($McuRun1,5)"!]
                [!ELSE!]
                        [!"0"!]
                [!ENDIF!]
        [!ENDVAR!]
        
        [!VAR "TEST"!]
                [!"0"!]
        [!ENDVAR!]
        
        
        [!VAR "RESULT"!]
                        [!"$STBY + $STOP + $HALT + $RUN3 + $RUN2 + $RUN1 + $TEST + 29"!]
        [!ENDVAR!]
        
        [!"$RESULT"!]
[!ENDMACRO!]







[!MACRO "POW"!]
    [!NOCODE!]
        [!VAR "PATH" = "'McuPowerDomain'"!]
        
        [!VAR "STBY"!]
                [!IF "node:exists(node:ref($PATH)/McuPwrSTBY)"!]
                    [!VAR "McuSTBY"!]
                                [!CALL "BOOL2INT","VALUE"="node:ref($PATH)/McuPwrSTBY"!]
                        [!ENDVAR!]
                        [!"bit:shl($McuSTBY,13)"!]
                [!ELSE!]
                        [!"0"!]
                [!ENDIF!]
        [!ENDVAR!]
        
        [!VAR "STOP"!]
                [!IF "node:exists(node:ref($PATH)/McuPwrStop)"!]
                        [!VAR "McuSTOP"!]
                                [!CALL "BOOL2INT","VALUE"="node:ref($PATH)/McuPwrStop"!]
                        [!ENDVAR!]
                        [!"bit:shl($McuSTOP,10)"!]
                [!ELSE!]
                        [!"0"!]
                [!ENDIF!]
        [!ENDVAR!]
        
        [!VAR "HALT"!]
                [!IF "node:exists(node:ref($PATH)/McuPwrHalt)"!]
                        [!VAR "McuHalt"!]
                                [!CALL "BOOL2INT","VALUE"="node:ref($PATH)/McuPwrHalt"!]
                        [!ENDVAR!]
                        [!"bit:shl($McuHalt,8)"!]
                [!ELSE!]
                        [!"0"!]
                [!ENDIF!]
        [!ENDVAR!]
        
        [!VAR "RUN3"!]
                [!IF "node:exists(node:ref($PATH)/McuPwrRun3)"!]
                        [!VAR "McuRun3"!]
                                [!CALL "BOOL2INT","VALUE"="node:ref($PATH)/McuPwrRun3"!]
                        [!ENDVAR!]
                        [!"bit:shl($McuRun3,7)"!]
                [!ELSE!]
                        [!"0"!]
                [!ENDIF!]
        [!ENDVAR!]
        
        [!VAR "RUN2"!]
                [!IF "node:exists(node:ref($PATH)/McuPwrRun2)"!]
                        [!VAR "McuRun2"!]
                                [!CALL "BOOL2INT","VALUE"="node:ref($PATH)/McuPwrRun2"!]
                        [!ENDVAR!]
                        [!"bit:shl($McuRun2,6)"!]
                [!ELSE!]
                        [!"0"!]
                [!ENDIF!]
        [!ENDVAR!]
        
        [!VAR "RUN1"!]
                [!IF "node:exists(node:ref($PATH)/McuPwrRun1)"!]
                        [!VAR "McuRun1"!]
                                [!CALL "BOOL2INT","VALUE"="node:ref($PATH)/McuPwrRun1"!]
                        [!ENDVAR!]
                        [!"bit:shl($McuRun1,5)"!]
                [!ELSE!]
                        [!"0"!]
                [!ENDIF!]
        [!ENDVAR!]
        
        [!VAR "RUN0"!]
                [!IF "node:exists(node:ref($PATH)/McuPwrRun0)"!]
                        [!VAR "McuRun0"!]
                                [!CALL "BOOL2INT","VALUE"="node:ref($PATH)/McuPwrRun0"!]
                        [!ENDVAR!]
                        [!"bit:shl($McuRun0,4)"!]
                [!ELSE!]
                        [!"0"!]
                [!ENDIF!]
        [!ENDVAR!]
        
        [!VAR "TEST"!]
                [!"0"!]
        [!ENDVAR!]
        
        [!VAR "SAFE"!]
                [!IF "node:exists(node:ref($PATH)/McuPwrSafe)"!]
                        [!VAR "McuSafe"!]
                                [!CALL "BOOL2INT","VALUE"="node:ref($PATH)/McuPwrSafe"!]
                        [!ENDVAR!]
                        [!"bit:shl($McuSafe,2)"!]
                [!ELSE!]
                        [!"0"!]
                [!ENDIF!]
        [!ENDVAR!]
        
        [!VAR "DRUN"!]
                [!IF "node:exists(node:ref($PATH)/McuPwrDRun)"!]
                        [!VAR "McuDrun"!]
                                [!CALL "BOOL2INT","VALUE"="node:ref($PATH)/McuPwrDRun"!]
                        [!ENDVAR!]
                        [!"bit:shl($McuDrun,3)"!]
                [!ELSE!]
                        [!"0"!]
                [!ENDIF!]
        [!ENDVAR!]
        
        [!VAR "RESULT"!]
                        [!"$STBY + $STOP + $HALT + $RUN3 + $RUN2 + $RUN1 + $RUN0 + $TEST + $DRUN + $SAFE + 1"!]
        [!ENDVAR!]
         [!ENDNOCODE!]
         
        [!"$RESULT"!]
        
[!ENDMACRO!]
[!MACRO "MComputePllDividers", "CrystalFrequency_m" = "1", "SystemFrequency_m" = "1"!]
[!// Declare Variables
    [!VAR "vcofreq"="0"!]
    [!VAR "IDF" = "0.25"!]
    [!VAR "NDIV" = "32"!]
    [!VAR "ODF" = "0"!]
    [!VAR "diff"="0"!]
    [!VAR "cIDF" = "1"!]
    [!VAR "cNDIV" = "50"!]
    [!VAR "cODF" = "0"!]
    [!VAR "cdiff"="100000000"!]
    [!VAR "csysfreq"="0"!]
    [!VAR "cvcofreq"="0"!]

[!// Find the closest frequency
    
        
            [!FOR "IDF" = "1" TO "15"!]
            [!FOR "NDIV" = "32" TO "96"!]
                [!VAR "vcofreq"="$CrystalFrequency_m*($NDIV) div ($IDF)"!]
                [!IF "($vcofreq >= 256000000) and ($vcofreq <= 512000000)"!]
                    [!FOR "ODF" = "0" TO "3"!]
                        [!VAR "TempODF"!]
                          [!IF "$ODF=0"!]
                           [!"2"!]
                          [!ELSEIF "$ODF=1"!]
                           [!"4"!]
                          [!ELSEIF "$ODF=2"!]
                           [!"8"!]
                          [!ELSEIF "$ODF=3"!]
                           [!"16"!]
                          [!ENDIF!]
                        [!ENDVAR!]
                            [!VAR "sysfreq"="$CrystalFrequency_m*($NDIV) div (($IDF)*($TempODF))"!]
                            [!VAR "diff" = "$sysfreq - $SystemFrequency_m"!]
                            [!IF "$diff < 0"!][!//get absolute value of difference
                                [!VAR "diff" = "0 - $diff"!]
                            [!ENDIF!]
                            [!IF "($diff < $cdiff) or ($diff = 0)"!]
                                [!VAR "cvcofreq" = "$vcofreq"!]
                                [!VAR "csysfreq" = "$sysfreq"!]
                                [!VAR "cIDF" = "$IDF"!]
                                [!VAR "cNDIV" = "$NDIV"!]
                                [!VAR "cODF" = "$ODF"!]
                                [!VAR "cdiff" = "$diff"!]
                            [!ENDIF!]
                       
                    [!ENDFOR!]
                [!ENDIF!]
            [!ENDFOR!]
        
    [!ENDFOR!]

[!ENDMACRO!]


[!MACRO "PLL_PARAM2","IDF","ODF","NDIV","SW","EN"!]
 [!VAR "SSW"!]
  [!CALL "BOOL2INT", "VALUE"="$SW"!]
 [!ENDVAR!]
 [!VAR "SEN"!]
  [!CALL "BOOL2INT", "VALUE"="$EN"!]
 [!ENDVAR!]
 [!VAR "SODF"!]
  [!"$ODF"!]
 [!ENDVAR!]
 [!VAR "SIDF"!]
  [!"$IDF - 1"!]
 [!ENDVAR!]
 
 [!"bit:shl($SEN,2) + bit:shl($SSW,8) + bit:shl($NDIV,16) + bit:shl($SODF,24) + bit:shl($SIDF,26)"!]
 
[!ENDMACRO!]

/* Macro to check one clock setting */
[!MACRO "MCheckClockSettings"!]
    [!VAR "tmp_m"="0"!]
    [!VAR "tmp_n"="0"!]

[!/*
    [!// stop generation if McuSystemClockFrequency is less than 16MHz
    [!VAR "tmp_m"="McuSystemClockFrequency"!]
    [!IF "($tmp_m<16000000) and ($tmp_m!=0)"!]
        [!INFO!]
*****************
Error: McuSystemClockFrequency in [!"text:replace(node:path(.),'\/.+\/McuGeneralConfiguration','')"!] cannot be less than 16 MHz (current value: [!"$tmp_m"!]Hz)!
*****************
        [!ENDINFO!]
        [!//[!VAR "error"="$error+1"!]
    [!ENDIF!]
*/!]


    [!// stop generation if McuSystemClockFrequency is greater than 80MHz
    [!VAR "tmp_m"="McuSystemClockFrequency"!]
    [!IF "$tmp_m>64000000"!]
        [!INFO!]
*****************
Error:McuSystemClockFrequency in [!"text:replace(node:path(.),'\/.+\/McuGeneralConfiguration','')"!] cannot be greater than 120 MHz (current value: [!"$tmp_m"!]Hz)!
*****************
        [!ENDINFO!]
        [!//[!VAR "error"="$error+1"!]
    [!ENDIF!]
    [!ENDMACRO!]

[!MACRO "MCUFlashPFCR0","B02RWWC","B0P0BCFG","B02P0DPFE","B02P0IPFE","B02P0PFLM","B02P0BFE"!]

 [!VAR "BB02P0DPFE"!]
  [!CALL "BOOL2INT", "VALUE"="$B02P0DPFE"!]
 [!ENDVAR!]
 [!VAR "BB02P0IPFE"!]
  [!CALL "BOOL2INT", "VALUE"="$B02P0IPFE"!]
 [!ENDVAR!]
 [!VAR "BB02P0BFE"!]
  [!CALL "BOOL2INT", "VALUE"="$B02P0BFE"!]
 [!ENDVAR!]


 [!"bit:shl(bit:shr($B02RWWC,1),15) + bit:shl($B02RWWC,7) - bit:shl(bit:shr($B02RWWC,1),8) + bit:shl($B0P0BCFG,5) + bit:shl($BB02P0DPFE,4) + bit:shl($BB02P0IPFE,3) + bit:shl($B02P0PFLM,1) + bit:shl($BB02P0BFE,0)"!]

[!ENDMACRO!]

[!MACRO "MCUFlashPFCR1","B1RWWC","B1P0BFE"!]

 [!VAR "BB1P0BFE"!]
  [!CALL "BOOL2INT", "VALUE"="$B1P0BFE"!]
 [!ENDVAR!]

 [!"bit:shl(bit:shr($B1RWWC,1),15) + bit:shl($B1RWWC,7) - bit:shl(bit:shr($B1RWWC,1),8) + bit:shl($BB1P0BFE,0)"!]

[!ENDMACRO!]

[!MACRO "MCUFlashPFAPR","M2PFD","M0PFD","M2AP","M0AP"!]

 [!VAR "BM2PFD"!]
  [!CALL "BOOL2INT", "VALUE"="$M2PFD"!]
 [!ENDVAR!]
 [!VAR "BM0PFD"!]
  [!CALL "BOOL2INT", "VALUE"="$M0PFD"!]
 [!ENDVAR!]

 [!"bit:shl($BM2PFD,18) + bit:shl($BM0PFD,16) + bit:shl($M2AP,4) + bit:shl($M0AP,0)"!]

[!ENDMACRO!]

[!MACRO "MCUFlashclkdep0","F","B02APC","B02WWSC","B02RWSC"!]

[!VAR "tmp_B02APC"="$B02APC"!]
[!VAR "tmp_B02WWSC"="$B02WWSC"!]
[!VAR "tmp_B02RWSC"="$B02RWSC"!]

[!IF "$tmp_B02APC!=32"!]

        [!IF "($F>0) and ($F<=20000000)"!]
                [!IF "$tmp_B02APC>0"!]
                        [!INFO!]
*****************
Warning: The value [!"$tmp_B02APC"!] used for B02_APC is not the recommended one.
*****************
                        [!ENDINFO!]
                [!ELSEIF "$tmp_B02APC=0"!]
                
                [!ELSE!]
                        [!INFO!]
*****************
Error: The value [!"$tmp_B02APC"!] used for B02_APC is not permitted due to system clock frequency restrictions, using default value
*****************
                        [!VAR "tmp_B02APC"="0"!]
                        [!ENDINFO!]
                [!ENDIF!]
        [!ELSEIF "($F>20000000) and ($F<=40000000)"!]
                [!IF "$tmp_B02APC>1"!]
                        [!INFO!]
*****************
Warning: The value [!"$tmp_B02APC"!] used for B02_APC is not the recommended one.
*****************
                        [!ENDINFO!]
                [!ELSEIF "$tmp_B02APC=1"!]
                
                [!ELSE!]
                        [!INFO!]
*****************
Error: The value [!"$tmp_B02APC"] used for B02_APC is not permitted due to system clock frequency restrictions, using default value
*****************
                        [!VAR "tmp_B02APC"="1"!]
                        [!ENDINFO!]
                [!ENDIF!]
        [!ELSEIF "($F>40000000) and ($F<=64000000)"!]
                [!IF "$tmp_B02APC>2"!]
                        [!INFO!]
*****************
Warning: The value [!"$tmp_B02APC"!] used for B02_APC is not the recommended one.
*****************
                        [!ENDINFO!]
                [!ELSEIF "$tmp_B02APC=2"!]
                
                [!ELSE!]
                        [!INFO!]
*****************
Error: The value [!"$tmp_B02APC"!] used for B02_APC is not permitted due to system clock frequency restrictions, using default value
*****************
                        [!VAR "tmp_B02APC"="2"!]
                        [!ENDINFO!]
                [!ENDIF!]
        [!ENDIF!]

[!ELSE!]

        [!IF "($F>0) and ($F<=20000000)"!]
                [!VAR "tmp_B02APC"="0"!]
        [!ELSEIF "($F>20000000) and ($F<=40000000)"!]
                [!VAR "tmp_B02APC"="1"!]
        [!ELSEIF "($F>40000000) and ($F<=64000000)"!]
                [!VAR "tmp_B02APC"="2"!]
        [!ENDIF!]

[!ENDIF!]



[!IF "$tmp_B02WWSC!=32"!]
        [!IF "($F>0) and ($F<=20000000)"!]
                [!IF "$tmp_B02WWSC>0"!]
                        [!INFO!]
*****************
Warning: The value [!"$tmp_B02WWSC"!] used for B02_WWSC is not the recommended one.
*****************
                        [!ENDINFO!]
                [!ELSEIF "$tmp_B02WWSC=0"!]
                
                [!ELSE!]
                        [!INFO!]
*****************
Error: The value [!"$tmp_B02WWSC"!] used for B02_WWSC is not permitted due to system clock frequency restrictions, using default value
*****************
                        [!VAR "tmp_B02WWSC"="0"!]
                        [!ENDINFO!]
                [!ENDIF!]
        [!ELSEIF "($F>20000000) and ($F<=40000000)"!]
                [!IF "$tmp_B02WWSC>1"!]
                        [!INFO!]
*****************
Warning: The value [!"$tmp_B02WWSC"!] used for B02_WWSC is not the recommended one.
*****************
                        [!ENDINFO!]
                [!ELSEIF "$tmp_B02WWSC=1"!]
                
                [!ELSE!]
                        [!INFO!]
*****************
Error: The value [!"$tmp_B02WWSC"!] used for B02_WWSC is not permitted due to system clock frequency restrictions, using default value
*****************
                        [!VAR "tmp_B02WWSC"="1"!]
                        [!ENDINFO!]
                [!ENDIF!]
        [!ELSEIF "($F>40000000) and ($F<=64000000)"!]
                [!IF "$tmp_B02WWSC>2"!]
                        [!INFO!]
*****************
Warning: The value [!"$tmp_B02WWSC"!] used for B02_WWSC is not the recommended one.
*****************
                        [!ENDINFO!]
                [!ELSEIF "$tmp_B02WWSC=2"!]
                
                [!ELSE!]
                        [!INFO!]
*****************
Error: The value [!"$tmp_B02WWSC"!] used for B02_WWSC is not permitted due to system clock frequency restrictions, using default value
*****************
                        [!VAR "tmp_B02WWSC"="2"!]
                        [!ENDINFO!]
                [!ENDIF!]
        [!ENDIF!]

[!ELSE!]

        [!IF "($F>0) and ($F<=20000000)"!]
                [!VAR "tmp_B02WWSC"="0"!]
        [!ELSEIF "($F>20000000) and ($F<=40000000)"!]
                [!VAR "tmp_B02WWSC"="1"!]
        [!ELSEIF "($F>40000000) and ($F<=64000000)"!]
                [!VAR "tmp_B02WWSC"="2"!]
        [!ENDIF!]

[!ENDIF!]



[!IF "$tmp_B02RWSC!=32"!]       
        [!IF "($F>0) and ($F<=20000000)"!]
                [!IF "$tmp_B02RWSC>0"!]
                        [!INFO!]
*****************
Warning: The value [!"$tmp_B02RWSC"!] used for B02_RWSC is not the recommended one.
*****************
                        [!ENDINFO!]
                [!ELSEIF "$tmp_B02RWSC=0"!]
                
                [!ELSE!]
                        [!INFO!]
*****************
Error: The value [!"$tmp_B02RWSC"!] used for B02_RWSC is not permitted due to system clock frequency restrictions, using default value
*****************
                        [!VAR "tmp_B02RWSC"="0"!]
                        [!ENDINFO!]
                [!ENDIF!]
        [!ELSEIF "($F>20000000) and ($F<=40000000)"!]
                [!IF "$tmp_B02RWSC>1"!]
                        [!INFO!]
*****************
Warning: The value [!"$tmp_B02RWSC"!] used for B02_RWSC is not the recommended one.
*****************
                        [!ENDINFO!]
                [!ELSEIF "$tmp_B02RWSC=1"!]
                
                [!ELSE!]
                        [!INFO!]
*****************
Error: The value [!"$tmp_B02RWSC"!] used for B02_RWSC is not permitted due to system clock frequency restrictions, using default value
*****************
                        [!VAR "tmp_B02RWSC"="1"!]
                        [!ENDINFO!]
                [!ENDIF!]
        [!ELSEIF "($F>40000000) and ($F<=64000000)"!]
                [!IF "$tmp_B02RWSC>2"!]
                        [!INFO!]
*****************
Warning: The value [!"$tmp_B02RWSC"!] used for B02_RWSC is not the recommended one.
*****************
                        [!ENDINFO!]
                [!ELSEIF "$tmp_B02RWSC=2"!]
                
                [!ELSE!]
                        [!INFO!]
*****************
Error: The value [!"$tmp_B02RWSC"!] used for B02_RWSC is not permitted due to system clock frequency restrictions, using default value
*****************
                        [!VAR "tmp_B02RWSC"="2"!]
                        [!ENDINFO!]
                [!ENDIF!]
        [!ENDIF!]
[!ELSE!]

        [!IF "($F>0) and ($F<=20000000)"!]
                [!VAR "tmp_B02RWSC"="0"!]
        [!ELSEIF "($F>20000000) and ($F<=40000000)"!]
                [!VAR "tmp_B02RWSC"="1"!]
        [!ELSEIF "($F>40000000) and ($F<=64000000)"!]
                [!VAR "tmp_B02RWSC"="2"!]
        [!ENDIF!]

[!ENDIF!]

[!IF "$tmp_B02APC != $tmp_B02RWSC"!]
        [!INFO!]
*****************
Error: The value [!"$tmp_B02APC"!] used for B02_APC must be equal to B02_RWSC
*****************
             [!VAR "tmp_B02APC"="$tmp_B02RWSC"!]
      [!ENDINFO!]
 [!ENDIF!]
 
 [!"bit:shl($tmp_B02APC,27) + bit:shl($tmp_B02WWSC,22) + bit:shl($tmp_B02RWSC,17)"!]

[!ENDMACRO!]

[!MACRO "MCUFlashclkdep1","F","B1APC","B1WWSC","B1RWSC"!]

[!VAR "tmp_B1APC"="$B1APC"!]
[!VAR "tmp_B1WWSC"="$B1WWSC"!]
[!VAR "tmp_B1RWSC"="$B1RWSC"!]


[!IF "$tmp_B1APC!=32"!]

        [!IF "($F>0) and ($F<=20000000)"!]
                [!IF "$tmp_B1APC>0"!]
                        [!INFO!]
*****************
Warning: The value [!"$tmp_B1APC"!] used for B1_APC is not the recommended one.
*****************
                        [!ENDINFO!]
                [!ELSEIF "$tmp_B1APC=0"!]
                
                [!ELSE!]
                        [!INFO!]
*****************
Error: The value [!"$tmp_B1APC"!] used for B1_APC is not permitted due to system clock frequency restrictions, using default value
*****************
                        [!VAR "tmp_B1APC"="0"!]
                        [!ENDINFO!]
                [!ENDIF!]
        [!ELSEIF "($F>20000000) and ($F<=40000000)"!]
                [!IF "$tmp_B1APC>1"!]
                        [!INFO!]
*****************
Warning: The value [!"$tmp_B1APC"!] used for B1_APC is not the recommended one.
*****************
                        [!ENDINFO!]
                [!ELSEIF "$tmp_B1APC=1"!]
                
                [!ELSE!]
                        [!INFO!]
*****************
Error: The value [!"$tmp_B1APC"] used for B1_APC is not permitted due to system clock frequency restrictions, using default value
*****************
                        [!VAR "tmp_B1APC"="1"!]
                        [!ENDINFO!]
                [!ENDIF!]
        [!ELSEIF "($F>40000000) and ($F<=64000000)"!]
                [!IF "$tmp_B1APC>2"!]
                        [!INFO!]
*****************
Warning: The value [!"$tmp_B1APC"!] used for B1_APC is not the recommended one.
*****************
                        [!ENDINFO!]
                [!ELSEIF "$tmp_B1APC=2"!]
                
                [!ELSE!]
                        [!INFO!]
*****************
Error: The value [!"$tmp_B1APC"!] used for B1_APC is not permitted due to system clock frequency restrictions, using default value
*****************
                        [!VAR "tmp_B1APC"="2"!]
                        [!ENDINFO!]
                [!ENDIF!]
        [!ENDIF!]

[!ELSE!]

        [!IF "($F>0) and ($F<=20000000)"!]
                [!VAR "tmp_B1APC"="0"!]
        [!ELSEIF "($F>20000000) and ($F<=40000000)"!]
                [!VAR "tmp_B1APC"="1"!]
        [!ELSEIF "($F>40000000) and ($F<=64000000)"!]
                [!VAR "tmp_B1APC"="2"!]
        [!ENDIF!]

[!ENDIF!]


[!IF "$tmp_B1WWSC!=32"!]
        [!IF "($F>0) and ($F<=20000000)"!]
                [!IF "$tmp_B1WWSC>0"!]
                        [!INFO!]
*****************
Warning: The value [!"$tmp_B1WWSC"!] used for B1_WWSC is not the recommended one.
*****************
                        [!ENDINFO!]
                [!ELSEIF "$tmp_B1WWSC=0"!]
                
                [!ELSE!]
                        [!INFO!]
*****************
Error: The value [!"$tmp_B1WWSC"!] used for B1_WWSC is not permitted due to system clock frequency restrictions, using default value
*****************
                        [!VAR "tmp_B1WWSC"="0"!]
                        [!ENDINFO!]
                [!ENDIF!]
        [!ELSEIF "($F>20000000) and ($F<=40000000)"!]
                [!IF "$tmp_B1WWSC>1"!]
                        [!INFO!]
*****************
Warning: The value [!"$tmp_B1WWSC"!] used for B1_WWSC is not the recommended one.
*****************
                        [!ENDINFO!]
                [!ELSEIF "$tmp_B1WWSC=1"!]
                
                [!ELSE!]
                        [!INFO!]
*****************
Error: The value [!"$tmp_B1WWSC"!] used for B1_WWSC is not permitted due to system clock frequency restrictions, using default value
*****************
                        [!VAR "tmp_B1WWSC"="1"!]
                        [!ENDINFO!]
                [!ENDIF!]
        [!ELSEIF "($F>40000000) and ($F<=64000000)"!]
                [!IF "$tmp_B1WWSC>2"!]
                        [!INFO!]
*****************
Warning: The value [!"$tmp_B1WWSC"!] used for B1_WWSC is not the recommended one.
*****************
                        [!ENDINFO!]
                [!ELSEIF "$tmp_B1WWSC=2"!]
                
                [!ELSE!]
                        [!INFO!]
*****************
Error: The value [!"$tmp_B1WWSC"!] used for B1_WWSC is not permitted due to system clock frequency restrictions, using default value
*****************
                        [!VAR "tmp_B1WWSC"="2"!]
                        [!ENDINFO!]
                [!ENDIF!]
        [!ENDIF!]

[!ELSE!]

        [!IF "($F>0) and ($F<=20000000)"!]
                [!VAR "tmp_B1WWSC"="0"!]
        [!ELSEIF "($F>20000000) and ($F<=40000000)"!]
                [!VAR "tmp_B1WWSC"="1"!]
        [!ELSEIF "($F>40000000) and ($F<=64000000)"!]
                [!VAR "tmp_B1WWSC"="2"!]
        [!ENDIF!]

[!ENDIF!]



[!IF "$tmp_B1RWSC!=32"!]        
        [!IF "($F>0) and ($F<=20000000)"!]
                [!IF "$tmp_B1RWSC>0"!]
                        [!INFO!]
*****************
Warning: The value [!"$tmp_B1RWSC"!] used for B1_RWSC is not the recommended one.
*****************
                        [!ENDINFO!]
                [!ELSEIF "$tmp_B1RWSC=0"!]
                
                [!ELSE!]
                        [!INFO!]
*****************
Error: The value [!"$tmp_B1RWSC"!] used for B1_RWSC is not permitted due to system clock frequency restrictions, using default value
*****************
                        [!VAR "tmp_B1RWSC"="0"!]
                        [!ENDINFO!]
                [!ENDIF!]
        [!ELSEIF "($F>20000000) and ($F<=40000000)"!]
                [!IF "$tmp_B1RWSC>1"!]
                        [!INFO!]
*****************
Warning: The value [!"$tmp_B1RWSC"!] used for B1_RWSC is not the recommended one.
*****************
                        [!ENDINFO!]
                [!ELSEIF "$tmp_B1RWSC=1"!]
                
                [!ELSE!]
                        [!INFO!]
*****************
Error: The value [!"$tmp_B1RWSC"!] used for B1_RWSC is not permitted due to system clock frequency restrictions, using default value
*****************
                        [!VAR "tmp_B1RWSC"="1"!]
                        [!ENDINFO!]
                [!ENDIF!]
        [!ELSEIF "($F>40000000) and ($F<=64000000)"!]
                [!IF "$tmp_B1RWSC>2"!]
                        [!INFO!]
*****************
Warning: The value [!"$tmp_B1RWSC"!] used for B1_RWSC is not the recommended one.
*****************
                        [!ENDINFO!]
                [!ELSEIF "$tmp_B1RWSC=2"!]
                
                [!ELSE!]
                        [!INFO!]
*****************
Error: The value [!"$tmp_B1RWSC"!] used for B1_RWSC is not permitted due to system clock frequency restrictions, using default value
*****************
                        [!VAR "tmp_B1RWSC"="2"!]
                        [!ENDINFO!]
                [!ENDIF!]
        [!ENDIF!]
[!ELSE!]

        [!IF "($F>0) and ($F<=20000000)"!]
                [!VAR "tmp_B1RWSC"="0"!]
        [!ELSEIF "($F>20000000) and ($F<=40000000)"!]
                [!VAR "tmp_B1RWSC"="1"!]
        [!ELSEIF "($F>40000000) and ($F<=64000000)"!]
                [!VAR "tmp_B1RWSC"="2"!]
        [!ENDIF!]

[!ENDIF!]

[!IF "$tmp_B1APC != $tmp_B1RWSC"!]
        [!INFO!]
*****************
Error: The value [!"$tmp_B1APC"!] used for B1_1APC must be equal to B1_RWSC
*****************
             [!VAR "tmp_B1APC"="$tmp_B1RWSC"!]
      [!ENDINFO!]
 [!ENDIF!]

 [!"bit:shl($tmp_B1APC,27) + bit:shl($tmp_B1WWSC,22) + bit:shl($tmp_B1RWSC,17)"!]

[!ENDMACRO!]