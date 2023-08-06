
// Generated from MavkaLexer.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  MavkaLexer : public antlr4::Lexer {
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

  explicit MavkaLexer(antlr4::CharStream *input);

  ~MavkaLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

