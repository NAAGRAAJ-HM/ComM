#include "Std_Types.hpp"

#include "Types_SwcServiceComM.hpp"

#include "ComM_Priv.hpp"

#define COMM_START_SEC_CODE
#include "ComM_Cfg_MemMap.hpp"
FUNC(Std_ReturnType, COMM_CODE) ComM_GetCurrentComMode(
        VAR(Type_SwcServiceComM_tUserHandle,            COMM_VAR) User
   ,  P2VAR(Type_SwcServiceComM_tMode,       AUTOMATIC, COMM_VAR) ComMode
){
   *ComMode = ComM_LgetLeastBusSmMode(User);
   return E_OK;
}
#define COMM_STOP_SEC_CODE
#include "ComM_Cfg_MemMap.hpp"
