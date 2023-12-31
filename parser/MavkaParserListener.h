
// Generated from MavkaParser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "MavkaParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by MavkaParser.
 */
class  MavkaParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterFile(MavkaParser::FileContext *ctx) = 0;
  virtual void exitFile(MavkaParser::FileContext *ctx) = 0;

  virtual void enterProgram(MavkaParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(MavkaParser::ProgramContext *ctx) = 0;

  virtual void enterProgram_element(MavkaParser::Program_elementContext *ctx) = 0;
  virtual void exitProgram_element(MavkaParser::Program_elementContext *ctx) = 0;

  virtual void enterModule(MavkaParser::ModuleContext *ctx) = 0;
  virtual void exitModule(MavkaParser::ModuleContext *ctx) = 0;

  virtual void enterStructure(MavkaParser::StructureContext *ctx) = 0;
  virtual void exitStructure(MavkaParser::StructureContext *ctx) = 0;

  virtual void enterStructure_elements(MavkaParser::Structure_elementsContext *ctx) = 0;
  virtual void exitStructure_elements(MavkaParser::Structure_elementsContext *ctx) = 0;

  virtual void enterStructure_element(MavkaParser::Structure_elementContext *ctx) = 0;
  virtual void exitStructure_element(MavkaParser::Structure_elementContext *ctx) = 0;

  virtual void enterMockup(MavkaParser::MockupContext *ctx) = 0;
  virtual void exitMockup(MavkaParser::MockupContext *ctx) = 0;

  virtual void enterMockup_parents(MavkaParser::Mockup_parentsContext *ctx) = 0;
  virtual void exitMockup_parents(MavkaParser::Mockup_parentsContext *ctx) = 0;

  virtual void enterMockup_methods(MavkaParser::Mockup_methodsContext *ctx) = 0;
  virtual void exitMockup_methods(MavkaParser::Mockup_methodsContext *ctx) = 0;

  virtual void enterMockup_method(MavkaParser::Mockup_methodContext *ctx) = 0;
  virtual void exitMockup_method(MavkaParser::Mockup_methodContext *ctx) = 0;

  virtual void enterMockup_impl(MavkaParser::Mockup_implContext *ctx) = 0;
  virtual void exitMockup_impl(MavkaParser::Mockup_implContext *ctx) = 0;

  virtual void enterMockup_impl_body(MavkaParser::Mockup_impl_bodyContext *ctx) = 0;
  virtual void exitMockup_impl_body(MavkaParser::Mockup_impl_bodyContext *ctx) = 0;

  virtual void enterDiia(MavkaParser::DiiaContext *ctx) = 0;
  virtual void exitDiia(MavkaParser::DiiaContext *ctx) = 0;

  virtual void enterIf(MavkaParser::IfContext *ctx) = 0;
  virtual void exitIf(MavkaParser::IfContext *ctx) = 0;

  virtual void enterEach(MavkaParser::EachContext *ctx) = 0;
  virtual void exitEach(MavkaParser::EachContext *ctx) = 0;

  virtual void enterWhile(MavkaParser::WhileContext *ctx) = 0;
  virtual void exitWhile(MavkaParser::WhileContext *ctx) = 0;

  virtual void enterEval(MavkaParser::EvalContext *ctx) = 0;
  virtual void exitEval(MavkaParser::EvalContext *ctx) = 0;

  virtual void enterTry(MavkaParser::TryContext *ctx) = 0;
  virtual void exitTry(MavkaParser::TryContext *ctx) = 0;

  virtual void enterTake_module(MavkaParser::Take_moduleContext *ctx) = 0;
  virtual void exitTake_module(MavkaParser::Take_moduleContext *ctx) = 0;

  virtual void enterTake_pak(MavkaParser::Take_pakContext *ctx) = 0;
  virtual void exitTake_pak(MavkaParser::Take_pakContext *ctx) = 0;

  virtual void enterTake_file(MavkaParser::Take_fileContext *ctx) = 0;
  virtual void exitTake_file(MavkaParser::Take_fileContext *ctx) = 0;

  virtual void enterTake_remote(MavkaParser::Take_remoteContext *ctx) = 0;
  virtual void exitTake_remote(MavkaParser::Take_remoteContext *ctx) = 0;

  virtual void enterGive(MavkaParser::GiveContext *ctx) = 0;
  virtual void exitGive(MavkaParser::GiveContext *ctx) = 0;

  virtual void enterGive_element(MavkaParser::Give_elementContext *ctx) = 0;
  virtual void exitGive_element(MavkaParser::Give_elementContext *ctx) = 0;

  virtual void enterArithmetic_mul(MavkaParser::Arithmetic_mulContext *ctx) = 0;
  virtual void exitArithmetic_mul(MavkaParser::Arithmetic_mulContext *ctx) = 0;

  virtual void enterGet_element(MavkaParser::Get_elementContext *ctx) = 0;
  virtual void exitGet_element(MavkaParser::Get_elementContext *ctx) = 0;

  virtual void enterChain(MavkaParser::ChainContext *ctx) = 0;
  virtual void exitChain(MavkaParser::ChainContext *ctx) = 0;

  virtual void enterPre_increment(MavkaParser::Pre_incrementContext *ctx) = 0;
  virtual void exitPre_increment(MavkaParser::Pre_incrementContext *ctx) = 0;

  virtual void enterArithmetic_add(MavkaParser::Arithmetic_addContext *ctx) = 0;
  virtual void exitArithmetic_add(MavkaParser::Arithmetic_addContext *ctx) = 0;

  virtual void enterComparison(MavkaParser::ComparisonContext *ctx) = 0;
  virtual void exitComparison(MavkaParser::ComparisonContext *ctx) = 0;

  virtual void enterString(MavkaParser::StringContext *ctx) = 0;
  virtual void exitString(MavkaParser::StringContext *ctx) = 0;

  virtual void enterBitwise_not(MavkaParser::Bitwise_notContext *ctx) = 0;
  virtual void exitBitwise_not(MavkaParser::Bitwise_notContext *ctx) = 0;

  virtual void enterTest(MavkaParser::TestContext *ctx) = 0;
  virtual void exitTest(MavkaParser::TestContext *ctx) = 0;

  virtual void enterCall_expr(MavkaParser::Call_exprContext *ctx) = 0;
  virtual void exitCall_expr(MavkaParser::Call_exprContext *ctx) = 0;

  virtual void enterPositive(MavkaParser::PositiveContext *ctx) = 0;
  virtual void exitPositive(MavkaParser::PositiveContext *ctx) = 0;

  virtual void enterNested(MavkaParser::NestedContext *ctx) = 0;
  virtual void exitNested(MavkaParser::NestedContext *ctx) = 0;

  virtual void enterCall(MavkaParser::CallContext *ctx) = 0;
  virtual void exitCall(MavkaParser::CallContext *ctx) = 0;

  virtual void enterNumber(MavkaParser::NumberContext *ctx) = 0;
  virtual void exitNumber(MavkaParser::NumberContext *ctx) = 0;

  virtual void enterNegative(MavkaParser::NegativeContext *ctx) = 0;
  virtual void exitNegative(MavkaParser::NegativeContext *ctx) = 0;

  virtual void enterNot(MavkaParser::NotContext *ctx) = 0;
  virtual void exitNot(MavkaParser::NotContext *ctx) = 0;

  virtual void enterDictionary(MavkaParser::DictionaryContext *ctx) = 0;
  virtual void exitDictionary(MavkaParser::DictionaryContext *ctx) = 0;

  virtual void enterArray(MavkaParser::ArrayContext *ctx) = 0;
  virtual void exitArray(MavkaParser::ArrayContext *ctx) = 0;

  virtual void enterPre_decrement(MavkaParser::Pre_decrementContext *ctx) = 0;
  virtual void exitPre_decrement(MavkaParser::Pre_decrementContext *ctx) = 0;

  virtual void enterBitwise(MavkaParser::BitwiseContext *ctx) = 0;
  virtual void exitBitwise(MavkaParser::BitwiseContext *ctx) = 0;

  virtual void enterPost_decrement(MavkaParser::Post_decrementContext *ctx) = 0;
  virtual void exitPost_decrement(MavkaParser::Post_decrementContext *ctx) = 0;

  virtual void enterId(MavkaParser::IdContext *ctx) = 0;
  virtual void exitId(MavkaParser::IdContext *ctx) = 0;

  virtual void enterPost_increment(MavkaParser::Post_incrementContext *ctx) = 0;
  virtual void exitPost_increment(MavkaParser::Post_incrementContext *ctx) = 0;

  virtual void enterTernary(MavkaParser::TernaryContext *ctx) = 0;
  virtual void exitTernary(MavkaParser::TernaryContext *ctx) = 0;

  virtual void enterArray_elements(MavkaParser::Array_elementsContext *ctx) = 0;
  virtual void exitArray_elements(MavkaParser::Array_elementsContext *ctx) = 0;

  virtual void enterArray_element(MavkaParser::Array_elementContext *ctx) = 0;
  virtual void exitArray_element(MavkaParser::Array_elementContext *ctx) = 0;

  virtual void enterDictionary_args(MavkaParser::Dictionary_argsContext *ctx) = 0;
  virtual void exitDictionary_args(MavkaParser::Dictionary_argsContext *ctx) = 0;

  virtual void enterDictionary_arg(MavkaParser::Dictionary_argContext *ctx) = 0;
  virtual void exitDictionary_arg(MavkaParser::Dictionary_argContext *ctx) = 0;

  virtual void enterSimple(MavkaParser::SimpleContext *ctx) = 0;
  virtual void exitSimple(MavkaParser::SimpleContext *ctx) = 0;

  virtual void enterWait(MavkaParser::WaitContext *ctx) = 0;
  virtual void exitWait(MavkaParser::WaitContext *ctx) = 0;

  virtual void enterFunction(MavkaParser::FunctionContext *ctx) = 0;
  virtual void exitFunction(MavkaParser::FunctionContext *ctx) = 0;

  virtual void enterAnonymous_diia(MavkaParser::Anonymous_diiaContext *ctx) = 0;
  virtual void exitAnonymous_diia(MavkaParser::Anonymous_diiaContext *ctx) = 0;

  virtual void enterThrow(MavkaParser::ThrowContext *ctx) = 0;
  virtual void exitThrow(MavkaParser::ThrowContext *ctx) = 0;

  virtual void enterArray_destruction(MavkaParser::Array_destructionContext *ctx) = 0;
  virtual void exitArray_destruction(MavkaParser::Array_destructionContext *ctx) = 0;

  virtual void enterArray_destruction_el(MavkaParser::Array_destruction_elContext *ctx) = 0;
  virtual void exitArray_destruction_el(MavkaParser::Array_destruction_elContext *ctx) = 0;

  virtual void enterObject_destruction(MavkaParser::Object_destructionContext *ctx) = 0;
  virtual void exitObject_destruction(MavkaParser::Object_destructionContext *ctx) = 0;

  virtual void enterObject_destruction_el(MavkaParser::Object_destruction_elContext *ctx) = 0;
  virtual void exitObject_destruction_el(MavkaParser::Object_destruction_elContext *ctx) = 0;

  virtual void enterAssign(MavkaParser::AssignContext *ctx) = 0;
  virtual void exitAssign(MavkaParser::AssignContext *ctx) = 0;

  virtual void enterAssign_value(MavkaParser::Assign_valueContext *ctx) = 0;
  virtual void exitAssign_value(MavkaParser::Assign_valueContext *ctx) = 0;

  virtual void enterAssign_symbol(MavkaParser::Assign_symbolContext *ctx) = 0;
  virtual void exitAssign_symbol(MavkaParser::Assign_symbolContext *ctx) = 0;

  virtual void enterWait_assign(MavkaParser::Wait_assignContext *ctx) = 0;
  virtual void exitWait_assign(MavkaParser::Wait_assignContext *ctx) = 0;

  virtual void enterIdentifier(MavkaParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(MavkaParser::IdentifierContext *ctx) = 0;

  virtual void enterExtended_identifier(MavkaParser::Extended_identifierContext *ctx) = 0;
  virtual void exitExtended_identifier(MavkaParser::Extended_identifierContext *ctx) = 0;

  virtual void enterIdentifiers_chain(MavkaParser::Identifiers_chainContext *ctx) = 0;
  virtual void exitIdentifiers_chain(MavkaParser::Identifiers_chainContext *ctx) = 0;

  virtual void enterType_value(MavkaParser::Type_valueContext *ctx) = 0;
  virtual void exitType_value(MavkaParser::Type_valueContext *ctx) = 0;

  virtual void enterArgs(MavkaParser::ArgsContext *ctx) = 0;
  virtual void exitArgs(MavkaParser::ArgsContext *ctx) = 0;

  virtual void enterArg(MavkaParser::ArgContext *ctx) = 0;
  virtual void exitArg(MavkaParser::ArgContext *ctx) = 0;

  virtual void enterNamed_args(MavkaParser::Named_argsContext *ctx) = 0;
  virtual void exitNamed_args(MavkaParser::Named_argsContext *ctx) = 0;

  virtual void enterNamed_arg(MavkaParser::Named_argContext *ctx) = 0;
  virtual void exitNamed_arg(MavkaParser::Named_argContext *ctx) = 0;

  virtual void enterParams(MavkaParser::ParamsContext *ctx) = 0;
  virtual void exitParams(MavkaParser::ParamsContext *ctx) = 0;

  virtual void enterParam(MavkaParser::ParamContext *ctx) = 0;
  virtual void exitParam(MavkaParser::ParamContext *ctx) = 0;

  virtual void enterParam_value_number(MavkaParser::Param_value_numberContext *ctx) = 0;
  virtual void exitParam_value_number(MavkaParser::Param_value_numberContext *ctx) = 0;

  virtual void enterParam_value_string(MavkaParser::Param_value_stringContext *ctx) = 0;
  virtual void exitParam_value_string(MavkaParser::Param_value_stringContext *ctx) = 0;

  virtual void enterParam_value_identifier(MavkaParser::Param_value_identifierContext *ctx) = 0;
  virtual void exitParam_value_identifier(MavkaParser::Param_value_identifierContext *ctx) = 0;

  virtual void enterBody(MavkaParser::BodyContext *ctx) = 0;
  virtual void exitBody(MavkaParser::BodyContext *ctx) = 0;

  virtual void enterBody_element(MavkaParser::Body_elementContext *ctx) = 0;
  virtual void exitBody_element(MavkaParser::Body_elementContext *ctx) = 0;

  virtual void enterReturn_body_line(MavkaParser::Return_body_lineContext *ctx) = 0;
  virtual void exitReturn_body_line(MavkaParser::Return_body_lineContext *ctx) = 0;

  virtual void enterArithmetic_op_mul(MavkaParser::Arithmetic_op_mulContext *ctx) = 0;
  virtual void exitArithmetic_op_mul(MavkaParser::Arithmetic_op_mulContext *ctx) = 0;

  virtual void enterArithmetic_op_add(MavkaParser::Arithmetic_op_addContext *ctx) = 0;
  virtual void exitArithmetic_op_add(MavkaParser::Arithmetic_op_addContext *ctx) = 0;

  virtual void enterBitwise_op(MavkaParser::Bitwise_opContext *ctx) = 0;
  virtual void exitBitwise_op(MavkaParser::Bitwise_opContext *ctx) = 0;

  virtual void enterTest_op(MavkaParser::Test_opContext *ctx) = 0;
  virtual void exitTest_op(MavkaParser::Test_opContext *ctx) = 0;

  virtual void enterComparison_op(MavkaParser::Comparison_opContext *ctx) = 0;
  virtual void exitComparison_op(MavkaParser::Comparison_opContext *ctx) = 0;

  virtual void enterNl(MavkaParser::NlContext *ctx) = 0;
  virtual void exitNl(MavkaParser::NlContext *ctx) = 0;

  virtual void enterNls(MavkaParser::NlsContext *ctx) = 0;
  virtual void exitNls(MavkaParser::NlsContext *ctx) = 0;


};

