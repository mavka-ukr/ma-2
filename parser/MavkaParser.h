
// Generated from MavkaParser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  MavkaParser : public antlr4::Parser {
public:
  enum {
    END = 1, DIIA = 2, STRUCTURE = 3, FOR = 4, EQ = 5, NOT_EQ = 6, GREATER_EQ = 7, 
    SMALLER_EQ = 8, GREATER = 9, SMALLER = 10, IF = 11, WAIT = 12, TAKE = 13, 
    TAKE_PAK = 14, TAKE_FILE = 15, GIVE = 16, AS = 17, IS = 18, RETURN = 19, 
    ASYNC = 20, AND = 21, OR = 22, TRY = 23, CATCH = 24, ELSE = 25, THROW = 26, 
    WHILE = 27, MODULE = 28, TERNARY = 29, EQ_WORD = 30, GR_WORD = 31, SM_WORD = 32, 
    NOT_GR_WORD = 33, NOT_SM_WORD = 34, NOT_EQ_WORD = 35, NOT_IS_WORD = 36, 
    HAS_IS_WORD = 37, NOT_HAS_IS_WORD = 38, STAR_ALL = 39, MOCKUP = 40, 
    IMPLEMENTS = 41, IMPLEMENT = 42, EVAL = 43, WHEN = 44, TA = 45, SPREAD = 46, 
    SKIP_SPACES = 47, NL = 48, DECREMENT = 49, INCREMENT = 50, OPEN_PAREN = 51, 
    CLOSE_PAREN = 52, OPEN_ARRAY = 53, CLOSE_ARRAY = 54, COMMA = 55, ASSIGN = 56, 
    ASSIGN_PARENT = 57, ASSIGN_ADD = 58, ASSIGN_SUB = 59, ASSIGN_MUL = 60, 
    ASSIGN_DIV = 61, ASSIGN_DIVDIV = 62, ASSIGN_MOD = 63, ASSIGN_BW_OR = 64, 
    ASSIGN_BW_AND = 65, ASSIGN_BW_SHIFT_LEFT = 66, ASSIGN_BW_SHIFT_RIGHT = 67, 
    ASSIGN_XOR = 68, ASSIGN_POW = 69, ASSIGN_OR = 70, ASSIGN_AND = 71, ASSIGN_IF = 72, 
    PLUS = 73, MINUS = 74, MUL = 75, DIV = 76, COLON = 77, DOT = 78, NOT = 79, 
    TILDA = 80, PERCENT = 81, DIVDIV = 82, POW = 83, XOR = 84, OR_SYM = 85, 
    AND_SYM = 86, OR_BW = 87, AND_BW = 88, BW_SHIFT_LEFT = 89, BW_SHIFT_RIGHT = 90, 
    HEX_START = 91, ID = 92, NUMBER = 93, INTEGER = 94, FLOAT = 95, HEX = 96, 
    HEXUKR = 97, BINNUM = 98, BINNUMUKR = 99, STRING = 100, LINE_COMMENT = 101, 
    COMMENT = 102
  };

  enum {
    RuleFile = 0, RuleProgram = 1, RuleProgram_element = 2, RuleModule = 3, 
    RuleStructure = 4, RuleStructure_elements = 5, RuleStructure_element = 6, 
    RuleMockup = 7, RuleMockup_parents = 8, RuleMockup_methods = 9, RuleMockup_method = 10, 
    RuleMockup_impl = 11, RuleMockup_impl_body = 12, RuleDiia = 13, RuleIf = 14, 
    RuleEach = 15, RuleWhile = 16, RuleEval = 17, RuleTry = 18, RuleTake = 19, 
    RuleGive = 20, RuleGive_element = 21, RuleValue = 22, RuleArray_elements = 23, 
    RuleArray_element = 24, RuleDictionary_args = 25, RuleDictionary_arg = 26, 
    RuleExpr = 27, RuleThrow = 28, RuleArray_destruction = 29, RuleArray_destruction_el = 30, 
    RuleObject_destruction = 31, RuleObject_destruction_el = 32, RuleAssign = 33, 
    RuleAssign_value = 34, RuleAssign_symbol = 35, RuleWait_assign = 36, 
    RuleIdentifier = 37, RuleExtended_identifier = 38, RuleIdentifiers_chain = 39, 
    RuleType_value = 40, RuleArgs = 41, RuleArg = 42, RuleNamed_args = 43, 
    RuleNamed_arg = 44, RuleParams = 45, RuleParam = 46, RuleParam_value = 47, 
    RuleBody = 48, RuleBody_element = 49, RuleReturn_body_line = 50, RuleArithmetic_op_mul = 51, 
    RuleArithmetic_op_add = 52, RuleBitwise_op = 53, RuleTest_op = 54, RuleComparison_op = 55, 
    RuleNl = 56, RuleNls = 57
  };

  explicit MavkaParser(antlr4::TokenStream *input);

  MavkaParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~MavkaParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class FileContext;
  class ProgramContext;
  class Program_elementContext;
  class ModuleContext;
  class StructureContext;
  class Structure_elementsContext;
  class Structure_elementContext;
  class MockupContext;
  class Mockup_parentsContext;
  class Mockup_methodsContext;
  class Mockup_methodContext;
  class Mockup_implContext;
  class Mockup_impl_bodyContext;
  class DiiaContext;
  class IfContext;
  class EachContext;
  class WhileContext;
  class EvalContext;
  class TryContext;
  class TakeContext;
  class GiveContext;
  class Give_elementContext;
  class ValueContext;
  class Array_elementsContext;
  class Array_elementContext;
  class Dictionary_argsContext;
  class Dictionary_argContext;
  class ExprContext;
  class ThrowContext;
  class Array_destructionContext;
  class Array_destruction_elContext;
  class Object_destructionContext;
  class Object_destruction_elContext;
  class AssignContext;
  class Assign_valueContext;
  class Assign_symbolContext;
  class Wait_assignContext;
  class IdentifierContext;
  class Extended_identifierContext;
  class Identifiers_chainContext;
  class Type_valueContext;
  class ArgsContext;
  class ArgContext;
  class Named_argsContext;
  class Named_argContext;
  class ParamsContext;
  class ParamContext;
  class Param_valueContext;
  class BodyContext;
  class Body_elementContext;
  class Return_body_lineContext;
  class Arithmetic_op_mulContext;
  class Arithmetic_op_addContext;
  class Bitwise_opContext;
  class Test_opContext;
  class Comparison_opContext;
  class NlContext;
  class NlsContext; 

  class  FileContext : public antlr4::ParserRuleContext {
  public:
    MavkaParser::ProgramContext *f_program = nullptr;
    FileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    ProgramContext *program();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FileContext* file();

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Program_elementContext *> program_element();
    Program_elementContext* program_element(size_t i);
    std::vector<NlContext *> nl();
    NlContext* nl(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProgramContext* program();

  class  Program_elementContext : public antlr4::ParserRuleContext {
  public:
    Program_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ModuleContext *module();
    StructureContext *structure();
    MockupContext *mockup();
    DiiaContext *diia();
    IfContext *if_();
    EachContext *each();
    WhileContext *while_();
    TryContext *try_();
    ExprContext *expr();
    ThrowContext *throw_();
    EvalContext *eval();
    Wait_assignContext *wait_assign();
    AssignContext *assign();
    NlsContext *nls();
    TakeContext *take();
    GiveContext *give();
    Mockup_implContext *mockup_impl();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Program_elementContext* program_element();

  class  ModuleContext : public antlr4::ParserRuleContext {
  public:
    MavkaParser::IdentifierContext *m_name = nullptr;
    MavkaParser::ProgramContext *m_program = nullptr;
    ModuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MODULE();
    std::vector<NlContext *> nl();
    NlContext* nl(size_t i);
    NlsContext *nls();
    antlr4::tree::TerminalNode *END();
    IdentifierContext *identifier();
    ProgramContext *program();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModuleContext* module();

  class  StructureContext : public antlr4::ParserRuleContext {
  public:
    MavkaParser::IdentifierContext *s_name = nullptr;
    MavkaParser::Identifiers_chainContext *s_parent = nullptr;
    MavkaParser::Structure_elementsContext *s_elements = nullptr;
    StructureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRUCTURE();
    std::vector<NlContext *> nl();
    NlContext* nl(size_t i);
    NlsContext *nls();
    antlr4::tree::TerminalNode *END();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *IS();
    Identifiers_chainContext *identifiers_chain();
    Structure_elementsContext *structure_elements();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StructureContext* structure();

  class  Structure_elementsContext : public antlr4::ParserRuleContext {
  public:
    Structure_elementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Structure_elementContext *> structure_element();
    Structure_elementContext* structure_element(size_t i);
    std::vector<NlContext *> nl();
    NlContext* nl(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Structure_elementsContext* structure_elements();

  class  Structure_elementContext : public antlr4::ParserRuleContext {
  public:
    Structure_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParamContext *param();
    DiiaContext *diia();
    NlsContext *nls();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Structure_elementContext* structure_element();

  class  MockupContext : public antlr4::ParserRuleContext {
  public:
    MavkaParser::IdentifierContext *m_name = nullptr;
    MavkaParser::Mockup_parentsContext *m_parents = nullptr;
    MavkaParser::Mockup_methodsContext *m_methods = nullptr;
    MockupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MOCKUP();
    std::vector<NlContext *> nl();
    NlContext* nl(size_t i);
    std::vector<NlsContext *> nls();
    NlsContext* nls(size_t i);
    antlr4::tree::TerminalNode *END();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *IS();
    Mockup_parentsContext *mockup_parents();
    Mockup_methodsContext *mockup_methods();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MockupContext* mockup();

  class  Mockup_parentsContext : public antlr4::ParserRuleContext {
  public:
    Mockup_parentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Identifiers_chainContext *> identifiers_chain();
    Identifiers_chainContext* identifiers_chain(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Mockup_parentsContext* mockup_parents();

  class  Mockup_methodsContext : public antlr4::ParserRuleContext {
  public:
    Mockup_methodsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Mockup_methodContext *> mockup_method();
    Mockup_methodContext* mockup_method(size_t i);
    std::vector<NlContext *> nl();
    NlContext* nl(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Mockup_methodsContext* mockup_methods();

  class  Mockup_methodContext : public antlr4::ParserRuleContext {
  public:
    MavkaParser::IdentifierContext *mm_name = nullptr;
    MavkaParser::ParamsContext *mm_params = nullptr;
    MavkaParser::Type_valueContext *mm_type = nullptr;
    Mockup_methodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    IdentifierContext *identifier();
    std::vector<NlsContext *> nls();
    NlsContext* nls(size_t i);
    Type_valueContext *type_value();
    ParamsContext *params();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Mockup_methodContext* mockup_method();

  class  Mockup_implContext : public antlr4::ParserRuleContext {
  public:
    MavkaParser::Identifiers_chainContext *mi_mockup_name = nullptr;
    MavkaParser::Identifiers_chainContext *mi_structure_name = nullptr;
    MavkaParser::Mockup_impl_bodyContext *mi_body = nullptr;
    Mockup_implContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPLEMENT();
    antlr4::tree::TerminalNode *AS();
    std::vector<NlContext *> nl();
    NlContext* nl(size_t i);
    std::vector<NlsContext *> nls();
    NlsContext* nls(size_t i);
    antlr4::tree::TerminalNode *END();
    std::vector<Identifiers_chainContext *> identifiers_chain();
    Identifiers_chainContext* identifiers_chain(size_t i);
    Mockup_impl_bodyContext *mockup_impl_body();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Mockup_implContext* mockup_impl();

  class  Mockup_impl_bodyContext : public antlr4::ParserRuleContext {
  public:
    Mockup_impl_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DiiaContext *> diia();
    DiiaContext* diia(size_t i);
    std::vector<NlContext *> nl();
    NlContext* nl(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Mockup_impl_bodyContext* mockup_impl_body();

  class  DiiaContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *d_async = nullptr;
    MavkaParser::IdentifierContext *d_structure = nullptr;
    MavkaParser::IdentifierContext *d_name = nullptr;
    MavkaParser::ParamsContext *d_params = nullptr;
    MavkaParser::Type_valueContext *d_type = nullptr;
    MavkaParser::BodyContext *d_body = nullptr;
    DiiaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIIA();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    std::vector<NlContext *> nl();
    NlContext* nl(size_t i);
    std::vector<NlsContext *> nls();
    NlsContext* nls(size_t i);
    antlr4::tree::TerminalNode *END();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *ASYNC();
    Type_valueContext *type_value();
    BodyContext *body();
    ParamsContext *params();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DiiaContext* diia();

  class  IfContext : public antlr4::ParserRuleContext {
  public:
    MavkaParser::ExprContext *i_value = nullptr;
    MavkaParser::BodyContext *i_body = nullptr;
    MavkaParser::BodyContext *i_else_body = nullptr;
    MavkaParser::IfContext *i_else_if = nullptr;
    IfContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    std::vector<NlContext *> nl();
    NlContext* nl(size_t i);
    ExprContext *expr();
    std::vector<BodyContext *> body();
    BodyContext* body(size_t i);
    antlr4::tree::TerminalNode *END();
    IfContext *if_();
    antlr4::tree::TerminalNode *ELSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IfContext* if_();

  class  EachContext : public antlr4::ParserRuleContext {
  public:
    MavkaParser::ExprContext *e_iterator = nullptr;
    MavkaParser::IdentifierContext *e_key_name = nullptr;
    MavkaParser::IdentifierContext *e_name = nullptr;
    MavkaParser::BodyContext *e_body = nullptr;
    EachContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    std::vector<NlContext *> nl();
    NlContext* nl(size_t i);
    antlr4::tree::TerminalNode *END();
    ExprContext *expr();
    antlr4::tree::TerminalNode *AS();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    BodyContext *body();
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EachContext* each();

  class  WhileContext : public antlr4::ParserRuleContext {
  public:
    MavkaParser::ExprContext *w_value = nullptr;
    MavkaParser::BodyContext *w_body = nullptr;
    WhileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    std::vector<NlContext *> nl();
    NlContext* nl(size_t i);
    antlr4::tree::TerminalNode *END();
    ExprContext *expr();
    BodyContext *body();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WhileContext* while_();

  class  EvalContext : public antlr4::ParserRuleContext {
  public:
    MavkaParser::ValueContext *e_value = nullptr;
    EvalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EVAL();
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EvalContext* eval();

  class  TryContext : public antlr4::ParserRuleContext {
  public:
    MavkaParser::BodyContext *t_body = nullptr;
    MavkaParser::IdentifierContext *tc_name = nullptr;
    MavkaParser::BodyContext *tc_body = nullptr;
    TryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRY();
    std::vector<NlContext *> nl();
    NlContext* nl(size_t i);
    antlr4::tree::TerminalNode *CATCH();
    antlr4::tree::TerminalNode *END();
    std::vector<BodyContext *> body();
    BodyContext* body(size_t i);
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TryContext* try_();

  class  TakeContext : public antlr4::ParserRuleContext {
  public:
    TakeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TakeContext() = default;
    void copyFrom(TakeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Take_moduleContext : public TakeContext {
  public:
    Take_moduleContext(TakeContext *ctx);

    antlr4::Token *tm_absolute = nullptr;
    MavkaParser::Identifiers_chainContext *tm_elements_chain = nullptr;
    antlr4::Token *tm_star = nullptr;
    MavkaParser::IdentifierContext *tm_as = nullptr;
    antlr4::tree::TerminalNode *TAKE();
    Identifiers_chainContext *identifiers_chain();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *STAR_ALL();
    IdentifierContext *identifier();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  Take_pakContext : public TakeContext {
  public:
    Take_pakContext(TakeContext *ctx);

    MavkaParser::Identifiers_chainContext *tp_elements_chain = nullptr;
    antlr4::Token *tp_star = nullptr;
    MavkaParser::IdentifierContext *tp_as = nullptr;
    antlr4::tree::TerminalNode *TAKE_PAK();
    Identifiers_chainContext *identifiers_chain();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *STAR_ALL();
    IdentifierContext *identifier();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  Take_fileContext : public TakeContext {
  public:
    Take_fileContext(TakeContext *ctx);

    antlr4::Token *tf_name = nullptr;
    MavkaParser::IdentifierContext *tf_as = nullptr;
    antlr4::tree::TerminalNode *TAKE_FILE();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *STRING();
    IdentifierContext *identifier();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  Take_remoteContext : public TakeContext {
  public:
    Take_remoteContext(TakeContext *ctx);

    antlr4::Token *tr_url = nullptr;
    MavkaParser::IdentifierContext *tr_as = nullptr;
    antlr4::tree::TerminalNode *TAKE();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *AS();
    IdentifierContext *identifier();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  TakeContext* take();

  class  GiveContext : public antlr4::ParserRuleContext {
  public:
    GiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GIVE();
    std::vector<Give_elementContext *> give_element();
    Give_elementContext* give_element(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GiveContext* give();

  class  Give_elementContext : public antlr4::ParserRuleContext {
  public:
    MavkaParser::IdentifierContext *ge_name = nullptr;
    MavkaParser::IdentifierContext *ge_as = nullptr;
    Give_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *AS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Give_elementContext* give_element();

  class  ValueContext : public antlr4::ParserRuleContext {
  public:
    ValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ValueContext() = default;
    void copyFrom(ValueContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Arithmetic_mulContext : public ValueContext {
  public:
    Arithmetic_mulContext(ValueContext *ctx);

    MavkaParser::ValueContext *a_left = nullptr;
    MavkaParser::Arithmetic_op_mulContext *a_operation = nullptr;
    MavkaParser::ValueContext *a_right = nullptr;
    std::vector<ValueContext *> value();
    ValueContext* value(size_t i);
    Arithmetic_op_mulContext *arithmetic_op_mul();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  Get_elementContext : public ValueContext {
  public:
    Get_elementContext(ValueContext *ctx);

    MavkaParser::ValueContext *a_left = nullptr;
    MavkaParser::ExprContext *a_element = nullptr;
    antlr4::tree::TerminalNode *OPEN_ARRAY();
    antlr4::tree::TerminalNode *CLOSE_ARRAY();
    ValueContext *value();
    ExprContext *expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ChainContext : public ValueContext {
  public:
    ChainContext(ValueContext *ctx);

    MavkaParser::ValueContext *c_left = nullptr;
    MavkaParser::Extended_identifierContext *c_right = nullptr;
    antlr4::tree::TerminalNode *DOT();
    ValueContext *value();
    Extended_identifierContext *extended_identifier();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  Pre_incrementContext : public ValueContext {
  public:
    Pre_incrementContext(ValueContext *ctx);

    MavkaParser::ValueContext *pi_value = nullptr;
    antlr4::tree::TerminalNode *INCREMENT();
    ValueContext *value();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  Arithmetic_addContext : public ValueContext {
  public:
    Arithmetic_addContext(ValueContext *ctx);

    MavkaParser::ValueContext *a_left = nullptr;
    MavkaParser::Arithmetic_op_addContext *a_operation = nullptr;
    MavkaParser::ValueContext *a_right = nullptr;
    std::vector<ValueContext *> value();
    ValueContext* value(size_t i);
    Arithmetic_op_addContext *arithmetic_op_add();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ComparisonContext : public ValueContext {
  public:
    ComparisonContext(ValueContext *ctx);

    MavkaParser::ValueContext *c_left = nullptr;
    MavkaParser::Comparison_opContext *c_operation = nullptr;
    MavkaParser::ValueContext *c_right = nullptr;
    std::vector<ValueContext *> value();
    ValueContext* value(size_t i);
    Comparison_opContext *comparison_op();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  StringContext : public ValueContext {
  public:
    StringContext(ValueContext *ctx);

    antlr4::tree::TerminalNode *STRING();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  Bitwise_notContext : public ValueContext {
  public:
    Bitwise_notContext(ValueContext *ctx);

    MavkaParser::ValueContext *bn_value = nullptr;
    antlr4::tree::TerminalNode *TILDA();
    ValueContext *value();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  TestContext : public ValueContext {
  public:
    TestContext(ValueContext *ctx);

    MavkaParser::ValueContext *t_left = nullptr;
    MavkaParser::Test_opContext *t_operation = nullptr;
    MavkaParser::ValueContext *t_right = nullptr;
    std::vector<ValueContext *> value();
    ValueContext* value(size_t i);
    Test_opContext *test_op();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  Call_exprContext : public ValueContext {
  public:
    Call_exprContext(ValueContext *ctx);

    MavkaParser::ExprContext *c_value = nullptr;
    MavkaParser::ArgsContext *c_args = nullptr;
    MavkaParser::Named_argsContext *c_named_args = nullptr;
    std::vector<antlr4::tree::TerminalNode *> OPEN_PAREN();
    antlr4::tree::TerminalNode* OPEN_PAREN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLOSE_PAREN();
    antlr4::tree::TerminalNode* CLOSE_PAREN(size_t i);
    ExprContext *expr();
    ArgsContext *args();
    Named_argsContext *named_args();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PositiveContext : public ValueContext {
  public:
    PositiveContext(ValueContext *ctx);

    MavkaParser::ValueContext *p_value = nullptr;
    antlr4::tree::TerminalNode *PLUS();
    ValueContext *value();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  NestedContext : public ValueContext {
  public:
    NestedContext(ValueContext *ctx);

    MavkaParser::ExprContext *n_value = nullptr;
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    ExprContext *expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  CallContext : public ValueContext {
  public:
    CallContext(ValueContext *ctx);

    MavkaParser::ValueContext *c_value = nullptr;
    MavkaParser::ArgsContext *c_args = nullptr;
    MavkaParser::Named_argsContext *c_named_args = nullptr;
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    ValueContext *value();
    ArgsContext *args();
    Named_argsContext *named_args();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  NumberContext : public ValueContext {
  public:
    NumberContext(ValueContext *ctx);

    antlr4::tree::TerminalNode *NUMBER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  NegativeContext : public ValueContext {
  public:
    NegativeContext(ValueContext *ctx);

    MavkaParser::ValueContext *n_value = nullptr;
    antlr4::tree::TerminalNode *MINUS();
    ValueContext *value();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  NotContext : public ValueContext {
  public:
    NotContext(ValueContext *ctx);

    MavkaParser::ValueContext *n_value = nullptr;
    antlr4::tree::TerminalNode *NOT();
    ValueContext *value();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  DictionaryContext : public ValueContext {
  public:
    DictionaryContext(ValueContext *ctx);

    MavkaParser::Dictionary_argsContext *d_args = nullptr;
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    Dictionary_argsContext *dictionary_args();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ArrayContext : public ValueContext {
  public:
    ArrayContext(ValueContext *ctx);

    MavkaParser::Array_elementsContext *a_elements = nullptr;
    antlr4::tree::TerminalNode *OPEN_ARRAY();
    antlr4::tree::TerminalNode *CLOSE_ARRAY();
    Array_elementsContext *array_elements();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  Pre_decrementContext : public ValueContext {
  public:
    Pre_decrementContext(ValueContext *ctx);

    MavkaParser::ValueContext *pd_value = nullptr;
    antlr4::tree::TerminalNode *DECREMENT();
    ValueContext *value();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  BitwiseContext : public ValueContext {
  public:
    BitwiseContext(ValueContext *ctx);

    MavkaParser::ValueContext *b_left = nullptr;
    MavkaParser::Bitwise_opContext *b_operation = nullptr;
    MavkaParser::ValueContext *b_right = nullptr;
    std::vector<ValueContext *> value();
    ValueContext* value(size_t i);
    Bitwise_opContext *bitwise_op();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  Post_decrementContext : public ValueContext {
  public:
    Post_decrementContext(ValueContext *ctx);

    MavkaParser::ValueContext *pd_value = nullptr;
    antlr4::tree::TerminalNode *DECREMENT();
    ValueContext *value();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  IdContext : public ValueContext {
  public:
    IdContext(ValueContext *ctx);

    IdentifierContext *identifier();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  Post_incrementContext : public ValueContext {
  public:
    Post_incrementContext(ValueContext *ctx);

    MavkaParser::ValueContext *pi_value = nullptr;
    antlr4::tree::TerminalNode *INCREMENT();
    ValueContext *value();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  TernaryContext : public ValueContext {
  public:
    TernaryContext(ValueContext *ctx);

    MavkaParser::ValueContext *t_value = nullptr;
    MavkaParser::ExprContext *t_positive = nullptr;
    MavkaParser::ExprContext *t_negative = nullptr;
    std::vector<NlsContext *> nls();
    NlsContext* nls(size_t i);
    antlr4::tree::TerminalNode *TERNARY();
    antlr4::tree::TerminalNode *COLON();
    ValueContext *value();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  ValueContext* value();
  ValueContext* value(int precedence);
  class  Array_elementsContext : public antlr4::ParserRuleContext {
  public:
    Array_elementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Array_elementContext *> array_element();
    Array_elementContext* array_element(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Array_elementsContext* array_elements();

  class  Array_elementContext : public antlr4::ParserRuleContext {
  public:
    MavkaParser::ExprContext *ae_value = nullptr;
    Array_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NlsContext *> nls();
    NlsContext* nls(size_t i);
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Array_elementContext* array_element();

  class  Dictionary_argsContext : public antlr4::ParserRuleContext {
  public:
    Dictionary_argsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Dictionary_argContext *> dictionary_arg();
    Dictionary_argContext* dictionary_arg(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Dictionary_argsContext* dictionary_args();

  class  Dictionary_argContext : public antlr4::ParserRuleContext {
  public:
    MavkaParser::IdentifierContext *da_name_id = nullptr;
    antlr4::Token *da_name_string = nullptr;
    MavkaParser::ExprContext *da_value = nullptr;
    Dictionary_argContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NlsContext *> nls();
    NlsContext* nls(size_t i);
    antlr4::tree::TerminalNode *ASSIGN();
    ExprContext *expr();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Dictionary_argContext* dictionary_arg();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() = default;
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Anonymous_diiaContext : public ExprContext {
  public:
    Anonymous_diiaContext(ExprContext *ctx);

    antlr4::Token *d_async = nullptr;
    MavkaParser::ParamsContext *d_params = nullptr;
    MavkaParser::Type_valueContext *d_type = nullptr;
    MavkaParser::BodyContext *d_body = nullptr;
    antlr4::tree::TerminalNode *DIIA();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    std::vector<NlContext *> nl();
    NlContext* nl(size_t i);
    std::vector<NlsContext *> nls();
    NlsContext* nls(size_t i);
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *ASYNC();
    Type_valueContext *type_value();
    BodyContext *body();
    ParamsContext *params();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  WaitContext : public ExprContext {
  public:
    WaitContext(ExprContext *ctx);

    MavkaParser::ValueContext *w_value = nullptr;
    antlr4::tree::TerminalNode *WAIT();
    ValueContext *value();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  FunctionContext : public ExprContext {
  public:
    FunctionContext(ExprContext *ctx);

    MavkaParser::ParamsContext *f_params = nullptr;
    MavkaParser::Type_valueContext *f_type = nullptr;
    MavkaParser::ExprContext *f_body = nullptr;
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    antlr4::tree::TerminalNode *COLON();
    ExprContext *expr();
    ParamsContext *params();
    Type_valueContext *type_value();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  SimpleContext : public ExprContext {
  public:
    SimpleContext(ExprContext *ctx);

    ValueContext *value();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  ExprContext* expr();

  class  ThrowContext : public antlr4::ParserRuleContext {
  public:
    MavkaParser::ExprContext *t_value = nullptr;
    ThrowContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *THROW();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ThrowContext* throw_();

  class  Array_destructionContext : public antlr4::ParserRuleContext {
  public:
    Array_destructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_ARRAY();
    std::vector<Array_destruction_elContext *> array_destruction_el();
    Array_destruction_elContext* array_destruction_el(size_t i);
    antlr4::tree::TerminalNode *CLOSE_ARRAY();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Array_destructionContext* array_destruction();

  class  Array_destruction_elContext : public antlr4::ParserRuleContext {
  public:
    MavkaParser::IdentifierContext *ade_id = nullptr;
    Array_destruction_elContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NlsContext *> nls();
    NlsContext* nls(size_t i);
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Array_destruction_elContext* array_destruction_el();

  class  Object_destructionContext : public antlr4::ParserRuleContext {
  public:
    Object_destructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAREN();
    std::vector<Object_destruction_elContext *> object_destruction_el();
    Object_destruction_elContext* object_destruction_el(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Object_destructionContext* object_destruction();

  class  Object_destruction_elContext : public antlr4::ParserRuleContext {
  public:
    MavkaParser::IdentifierContext *ode_id = nullptr;
    Object_destruction_elContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NlsContext *> nls();
    NlsContext* nls(size_t i);
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Object_destruction_elContext* object_destruction_el();

  class  AssignContext : public antlr4::ParserRuleContext {
  public:
    MavkaParser::Identifiers_chainContext *a_identifiers_chain = nullptr;
    MavkaParser::ExprContext *a_set_element = nullptr;
    MavkaParser::IdentifierContext *a_identifier = nullptr;
    MavkaParser::Type_valueContext *a_type = nullptr;
    MavkaParser::Array_destructionContext *a_array_destruction = nullptr;
    MavkaParser::Object_destructionContext *a_object_destruction = nullptr;
    MavkaParser::Assign_symbolContext *a_symbol = nullptr;
    MavkaParser::Assign_valueContext *a_value = nullptr;
    AssignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Assign_symbolContext *assign_symbol();
    Assign_valueContext *assign_value();
    IdentifierContext *identifier();
    Array_destructionContext *array_destruction();
    Object_destructionContext *object_destruction();
    Identifiers_chainContext *identifiers_chain();
    Type_valueContext *type_value();
    antlr4::tree::TerminalNode *OPEN_ARRAY();
    antlr4::tree::TerminalNode *CLOSE_ARRAY();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignContext* assign();

  class  Assign_valueContext : public antlr4::ParserRuleContext {
  public:
    Assign_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    AssignContext *assign();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Assign_valueContext* assign_value();

  class  Assign_symbolContext : public antlr4::ParserRuleContext {
  public:
    Assign_symbolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSIGN();
    antlr4::tree::TerminalNode *ASSIGN_PARENT();
    antlr4::tree::TerminalNode *ASSIGN_ADD();
    antlr4::tree::TerminalNode *ASSIGN_SUB();
    antlr4::tree::TerminalNode *ASSIGN_MUL();
    antlr4::tree::TerminalNode *ASSIGN_DIV();
    antlr4::tree::TerminalNode *ASSIGN_DIVDIV();
    antlr4::tree::TerminalNode *ASSIGN_MOD();
    antlr4::tree::TerminalNode *ASSIGN_POW();
    antlr4::tree::TerminalNode *ASSIGN_BW_AND();
    antlr4::tree::TerminalNode *ASSIGN_BW_OR();
    antlr4::tree::TerminalNode *ASSIGN_BW_SHIFT_LEFT();
    antlr4::tree::TerminalNode *ASSIGN_BW_SHIFT_RIGHT();
    antlr4::tree::TerminalNode *ASSIGN_XOR();
    antlr4::tree::TerminalNode *ASSIGN_AND();
    antlr4::tree::TerminalNode *ASSIGN_OR();
    antlr4::tree::TerminalNode *ASSIGN_IF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Assign_symbolContext* assign_symbol();

  class  Wait_assignContext : public antlr4::ParserRuleContext {
  public:
    MavkaParser::AssignContext *wa_assign = nullptr;
    Wait_assignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WAIT();
    AssignContext *assign();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Wait_assignContext* wait_assign();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IdentifierContext* identifier();

  class  Extended_identifierContext : public antlr4::ParserRuleContext {
  public:
    Extended_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *DIIA();
    antlr4::tree::TerminalNode *STRUCTURE();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *WAIT();
    antlr4::tree::TerminalNode *TAKE();
    antlr4::tree::TerminalNode *GIVE();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *ASYNC();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *TRY();
    antlr4::tree::TerminalNode *CATCH();
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *THROW();
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *MODULE();
    antlr4::tree::TerminalNode *EQ_WORD();
    antlr4::tree::TerminalNode *GR_WORD();
    antlr4::tree::TerminalNode *SM_WORD();
    antlr4::tree::TerminalNode *MOCKUP();
    antlr4::tree::TerminalNode *IMPLEMENTS();
    antlr4::tree::TerminalNode *EVAL();
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *TA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Extended_identifierContext* extended_identifier();

  class  Identifiers_chainContext : public antlr4::ParserRuleContext {
  public:
    MavkaParser::Identifiers_chainContext *ic_left = nullptr;
    MavkaParser::IdentifierContext *ic_identifier = nullptr;
    MavkaParser::Identifiers_chainContext *ic_right = nullptr;
    Identifiers_chainContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *DOT();
    std::vector<Identifiers_chainContext *> identifiers_chain();
    Identifiers_chainContext* identifiers_chain(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Identifiers_chainContext* identifiers_chain();
  Identifiers_chainContext* identifiers_chain(int precedence);
  class  Type_valueContext : public antlr4::ParserRuleContext {
  public:
    MavkaParser::Type_valueContext *tv_left = nullptr;
    MavkaParser::Identifiers_chainContext *tv_single = nullptr;
    MavkaParser::Test_opContext *tv_operation = nullptr;
    MavkaParser::Type_valueContext *tv_right = nullptr;
    Type_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Identifiers_chainContext *identifiers_chain();
    std::vector<Type_valueContext *> type_value();
    Type_valueContext* type_value(size_t i);
    Test_opContext *test_op();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Type_valueContext* type_value();
  Type_valueContext* type_value(int precedence);
  class  ArgsContext : public antlr4::ParserRuleContext {
  public:
    ArgsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArgContext *> arg();
    ArgContext* arg(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArgsContext* args();

  class  ArgContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *a_spread = nullptr;
    MavkaParser::ExprContext *a_value = nullptr;
    ArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NlsContext *> nls();
    NlsContext* nls(size_t i);
    ExprContext *expr();
    antlr4::tree::TerminalNode *SPREAD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArgContext* arg();

  class  Named_argsContext : public antlr4::ParserRuleContext {
  public:
    Named_argsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Named_argContext *> named_arg();
    Named_argContext* named_arg(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Named_argsContext* named_args();

  class  Named_argContext : public antlr4::ParserRuleContext {
  public:
    MavkaParser::IdentifierContext *na_name = nullptr;
    MavkaParser::ExprContext *na_value = nullptr;
    Named_argContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NlsContext *> nls();
    NlsContext* nls(size_t i);
    antlr4::tree::TerminalNode *ASSIGN();
    IdentifierContext *identifier();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Named_argContext* named_arg();

  class  ParamsContext : public antlr4::ParserRuleContext {
  public:
    ParamsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParamContext *> param();
    ParamContext* param(size_t i);
    std::vector<NlsContext *> nls();
    NlsContext* nls(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParamsContext* params();

  class  ParamContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *p_spread = nullptr;
    MavkaParser::IdentifierContext *p_name = nullptr;
    MavkaParser::Array_destructionContext *p_array_destruction = nullptr;
    MavkaParser::Object_destructionContext *p_object_destruction = nullptr;
    MavkaParser::Type_valueContext *p_type = nullptr;
    MavkaParser::Param_valueContext *p_value = nullptr;
    ParamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    Array_destructionContext *array_destruction();
    Object_destructionContext *object_destruction();
    antlr4::tree::TerminalNode *ASSIGN();
    Type_valueContext *type_value();
    Param_valueContext *param_value();
    antlr4::tree::TerminalNode *SPREAD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParamContext* param();

  class  Param_valueContext : public antlr4::ParserRuleContext {
  public:
    Param_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Param_valueContext() = default;
    void copyFrom(Param_valueContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Param_value_identifierContext : public Param_valueContext {
  public:
    Param_value_identifierContext(Param_valueContext *ctx);

    IdentifierContext *identifier();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  Param_value_numberContext : public Param_valueContext {
  public:
    Param_value_numberContext(Param_valueContext *ctx);

    antlr4::tree::TerminalNode *NUMBER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  Param_value_stringContext : public Param_valueContext {
  public:
    Param_value_stringContext(Param_valueContext *ctx);

    antlr4::tree::TerminalNode *STRING();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  Param_valueContext* param_value();

  class  BodyContext : public antlr4::ParserRuleContext {
  public:
    BodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Body_elementContext *> body_element();
    Body_elementContext* body_element(size_t i);
    std::vector<NlContext *> nl();
    NlContext* nl(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BodyContext* body();

  class  Body_elementContext : public antlr4::ParserRuleContext {
  public:
    Body_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StructureContext *structure();
    MockupContext *mockup();
    DiiaContext *diia();
    IfContext *if_();
    EachContext *each();
    WhileContext *while_();
    TryContext *try_();
    ExprContext *expr();
    ThrowContext *throw_();
    Wait_assignContext *wait_assign();
    AssignContext *assign();
    EvalContext *eval();
    Mockup_implContext *mockup_impl();
    Return_body_lineContext *return_body_line();
    NlsContext *nls();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Body_elementContext* body_element();

  class  Return_body_lineContext : public antlr4::ParserRuleContext {
  public:
    MavkaParser::Body_elementContext *rbl = nullptr;
    Return_body_lineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    Body_elementContext *body_element();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Return_body_lineContext* return_body_line();

  class  Arithmetic_op_mulContext : public antlr4::ParserRuleContext {
  public:
    Arithmetic_op_mulContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *PERCENT();
    antlr4::tree::TerminalNode *DIVDIV();
    antlr4::tree::TerminalNode *POW();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Arithmetic_op_mulContext* arithmetic_op_mul();

  class  Arithmetic_op_addContext : public antlr4::ParserRuleContext {
  public:
    Arithmetic_op_addContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Arithmetic_op_addContext* arithmetic_op_add();

  class  Bitwise_opContext : public antlr4::ParserRuleContext {
  public:
    Bitwise_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *XOR();
    antlr4::tree::TerminalNode *OR_BW();
    antlr4::tree::TerminalNode *AND_BW();
    antlr4::tree::TerminalNode *BW_SHIFT_LEFT();
    antlr4::tree::TerminalNode *BW_SHIFT_RIGHT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Bitwise_opContext* bitwise_op();

  class  Test_opContext : public antlr4::ParserRuleContext {
  public:
    Test_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *OR_SYM();
    antlr4::tree::TerminalNode *AND_SYM();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Test_opContext* test_op();

  class  Comparison_opContext : public antlr4::ParserRuleContext {
  public:
    Comparison_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *NOT_EQ();
    antlr4::tree::TerminalNode *GREATER();
    antlr4::tree::TerminalNode *SMALLER();
    antlr4::tree::TerminalNode *GREATER_EQ();
    antlr4::tree::TerminalNode *SMALLER_EQ();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *NOT_IS_WORD();
    antlr4::tree::TerminalNode *EQ_WORD();
    antlr4::tree::TerminalNode *NOT_EQ_WORD();
    antlr4::tree::TerminalNode *GR_WORD();
    antlr4::tree::TerminalNode *NOT_GR_WORD();
    antlr4::tree::TerminalNode *SM_WORD();
    antlr4::tree::TerminalNode *NOT_SM_WORD();
    antlr4::tree::TerminalNode *HAS_IS_WORD();
    antlr4::tree::TerminalNode *NOT_HAS_IS_WORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Comparison_opContext* comparison_op();

  class  NlContext : public antlr4::ParserRuleContext {
  public:
    NlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NlContext* nl();

  class  NlsContext : public antlr4::ParserRuleContext {
  public:
    NlsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NlContext *> nl();
    NlContext* nl(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NlsContext* nls();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool valueSempred(ValueContext *_localctx, size_t predicateIndex);
  bool identifiers_chainSempred(Identifiers_chainContext *_localctx, size_t predicateIndex);
  bool type_valueSempred(Type_valueContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

