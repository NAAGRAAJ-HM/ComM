#include "Std_Types.hpp"

#include "Types_SwcServiceComM.hpp"

#include "ComM_Priv.hpp"

#define COMM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "ComM_Cfg_MemMap.hpp"
VAR(ComM_GlobalVarType,COMM_VAR) ComM_GlobalStruct;
VAR(ComM_UserVarType,COMM_VAR)  ComM_UserStruct[COMM_NO_OF_USERS];
VAR(ComM_ChannelVarType,COMM_VAR)  ComM_ChannelStruct[COMM_NO_OF_CHANNELS];
VAR(ComM_NvMStorageType,COMM_VAR) ComM_NvMblock;
#define COMM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "ComM_Cfg_MemMap.hpp"

LOCAL_INLINE FUNC(boolean, COMM_CODE) ComM_LGetbit(uint8 PncId, CONST(uint8, AUTOMATIC) Signal_Array[8]);

#define COMM_START_SEC_CODE
#include "ComM_Cfg_MemMap.hpp"
FUNC(Type_SwcServiceComM_tMode, COMM_CODE) ComM_LgetLeastBusSmMode(Type_SwcServiceComM_tUserHandle UserIndex)
{
   VAR(Type_SwcServiceComM_tMode, AUTOMATIC) leastModeAmongChannels_e;
   P2VAR(ComM_UserVarType, AUTOMATIC, COMM_APPL_DATA) userRamPtr_ps;
   userRamPtr_ps = &ComM_UserStruct[UserIndex];
   if(userRamPtr_ps->numChannelsInNoCom_u8 != C_ZERO){
        leastModeAmongChannels_e = COMM_NO_COMMUNICATION;
   }
   else if(userRamPtr_ps->numChannelsInSilentCom_u8 != C_ZERO){
            leastModeAmongChannels_e = COMM_SILENT_COMMUNICATION;
   }
   else{
        leastModeAmongChannels_e = COMM_FULL_COMMUNICATION;
   }
    return leastModeAmongChannels_e;
}

FUNC(void, COMM_CODE) ComM_LUpdateChannelModes(NetworkHandleType Channel
   ,     Type_SwcServiceComM_tMode PreviousMode, Type_SwcServiceComM_tMode CurrentMode)
{
   uint8 numUsers_u8;
   uint8 userId_u8;
   P2CONST(ComM_ChannelType, AUTOMATIC,COMM_APPL_CONST) channelConfigPtr_pcs;
   P2VAR(ComM_UserVarType, AUTOMATIC, COMM_APPL_DATA) userRamPtr_ps;
   P2CONST(uint8,COMM_CONST,COMM_APPL_CONST) allUsers_p;
   channelConfigPtr_pcs = &(COMM_GET_CHANNEL_LIST[Channel]);
    allUsers_p = channelConfigPtr_pcs->AllUsers_p;
   if(PreviousMode != CurrentMode){
      for(numUsers_u8 = C_ZERO;
            numUsers_u8 < channelConfigPtr_pcs->numAllUsers_u8; ++numUsers_u8){
            SchM_Enter_ComM_Channel();
            userId_u8 = allUsers_p[numUsers_u8];
            userRamPtr_ps = &ComM_UserStruct[userId_u8];
         switch(PreviousMode){
            case COMM_NO_COMMUNICATION:
               --(userRamPtr_ps->numChannelsInNoCom_u8);
               break;
            case COMM_FULL_COMMUNICATION:
               --(userRamPtr_ps->numChannelsInFullCom_u8);
               break;
            case COMM_SILENT_COMMUNICATION:
               --(userRamPtr_ps->numChannelsInSilentCom_u8);
               break;
            default:
               break;
            }

         switch(CurrentMode){
            case COMM_NO_COMMUNICATION:
               ++(userRamPtr_ps->numChannelsInNoCom_u8);
               break;
            case COMM_FULL_COMMUNICATION:
               ++(userRamPtr_ps->numChannelsInFullCom_u8);
               break;
            case COMM_SILENT_COMMUNICATION:
               ++(userRamPtr_ps->numChannelsInSilentCom_u8);
               break;
            default:
               break;
            }
            SchM_Exit_ComM_Channel();
        }
   }
}

FUNC(void, COMM_CODE) ComM_Nm_TransmissionFailure(
  VAR(NetworkHandleType, AUTOMATIC) Channel
){
    (void)(Channel);
}

FUNC(void, COMM_CODE) ComM_Nm_NetworkTimeoutException(
  VAR(NetworkHandleType, AUTOMATIC) Channel
){
    (void)(Channel);
}

LOCAL_INLINE FUNC(boolean, COMM_CODE) ComM_LGetbit(
      uint8 PncId
   ,  CONST(uint8, AUTOMATIC) Signal_Array[8]
){
   uint8 mask;
   uint8 byteIndex;
   uint8 bitPosition;
   uint8 Sig_Value;
   boolean Ret_Val;
   mask = C_ZERO;
   byteIndex = C_ZERO;
   bitPosition = C_ZERO;
   Sig_Value = C_ZERO;
   Ret_Val = FALSE;
   byteIndex = (PncId - 8) >> 3;
   bitPosition = (PncId - 8) % 8;
   mask = (uint8)1 << (bitPosition) ;
   Sig_Value = (Signal_Array[byteIndex] & (mask));
   Ret_Val = (Sig_Value == 0) ? (FALSE) : (TRUE) ;
   return Ret_Val;
}

#define COMM_STOP_SEC_CODE
#include "ComM_Cfg_MemMap.hpp"

