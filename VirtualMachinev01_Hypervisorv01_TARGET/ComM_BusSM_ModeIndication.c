#include "Std_Types.hpp"

#include "Types_SwcServiceComM.hpp"

#include "ComM_Priv.hpp"
#include "EcuM.hpp"

#define COMM_START_SEC_CODE
#include "ComM_Cfg_MemMap.hpp"
FUNC(void, COMM_CODE) ComM_BusSM_ModeIndication(
        VAR(NetworkHandleType, AUTOMATIC                         ) Channel 
   ,  P2VAR(Type_SwcServiceComM_tMode, AUTOMATIC, COMM_APPL_DATA) ComMode
){
    (void) Channel;
    (void) ComMode;
}
#define COMM_STOP_SEC_CODE
#include "ComM_Cfg_MemMap.hpp"

