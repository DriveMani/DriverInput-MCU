#include "Rte_SWC_InputDiag.h"


FUNC(void, SWC_InputDiag_CODE) CheckInputFault_func(void)
{

    boolean accel, brake, readStatus;
    uint8 soc, speed;


    ADT_DriverInputValidatedData validatedData;


    (void)Rte_Read_R_DriverInput_AccelSw(&accel);
    (void)Rte_Read_R_DriverInput_BrakeSw(&brake);
    (void)Rte_Read_R_DriverInput_SocLevel(&soc);
    (void)Rte_Read_R_DriverInput_VehicleSpeed(&speed);
    (void)Rte_Read_R_DriverInput_ReadStatus(&readStatus); // 하드웨어 읽기 성공 여부



    // [CASE 1] 읽기 실패 시 (ReadStatus가 FALSE인 경우 등)
    if (readStatus == FALSE)
    {
        validatedData.BrakeSw = FALSE;         // 기본값
        validatedData.AccelSw = FALSE;         // 기본값
        validatedData.SocLevel = 0U;           // 기본값
        validatedData.VehicleSpeed = 0U;       // 기본값
        validatedData.DriverInputFault = 2U;   // 2: INPUT_READ_FAIL
    }
    // [CASE 2] 페달 모순 검사 (Brake & Accel 동시 입력)
    else if ((brake == TRUE) && (accel == TRUE))
    {
        validatedData.BrakeSw = brake;
        validatedData.AccelSw = accel;
        validatedData.SocLevel = soc;
        validatedData.VehicleSpeed = speed;
        validatedData.DriverInputFault = 1U;   // 1: PEDAL_CONFLICT
    }
    // [CASE 3] 정상
    else
    {
        validatedData.BrakeSw = brake;
        validatedData.AccelSw = accel;
        validatedData.SocLevel = soc;
        validatedData.VehicleSpeed = speed;
        validatedData.DriverInputFault = 0U;   // 0: NONE
    }


    (void)Rte_Write_P_DriverInputValidatedData_DriverValidatedData(&validatedData);
}
