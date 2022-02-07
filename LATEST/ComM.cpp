/*****************************************************/
/* File   : ComM.cpp                                 */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "ComM.h"

#include "ComM_EcuM.h"

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
class_ComM_EcuM ComM_EcuM;
class_EcuM_Client *EcuM_Client_ptr_ComM = &ComM_EcuM;
class_ComM ComM;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, COMM_CODE) class_ComM_EcuM::InitFunction(void){
}

FUNC(void, COMM_CODE) class_ComM_EcuM::DeInitFunction(void){
}

FUNC(void, COMM_CODE) class_ComM::GetState(void){
}

FUNC(void, COMM_CODE) class_ComM::GetStatus(void){
}

FUNC(void, COMM_CODE) class_ComM::GetInhibitionStatus(void){
}

FUNC(void, COMM_CODE) class_ComM::RequestComMode(void){
}

FUNC(void, COMM_CODE) class_ComM::GetMaxComMode(void){
}

FUNC(void, COMM_CODE) class_ComM::GetRequestedComMode(void){
}

FUNC(void, COMM_CODE) class_ComM::GetCurrentComMode(void){
}

FUNC(void, COMM_CODE) class_ComM::PreventWakeUp(void){
}

FUNC(void, COMM_CODE) class_ComM::LimitChannelToNoComMode(void){
}

FUNC(void, COMM_CODE) class_ComM::LimitECUToNoComMode(void){
}

FUNC(void, COMM_CODE) class_ComM::ReadInhibitCounter(void){
}

FUNC(void, COMM_CODE) class_ComM::ResetInhibitCounter(void){
}

FUNC(void, COMM_CODE) class_ComM::SetECUGroupClassification(void){
}

FUNC(void, COMM_CODE) class_ComM::GetVersionInfo(void){
}

FUNC(void, COMM_CODE) class_ComM::MainFunction(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

