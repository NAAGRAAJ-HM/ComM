#include "Std_Types.hpp"

#include "Types_SwcServiceComM.hpp"

#include "ComM_Priv.hpp"

#define COMM_START_SEC_CODE
#include "ComM_Cfg_MemMap.hpp"
FUNC (void, COMM_CODE) ComM_CommunicationAllowed(
   VAR(NetworkHandleType, AUTOMATIC) Channel
   ,     VAR(boolean, AUTOMATIC) Allowed
){
   P2VAR(ComM_ChannelVarType, AUTOMATIC, COMM_APPL_DATA) channelRamPtr_ps;
   channelRamPtr_ps = &ComM_ChannelStruct[Channel];
   channelRamPtr_ps->CommunicationAllowed_b = Allowed;
}
#define COMM_STOP_SEC_CODE
#include "ComM_Cfg_MemMap.hpp"

