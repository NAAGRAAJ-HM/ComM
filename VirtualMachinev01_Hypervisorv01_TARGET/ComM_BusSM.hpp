#ifndef COMM_BUSSM_H
#define COMM_BUSSM_H

#include "ComStack_Types.hpp"
#include "Rte_ComM_Type.hpp"
#include "ComM_Cfg.hpp"

extern FUNC(void, COMM_CODE) ComM_BusSM_ModeIndication(
        VAR(NetworkHandleType, AUTOMATIC                         ) Channel
   ,  P2VAR(Type_SwcServiceComM_tMode, AUTOMATIC, COMM_APPL_DATA) ComMode
);

#endif

