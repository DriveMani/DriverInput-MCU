#include "Rte_SWC_LedCtrl.h"

#define LED_ON   ((uint8)0U)   /* active low: 0 -> ON */
#define LED_OFF  ((uint8)1U)   /* active low: 1 -> OFF */

#define SWC_LedCtrl_START_SEC_CODE
#include "SWC_LedCtrl_MemMap.h"

FUNC(void, SWC_LedCtrl_CODE) LedCtrl_func(void)
{
    Std_ReturnType ret;

    boolean regenEnable = FALSE;
    uint8 regenLevel = 0U;
    uint8 driverInputFault = 0U;

    uint8 led1 = LED_OFF;
    uint8 led2 = LED_OFF;
    uint8 led3 = LED_OFF;
    uint8 led4 = LED_OFF;

    /* 입력 데이터 읽기 */
    ret = Rte_Read_R_VcuToDrv_RegenEnable(&regenEnable);
    (void)ret;

    ret = Rte_Read_R_VcuToDrv_RegenLevel(&regenLevel);
    (void)ret;

    ret = Rte_Read_R_DriverInputValidatedData_DriverInputFault(&driverInputFault);
    (void)ret;

    /* 기본 OFF */
    led1 = LED_OFF;
    led2 = LED_OFF;
    led3 = LED_OFF;
    led4 = LED_OFF;

    /* LED1, LED2 : RegenLevel
       00 = NONE
       01 = LOW
       10 = MID
       11 = HIGH
    */
    switch (regenLevel & 0x03U)
    {
        case 0x00U:
            led1 = LED_OFF;
            led2 = LED_OFF;
            break;

        case 0x01U:
            led1 = LED_ON;
            led2 = LED_OFF;
            break;

        case 0x02U:
            led1 = LED_OFF;
            led2 = LED_ON;
            break;

        case 0x03U:
            led1 = LED_ON;
            led2 = LED_ON;
            break;

        default:
            led1 = LED_OFF;
            led2 = LED_OFF;
            break;
    }

    /* LED3 : RegenEnable
       1 = ON
       0 = OFF
    */
    led3 = (regenEnable != FALSE) ? LED_ON : LED_OFF;

    /* LED4 : DriverInputFault
       1 = FAULT
       0 = NONE
    */
    led4 = (driverInputFault != 0U) ? LED_ON : LED_OFF;

    /* 각 LED 출력 */
    ret = Rte_Call_R_Led1Ctrl_WriteDirect(led1);
    (void)ret;

    ret = Rte_Call_R_Led2Ctrl_WriteDirect(led2);
    (void)ret;

    ret = Rte_Call_R_Led3Ctrl_WriteDirect(led3);
    (void)ret;

    ret = Rte_Call_R_Led4Ctrl_WriteDirect(led4);
    (void)ret;
}

#define SWC_LedCtrl_STOP_SEC_CODE
#include "SWC_LedCtrl_MemMap.h"
