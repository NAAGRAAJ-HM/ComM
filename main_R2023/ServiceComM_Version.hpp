#pragma once
/******************************************************************************/
/* File   : ServiceComM_Version.hpp                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define SERVICECOMM_AR_RELEASE_VERSION_MAJOR                                   4
#define SERVICECOMM_AR_RELEASE_VERSION_MINOR                                   3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(SERVICECOMM_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible SERVICECOMM_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(SERVICECOMM_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible SERVICECOMM_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

