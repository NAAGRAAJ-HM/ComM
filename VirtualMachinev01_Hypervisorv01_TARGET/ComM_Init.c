#include "Std_Types.hpp"

#include "Types_SwcServiceComM.hpp"

#include "ComM_Priv.hpp"

#define COMM_START_SEC_CODE
#include "ComM_Cfg_MemMap.hpp"
FUNC(void, COMM_CODE) ComM_Init(
   P2CONST(Type_CfgSwcServiceComM_st, AUTOMATIC,COMM_APPL_CONST) config){
   VAR(uint8, AUTOMATIC) ChannelIndex;
   VAR(Type_SwcServiceComM_tUserHandle, AUTOMATIC) UserIndex;
   P2VAR(ComM_ChannelVarType, AUTOMATIC, COMM_APPL_DATA) channelRamPtr_ps;
   P2VAR(ComM_UserVarType, AUTOMATIC, COMM_APPL_DATA) userRamPtr_ps;
   P2VAR(ComM_GlobalVarType, AUTOMATIC, COMM_APPL_DATA) globalRamPtr_ps;
   P2CONST(ComM_UsersType, AUTOMATIC,COMM_APPL_CONST) userConfigPtr_pcs;
    (void)config;
    globalRamPtr_ps = &ComM_GlobalStruct;
        for(ChannelIndex = C_ZERO ; ChannelIndex < COMM_NO_OF_CHANNELS ; ChannelIndex++)
        {
            channelRamPtr_ps = &ComM_ChannelStruct[ChannelIndex];
            channelRamPtr_ps->InhibitionReqStatus_u8 = C_ZERO;
        }
   for(UserIndex = C_ZERO ; UserIndex < COMM_NO_OF_USERS ; UserIndex++)
   {
        userRamPtr_ps = &ComM_UserStruct[UserIndex];
        userConfigPtr_pcs = &(COMM_GET_USER_LIST[UserIndex]);
        userRamPtr_ps->RequestedUserMode_t = COMM_NO_COMMUNICATION;
        userRamPtr_ps->numChannelsInFullCom_u8 = C_ZERO;
        userRamPtr_ps->numChannelsInSilentCom_u8 = C_ZERO;
        userRamPtr_ps->numChannelsInNoCom_u8 = userConfigPtr_pcs->NumAllChannels_u8;
        userRamPtr_ps->LimitToNoComCtr_u16 = C_ZERO;
        userRamPtr_ps->WakeUpInhibitionCtr_u16 = C_ZERO;
        userRamPtr_ps->IndicatedUserMode_t = COMM_NO_COMMUNICATION;
   }
   for(ChannelIndex = C_ZERO ; ChannelIndex < COMM_NO_OF_CHANNELS ; ChannelIndex++)
   {
        channelRamPtr_ps = &ComM_ChannelStruct[ChannelIndex];
        channelRamPtr_ps->CommunicationAllowed_b = FALSE;
        channelRamPtr_ps->ChannelState_e = COMM_NO_COM_NO_PENDING_REQUEST;
        channelRamPtr_ps->ChannelMode_u8 = COMM_NO_COMMUNICATION;
        channelRamPtr_ps->BusSmMode_u8 = COMM_NO_COMMUNICATION;
        channelRamPtr_ps->PassiveRequestState_u8 = C_ZERO;
        channelRamPtr_ps->UserRequestCtr_u8 = C_ZERO;
        channelRamPtr_ps->PncRequestCtr_u8 = C_ZERO;
        channelRamPtr_ps->NmBusSleepIndicationStatus_b = FALSE;
        channelRamPtr_ps->NmPrepareBusSleepIndicationStatus_b = FALSE;
        channelRamPtr_ps->DiagnosticRequestState_b = COMM_INACTIVE_DIAGNOSTICS;
        channelRamPtr_ps->NmNetworkModeStatus_b = FALSE;
        channelRamPtr_ps->NmNetworkRequestStatus_b = FALSE;
        channelRamPtr_ps->MinFullComTimeoutCtr_u16 = C_ZERO;
   }
    globalRamPtr_ps->ComM_InitStatus = COMM_INIT;
}
#define COMM_STOP_SEC_CODE
#include "ComM_Cfg_MemMap.hpp"
