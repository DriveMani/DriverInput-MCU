#include "Rte_SWC_CanCom.h"

#define SWC_CanCom_START_SEC_CODE
#include "SWC_CanCom_MemMap.h"

FUNC(void, SWC_CanCom_CODE) CanCom_Tx_func(void)
{
    static uint8 aliveCounter = 0U;

    aliveCounter++;
    aliveCounter &= 0x0FU;

    (void)Rte_Write_Project_DriverStatus_BrakeSw(0U);
    (void)Rte_Write_Project_DriverStatus_AccelSw(0U);
    (void)Rte_Write_Project_DriverStatus_SocLevel(0U);
    (void)Rte_Write_Project_DriverStatus_DriverInputFault(0U);
    (void)Rte_Write_Project_DriverStatus_AliveCounter(aliveCounter);
    (void)Rte_Write_Project_DriverStatus_VehicleSpeed(0U);
}

FUNC(void, SWC_CanCom_CODE) CanCom_Rx_func(void)
{
    /* Build check only */
}

#define SWC_CanCom_STOP_SEC_CODE
#include "SWC_CanCom_MemMap.h"
