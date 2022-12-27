/******************************************************************************/
/* File   : ServiceComM.cpp                                                   */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "ServiceComM.hpp"
#include "infServiceComM_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define SERVICECOMM_AR_RELEASE_VERSION_MAJOR                                   4
#define SERVICECOMM_AR_RELEASE_VERSION_MINOR                                   3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(SERVICECOMM_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible SERVICECOMM_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(SERVICECOMM_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible SERVICECOMM_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_ServiceComM, SERVICECOMM_VAR) ServiceComM;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, SERVICECOMM_CODE) module_ServiceComM::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, SERVICECOMM_CONST,       SERVICECOMM_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICECOMM_CONFIG_DATA, SERVICECOMM_APPL_CONST) lptrCfgModule
){
#if(STD_ON == ServiceComM_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstServiceComM_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == ServiceComM_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == ServiceComM_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == ServiceComM_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SERVICECOMM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SERVICECOMM_CODE) module_ServiceComM::DeInitFunction(
   void
){
#if(STD_ON == ServiceComM_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ServiceComM_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == ServiceComM_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SERVICECOMM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SERVICECOMM_CODE) module_ServiceComM::MainFunction(
   void
){
#if(STD_ON == ServiceComM_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ServiceComM_InitCheck)
   }
   else{
#if(STD_ON == ServiceComM_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SERVICECOMM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SERVICECOMM_CODE) module_ServiceComM::GetState(
   void
){
}

FUNC(void, SERVICECOMM_CODE) module_ServiceComM::GetStatus(
   void
){
}

FUNC(void, SERVICECOMM_CODE) module_ServiceComM::GetInhibitionStatus(
   void
){
}

FUNC(void, SERVICECOMM_CODE) module_ServiceComM::RequestServiceComMode(
   void
){
}

FUNC(void, SERVICECOMM_CODE) module_ServiceComM::GetMaxServiceComMode(
   void
){
}

FUNC(void, SERVICECOMM_CODE) module_ServiceComM::GetRequestedServiceComMode(
   void
){
}

FUNC(void, SERVICECOMM_CODE) module_ServiceComM::GetCurrentServiceComMode(
   void
){
}

FUNC(void, SERVICECOMM_CODE) module_ServiceComM::PreventWakeUp(
   void
){
}

FUNC(void, SERVICECOMM_CODE) module_ServiceComM::LimitChannelToNoServiceComMode(
   void
){
}

FUNC(void, SERVICECOMM_CODE) module_ServiceComM::LimitECUToNoServiceComMode(
   void
){
}

FUNC(void, SERVICECOMM_CODE) module_ServiceComM::ReadInhibitCounter(
   void
){
}

FUNC(void, SERVICECOMM_CODE) module_ServiceComM::ResetInhibitCounter(
   void
){
}

FUNC(void, SERVICECOMM_CODE) module_ServiceComM::SetECUGroupClassification(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

