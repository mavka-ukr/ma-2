
// Generated from MavkaParser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "MavkaParserListener.h"


/**
 * This class provides an empty implementation of MavkaParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  MavkaParserBaseListener : public MavkaParserListener {
public:

  virtual void enterFile(MavkaParser::FileContext * /*ctx*/) override { }
  virtual void exitFile(MavkaParser::FileContext * /*ctx*/) override { }

  virtual void enterProgram(MavkaParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(MavkaParser::ProgramContext * /*ctx*/) override { }

  virtual void enterProgram_element(MavkaParser::Program_elementContext * /*ctx*/) override { }
  virtual void exitProgram_element(MavkaParser::Program_elementContext * /*ctx*/) override { }

  virtual void enterModule(MavkaParser::ModuleContext * /*ctx*/) override { }
  virtual void exitModule(MavkaParser::ModuleContext * /*ctx*/) override { }

  virtual void enterStructure(MavkaParser::StructureContext * /*ctx*/) override { }
  virtual void exitStructure(MavkaParser::StructureContext * /*ctx*/) override { }

  virtual void enterStructure_elements(MavkaParser::Structure_elementsContext * /*ctx*/) override { }
  virtual void exitStructure_elements(MavkaParser::Structure_elementsContext * /*ctx*/) override { }

  virtual void enterStructure_element(MavkaParser::Structure_elementContext * /*ctx*/) override { }
  virtual void exitStructure_element(MavkaParser::Structure_elementContext * /*ctx*/) override { }

  virtual void enterMockup(MavkaParser::MockupContext * /*ctx*/) override { }
  virtual void exitMockup(MavkaParser::MockupContext * /*ctx*/) override { }

  virtual void enterMockup_parents(MavkaParser::Mockup_parentsContext * /*ctx*/) override { }
  virtual void exitMockup_parents(MavkaParser::Mockup_parentsContext * /*ctx*/) override { }

  virtual void enterMockup_methods(MavkaParser::Mockup_methodsContext * /*ctx*/) override { }
  virtual void exitMockup_methods(MavkaParser::Mockup_methodsContext * /*ctx*/) override { }

  virtual void enterMockup_method(MavkaParser::Mockup_methodContext * /*ctx*/) override { }
  virtual void exitMockup_method(MavkaParser::Mockup_methodContext * /*ctx*/) override { }

  virtual void enterMockup_impl(MavkaParser::Mockup_implContext * /*ctx*/) override { }
  virtual void exitMockup_impl(MavkaParser::Mockup_implContext * /*ctx*/) override { }

  virtual void enterMockup_impl_body(MavkaParser::Mockup_impl_bodyContext * /*ctx*/) override { }
  virtual void exitMockup_impl_body(MavkaParser::Mockup_impl_bodyContext * /*ctx*/) override { }

  virtual void enterDiia(MavkaParser::DiiaContext * /*ctx*/) override { }
  virtual void exitDiia(MavkaParser::DiiaContext * /*ctx*/) override { }

  virtual void enterIf(MavkaParser::IfContext * /*ctx*/) override { }
  virtual void exitIf(MavkaParser::IfContext * /*ctx*/) override { }

  virtual void enterEach(MavkaParser::EachContext * /*ctx*/) override { }
  virtual void exitEach(MavkaParser::EachContext * /*ctx*/) override { }

  virtual void enterWhile(MavkaParser::WhileContext * /*ctx*/) override { }
  virtual void exitWhile(MavkaParser::WhileContext * /*ctx*/) override { }

  virtual void enterEval(MavkaParser::EvalContext * /*ctx*/) override { }
  virtual void exitEval(MavkaParser::EvalContext * /*ctx*/) override { }

  virtual void enterTry(MavkaParser::TryContext * /*ctx*/) override { }
  virtual void exitTry(MavkaParser::TryContext * /*ctx*/) override { }

  virtual void enterTake_module(MavkaParser::Take_moduleContext * /*ctx*/) override { }
  virtual void exitTake_module(MavkaParser::Take_moduleContext * /*ctx*/) override { }

  virtual void enterTake_pak(MavkaParser::Take_pakContext * /*ctx*/) override { }
  virtual void exitTake_pak(MavkaParser::Take_pakContext * /*ctx*/) override { }

  virtual void enterTake_file(MavkaParser::Take_fileContext * /*ctx*/) override { }
  virtual void exitTake_file(MavkaParser::Take_fileContext * /*ctx*/) override { }

  virtual void enterTake_remote(MavkaParser::Take_remoteContext * /*ctx*/) override { }
  virtual void exitTake_remote(MavkaParser::Take_remoteContext * /*ctx*/) override { }

  virtual void enterGive(MavkaParser::GiveContext * /*ctx*/) override { }
  virtual void exitGive(MavkaParser::GiveContext * /*ctx*/) override { }

  virtual void enterGive_element(MavkaParser::Give_elementContext * /*ctx*/) override { }
  virtual void exitGive_element(MavkaParser::Give_elementContext * /*ctx*/) override { }

  virtual void enterArithmetic_mul(MavkaParser::Arithmetic_mulContext * /*ctx*/) override { }
  virtual void exitArithmetic_mul(MavkaParser::Arithmetic_mulContext * /*ctx*/) override { }

  virtual void enterGet_element(MavkaParser::Get_elementContext * /*ctx*/) override { }
  virtual void exitGet_element(MavkaParser::Get_elementContext * /*ctx*/) override { }

  virtual void enterChain(MavkaParser::ChainContext * /*ctx*/) override { }
  virtual void exitChain(MavkaParser::ChainContext * /*ctx*/) override { }

  virtual void enterPre_increment(MavkaParser::Pre_incrementContext * /*ctx*/) override { }
  virtual void exitPre_increment(MavkaParser::Pre_incrementContext * /*ctx*/) override { }

  virtual void enterArithmetic_add(MavkaParser::Arithmetic_addContext * /*ctx*/) override { }
  virtual void exitArithmetic_add(MavkaParser::Arithmetic_addContext * /*ctx*/) override { }

  virtual void enterComparison(MavkaParser::ComparisonContext * /*ctx*/) override { }
  virtual void exitComparison(MavkaParser::ComparisonContext * /*ctx*/) override { }

  virtual void enterString(MavkaParser::StringContext * /*ctx*/) override { }
  virtual void exitString(MavkaParser::StringContext * /*ctx*/) override { }

  virtual void enterBitwise_not(MavkaParser::Bitwise_notContext * /*ctx*/) override { }
  virtual void exitBitwise_not(MavkaParser::Bitwise_notContext * /*ctx*/) override { }

  virtual void enterTest(MavkaParser::TestContext * /*ctx*/) override { }
  virtual void exitTest(MavkaParser::TestContext * /*ctx*/) override { }

  virtual void enterCall_expr(MavkaParser::Call_exprContext * /*ctx*/) override { }
  virtual void exitCall_expr(MavkaParser::Call_exprContext * /*ctx*/) override { }

  virtual void enterPositive(MavkaParser::PositiveContext * /*ctx*/) override { }
  virtual void exitPositive(MavkaParser::PositiveContext * /*ctx*/) override { }

  virtual void enterNested(MavkaParser::NestedContext * /*ctx*/) override { }
  virtual void exitNested(MavkaParser::NestedContext * /*ctx*/) override { }

  virtual void enterCall(MavkaParser::CallContext * /*ctx*/) override { }
  virtual void exitCall(MavkaParser::CallContext * /*ctx*/) override { }

  virtual void enterNumber(MavkaParser::NumberContext * /*ctx*/) override { }
  virtual void exitNumber(MavkaParser::NumberContext * /*ctx*/) override { }

  virtual void enterNegative(MavkaParser::NegativeContext * /*ctx*/) override { }
  virtual void exitNegative(MavkaParser::NegativeContext * /*ctx*/) override { }

  virtual void enterNot(MavkaParser::NotContext * /*ctx*/) override { }
  virtual void exitNot(MavkaParser::NotContext * /*ctx*/) override { }

  virtual void enterDictionary(MavkaParser::DictionaryContext * /*ctx*/) override { }
  virtual void exitDictionary(MavkaParser::DictionaryContext * /*ctx*/) override { }

  virtual void enterArray(MavkaParser::ArrayContext * /*ctx*/) override { }
  virtual void exitArray(MavkaParser::ArrayContext * /*ctx*/) override { }

  virtual void enterPre_decrement(MavkaParser::Pre_decrementContext * /*ctx*/) override { }
  virtual void exitPre_decrement(MavkaParser::Pre_decrementContext * /*ctx*/) override { }

  virtual void enterBitwise(MavkaParser::BitwiseContext * /*ctx*/) override { }
  virtual void exitBitwise(MavkaParser::BitwiseContext * /*ctx*/) override { }

  virtual void enterPost_decrement(MavkaParser::Post_decrementContext * /*ctx*/) override { }
  virtual void exitPost_decrement(MavkaParser::Post_decrementContext * /*ctx*/) override { }

  virtual void enterId(MavkaParser::IdContext * /*ctx*/) override { }
  virtual void exitId(MavkaParser::IdContext * /*ctx*/) override { }

  virtual void enterPost_increment(MavkaParser::Post_incrementContext * /*ctx*/) override { }
  virtual void exitPost_increment(MavkaParser::Post_incrementContext * /*ctx*/) override { }

  virtual void enterTernary(MavkaParser::TernaryContext * /*ctx*/) override { }
  virtual void exitTernary(MavkaParser::TernaryContext * /*ctx*/) override { }

  virtual void enterArray_elements(MavkaParser::Array_elementsContext * /*ctx*/) override { }
  virtual void exitArray_elements(MavkaParser::Array_elementsContext * /*ctx*/) override { }

  virtual void enterArray_element(MavkaParser::Array_elementContext * /*ctx*/) override { }
  virtual void exitArray_element(MavkaParser::Array_elementContext * /*ctx*/) override { }

  virtual void enterDictionary_args(MavkaParser::Dictionary_argsContext * /*ctx*/) override { }
  virtual void exitDictionary_args(MavkaParser::Dictionary_argsContext * /*ctx*/) override { }

  virtual void enterDictionary_arg(MavkaParser::Dictionary_argContext * /*ctx*/) override { }
  virtual void exitDictionary_arg(MavkaParser::Dictionary_argContext * /*ctx*/) override { }

  virtual void enterSimple(MavkaParser::SimpleContext * /*ctx*/) override { }
  virtual void exitSimple(MavkaParser::SimpleContext * /*ctx*/) override { }

  virtual void enterWait(MavkaParser::WaitContext * /*ctx*/) override { }
  virtual void exitWait(MavkaParser::WaitContext * /*ctx*/) override { }

  virtual void enterFunction(MavkaParser::FunctionContext * /*ctx*/) override { }
  virtual void exitFunction(MavkaParser::FunctionContext * /*ctx*/) override { }

  virtual void enterAnonymous_diia(MavkaParser::Anonymous_diiaContext * /*ctx*/) override { }
  virtual void exitAnonymous_diia(MavkaParser::Anonymous_diiaContext * /*ctx*/) override { }

  virtual void enterThrow(MavkaParser::ThrowContext * /*ctx*/) override { }
  virtual void exitThrow(MavkaParser::ThrowContext * /*ctx*/) override { }

  virtual void enterArray_destruction(MavkaParser::Array_destructionContext * /*ctx*/) override { }
  virtual void exitArray_destruction(MavkaParser::Array_destructionContext * /*ctx*/) override { }

  virtual void enterArray_destruction_el(MavkaParser::Array_destruction_elContext * /*ctx*/) override { }
  virtual void exitArray_destruction_el(MavkaParser::Array_destruction_elContext * /*ctx*/) override { }

  virtual void enterObject_destruction(MavkaParser::Object_destructionContext * /*ctx*/) override { }
  virtual void exitObject_destruction(MavkaParser::Object_destructionContext * /*ctx*/) override { }

  virtual void enterObject_destruction_el(MavkaParser::Object_destruction_elContext * /*ctx*/) override { }
  virtual void exitObject_destruction_el(MavkaParser::Object_destruction_elContext * /*ctx*/) override { }

  virtual void enterAssign(MavkaParser::AssignContext * /*ctx*/) override { }
  virtual void exitAssign(MavkaParser::AssignContext * /*ctx*/) override { }

  virtual void enterAssign_value(MavkaParser::Assign_valueContext * /*ctx*/) override { }
  virtual void exitAssign_value(MavkaParser::Assign_valueContext * /*ctx*/) override { }

  virtual void enterAssign_symbol(MavkaParser::Assign_symbolContext * /*ctx*/) override { }
  virtual void exitAssign_symbol(MavkaParser::Assign_symbolContext * /*ctx*/) override { }

  virtual void enterWait_assign(MavkaParser::Wait_assignContext * /*ctx*/) override { }
  virtual void exitWait_assign(MavkaParser::Wait_assignContext * /*ctx*/) override { }

  virtual void enterIdentifier(MavkaParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(MavkaParser::IdentifierContext * /*ctx*/) override { }

  virtual void enterExtended_identifier(MavkaParser::Extended_identifierContext * /*ctx*/) override { }
  virtual void exitExtended_identifier(MavkaParser::Extended_identifierContext * /*ctx*/) override { }

  virtual void enterIdentifiers_chain(MavkaParser::Identifiers_chainContext * /*ctx*/) override { }
  virtual void exitIdentifiers_chain(MavkaParser::Identifiers_chainContext * /*ctx*/) override { }

  virtual void enterType_value(MavkaParser::Type_valueContext * /*ctx*/) override { }
  virtual void exitType_value(MavkaParser::Type_valueContext * /*ctx*/) override { }

  virtual void enterArgs(MavkaParser::ArgsContext * /*ctx*/) override { }
  virtual void exitArgs(MavkaParser::ArgsContext * /*ctx*/) override { }

  virtual void enterArg(MavkaParser::ArgContext * /*ctx*/) override { }
  virtual void exitArg(MavkaParser::ArgContext * /*ctx*/) override { }

  virtual void enterNamed_args(MavkaParser::Named_argsContext * /*ctx*/) override { }
  virtual void exitNamed_args(MavkaParser::Named_argsContext * /*ctx*/) override { }

  virtual void enterNamed_arg(MavkaParser::Named_argContext * /*ctx*/) override { }
  virtual void exitNamed_arg(MavkaParser::Named_argContext * /*ctx*/) override { }

  virtual void enterParams(MavkaParser::ParamsContext * /*ctx*/) override { }
  virtual void exitParams(MavkaParser::ParamsContext * /*ctx*/) override { }

  virtual void enterParam(MavkaParser::ParamContext * /*ctx*/) override { }
  virtual void exitParam(MavkaParser::ParamContext * /*ctx*/) override { }

  virtual void enterParam_value_number(MavkaParser::Param_value_numberContext * /*ctx*/) override { }
  virtual void exitParam_value_number(MavkaParser::Param_value_numberContext * /*ctx*/) override { }

  virtual void enterParam_value_string(MavkaParser::Param_value_stringContext * /*ctx*/) override { }
  virtual void exitParam_value_string(MavkaParser::Param_value_stringContext * /*ctx*/) override { }

  virtual void enterParam_value_identifier(MavkaParser::Param_value_identifierContext * /*ctx*/) override { }
  virtual void exitParam_value_identifier(MavkaParser::Param_value_identifierContext * /*ctx*/) override { }

  virtual void enterBody(MavkaParser::BodyContext * /*ctx*/) override { }
  virtual void exitBody(MavkaParser::BodyContext * /*ctx*/) override { }

  virtual void enterBody_element(MavkaParser::Body_elementContext * /*ctx*/) override { }
  virtual void exitBody_element(MavkaParser::Body_elementContext * /*ctx*/) override { }

  virtual void enterReturn_body_line(MavkaParser::Return_body_lineContext * /*ctx*/) override { }
  virtual void exitReturn_body_line(MavkaParser::Return_body_lineContext * /*ctx*/) override { }

  virtual void enterArithmetic_op_mul(MavkaParser::Arithmetic_op_mulContext * /*ctx*/) override { }
  virtual void exitArithmetic_op_mul(MavkaParser::Arithmetic_op_mulContext * /*ctx*/) override { }

  virtual void enterArithmetic_op_add(MavkaParser::Arithmetic_op_addContext * /*ctx*/) override { }
  virtual void exitArithmetic_op_add(MavkaParser::Arithmetic_op_addContext * /*ctx*/) override { }

  virtual void enterBitwise_op(MavkaParser::Bitwise_opContext * /*ctx*/) override { }
  virtual void exitBitwise_op(MavkaParser::Bitwise_opContext * /*ctx*/) override { }

  virtual void enterTest_op(MavkaParser::Test_opContext * /*ctx*/) override { }
  virtual void exitTest_op(MavkaParser::Test_opContext * /*ctx*/) override { }

  virtual void enterComparison_op(MavkaParser::Comparison_opContext * /*ctx*/) override { }
  virtual void exitComparison_op(MavkaParser::Comparison_opContext * /*ctx*/) override { }

  virtual void enterNl(MavkaParser::NlContext * /*ctx*/) override { }
  virtual void exitNl(MavkaParser::NlContext * /*ctx*/) override { }

  virtual void enterNls(MavkaParser::NlsContext * /*ctx*/) override { }
  virtual void exitNls(MavkaParser::NlsContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

