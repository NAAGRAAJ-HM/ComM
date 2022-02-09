/*****************************************************/
/* File   : ComM.cpp                                 */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "ComM.h"

#include "ComM_EcuM.h"
#include "ComM_SchM.h"

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
interface_ComM_EcuM_Init ComM_EcuM_Init;
interface_ComM_EcuM_DeInit ComM_EcuM_DeInit;
interface_ComM_SchM_Main ComM_SchM_Main;
class_ComM ComM;

interface_EcuM_Init_Client *EcuM_Init_Client_ptr_ComM = &ComM_EcuM_Init;
interface_EcuM_DeInit_Client *EcuM_DeInit_Client_ptr_ComM = &ComM_EcuM_DeInit;
interface_SchM_Main_Client *SchM_Main_Client_ptr_ComM = &ComM_SchM_Main;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, COMM_CODE) interface_ComM_EcuM_Init::InitFunction(void){
}

FUNC(void, COMM_CODE) interface_ComM_EcuM_DeInit::DeInitFunction(void){
}

FUNC(void, COMM_CODE) interface_ComM_SchM_Main::MainFunction(void){
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

/*****************************************************/
/* EOF                                               */
/*****************************************************/

