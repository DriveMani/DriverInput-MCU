#include "Rte_SWC_InputDiag.h"

FUNC(void, SWC_InputDiag_CODE) CheckInputFault_func(void)
{

    boolean accel, brake, readStatus;
    uint8 soc, speed;

    boolean BrakeSw = FALSE;
    boolean AccelSw = FALSE;
    uint8 SocLevel = 0U;
    uint8 VehicleSpeed = 0U;
    boolean DriverInputFault = FALSE;


    (void)Rte_Read_R_DriverInput_AccelSw(&accel);
    (void)Rte_Read_R_DriverInput_BrakeSw(&brake);
    (void)Rte_Read_R_DriverInput_SocLevel(&soc);
    (void)Rte_Read_R_DriverInput_VehicleSpeed(&speed);
    (void)Rte_Read_R_DriverInput_ReadStatus(&readStatus);

    if (readStatus == FALSE)
    {
        DriverInputFault = TRUE;   /* INPUT_READ_FAIL */
    }
    else if ((brake == TRUE) && (accel == TRUE))
    {
        BrakeSw = brake;
        AccelSw = accel;
        SocLevel = soc;
        VehicleSpeed = speed;
        DriverInputFault = TRUE;   /* PEDAL_CONFLICT */
    }
    else
    {
        BrakeSw = brake;
        AccelSw = accel;
        SocLevel = soc;
        VehicleSpeed = speed;
        DriverInputFault = FALSE;
    }

	(void)Rte_Write_P_DriverInputValidatedData_BrakeSw(BrakeSw);
	(void)Rte_Write_P_DriverInputValidatedData_AccelSw(AccelSw);
	(void)Rte_Write_P_DriverInputValidatedData_SocLevel(SocLevel);
	(void)Rte_Write_P_DriverInputValidatedData_VehicleSpeed(VehicleSpeed);
	(void)Rte_Write_P_DriverInputValidatedData_DriverInputFault(DriverInputFault);

}
