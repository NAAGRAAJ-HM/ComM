/******************************************************************************/
/* File   : ComM.cpp                                                          */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "module.h"
#include "infComM_EcuM.h"
#include "infComM_Dcm.h"
#include "infComM_SchM.h"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

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

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/


/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
VAR(module_ComM, COMM_VAR) ComM;
CONSTP2VAR(infEcuMClient, COMM_VAR, COMM_CONST) gptrinfEcuMClient_ComM = &ComM;
CONSTP2VAR(infDcmClient,  COMM_VAR, COMM_CONST) gptrinfDcmClient_ComM  = &ComM;
CONSTP2VAR(infSchMClient, COMM_VAR, COMM_CONST) gptrinfSchMClient_ComM = &ComM;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, COMM_CODE) module_ComM::InitFunction(void){
}

FUNC(void, COMM_CODE) module_ComM::DeInitFunction(void){
}

FUNC(void, COMM_CODE) module_ComM::GetVersionInfo(void){
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

/*****************************************************/
/* EOF                                               */
/*****************************************************/

