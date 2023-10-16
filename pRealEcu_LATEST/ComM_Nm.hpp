#ifndef COMM_NM_H
#define COMM_NM_H

#include "ComM_Cfg.hpp"
#include "ComStack_Types.hpp"

extern FUNC(void,COMM_CODE) ComM_Nm_TransmissionFailure
(
         VAR (NetworkHandleType,AUTOMATIC) Channel
);

extern FUNC(void,COMM_CODE) ComM_Nm_NetworkTimeoutException
(
         VAR(NetworkHandleType,AUTOMATIC) Channel
);

extern FUNC(void,COMM_CODE) ComM_Nm_RxIndication
(
       VAR(NetworkHandleType,AUTOMATIC) Channel
);

#endif

