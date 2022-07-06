#pragma once
/******************************************************************************/
/* File   : J1939Tp.hpp                                                       */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CfgJ1939Tp.hpp"
#include "J1939Tp_core.hpp"
#include "infJ1939Tp_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_J1939Tp:
      INTERFACES_EXPORTED_J1939TP
      public abstract_module
   ,  public class_J1939Tp_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      infPduRClient_Lo infPduRClient_J1939Tp;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, J1939TP_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, J1939TP_CONFIG_DATA, J1939TP_APPL_CONST) lptrCfgModule
      );
      FUNC(void, J1939TP_CODE) DeInitFunction (void);
      FUNC(void, J1939TP_CODE) MainFunction   (void);
      J1939TP_CORE_FUNCTIONALITIES
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
extern VAR(module_J1939Tp, J1939TP_VAR) J1939Tp;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

