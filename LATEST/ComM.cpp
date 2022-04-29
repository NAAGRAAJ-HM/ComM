/******************************************************************************/
/* File   : ComM.cpp                                                          */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "CfgComM.hpp"
#include "ComM_core.hpp"
#include "infComM.hpp"

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
class module_ComM:
      public abstract_module
   ,  public class_ComM_Functionality
{
   public:
      module_ComM(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, COMM_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, COMM_CONFIG_DATA, COMM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, COMM_CODE) DeInitFunction (void);
      FUNC(void, COMM_CODE) MainFunction   (void);
      COMM_CORE_FUNCTIONALITIES
};

extern VAR(module_ComM, COMM_VAR) ComM;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONSTP2VAR(infEcuMClient, COMM_VAR, COMM_CONST) gptrinfEcuMClient_ComM = &ComM;
CONSTP2VAR(infDcmClient,  COMM_VAR, COMM_CONST) gptrinfDcmClient_ComM  = &ComM;
CONSTP2VAR(infSchMClient, COMM_VAR, COMM_CONST) gptrinfSchMClient_ComM = &ComM;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_ComM, COMM_VAR) ComM(
   {
         COMM_AR_RELEASE_VERSION_MAJOR
      ,  COMM_AR_RELEASE_VERSION_MINOR
      ,  0x00
      ,  0xFF
      ,  0x01
      ,  '0'
      ,  '1'
      ,  '0'
   }
);

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, COMM_CODE) module_ComM::InitFunction(
   CONSTP2CONST(CfgModule_TypeAbstract, COMM_CONFIG_DATA, COMM_APPL_CONST) lptrCfgModule
){
#if(STD_ON == ComM_InitCheck)
   if(E_OK == IsInitDone){
#if(STD_ON == ComM_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
      if(NULL_PTR == lptrCfgModule){
#if(STD_ON == ComM_DevErrorDetect)
         Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
         );
#endif
      }
      else{
         if(STD_LOW){
// check lptrCfgModule for memory faults
            lptrCfg = lptrCfgModule;
         }
         else{
// use PBcfgCanIf as back-up configuration
            lptrCfg = &PBcfgComM;
         }
      }
      IsInitDone = E_OK;
#if(STD_ON == ComM_InitCheck)
   }
#endif
}

FUNC(void, COMM_CODE) module_ComM::DeInitFunction(void){
#if(STD_ON == ComM_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == ComM_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
      IsInitDone = E_NOT_OK;
#if(STD_ON == ComM_InitCheck)
   }
#endif
}

FUNC(void, COMM_CODE) module_ComM::MainFunction(void){
#if(STD_ON == ComM_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == ComM_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
#if(STD_ON == ComM_InitCheck)
   }
#endif
}

FUNC(void, COMM_CODE) class_ComM_Functionality::GetState(void){
}

FUNC(void, COMM_CODE) class_ComM_Functionality::GetStatus(void){
}

FUNC(void, COMM_CODE) class_ComM_Functionality::GetInhibitionStatus(void){
}

FUNC(void, COMM_CODE) class_ComM_Functionality::RequestComMode(void){
}

FUNC(void, COMM_CODE) class_ComM_Functionality::GetMaxComMode(void){
}

FUNC(void, COMM_CODE) class_ComM_Functionality::GetRequestedComMode(void){
}

FUNC(void, COMM_CODE) class_ComM_Functionality::GetCurrentComMode(void){
}

FUNC(void, COMM_CODE) class_ComM_Functionality::PreventWakeUp(void){
}

FUNC(void, COMM_CODE) class_ComM_Functionality::LimitChannelToNoComMode(void){
}

FUNC(void, COMM_CODE) class_ComM_Functionality::LimitECUToNoComMode(void){
}

FUNC(void, COMM_CODE) class_ComM_Functionality::ReadInhibitCounter(void){
}

FUNC(void, COMM_CODE) class_ComM_Functionality::ResetInhibitCounter(void){
}

FUNC(void, COMM_CODE) class_ComM_Functionality::SetECUGroupClassification(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

