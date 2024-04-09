#include "Std_Types.hpp"

#include "Types_SwcServiceComM.hpp"

#include "ComM_Priv.hpp"

#define COMM_START_SEC_CODE
#include "ComM_Cfg_MemMap.hpp"
FUNC(void, COMM_CODE) ComM_DeInit(void){
   VAR(uint8 , AUTOMATIC)  ChannelIndexCtr;
   P2VAR(ComM_GlobalVarType, AUTOMATIC, COMM_APPL_DATA) globalRamPtr_ps;
    globalRamPtr_ps = &ComM_GlobalStruct;
    globalRamPtr_ps->ComM_InitStatus = COMM_UNINIT;
   for(ChannelIndexCtr = C_ZERO ; ChannelIndexCtr < COMM_NO_OF_CHANNELS ; ChannelIndexCtr++)
   {
        if(ComM_ChannelStruct[ChannelIndexCtr].ChannelState_e != COMM_NO_COM_NO_PENDING_REQUEST)
        {
            globalRamPtr_ps->ComM_InitStatus = COMM_INIT;
            break;
        }
   }
        return;
}

#define COMM_STOP_SEC_CODE
#include "ComM_Cfg_MemMap.hpp"
