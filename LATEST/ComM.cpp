/*****************************************************/
/* File   : ComM.cpp                                 */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "module.h"

#include "ComM_Unused.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class module_ComM : public class_module{
   public:
      FUNC(void, COMM_CODE) InitFunction   (void);
      FUNC(void, COMM_CODE) DeInitFunction (void);
      FUNC(void, COMM_CODE) MainFunction   (void);
};

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
module_ComM ComM;

interface_EcuM_Client *EcuM_Client_ptr_ComM = &ComM;
interface_SchM_Client *SchM_Client_ptr_ComM = &ComM;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, COMM_CODE) module_ComM::InitFunction(void){
}

FUNC(void, COMM_CODE) module_ComM::DeInitFunction(void){
}

FUNC(void, COMM_CODE) module_ComM::MainFunction(void){
}

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

FUNC(void, COMM_CODE) class_ComM_Unused::GetVersionInfo(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

