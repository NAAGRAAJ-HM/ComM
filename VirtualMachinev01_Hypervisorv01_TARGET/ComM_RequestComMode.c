#include "Std_Types.hpp"

#include "Types_SwcServiceComM.hpp"

#include "ComM_Priv.hpp"

LOCAL_INLINE FUNC(void, COMM_CODE) ComM_LUpdateUserRequest(
      P2VAR(uint8,                     AUTOMATIC, COMM_APPL_DATA) RequestCounter_u8
   ,    VAR(Type_SwcServiceComM_tMode, AUTOMATIC                ) CurrentComMode_t
);

#define COMM_START_SEC_CODE
#include "ComM_Cfg_MemMap.hpp"
FUNC(Std_ReturnType, COMM_CODE) ComM_RequestComMode(
      VAR(Type_SwcServiceComM_tUserHandle, COMM_VAR) User
   ,  VAR(Type_SwcServiceComM_tMode, COMM_VAR) ComMode
){
   P2VAR(ComM_ChannelVarType, AUTOMATIC, COMM_APPL_DATA) channelRamPtr_ps;
   P2VAR(ComM_UserVarType, AUTOMATIC, COMM_APPL_DATA) userRamPtr_ps;
   P2CONST(ComM_UsersType, AUTOMATIC,COMM_APPL_CONST) userConfigPtr_pcs;
   VAR(Type_SwcServiceComM_tMode, AUTOMATIC) previousUserRequest_t;
   VAR(Type_SwcServiceComM_tMode, AUTOMATIC) currentUserRequest_t;
   userConfigPtr_pcs = &(COMM_GET_USER_LIST[User]);
   userRamPtr_ps = &ComM_UserStruct[User];
    previousUserRequest_t = userRamPtr_ps->RequestedUserMode_t;
   userRamPtr_ps->RequestedUserMode_t = ComMode;
   currentUserRequest_t = ComMode ;
   if(previousUserRequest_t != currentUserRequest_t){
        uint8 loopCounter_u8;
        uint8 channelId_u8;
        uint8 numChannels_u8;
        numChannels_u8 = userConfigPtr_pcs->NumDirectChannels_u8;
        SchM_Enter_ComM_UserNoNest();
      for(loopCounter_u8 = C_ZERO; loopCounter_u8 < numChannels_u8;
            loopCounter_u8++){
            channelId_u8 = (userConfigPtr_pcs->DirectChannels_p[loopCounter_u8]);
            channelRamPtr_ps = &ComM_ChannelStruct[channelId_u8];
            ComM_LUpdateUserRequest(&(channelRamPtr_ps->UserRequestCtr_u8), currentUserRequest_t);
        }
        SchM_Exit_ComM_UserNoNest();
   }
        return E_OK;
}
#define COMM_STOP_SEC_CODE
#include "ComM_Cfg_MemMap.hpp"

LOCAL_INLINE FUNC(void, COMM_CODE) ComM_LUpdateUserRequest(
   P2VAR(uint8, AUTOMATIC,COMM_APPL_DATA) RequestCounter_u8
   ,     VAR(Type_SwcServiceComM_tMode, AUTOMATIC) CurrentComMode_t
){
   if(CurrentComMode_t == COMM_FULL_COMMUNICATION){
        ++ (*RequestCounter_u8);
   }
   else if(CurrentComMode_t == COMM_NO_COMMUNICATION){
      if((*RequestCounter_u8) != C_ZERO){
            -- (*RequestCounter_u8);
        }
        else{
        }
   }
   else{
   }
}

