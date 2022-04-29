#pragma once
/******************************************************************************/
/* File   : ComM_core.hpp                                                     */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_ComM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define COMM_CORE_FUNCTIONALITIES                                              \
              FUNC(void, COMM_CODE) GetState                  (void);          \
              FUNC(void, COMM_CODE) GetStatus                 (void);          \
              FUNC(void, COMM_CODE) GetInhibitionStatus       (void);          \
              FUNC(void, COMM_CODE) RequestComMode            (void);          \
              FUNC(void, COMM_CODE) GetMaxComMode             (void);          \
              FUNC(void, COMM_CODE) GetRequestedComMode       (void);          \
              FUNC(void, COMM_CODE) GetCurrentComMode         (void);          \
              FUNC(void, COMM_CODE) PreventWakeUp             (void);          \
              FUNC(void, COMM_CODE) LimitChannelToNoComMode   (void);          \
              FUNC(void, COMM_CODE) LimitECUToNoComMode       (void);          \
              FUNC(void, COMM_CODE) ReadInhibitCounter        (void);          \
              FUNC(void, COMM_CODE) ResetInhibitCounter       (void);          \
              FUNC(void, COMM_CODE) SetECUGroupClassification (void);          \

#define COMM_CORE_FUNCTIONALITIES_VIRTUAL                                      \
      virtual FUNC(void, COMM_CODE) GetState                  (void) = 0;      \
      virtual FUNC(void, COMM_CODE) GetStatus                 (void) = 0;      \
      virtual FUNC(void, COMM_CODE) GetInhibitionStatus       (void) = 0;      \
      virtual FUNC(void, COMM_CODE) RequestComMode            (void) = 0;      \
      virtual FUNC(void, COMM_CODE) GetMaxComMode             (void) = 0;      \
      virtual FUNC(void, COMM_CODE) GetRequestedComMode       (void) = 0;      \
      virtual FUNC(void, COMM_CODE) GetCurrentComMode         (void) = 0;      \
      virtual FUNC(void, COMM_CODE) PreventWakeUp             (void) = 0;      \
      virtual FUNC(void, COMM_CODE) LimitChannelToNoComMode   (void) = 0;      \
      virtual FUNC(void, COMM_CODE) LimitECUToNoComMode       (void) = 0;      \
      virtual FUNC(void, COMM_CODE) ReadInhibitCounter        (void) = 0;      \
      virtual FUNC(void, COMM_CODE) ResetInhibitCounter       (void) = 0;      \
      virtual FUNC(void, COMM_CODE) SetECUGroupClassification (void) = 0;      \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_ComM_Functionality{
   public:
      COMM_CORE_FUNCTIONALITIES_VIRTUAL
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

