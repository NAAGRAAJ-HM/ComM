/******************************************************************************/
/* File   : ComM.cpp                                                          */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "module.h"
#include "ComM_Cfg.h"
#include "infComM_EcuM.h"
#include "infComM_Dcm.h"
#include "infComM_SchM.h"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define COMM_AR_RELEASE_MAJOR_VERSION                                          4
#define COMM_AR_RELEASE_MINOR_VERSION                                          3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(COMM_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION)
   #error "Incompatible COMM_AR_RELEASE_MAJOR_VERSION!"
#endif

#if(COMM_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION)
   #error "Incompatible COMM_AR_RELEASE_MINOR_VERSION!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_ComM:
      public abstract_module
{
   public:
      FUNC(void, COMM_CODE) InitFunction   (void);
      FUNC(void, COMM_CODE) DeInitFunction (void);
      FUNC(void, COMM_CODE) GetVersionInfo (void);
      FUNC(void, COMM_CODE) MainFunction   (void);
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_ComM, COMM_VAR) ComM;
CONSTP2VAR(infEcuMClient, COMM_VAR, COMM_CONST) gptrinfEcuMClient_ComM = &ComM;
CONSTP2VAR(infDcmClient,  COMM_VAR, COMM_CONST) gptrinfDcmClient_ComM  = &ComM;
CONSTP2VAR(infSchMClient, COMM_VAR, COMM_CONST) gptrinfSchMClient_ComM = &ComM;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, COMM_CODE) module_ComM::InitFunction(void){
   ComM.IsInitDone = E_OK;
}

FUNC(void, COMM_CODE) module_ComM::DeInitFunction(void){
   ComM.IsInitDone = E_NOT_OK;
}

FUNC(void, COMM_CODE) module_ComM::GetVersionInfo(void){
#if(STD_ON == ComM_DevErrorDetect)
//TBD: API parameter check
   Det_ReportError(
   );
#endif
}

FUNC(void, COMM_CODE) module_ComM::MainFunction(void){
}

#include "ComM_Unused.h"

FUNC(void, COMM_CODE) class_ComM_Unused::GetState(void){
}

FUNC(void, COMM_CODE) class_ComM_Unused::GetStatus(void){
}

FUNC(void, COMM_CODE) class_ComM_Unused::GetInhibitionStatus(void){
}

FUNC(void, COMM_CODE) class_ComM_Unused::RequestComMode(void){
}

FUNC(void, COMM_CODE) class_ComM_Unused::GetMaxComMode(void){
}

FUNC(void, COMM_CODE) class_ComM_Unused::GetRequestedComMode(void){
}

FUNC(void, COMM_CODE) class_ComM_Unused::GetCurrentComMode(void){
}

FUNC(void, COMM_CODE) class_ComM_Unused::PreventWakeUp(void){
}

FUNC(void, COMM_CODE) class_ComM_Unused::LimitChannelToNoComMode(void){
}

FUNC(void, COMM_CODE) class_ComM_Unused::LimitECUToNoComMode(void){
}

FUNC(void, COMM_CODE) class_ComM_Unused::ReadInhibitCounter(void){
}

FUNC(void, COMM_CODE) class_ComM_Unused::ResetInhibitCounter(void){
}

FUNC(void, COMM_CODE) class_ComM_Unused::SetECUGroupClassification(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

