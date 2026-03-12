[!NOCODE!]
/**
  @file    Can_NotifyCheck_Src.m
  @version 1.0.1

  @brief   AUTOSAR Can - macros.
  @details Macros
  
  Project AUTOSAR 4.0 MCAL
  Platform PA
  Peripheral FLEXCAN
  Dependencies 
  
  ARVersion 4.0.3
  ARRevision ASR_REL_4_0_REV_0003
  ARConfVariant
  SWVersion 1.0.1
  BuildVersion MPC560xB_MCAL_1_0_1_RTM_ASR_REL_4_0_REV_0003_20140606

  (c) Copyright 2006-2014 Freescale Semiconductor Inc. & STMicroelectronics
  All Rights Reserved.
*/
/*==================================================================================================
==================================================================================================*/
[!ENDNOCODE!]


[!/* avoid multiple inclusion */!]
[!IF "not(var:defined('CAN_NOTIFY_CHECK_SRC_M'))"!]
[!VAR "CAN_NOTIFY_CHECK_SRC_M"="'true'"!]

[!NOCODE!]
[!MACRO "CanRxFifoWarningNotification_PC"!]
    [!VAR "OuterLoopCounter" = "0"!]
    [!VAR "InnerLoopCounter" = "0"!]
    [!LOOP "CanConfigSet/*[1]/CanController/*"!]
        [!VAR "OuterLoopCounter" = "$OuterLoopCounter + 1"!]
        [!VAR "InnerLoopCounter" = "0"!]
        [!VAR "Matchcounter" = "0"!]
        [!IF "CanControllerRxFifoEnable = 'true'"!]
            [!VAR "Notification" = "CanRxFifoWarningNotification"!]
        [!ENDIF!]
        [!LOOP "../../../*[1]/CanController/*"!]
            [!IF "CanControllerRxFifoEnable = 'true'"!]
                [!IF "(normalize-space(CanRxFifoWarningNotification) != 'NULL_PTR') and 
                      (normalize-space(CanRxFifoWarningNotification) != '"NULL"') and 
                      (normalize-space(CanRxFifoWarningNotification) != 'NULL')"!]
                    [!VAR "InnerLoopCounter" = "$InnerLoopCounter + 1"!]
                    [!IF "$OuterLoopCounter >= $InnerLoopCounter"!]
                        [!IF "($Notification = CanRxFifoWarningNotification)"!]
                            [!VAR "Matchcounter" = "$Matchcounter + 1"!]
                        [!ENDIF!]
                    [!ENDIF!]
                [!ENDIF!]
            [!ENDIF!]
        [!ENDLOOP!]
        [!IF "$Matchcounter >= 1"!][!CODE!]
            [!IF "CanControllerRxFifoEnable = 'true'"!]
                [!"CanConfigSet/*[1]/CanController/*"!]
/* @violates @ref Can_Cfg_c_REF_11 declaring an external identifier in a header file */
extern FUNC(void,CAN_CODE) [!"normalize-space(CanRxFifoWarningNotification)"!]( void);
            [!ENDIF!]
        [!ENDCODE!]
        [!ENDIF!]
    [!ENDLOOP!]
[!ENDMACRO!]

[!MACRO "CanRxFifoOverflowNotification_PC"!]
    [!VAR "OuterLoopCounter" = "0"!]
    [!VAR "InnerLoopCounter" = "0"!]
    [!LOOP "CanConfigSet/*[1]/CanController/*"!]
        [!VAR "OuterLoopCounter" = "$OuterLoopCounter + 1"!]
        [!VAR "InnerLoopCounter" = "0"!]
        [!VAR "Matchcounter" = "0"!]
        [!IF "CanControllerRxFifoEnable = 'true'"!]
            [!VAR "Notification" = "CanRxFifoOverflowNotification"!]
        [!ENDIF!]
        [!LOOP "../../../*[1]/CanController/*"!]
            [!IF "CanControllerRxFifoEnable = 'true'"!]
                [!IF "(normalize-space(CanRxFifoOverflowNotification) != 'NULL_PTR') and 
                      (normalize-space(CanRxFifoOverflowNotification) != '"NULL"') and 
                      (normalize-space(CanRxFifoOverflowNotification) != 'NULL')"!]
                    [!VAR "InnerLoopCounter" = "$InnerLoopCounter + 1"!]
                    [!IF "$OuterLoopCounter >= $InnerLoopCounter"!]
                        [!IF "($Notification = CanRxFifoOverflowNotification)"!]
                            [!VAR "Matchcounter" = "$Matchcounter + 1"!]
                        [!ENDIF!]
                    [!ENDIF!]
                [!ENDIF!]
            [!ENDIF!]
        [!ENDLOOP!]
        [!IF "$Matchcounter >= 1"!][!CODE!]
            [!IF "CanControllerRxFifoEnable = 'true'"!]
                [!"CanConfigSet/*[1]/CanController/*"!]
/* @violates @ref Can_Cfg_c_REF_11 declaring an external identifier in a header file */
extern FUNC(void,CAN_CODE) [!"normalize-space(CanRxFifoOverflowNotification)"!]( void);
            [!ENDIF!]
        [!ENDCODE!]
        [!ENDIF!]
    [!ENDLOOP!]
[!ENDMACRO!]

[!MACRO "CanErrorControllerNotification_PC"!]
    [!VAR "OuterLoopCounter" = "0"!]
    [!VAR "InnerLoopCounter" = "0"!]
    [!LOOP "CanConfigSet/*[1]/CanController/*"!]
        [!VAR "OuterLoopCounter" = "$OuterLoopCounter + 1"!]
        [!VAR "InnerLoopCounter" = "0"!]
        [!VAR "Matchcounter" = "0"!]
            [!VAR "Notification" = "CanErrorControllerNotification"!]
        [!LOOP "../../../*[1]/CanController/*"!]
            [!IF "(normalize-space(CanErrorControllerNotification) != 'NULL_PTR') and 
                  (normalize-space(CanErrorControllerNotification) != '"NULL"') and 
                  (normalize-space(CanErrorControllerNotification) != 'NULL')"!]
                [!VAR "InnerLoopCounter" = "$InnerLoopCounter + 1"!]
                [!IF "$OuterLoopCounter >= $InnerLoopCounter"!]
                    [!IF "($Notification = CanErrorControllerNotification)"!]
                        [!VAR "Matchcounter" = "$Matchcounter + 1"!]
                    [!ENDIF!]
                [!ENDIF!]
            [!ENDIF!]
        [!ENDLOOP!]
        [!IF "$Matchcounter >= 1"!][!CODE!]
            [!"CanConfigSet/*[1]/CanController/*"!]
#if (CAN_API_ERROR_STATUS == STD_ON)
/* @violates @ref Can_Cfg_c_REF_11 declaring an external identifier in a header file */
extern FUNC(void,CAN_CODE) [!"normalize-space(CanErrorControllerNotification)"!]( uint32 can_esr_status);
#else
/* @violates @ref Can_Cfg_c_REF_11 declaring an external identifier in a header file */
extern FUNC(void,CAN_CODE) [!"normalize-space(CanErrorControllerNotification)"!]( void);
#endif
        [!ENDCODE!]
        [!ENDIF!]
    [!ENDLOOP!]
[!ENDMACRO!]

[!ENDNOCODE!]
[!ENDIF!][!// avoid multiple inclusion ENDIF