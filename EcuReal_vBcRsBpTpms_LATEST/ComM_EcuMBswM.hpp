#ifndef COMM_ECUMBSWM_H
#define COMM_ECUMBSWM_H

#include "ComStack_Types.hpp"
#include "ComM_Cfg.hpp"

extern FUNC (void,COMM_CODE) ComM_EcuM_WakeUpIndication
(
        VAR(NetworkHandleType, AUTOMATIC) Channel
);

extern FUNC(void,COMM_CODE) ComM_CommunicationAllowed
(
        VAR(NetworkHandleType, AUTOMATIC) Channel
   ,     VAR(boolean, AUTOMATIC) Allowed
);

#endif

