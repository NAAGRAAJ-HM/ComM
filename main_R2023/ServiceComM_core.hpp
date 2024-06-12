#pragma once
/******************************************************************************/
/* File   : ServiceComM_core.hpp                                                     */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_ServiceComM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define SERVICECOMM_CORE_FUNCTIONALITIES                                              \
              FUNC(void, SERVICECOMM_CODE) GetState                  (void);          \
              FUNC(void, SERVICECOMM_CODE) GetStatus                 (void);          \
              FUNC(void, SERVICECOMM_CODE) GetInhibitionStatus       (void);          \
              FUNC(void, SERVICECOMM_CODE) RequestServiceComMode            (void);          \
              FUNC(void, SERVICECOMM_CODE) GetMaxServiceComMode             (void);          \
              FUNC(void, SERVICECOMM_CODE) GetRequestedServiceComMode       (void);          \
              FUNC(void, SERVICECOMM_CODE) GetCurrentServiceComMode         (void);          \
              FUNC(void, SERVICECOMM_CODE) PreventWakeUp             (void);          \
              FUNC(void, SERVICECOMM_CODE) LimitChannelToNoServiceComMode   (void);          \
              FUNC(void, SERVICECOMM_CODE) LimitECUToNoServiceComMode       (void);          \
              FUNC(void, SERVICECOMM_CODE) ReadInhibitCounter        (void);          \
              FUNC(void, SERVICECOMM_CODE) ResetInhibitCounter       (void);          \
              FUNC(void, SERVICECOMM_CODE) SetECUGroupClassification (void);          \

#define SERVICECOMM_CORE_FUNCTIONALITIES_VIRTUAL                                      \
      virtual FUNC(void, SERVICECOMM_CODE) GetState                  (void) = 0;      \
      virtual FUNC(void, SERVICECOMM_CODE) GetStatus                 (void) = 0;      \
      virtual FUNC(void, SERVICECOMM_CODE) GetInhibitionStatus       (void) = 0;      \
      virtual FUNC(void, SERVICECOMM_CODE) RequestServiceComMode            (void) = 0;      \
      virtual FUNC(void, SERVICECOMM_CODE) GetMaxServiceComMode             (void) = 0;      \
      virtual FUNC(void, SERVICECOMM_CODE) GetRequestedServiceComMode       (void) = 0;      \
      virtual FUNC(void, SERVICECOMM_CODE) GetCurrentServiceComMode         (void) = 0;      \
      virtual FUNC(void, SERVICECOMM_CODE) PreventWakeUp             (void) = 0;      \
      virtual FUNC(void, SERVICECOMM_CODE) LimitChannelToNoServiceComMode   (void) = 0;      \
      virtual FUNC(void, SERVICECOMM_CODE) LimitECUToNoServiceComMode       (void) = 0;      \
      virtual FUNC(void, SERVICECOMM_CODE) ReadInhibitCounter        (void) = 0;      \
      virtual FUNC(void, SERVICECOMM_CODE) ResetInhibitCounter       (void) = 0;      \
      virtual FUNC(void, SERVICECOMM_CODE) SetECUGroupClassification (void) = 0;      \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_ServiceComM_Functionality{
   public:
      SERVICECOMM_CORE_FUNCTIONALITIES_VIRTUAL
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

