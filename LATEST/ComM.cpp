/******************************************************************************/
/* File   : ComM.cpp                                                          */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "ComM.hpp"
#include "infComM_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define COMM_AR_RELEASE_VERSION_MAJOR                                          4
#define COMM_AR_RELEASE_VERSION_MINOR                                          3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(COMM_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible COMM_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(COMM_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible COMM_AR_RELEASE_VERSION_MINOR!"
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
VAR(module_ComM, COMM_VAR) ComM;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, COMM_CODE) module_ComM::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, COMM_CONST,       COMM_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   COMM_CONFIG_DATA, COMM_APPL_CONST) lptrCfgModule
){
#if(STD_ON == ComM_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstComM_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == ComM_DevErrorDetect)
         Det_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == ComM_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == ComM_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  COMM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, COMM_CODE) module_ComM::DeInitFunction(
   void
){
#if(STD_ON == ComM_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ComM_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == ComM_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  COMM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, COMM_CODE) module_ComM::MainFunction(
   void
){
#if(STD_ON == ComM_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ComM_InitCheck)
   }
   else{
#if(STD_ON == ComM_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  COMM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, COMM_CODE) module_ComM::GetState(
   void
){
}

FUNC(void, COMM_CODE) module_ComM::GetStatus(
   void
){
}

FUNC(void, COMM_CODE) module_ComM::GetInhibitionStatus(
   void
){
}

FUNC(void, COMM_CODE) module_ComM::RequestComMode(
   void
){
}

FUNC(void, COMM_CODE) module_ComM::GetMaxComMode(
   void
){
}

FUNC(void, COMM_CODE) module_ComM::GetRequestedComMode(
   void
){
}

FUNC(void, COMM_CODE) module_ComM::GetCurrentComMode(
   void
){
}

FUNC(void, COMM_CODE) module_ComM::PreventWakeUp(
   void
){
}

FUNC(void, COMM_CODE) module_ComM::LimitChannelToNoComMode(
   void
){
}

FUNC(void, COMM_CODE) module_ComM::LimitECUToNoComMode(
   void
){
}

FUNC(void, COMM_CODE) module_ComM::ReadInhibitCounter(
   void
){
}

FUNC(void, COMM_CODE) module_ComM::ResetInhibitCounter(
   void
){
}

FUNC(void, COMM_CODE) module_ComM::SetECUGroupClassification(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

