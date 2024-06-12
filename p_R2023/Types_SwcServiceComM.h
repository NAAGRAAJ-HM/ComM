#ifndef _TYPES_SWCSERVICECOMM_H
#define _TYPES_SWCSERVICECOMM_H
/******************************************************************************/
/* File   : Types_SwcServiceComM.h                                            */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Types_StackCom.h"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define COMM_TX                                                                0
#define COMM_RX                                                                1
#define COMM_EIRA                                                              0
#define COMM_ERA                                                               1

#define COMM_NO_COMMUNICATION                                               (0u)
#define COMM_SILENT_COMMUNICATION                                           (1u)
#define COMM_FULL_COMMUNICATION                                             (2u)

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef enum{
   COMM_GATEWAY_TYPE_ACTIVE,
   COMM_GATEWAY_TYPE_PASSIVE
}ComM_PncGatewayType_ten;

typedef enum{
   COMM_UNINIT,
   COMM_INIT
}ComM_InitStatusType;

typedef enum{
   COMM_BUS_TYPE_CAN,
   COMM_BUS_TYPE_ETH,
   COMM_BUS_TYPE_FR,
   COMM_BUS_TYPE_INTERNAL,
   COMM_BUS_TYPE_LIN
}ComM_BusType_ten;

typedef enum{
   FULL,
   LIGHT,
   NONE,
   PASSIVE
}ComM_NMVariantType_ten;

typedef enum{
   COMM_NO_COM_NO_PENDING_REQUEST,
   COMM_NO_COM_REQUEST_PENDING,
   COMM_FULL_COM_NETWORK_REQUESTED,
   COMM_FULL_COM_READY_SLEEP,
   COMM_SILENT_COM
}ComM_StateType;

typedef enum{
   COMM_PNC_REQUESTED,
   COMM_PNC_READY_SLEEP,
   COMM_PNC_PREPARE_SLEEP,
   COMM_PNC_NO_COMMUNICATION
}ComM_PncModeType;

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
#endif
