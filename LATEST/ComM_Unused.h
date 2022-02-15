#pragma once
/*****************************************************/
/* File   : ComM_Unused.h                            */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "Std_Types.h"
#include "Compiler_Cfg_ComM.h"

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class class_ComM_Unused{
   public:
/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
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
      FUNC(void, COMM_CODE) GetVersionInfo            (void);
};

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
//extern class_ComM ComM;

/*****************************************************/
/* EOF                                               */
/*****************************************************/

