#include "Rte_SWC_CanCom.h"

#define SWC_CanCom_START_SEC_CODE
#include "SWC_CanCom_MemMap.h"

/* Tx Runnable : InputDiag -> DriverStatus */
FUNC(void, SWC_CanCom_CODE) CanCom_Tx_func(void)
{
    Std_ReturnType ret;

    boolean brakeSw = FALSE;
    boolean accelSw = FALSE;
    uint8 socLevel = 0U;
    uint8 vehicleSpeed = 0U;
    uint8 driverInputFault = 0U;
    uint8 aliveCounter = 0U;

    /* InputDiag에서 검증된 데이터 읽기 */
    ret = Rte_Read_R_DriverInputValidatedData_BrakeSw(&brakeSw);
    (void)ret;
    ret = Rte_Read_R_DriverInputValidatedData_AccelSw(&accelSw);
    (void)ret;
    ret = Rte_Read_R_DriverInputValidatedData_SocLevel(&socLevel);
    (void)ret;
    ret = Rte_Read_R_DriverInputValidatedData_VehicleSpeed(&vehicleSpeed);
    (void)ret;
    ret = Rte_Read_R_DriverInputValidatedData_DriverInputFault(&driverInputFault);
    (void)ret;

    /* AliveCounter는 static으로 관리 */
    aliveCounter++;
    aliveCounter &= 0x0FU;

    /* DriverStatus 메시지로 송신 */
    ret = Rte_Write_Project_DriverStatus_BrakeSw((uint8)brakeSw);
    (void)ret;
    ret = Rte_Write_Project_DriverStatus_AccelSw((uint8)accelSw);
    (void)ret;
    ret = Rte_Write_Project_DriverStatus_SocLevel(socLevel);
    (void)ret;
    ret = Rte_Write_Project_DriverStatus_DriverInputFault(driverInputFault);
    (void)ret;
    ret = Rte_Write_Project_DriverStatus_AliveCounter(aliveCounter);
    (void)ret;
    ret = Rte_Write_Project_DriverStatus_VehicleSpeed(vehicleSpeed);
    (void)ret;
}

/* Rx Runnable : VCURegenStatus -> 내부 SWC */
FUNC(void, SWC_CanCom_CODE) CanCom_Rx_func(void)
{
    Std_ReturnType ret;

    boolean regenEnable = FALSE;
    uint8 regenLevel = 0U;
    uint8 limitReason = 0U;

    /* CAN 수신 데이터 읽기 */
    ret = Rte_Read_R_VcuToDrv_RegenEnable(&regenEnable);
    (void)ret;
    ret = Rte_Read_R_VcuToDrv_RegenLevel(&regenLevel);
    (void)ret;
    ret = Rte_Read_R_VcuToDrv_LimitReason(&limitReason);
    (void)ret;

    /* 내부 다른 SWC로 전달 */
    ret = Rte_Write_P_VcuToDrv_RegenEnable(regenEnable);
    (void)ret;
    ret = Rte_Write_P_VcuToDrv_RegenLevel(regenLevel);
    (void)ret;
    ret = Rte_Write_P_VcuToDrv_LimitReason(limitReason);
    (void)ret;
}

#define SWC_CanCom_STOP_SEC_CODE
#include "SWC_CanCom_MemMap.h"
