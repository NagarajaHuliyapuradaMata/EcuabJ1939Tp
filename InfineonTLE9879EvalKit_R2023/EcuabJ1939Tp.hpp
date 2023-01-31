#pragma once
/******************************************************************************/
/* File   : EcuabJ1939Tp.hpp                                                  */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "infEcuabJ1939Tp_ServiceNvM_Types.hpp"
#include "CfgEcuabJ1939Tp.hpp"
#include "EcuabJ1939Tp_core.hpp"
#include "infEcuabJ1939Tp_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_EcuabJ1939Tp:
      INTERFACES_EXPORTED_ECUABJ1939TP
      public abstract_module
   ,  public class_EcuabJ1939Tp_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstModule_TypeAbstract* lptrNvMBlocksRom = (ConstModule_TypeAbstract*)NULL_PTR;
      infServicePduRClient_Lo infServicePduRClient_EcuabJ1939Tp;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, ECUABJ1939TP_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, ECUABJ1939TP_CONST,       ECUABJ1939TP_APPL_CONST) lptrNvMBlocksRomModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   ECUABJ1939TP_CONFIG_DATA, ECUABJ1939TP_APPL_CONST) lptrCfgModule
      );
      FUNC(void, ECUABJ1939TP_CODE) DeInitFunction (void);
      FUNC(void, ECUABJ1939TP_CODE) MainFunction   (void);
      ECUABJ1939TP_CORE_FUNCTIONALITIES
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
extern VAR(module_EcuabJ1939Tp, ECUABJ1939TP_VAR) EcuabJ1939Tp;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

