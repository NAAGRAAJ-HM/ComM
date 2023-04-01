#pragma once
/******************************************************************************/
/* File   : ServiceComM.hpp                                                          */
/*                                                                            */
/* Author : Nagaraja HULIYAPURADA MATA                                        */
/*                                                                            */
/* License / Warranty / Terms and Conditions                                  */
/*                                                                            */
/* Everyone is permitted to copy and distribute verbatim copies of this lice- */
/* nse document, but changing it is not allowed. This is a free, copyright l- */
/* icense for software and other kinds of works. By contrast, this license is */
/* intended to guarantee your freedom to share and change all versions of a   */
/* program, to make sure it remains free software for all its users. You have */
/* certain responsibilities, if you distribute copies of the software, or if  */
/* you modify it: responsibilities to respect the freedom of others.          */
/*                                                                            */
/* All rights reserved. Copyright © 1982 Nagaraja HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* https://github.com/NagarajaHuliyapuradaMata?tab=repositories               */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstServiceComM.hpp"
#include "CfgServiceComM.hpp"
#include "ServiceComM_core.hpp"
#include "infServiceComM_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_ServiceComM:
      INTERFACES_EXPORTED_SERVICECOMM
      public abstract_module
   ,  public class_ServiceComM_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstServiceComM_Type* lptrConst = (ConstServiceComM_Type*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, SERVICECOMM_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, SERVICECOMM_CONST,       SERVICECOMM_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICECOMM_CONFIG_DATA, SERVICECOMM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, SERVICECOMM_CODE) DeInitFunction (void);
      FUNC(void, SERVICECOMM_CODE) MainFunction   (void);
      SERVICECOMM_CORE_FUNCTIONALITIES
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
extern VAR(module_ServiceComM, SERVICECOMM_VAR) ServiceComM;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

