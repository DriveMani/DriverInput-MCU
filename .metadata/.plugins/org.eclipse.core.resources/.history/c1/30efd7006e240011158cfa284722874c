#include "Rte_SWC_InputDiag.h"


FUNC(void, SWC_InputDiag_CODE) CheckInputFault_func(void)
{

    boolean accel, brake, readStatus, validatedData;
    uint8 soc, speed;





    (void)Rte_Read_R_DriverInput_AccelSw(&accel);
    (void)Rte_Read_R_DriverInput_BrakeSw(&brake);
    (void)Rte_Read_R_DriverInput_SocLevel(&soc);
    (void)Rte_Read_R_DriverInput_VehicleSpeed(&speed);
    (void)Rte_Read_R_DriverInput_ReadStatus(&readStatus); // 하드웨어 읽기 성공 여부



    // [CASE 1] 읽기 실패 시 (ReadStatus가 FALSE인 경우 등)
    if (readStatus == FALSE)
    {
    	brake = FALSE;         // 기본값
        accel = FALSE;         // 기본값
        soc = 0U;           // 기본값
        speed = 0U;       // 기본값
        readStatus = 2U;   // 2: INPUT_READ_FAIL
        validatedData = FALSE;
    }
    // [CASE 2] 페달 모순 검사 (Brake & Accel 동시 입력)
    else if ((brake == TRUE) && (accel == TRUE))
    {
    	brake = brake;
    	accel = accel;
    	soc = soc;
    	speed = speed;
    	readStatus = 1U;   // 1: PEDAL_CONFLICT
    	validatedData = FALSE;
    }
    // [CASE 3] 정상
    else
    {
    	brake = brake;
    	accel = accel;
    	soc = soc;
    	speed = speed;
    	readStatus = 0U;   // 0: NONE
    	validatedData = TRUE;
    }


    (void)Rte_Write_P_DriverInputValidatedData_DriverInputFault(&validatedData);
}
