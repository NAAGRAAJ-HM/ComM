/******************************************************************************/
/* File   : ComM.cpp                                                          */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "infComM_EcuM.hpp"
#include "infComM_Dcm.hpp"
#include "infComM_SchM.hpp"

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
      module_ComM(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, COMM_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, COMM_CONFIG_DATA, COMM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, COMM_CODE) DeInitFunction (void);
      FUNC(void, COMM_CODE) MainFunction   (void);
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
#include "CfgComM.hpp"

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_ComM, COMM_VAR) ComM(
   {
         0x0000
      ,  0xFFFF
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
      );
#endif
   }
   else{
#endif
      if(NULL_PTR == lptrCfgModule){
#if(STD_ON == ComM_DevErrorDetect)
         Det_ReportError(
         );
#endif
      }
      else{
// check lptrCfgModule for memory faults
// use PBcfg_ComM as back-up configuration
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
      );
#endif
   }
   else{
#endif
#if(STD_ON == ComM_InitCheck)
   }
#endif
}

class class_ComM_Unused{
   public:
      FUNC(void, COMM_CODE) GetState                  (void);
      FUNC(void, COMM_CODE) GetStatus                 (void);
      FUNC(void, COMM_CODE) GetInhibitionStatus       (void);
      FUNC(void, COMM_CODE) RequestComMode            (void);
      FUNC(void, COMM_CODE) GetMaxComMode             (void);
      FUNC(void, COMM_CODE) GetRequestedComMode       (void);
      FUNC(void, COMM_CODE) GetCurrentComMode         (void);
      FUNC(void, COMM_CODE) PreventWakeUp             (void);
      FUNC(void, COMM_CODE) LimitChannelToNoComMode   (void);
      FUNC(void, COMM_CODE) LimitECUToNoComMode       (void);
      FUNC(void, COMM_CODE) ReadInhibitCounter        (void);
      FUNC(void, COMM_CODE) ResetInhibitCounter       (void);
      FUNC(void, COMM_CODE) SetECUGroupClassification (void);
};

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

