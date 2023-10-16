#ifndef COMM_H
#define COMM_H

#include "ComM_Cfg.hpp"
#include "ComM_Dcm.hpp"
#include "ComM_BusSM.hpp"
#include "ComM_EcuMBswM.hpp"
#include "ComM_Nm.hpp"
#include "ComM_Main.hpp"
#include "CfgSwcServiceComM.hpp"

extern CONST(Type_CfgSwcServiceComM_st,COMM_CONST) ComM_Config;

extern FUNC(void, COMM_CODE) ComM_Init(
   P2CONST(Type_CfgSwcServiceComM_st, AUTOMATIC,COMM_APPL_CONST) config
);

extern FUNC(void, COMM_CODE) ComM_DeInit(void);

extern FUNC(void, COMM_CODE) ComM_GetVersionInfo(
   P2VAR(Std_VersionInfoType, AUTOMATIC, COMM_VAR) versioninfo
);

extern FUNC(Std_ReturnType, COMM_CODE) ComM_RequestComMode(
      VAR(Type_SwcServiceComM_tUserHandle, COMM_VAR) User
   ,  VAR(Type_SwcServiceComM_tMode, COMM_VAR) ComMode
);

extern FUNC(Std_ReturnType, COMM_CODE) ComM_GetCurrentComMode(
        VAR(Type_SwcServiceComM_tUserHandle, COMM_VAR) User
   ,  P2VAR(Type_SwcServiceComM_tMode, AUTOMATIC, COMM_VAR) ComMode
);

extern FUNC(Std_ReturnType, COMM_CODE) ComM_LimitChannelToNoComMode(
      VAR(NetworkHandleType, COMM_VAR) Channel
   ,  VAR(boolean, COMM_VAR) Status
);

extern FUNC(Std_ReturnType, COMM_CODE) ComM_LimitECUToNoComMode(
   VAR(boolean, COMM_VAR) Status
);

extern FUNC(Std_ReturnType, COMM_CODE) ComM_PreventWakeUp(
      VAR(NetworkHandleType, COMM_VAR) Channel
   ,  VAR(boolean, COMM_VAR) Status
);

extern FUNC(Std_ReturnType, COMM_CODE) ComM_SetECUGroupClassification(
   VAR(Type_SwcServiceComM_tStatusInhibition,COMM_VAR) Status
);

extern FUNC(Std_ReturnType, COMM_CODE) ComM_ReadInhibitCounter(
   P2VAR(uint16, AUTOMATIC, COMM_APPL_DATA) CounterValue
);

extern FUNC(Std_ReturnType, COMM_CODE) ComM_ResetInhibitCounter(void);

extern FUNC(Std_ReturnType, COMM_CODE) ComM_GetInhibitionStatus(
        VAR(NetworkHandleType, COMM_VAR) Channel
   ,  P2VAR(Type_SwcServiceComM_tStatusInhibition, AUTOMATIC, COMM_VAR) Status
);

#endif

