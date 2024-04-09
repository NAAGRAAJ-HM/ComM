

#ifndef COMM_BUSSM_H
#define COMM_BUSSM_H

#include "Types_SwcServiceComM.hpp"

#define COMM_START_SEC_CODE
#include "MemMap.hpp"
FUNC(void, COMM_CODE) ComM_BusSM_ModeIndication(NetworkHandleType Channel, P2VAR(ComM_ModeType, AUTOMATIC, COMM_APPL_VAR) ComMode);
#define COMM_STOP_SEC_CODE
#include "MemMap.hpp"

#endif

