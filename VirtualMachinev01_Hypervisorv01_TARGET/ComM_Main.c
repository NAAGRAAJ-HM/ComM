#include "Std_Types.hpp"

#include "Types_SwcServiceComM.hpp"

#include "ComM_Priv.hpp"

#define COMM_START_SEC_CODE
#include "ComM_Cfg_MemMap.hpp"
FUNC(void, COMM_CODE) ComM_MainFunction_ComMChannel_Can_Network_Channel(void){
   ComM_LChannelMainFunction(0) ;
}
#define COMM_STOP_SEC_CODE
#include "ComM_Cfg_MemMap.hpp"

