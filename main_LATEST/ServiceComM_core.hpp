#pragma once
/******************************************************************************/
/* File   : ServiceComM_core.hpp                                                     */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_ServiceComM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define COMM_CORE_FUNCTIONALITIES                                              \
              FUNC(void, COMM_CODE) GetState                  (void);          \
              FUNC(void, COMM_CODE) GetStatus                 (void);          \
              FUNC(void, COMM_CODE) GetInhibitionStatus       (void);          \
              FUNC(void, COMM_CODE) RequestServiceComMode            (void);          \
              FUNC(void, COMM_CODE) GetMaxServiceComMode             (void);          \
              FUNC(void, COMM_CODE) GetRequestedServiceComMode       (void);          \
              FUNC(void, COMM_CODE) GetCurrentServiceComMode         (void);          \
              FUNC(void, COMM_CODE) PreventWakeUp             (void);          \
              FUNC(void, COMM_CODE) LimitChannelToNoServiceComMode   (void);          \
              FUNC(void, COMM_CODE) LimitECUToNoServiceComMode       (void);          \
              FUNC(void, COMM_CODE) ReadInhibitCounter        (void);          \
              FUNC(void, COMM_CODE) ResetInhibitCounter       (void);          \
              FUNC(void, COMM_CODE) SetECUGroupClassification (void);          \

#define COMM_CORE_FUNCTIONALITIES_VIRTUAL                                      \
      virtual FUNC(void, COMM_CODE) GetState                  (void) = 0;      \
      virtual FUNC(void, COMM_CODE) GetStatus                 (void) = 0;      \
      virtual FUNC(void, COMM_CODE) GetInhibitionStatus       (void) = 0;      \
      virtual FUNC(void, COMM_CODE) RequestServiceComMode            (void) = 0;      \
      virtual FUNC(void, COMM_CODE) GetMaxServiceComMode             (void) = 0;      \
      virtual FUNC(void, COMM_CODE) GetRequestedServiceComMode       (void) = 0;      \
      virtual FUNC(void, COMM_CODE) GetCurrentServiceComMode         (void) = 0;      \
      virtual FUNC(void, COMM_CODE) PreventWakeUp             (void) = 0;      \
      virtual FUNC(void, COMM_CODE) LimitChannelToNoServiceComMode   (void) = 0;      \
      virtual FUNC(void, COMM_CODE) LimitECUToNoServiceComMode       (void) = 0;      \
      virtual FUNC(void, COMM_CODE) ReadInhibitCounter        (void) = 0;      \
      virtual FUNC(void, COMM_CODE) ResetInhibitCounter       (void) = 0;      \
      virtual FUNC(void, COMM_CODE) SetECUGroupClassification (void) = 0;      \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_ServiceComM_Functionality{
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

