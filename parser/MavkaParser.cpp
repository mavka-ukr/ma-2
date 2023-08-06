
// Generated from MavkaParser.g4 by ANTLR 4.13.0


#include "MavkaParserListener.h"

#include "MavkaParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct MavkaParserStaticData final {
  MavkaParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  MavkaParserStaticData(const MavkaParserStaticData&) = delete;
  MavkaParserStaticData(MavkaParserStaticData&&) = delete;
  MavkaParserStaticData& operator=(const MavkaParserStaticData&) = delete;
  MavkaParserStaticData& operator=(MavkaParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag mavkaparserParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
MavkaParserStaticData *mavkaparserParserStaticData = nullptr;

void mavkaparserParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (mavkaparserParserStaticData != nullptr) {
    return;
  }
#else
  assert(mavkaparserParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<MavkaParserStaticData>(
    std::vector<std::string>{
      "file", "program", "program_element", "module", "structure", "structure_elements", 
      "structure_element", "mockup", "mockup_parents", "mockup_methods", 
      "mockup_method", "mockup_impl", "mockup_impl_body", "diia", "if", 
      "each", "while", "eval", "try", "take", "give", "give_element", "value", 
      "array_elements", "array_element", "dictionary_args", "dictionary_arg", 
      "expr", "throw", "array_destruction", "array_destruction_el", "object_destruction", 
      "object_destruction_el", "assign", "assign_value", "assign_symbol", 
      "wait_assign", "identifier", "extended_identifier", "identifiers_chain", 
      "type_value", "args", "arg", "named_args", "named_arg", "params", 
      "param", "param_value", "body", "body_element", "return_body_line", 
      "arithmetic_op_mul", "arithmetic_op_add", "bitwise_op", "test_op", 
      "comparison_op", "nl", "nls"
    },
    std::vector<std::string>{
      "", "'\\u043A\\u0456\\u043D\\u0435\\u0446\\u044C'", "'\\u0434\\u0456\\u044F'", 
      "'\\u0441\\u0442\\u0440\\u0443\\u043A\\u0442\\u0443\\u0440\\u0430'", 
      "'\\u043F\\u0435\\u0440\\u0435\\u0431\\u0440\\u0430\\u0442\\u0438'", 
      "'=='", "'!='", "'>='", "'<='", "'>'", "'<'", "'\\u044F\\u043A\\u0449\\u043E'", 
      "'\\u0447\\u0435\\u043A\\u0430\\u0442\\u0438'", "'\\u0432\\u0437\\u044F\\u0442\\u0438'", 
      "'\\u0432\\u0437\\u044F\\u0442\\u0438 \\u043F\\u0430\\u043A'", "'\\u0432\\u0437\\u044F\\u0442\\u0438 \\u0444\\u0430\\u0439\\u043B'", 
      "'\\u0434\\u0430\\u0442\\u0438'", "'\\u044F\\u043A'", "'\\u0454'", 
      "'\\u0432\\u0435\\u0440\\u043D\\u0443\\u0442\\u0438'", "'\\u0442\\u0440\\u0438\\u0432\\u0430\\u043B\\u0430'", 
      "'\\u0456'", "'\\u0430\\u0431\\u043E'", "'\\u0441\\u043F\\u0440\\u043E\\u0431\\u0443\\u0432\\u0430\\u0442\\u0438'", 
      "'\\u0437\\u043B\\u043E\\u0432\\u0438\\u0442\\u0438'", "'\\u0456\\u043D\\u0430\\u043A\\u0448\\u0435'", 
      "'\\u0432\\u043F\\u0430\\u0441\\u0442\\u0438'", "'\\u043F\\u043E\\u043A\\u0438'", 
      "'\\u043C\\u043E\\u0434\\u0443\\u043B\\u044C'", "'\\u003F'", "'\\u0440\\u0456\\u0432\\u043D\\u043E'", 
      "'\\u0431\\u0456\\u043B\\u044C\\u0448\\u0435'", "'\\u043C\\u0435\\u043D\\u0448\\u0435'", 
      "'\\u043D\\u0435 \\u0431\\u0456\\u043B\\u044C\\u0448\\u0435'", "'\\u043D\\u0435 \\u043C\\u0435\\u043D\\u0448\\u0435'", 
      "'\\u043D\\u0435 \\u0440\\u0456\\u0432\\u043D\\u043E'", "'\\u043D\\u0435 \\u0454'", 
      "'\\u043C\\u0456\\u0441\\u0442\\u0438\\u0442\\u044C'", "'\\u043D\\u0435 \\u043C\\u0456\\u0441\\u0442\\u0438\\u0442\\u044C'", 
      "'.*'", "'\\u043C\\u0430\\u043A\\u0435\\u0442'", "'\\u0432\\u0442\\u0456\\u043B\\u044E\\u0454'", 
      "'\\u0432\\u0442\\u0456\\u043B\\u0438\\u0442\\u0438'", "'js'", "'\\u043A\\u043E\\u043B\\u0438'", 
      "'\\u0442\\u0430'", "'...'", "", "", "'--'", "'++'", "'('", "')'", 
      "'['", "']'", "','", "'='", "':='", "'+='", "'-='", "'*='", "'/='", 
      "'//='", "'%='", "'|='", "'&='", "'<<='", "'>>='", "'^='", "'**='", 
      "'||='", "'&&='", "'\\u003F\\u003F='", "'+'", "'-'", "'*'", "'/'", 
      "':'", "'.'", "'!'", "'~'", "'%'", "'//'", "'**'", "'^'", "'||'", 
      "'&&'", "'|'", "'&'", "'<<'", "'>>'", "'0x'"
    },
    std::vector<std::string>{
      "", "END", "DIIA", "STRUCTURE", "FOR", "EQ", "NOT_EQ", "GREATER_EQ", 
      "SMALLER_EQ", "GREATER", "SMALLER", "IF", "WAIT", "TAKE", "TAKE_PAK", 
      "TAKE_FILE", "GIVE", "AS", "IS", "RETURN", "ASYNC", "AND", "OR", "TRY", 
      "CATCH", "ELSE", "THROW", "WHILE", "MODULE", "TERNARY", "EQ_WORD", 
      "GR_WORD", "SM_WORD", "NOT_GR_WORD", "NOT_SM_WORD", "NOT_EQ_WORD", 
      "NOT_IS_WORD", "HAS_IS_WORD", "NOT_HAS_IS_WORD", "STAR_ALL", "MOCKUP", 
      "IMPLEMENTS", "IMPLEMENT", "EVAL", "WHEN", "TA", "SPREAD", "SKIP_SPACES", 
      "NL", "DECREMENT", "INCREMENT", "OPEN_PAREN", "CLOSE_PAREN", "OPEN_ARRAY", 
      "CLOSE_ARRAY", "COMMA", "ASSIGN", "ASSIGN_PARENT", "ASSIGN_ADD", "ASSIGN_SUB", 
      "ASSIGN_MUL", "ASSIGN_DIV", "ASSIGN_DIVDIV", "ASSIGN_MOD", "ASSIGN_BW_OR", 
      "ASSIGN_BW_AND", "ASSIGN_BW_SHIFT_LEFT", "ASSIGN_BW_SHIFT_RIGHT", 
      "ASSIGN_XOR", "ASSIGN_POW", "ASSIGN_OR", "ASSIGN_AND", "ASSIGN_IF", 
      "PLUS", "MINUS", "MUL", "DIV", "COLON", "DOT", "NOT", "TILDA", "PERCENT", 
      "DIVDIV", "POW", "XOR", "OR_SYM", "AND_SYM", "OR_BW", "AND_BW", "BW_SHIFT_LEFT", 
      "BW_SHIFT_RIGHT", "HEX_START", "ID", "NUMBER", "INTEGER", "FLOAT", 
      "HEX", "HEXUKR", "BINNUM", "BINNUMUKR", "STRING", "LINE_COMMENT", 
      "COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,102,758,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,7,
  	49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,56,7,
  	56,2,57,7,57,1,0,1,0,1,0,1,1,1,1,1,1,1,1,5,1,124,8,1,10,1,12,1,127,9,
  	1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,
  	3,2,146,8,2,1,3,1,3,3,3,150,8,3,1,3,1,3,1,3,1,3,3,3,156,8,3,1,3,1,3,1,
  	3,1,4,1,4,1,4,1,4,3,4,165,8,4,1,4,1,4,1,4,1,4,1,4,3,4,172,8,4,1,4,1,4,
  	1,5,1,5,1,5,1,5,5,5,180,8,5,10,5,12,5,183,9,5,1,6,1,6,1,6,3,6,188,8,6,
  	1,7,1,7,1,7,1,7,3,7,194,8,7,1,7,1,7,1,7,1,7,1,7,3,7,201,8,7,1,7,1,7,1,
  	7,1,8,1,8,1,8,5,8,209,8,8,10,8,12,8,212,9,8,1,9,1,9,1,9,1,9,5,9,218,8,
  	9,10,9,12,9,221,9,9,1,10,1,10,1,10,1,10,3,10,227,8,10,1,10,1,10,1,10,
  	1,10,3,10,233,8,10,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,3,11,
  	244,8,11,1,11,1,11,1,11,1,12,1,12,1,12,1,12,5,12,253,8,12,10,12,12,12,
  	256,9,12,1,13,3,13,259,8,13,1,13,1,13,1,13,1,13,3,13,265,8,13,1,13,1,
  	13,1,13,1,13,3,13,271,8,13,1,13,1,13,1,13,1,13,3,13,277,8,13,1,13,1,13,
  	1,13,1,13,3,13,283,8,13,1,13,1,13,1,13,1,14,1,14,1,14,1,14,1,14,1,14,
  	3,14,294,8,14,1,14,1,14,1,14,1,14,3,14,300,8,14,1,14,1,14,3,14,304,8,
  	14,1,15,1,15,1,15,1,15,1,15,1,15,3,15,312,8,15,1,15,3,15,315,8,15,1,15,
  	1,15,1,15,1,15,3,15,321,8,15,1,15,1,15,1,16,1,16,1,16,1,16,1,16,1,16,
  	3,16,331,8,16,1,16,1,16,1,17,1,17,1,17,1,18,1,18,1,18,1,18,1,18,1,18,
  	3,18,344,8,18,1,18,1,18,1,18,3,18,349,8,18,1,18,1,18,1,19,1,19,3,19,355,
  	8,19,1,19,1,19,3,19,359,8,19,1,19,1,19,3,19,363,8,19,1,19,1,19,1,19,3,
  	19,368,8,19,1,19,1,19,3,19,372,8,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,
  	1,19,3,19,382,8,19,3,19,384,8,19,1,20,1,20,1,20,1,20,5,20,390,8,20,10,
  	20,12,20,393,9,20,1,21,1,21,1,21,3,21,398,8,21,1,22,1,22,1,22,1,22,1,
  	22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,
  	22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,3,22,426,8,22,1,22,1,22,1,22,1,
  	22,3,22,432,8,22,1,22,1,22,1,22,3,22,437,8,22,1,22,3,22,440,8,22,1,22,
  	1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,
  	1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,3,22,469,
  	8,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,
  	1,22,1,22,1,22,1,22,1,22,1,22,1,22,5,22,491,8,22,10,22,12,22,494,9,22,
  	1,23,1,23,1,23,5,23,499,8,23,10,23,12,23,502,9,23,1,24,1,24,1,24,1,24,
  	1,25,1,25,1,25,5,25,511,8,25,10,25,12,25,514,9,25,1,26,1,26,1,26,3,26,
  	519,8,26,1,26,1,26,1,26,1,26,1,27,1,27,1,27,1,27,1,27,3,27,530,8,27,1,
  	27,1,27,3,27,534,8,27,1,27,1,27,1,27,3,27,539,8,27,1,27,1,27,1,27,1,27,
  	3,27,545,8,27,1,27,1,27,1,27,1,27,3,27,551,8,27,1,27,1,27,1,27,1,27,3,
  	27,557,8,27,1,27,1,27,1,27,3,27,562,8,27,1,28,1,28,1,28,1,29,1,29,1,29,
  	1,29,5,29,571,8,29,10,29,12,29,574,9,29,1,29,1,29,1,30,1,30,1,30,1,30,
  	1,31,1,31,1,31,1,31,5,31,586,8,31,10,31,12,31,589,9,31,1,31,1,31,1,32,
  	1,32,1,32,1,32,1,33,1,33,1,33,1,33,1,33,3,33,602,8,33,1,33,1,33,3,33,
  	606,8,33,1,33,1,33,3,33,610,8,33,1,33,1,33,1,33,1,34,1,34,3,34,617,8,
  	34,1,35,1,35,1,36,1,36,1,36,1,37,1,37,1,38,1,38,1,39,1,39,1,39,1,39,1,
  	39,1,39,5,39,634,8,39,10,39,12,39,637,9,39,1,40,1,40,1,40,1,40,1,40,1,
  	40,1,40,5,40,646,8,40,10,40,12,40,649,9,40,1,41,1,41,1,41,5,41,654,8,
  	41,10,41,12,41,657,9,41,1,42,1,42,3,42,661,8,42,1,42,1,42,1,42,1,43,1,
  	43,1,43,5,43,669,8,43,10,43,12,43,672,9,43,1,44,1,44,1,44,1,44,1,44,1,
  	44,1,45,1,45,1,45,1,45,1,45,1,45,5,45,686,8,45,10,45,12,45,689,9,45,1,
  	46,3,46,692,8,46,1,46,1,46,1,46,3,46,697,8,46,1,46,3,46,700,8,46,1,46,
  	1,46,3,46,704,8,46,1,47,1,47,1,47,3,47,709,8,47,1,48,1,48,1,48,1,48,5,
  	48,715,8,48,10,48,12,48,718,9,48,1,49,1,49,1,49,1,49,1,49,1,49,1,49,1,
  	49,1,49,1,49,1,49,1,49,1,49,1,49,1,49,3,49,735,8,49,1,50,1,50,1,50,1,
  	51,1,51,1,52,1,52,1,53,1,53,1,54,1,54,1,55,1,55,1,56,1,56,1,57,5,57,753,
  	8,57,10,57,12,57,756,9,57,1,57,0,3,44,78,80,58,0,2,4,6,8,10,12,14,16,
  	18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,
  	64,66,68,70,72,74,76,78,80,82,84,86,88,90,92,94,96,98,100,102,104,106,
  	108,110,112,114,0,7,1,0,56,72,7,0,1,4,11,13,16,28,30,32,40,41,43,45,92,
  	92,2,0,75,76,81,83,1,0,73,74,2,0,84,84,87,90,2,0,21,22,85,86,3,0,5,10,
  	18,18,30,38,834,0,116,1,0,0,0,2,119,1,0,0,0,4,145,1,0,0,0,6,147,1,0,0,
  	0,8,160,1,0,0,0,10,175,1,0,0,0,12,187,1,0,0,0,14,189,1,0,0,0,16,205,1,
  	0,0,0,18,213,1,0,0,0,20,222,1,0,0,0,22,234,1,0,0,0,24,248,1,0,0,0,26,
  	258,1,0,0,0,28,287,1,0,0,0,30,305,1,0,0,0,32,324,1,0,0,0,34,334,1,0,0,
  	0,36,337,1,0,0,0,38,383,1,0,0,0,40,385,1,0,0,0,42,394,1,0,0,0,44,439,
  	1,0,0,0,46,495,1,0,0,0,48,503,1,0,0,0,50,507,1,0,0,0,52,515,1,0,0,0,54,
  	561,1,0,0,0,56,563,1,0,0,0,58,566,1,0,0,0,60,577,1,0,0,0,62,581,1,0,0,
  	0,64,592,1,0,0,0,66,609,1,0,0,0,68,616,1,0,0,0,70,618,1,0,0,0,72,620,
  	1,0,0,0,74,623,1,0,0,0,76,625,1,0,0,0,78,627,1,0,0,0,80,638,1,0,0,0,82,
  	650,1,0,0,0,84,658,1,0,0,0,86,665,1,0,0,0,88,673,1,0,0,0,90,679,1,0,0,
  	0,92,696,1,0,0,0,94,708,1,0,0,0,96,710,1,0,0,0,98,734,1,0,0,0,100,736,
  	1,0,0,0,102,739,1,0,0,0,104,741,1,0,0,0,106,743,1,0,0,0,108,745,1,0,0,
  	0,110,747,1,0,0,0,112,749,1,0,0,0,114,754,1,0,0,0,116,117,3,2,1,0,117,
  	118,5,0,0,1,118,1,1,0,0,0,119,125,3,4,2,0,120,121,3,112,56,0,121,122,
  	3,4,2,0,122,124,1,0,0,0,123,120,1,0,0,0,124,127,1,0,0,0,125,123,1,0,0,
  	0,125,126,1,0,0,0,126,3,1,0,0,0,127,125,1,0,0,0,128,146,3,6,3,0,129,146,
  	3,8,4,0,130,146,3,14,7,0,131,146,3,26,13,0,132,146,3,28,14,0,133,146,
  	3,30,15,0,134,146,3,32,16,0,135,146,3,36,18,0,136,146,3,54,27,0,137,146,
  	3,56,28,0,138,146,3,34,17,0,139,146,3,72,36,0,140,146,3,66,33,0,141,146,
  	3,114,57,0,142,146,3,38,19,0,143,146,3,40,20,0,144,146,3,22,11,0,145,
  	128,1,0,0,0,145,129,1,0,0,0,145,130,1,0,0,0,145,131,1,0,0,0,145,132,1,
  	0,0,0,145,133,1,0,0,0,145,134,1,0,0,0,145,135,1,0,0,0,145,136,1,0,0,0,
  	145,137,1,0,0,0,145,138,1,0,0,0,145,139,1,0,0,0,145,140,1,0,0,0,145,141,
  	1,0,0,0,145,142,1,0,0,0,145,143,1,0,0,0,145,144,1,0,0,0,146,5,1,0,0,0,
  	147,149,5,28,0,0,148,150,3,74,37,0,149,148,1,0,0,0,149,150,1,0,0,0,150,
  	151,1,0,0,0,151,155,3,112,56,0,152,153,3,2,1,0,153,154,3,112,56,0,154,
  	156,1,0,0,0,155,152,1,0,0,0,155,156,1,0,0,0,156,157,1,0,0,0,157,158,3,
  	114,57,0,158,159,5,1,0,0,159,7,1,0,0,0,160,161,5,3,0,0,161,164,3,74,37,
  	0,162,163,5,18,0,0,163,165,3,78,39,0,164,162,1,0,0,0,164,165,1,0,0,0,
  	165,166,1,0,0,0,166,167,3,112,56,0,167,171,3,114,57,0,168,169,3,10,5,
  	0,169,170,3,112,56,0,170,172,1,0,0,0,171,168,1,0,0,0,171,172,1,0,0,0,
  	172,173,1,0,0,0,173,174,5,1,0,0,174,9,1,0,0,0,175,181,3,12,6,0,176,177,
  	3,112,56,0,177,178,3,12,6,0,178,180,1,0,0,0,179,176,1,0,0,0,180,183,1,
  	0,0,0,181,179,1,0,0,0,181,182,1,0,0,0,182,11,1,0,0,0,183,181,1,0,0,0,
  	184,188,3,92,46,0,185,188,3,26,13,0,186,188,3,114,57,0,187,184,1,0,0,
  	0,187,185,1,0,0,0,187,186,1,0,0,0,188,13,1,0,0,0,189,190,5,40,0,0,190,
  	193,3,74,37,0,191,192,5,18,0,0,192,194,3,16,8,0,193,191,1,0,0,0,193,194,
  	1,0,0,0,194,195,1,0,0,0,195,196,3,112,56,0,196,200,3,114,57,0,197,198,
  	3,18,9,0,198,199,3,112,56,0,199,201,1,0,0,0,200,197,1,0,0,0,200,201,1,
  	0,0,0,201,202,1,0,0,0,202,203,3,114,57,0,203,204,5,1,0,0,204,15,1,0,0,
  	0,205,210,3,78,39,0,206,207,5,55,0,0,207,209,3,78,39,0,208,206,1,0,0,
  	0,209,212,1,0,0,0,210,208,1,0,0,0,210,211,1,0,0,0,211,17,1,0,0,0,212,
  	210,1,0,0,0,213,219,3,20,10,0,214,215,3,112,56,0,215,216,3,20,10,0,216,
  	218,1,0,0,0,217,214,1,0,0,0,218,221,1,0,0,0,219,217,1,0,0,0,219,220,1,
  	0,0,0,220,19,1,0,0,0,221,219,1,0,0,0,222,223,3,74,37,0,223,224,5,51,0,
  	0,224,226,3,114,57,0,225,227,3,90,45,0,226,225,1,0,0,0,226,227,1,0,0,
  	0,227,228,1,0,0,0,228,229,3,114,57,0,229,230,1,0,0,0,230,232,5,52,0,0,
  	231,233,3,80,40,0,232,231,1,0,0,0,232,233,1,0,0,0,233,21,1,0,0,0,234,
  	235,5,42,0,0,235,236,3,78,39,0,236,237,5,17,0,0,237,238,3,78,39,0,238,
  	239,3,112,56,0,239,243,3,114,57,0,240,241,3,24,12,0,241,242,3,112,56,
  	0,242,244,1,0,0,0,243,240,1,0,0,0,243,244,1,0,0,0,244,245,1,0,0,0,245,
  	246,3,114,57,0,246,247,5,1,0,0,247,23,1,0,0,0,248,254,3,26,13,0,249,250,
  	3,112,56,0,250,251,3,26,13,0,251,253,1,0,0,0,252,249,1,0,0,0,253,256,
  	1,0,0,0,254,252,1,0,0,0,254,255,1,0,0,0,255,25,1,0,0,0,256,254,1,0,0,
  	0,257,259,5,20,0,0,258,257,1,0,0,0,258,259,1,0,0,0,259,260,1,0,0,0,260,
  	264,5,2,0,0,261,262,3,74,37,0,262,263,5,78,0,0,263,265,1,0,0,0,264,261,
  	1,0,0,0,264,265,1,0,0,0,265,266,1,0,0,0,266,267,3,74,37,0,267,268,5,51,
  	0,0,268,270,3,114,57,0,269,271,3,90,45,0,270,269,1,0,0,0,270,271,1,0,
  	0,0,271,272,1,0,0,0,272,273,3,114,57,0,273,274,1,0,0,0,274,276,5,52,0,
  	0,275,277,3,80,40,0,276,275,1,0,0,0,276,277,1,0,0,0,277,278,1,0,0,0,278,
  	282,3,112,56,0,279,280,3,96,48,0,280,281,3,112,56,0,281,283,1,0,0,0,282,
  	279,1,0,0,0,282,283,1,0,0,0,283,284,1,0,0,0,284,285,3,114,57,0,285,286,
  	5,1,0,0,286,27,1,0,0,0,287,288,5,11,0,0,288,289,3,54,27,0,289,293,3,112,
  	56,0,290,291,3,96,48,0,291,292,3,112,56,0,292,294,1,0,0,0,293,290,1,0,
  	0,0,293,294,1,0,0,0,294,303,1,0,0,0,295,296,5,25,0,0,296,297,3,96,48,
  	0,297,298,3,112,56,0,298,300,1,0,0,0,299,295,1,0,0,0,299,300,1,0,0,0,
  	300,301,1,0,0,0,301,304,5,1,0,0,302,304,3,28,14,0,303,299,1,0,0,0,303,
  	302,1,0,0,0,304,29,1,0,0,0,305,306,5,4,0,0,306,314,3,54,27,0,307,311,
  	5,17,0,0,308,309,3,74,37,0,309,310,5,55,0,0,310,312,1,0,0,0,311,308,1,
  	0,0,0,311,312,1,0,0,0,312,313,1,0,0,0,313,315,3,74,37,0,314,307,1,0,0,
  	0,314,315,1,0,0,0,315,316,1,0,0,0,316,320,3,112,56,0,317,318,3,96,48,
  	0,318,319,3,112,56,0,319,321,1,0,0,0,320,317,1,0,0,0,320,321,1,0,0,0,
  	321,322,1,0,0,0,322,323,5,1,0,0,323,31,1,0,0,0,324,325,5,27,0,0,325,326,
  	3,54,27,0,326,330,3,112,56,0,327,328,3,96,48,0,328,329,3,112,56,0,329,
  	331,1,0,0,0,330,327,1,0,0,0,330,331,1,0,0,0,331,332,1,0,0,0,332,333,5,
  	1,0,0,333,33,1,0,0,0,334,335,5,43,0,0,335,336,3,44,22,0,336,35,1,0,0,
  	0,337,338,5,23,0,0,338,339,3,112,56,0,339,340,3,96,48,0,340,341,3,112,
  	56,0,341,343,5,24,0,0,342,344,3,74,37,0,343,342,1,0,0,0,343,344,1,0,0,
  	0,344,348,1,0,0,0,345,346,3,96,48,0,346,347,3,112,56,0,347,349,1,0,0,
  	0,348,345,1,0,0,0,348,349,1,0,0,0,349,350,1,0,0,0,350,351,5,1,0,0,351,
  	37,1,0,0,0,352,354,5,13,0,0,353,355,5,78,0,0,354,353,1,0,0,0,354,355,
  	1,0,0,0,355,356,1,0,0,0,356,358,3,78,39,0,357,359,5,39,0,0,358,357,1,
  	0,0,0,358,359,1,0,0,0,359,362,1,0,0,0,360,361,5,17,0,0,361,363,3,74,37,
  	0,362,360,1,0,0,0,362,363,1,0,0,0,363,384,1,0,0,0,364,365,5,14,0,0,365,
  	367,3,78,39,0,366,368,5,39,0,0,367,366,1,0,0,0,367,368,1,0,0,0,368,371,
  	1,0,0,0,369,370,5,17,0,0,370,372,3,74,37,0,371,369,1,0,0,0,371,372,1,
  	0,0,0,372,384,1,0,0,0,373,374,5,15,0,0,374,375,5,100,0,0,375,376,5,17,
  	0,0,376,384,3,74,37,0,377,378,5,13,0,0,378,381,5,100,0,0,379,380,5,17,
  	0,0,380,382,3,74,37,0,381,379,1,0,0,0,381,382,1,0,0,0,382,384,1,0,0,0,
  	383,352,1,0,0,0,383,364,1,0,0,0,383,373,1,0,0,0,383,377,1,0,0,0,384,39,
  	1,0,0,0,385,386,5,16,0,0,386,391,3,42,21,0,387,388,5,55,0,0,388,390,3,
  	42,21,0,389,387,1,0,0,0,390,393,1,0,0,0,391,389,1,0,0,0,391,392,1,0,0,
  	0,392,41,1,0,0,0,393,391,1,0,0,0,394,397,3,74,37,0,395,396,5,17,0,0,396,
  	398,3,74,37,0,397,395,1,0,0,0,397,398,1,0,0,0,398,43,1,0,0,0,399,400,
  	6,22,-1,0,400,440,5,93,0,0,401,440,5,100,0,0,402,440,3,74,37,0,403,404,
  	5,73,0,0,404,440,3,44,22,19,405,406,5,74,0,0,406,440,3,44,22,18,407,408,
  	5,49,0,0,408,440,3,44,22,17,409,410,5,50,0,0,410,440,3,44,22,16,411,412,
  	5,79,0,0,412,440,3,44,22,13,413,414,5,80,0,0,414,440,3,44,22,12,415,416,
  	5,51,0,0,416,417,3,54,27,0,417,418,5,52,0,0,418,440,1,0,0,0,419,420,5,
  	51,0,0,420,421,3,54,27,0,421,422,5,52,0,0,422,425,5,51,0,0,423,426,3,
  	82,41,0,424,426,3,86,43,0,425,423,1,0,0,0,425,424,1,0,0,0,425,426,1,0,
  	0,0,426,427,1,0,0,0,427,428,5,52,0,0,428,440,1,0,0,0,429,431,5,53,0,0,
  	430,432,3,46,23,0,431,430,1,0,0,0,431,432,1,0,0,0,432,433,1,0,0,0,433,
  	440,5,54,0,0,434,436,5,51,0,0,435,437,3,50,25,0,436,435,1,0,0,0,436,437,
  	1,0,0,0,437,438,1,0,0,0,438,440,5,52,0,0,439,399,1,0,0,0,439,401,1,0,
  	0,0,439,402,1,0,0,0,439,403,1,0,0,0,439,405,1,0,0,0,439,407,1,0,0,0,439,
  	409,1,0,0,0,439,411,1,0,0,0,439,413,1,0,0,0,439,415,1,0,0,0,439,419,1,
  	0,0,0,439,429,1,0,0,0,439,434,1,0,0,0,440,492,1,0,0,0,441,442,10,8,0,
  	0,442,443,3,102,51,0,443,444,3,44,22,9,444,491,1,0,0,0,445,446,10,7,0,
  	0,446,447,3,104,52,0,447,448,3,44,22,8,448,491,1,0,0,0,449,450,10,6,0,
  	0,450,451,3,106,53,0,451,452,3,44,22,7,452,491,1,0,0,0,453,454,10,5,0,
  	0,454,455,3,110,55,0,455,456,3,44,22,6,456,491,1,0,0,0,457,458,10,4,0,
  	0,458,459,3,108,54,0,459,460,3,44,22,5,460,491,1,0,0,0,461,462,10,21,
  	0,0,462,463,5,78,0,0,463,491,3,76,38,0,464,465,10,20,0,0,465,468,5,51,
  	0,0,466,469,3,82,41,0,467,469,3,86,43,0,468,466,1,0,0,0,468,467,1,0,0,
  	0,468,469,1,0,0,0,469,470,1,0,0,0,470,491,5,52,0,0,471,472,10,15,0,0,
  	472,491,5,49,0,0,473,474,10,14,0,0,474,491,5,50,0,0,475,476,10,11,0,0,
  	476,477,5,53,0,0,477,478,3,54,27,0,478,479,5,54,0,0,479,491,1,0,0,0,480,
  	481,10,3,0,0,481,482,3,114,57,0,482,483,5,29,0,0,483,484,3,114,57,0,484,
  	485,3,54,27,0,485,486,3,114,57,0,486,487,5,77,0,0,487,488,3,114,57,0,
  	488,489,3,54,27,0,489,491,1,0,0,0,490,441,1,0,0,0,490,445,1,0,0,0,490,
  	449,1,0,0,0,490,453,1,0,0,0,490,457,1,0,0,0,490,461,1,0,0,0,490,464,1,
  	0,0,0,490,471,1,0,0,0,490,473,1,0,0,0,490,475,1,0,0,0,490,480,1,0,0,0,
  	491,494,1,0,0,0,492,490,1,0,0,0,492,493,1,0,0,0,493,45,1,0,0,0,494,492,
  	1,0,0,0,495,500,3,48,24,0,496,497,5,55,0,0,497,499,3,48,24,0,498,496,
  	1,0,0,0,499,502,1,0,0,0,500,498,1,0,0,0,500,501,1,0,0,0,501,47,1,0,0,
  	0,502,500,1,0,0,0,503,504,3,114,57,0,504,505,3,54,27,0,505,506,3,114,
  	57,0,506,49,1,0,0,0,507,512,3,52,26,0,508,509,5,55,0,0,509,511,3,52,26,
  	0,510,508,1,0,0,0,511,514,1,0,0,0,512,510,1,0,0,0,512,513,1,0,0,0,513,
  	51,1,0,0,0,514,512,1,0,0,0,515,518,3,114,57,0,516,519,3,74,37,0,517,519,
  	5,100,0,0,518,516,1,0,0,0,518,517,1,0,0,0,519,520,1,0,0,0,520,521,5,56,
  	0,0,521,522,3,54,27,0,522,523,3,114,57,0,523,53,1,0,0,0,524,562,3,44,
  	22,0,525,526,5,12,0,0,526,562,3,44,22,0,527,529,5,51,0,0,528,530,3,90,
  	45,0,529,528,1,0,0,0,529,530,1,0,0,0,530,531,1,0,0,0,531,533,5,52,0,0,
  	532,534,3,80,40,0,533,532,1,0,0,0,533,534,1,0,0,0,534,535,1,0,0,0,535,
  	536,5,77,0,0,536,562,3,54,27,0,537,539,5,20,0,0,538,537,1,0,0,0,538,539,
  	1,0,0,0,539,540,1,0,0,0,540,541,5,2,0,0,541,542,5,51,0,0,542,544,3,114,
  	57,0,543,545,3,90,45,0,544,543,1,0,0,0,544,545,1,0,0,0,545,546,1,0,0,
  	0,546,547,3,114,57,0,547,548,1,0,0,0,548,550,5,52,0,0,549,551,3,80,40,
  	0,550,549,1,0,0,0,550,551,1,0,0,0,551,552,1,0,0,0,552,556,3,112,56,0,
  	553,554,3,96,48,0,554,555,3,112,56,0,555,557,1,0,0,0,556,553,1,0,0,0,
  	556,557,1,0,0,0,557,558,1,0,0,0,558,559,3,114,57,0,559,560,5,1,0,0,560,
  	562,1,0,0,0,561,524,1,0,0,0,561,525,1,0,0,0,561,527,1,0,0,0,561,538,1,
  	0,0,0,562,55,1,0,0,0,563,564,5,26,0,0,564,565,3,54,27,0,565,57,1,0,0,
  	0,566,567,5,53,0,0,567,572,3,60,30,0,568,569,5,55,0,0,569,571,3,60,30,
  	0,570,568,1,0,0,0,571,574,1,0,0,0,572,570,1,0,0,0,572,573,1,0,0,0,573,
  	575,1,0,0,0,574,572,1,0,0,0,575,576,5,54,0,0,576,59,1,0,0,0,577,578,3,
  	114,57,0,578,579,3,74,37,0,579,580,3,114,57,0,580,61,1,0,0,0,581,582,
  	5,51,0,0,582,587,3,64,32,0,583,584,5,55,0,0,584,586,3,64,32,0,585,583,
  	1,0,0,0,586,589,1,0,0,0,587,585,1,0,0,0,587,588,1,0,0,0,588,590,1,0,0,
  	0,589,587,1,0,0,0,590,591,5,52,0,0,591,63,1,0,0,0,592,593,3,114,57,0,
  	593,594,3,74,37,0,594,595,3,114,57,0,595,65,1,0,0,0,596,601,3,78,39,0,
  	597,598,5,53,0,0,598,599,3,54,27,0,599,600,5,54,0,0,600,602,1,0,0,0,601,
  	597,1,0,0,0,601,602,1,0,0,0,602,610,1,0,0,0,603,605,3,74,37,0,604,606,
  	3,80,40,0,605,604,1,0,0,0,605,606,1,0,0,0,606,610,1,0,0,0,607,610,3,58,
  	29,0,608,610,3,62,31,0,609,596,1,0,0,0,609,603,1,0,0,0,609,607,1,0,0,
  	0,609,608,1,0,0,0,610,611,1,0,0,0,611,612,3,70,35,0,612,613,3,68,34,0,
  	613,67,1,0,0,0,614,617,3,54,27,0,615,617,3,66,33,0,616,614,1,0,0,0,616,
  	615,1,0,0,0,617,69,1,0,0,0,618,619,7,0,0,0,619,71,1,0,0,0,620,621,5,12,
  	0,0,621,622,3,66,33,0,622,73,1,0,0,0,623,624,5,92,0,0,624,75,1,0,0,0,
  	625,626,7,1,0,0,626,77,1,0,0,0,627,628,6,39,-1,0,628,629,3,74,37,0,629,
  	635,1,0,0,0,630,631,10,1,0,0,631,632,5,78,0,0,632,634,3,78,39,2,633,630,
  	1,0,0,0,634,637,1,0,0,0,635,633,1,0,0,0,635,636,1,0,0,0,636,79,1,0,0,
  	0,637,635,1,0,0,0,638,639,6,40,-1,0,639,640,3,78,39,0,640,647,1,0,0,0,
  	641,642,10,1,0,0,642,643,3,108,54,0,643,644,3,80,40,2,644,646,1,0,0,0,
  	645,641,1,0,0,0,646,649,1,0,0,0,647,645,1,0,0,0,647,648,1,0,0,0,648,81,
  	1,0,0,0,649,647,1,0,0,0,650,655,3,84,42,0,651,652,5,55,0,0,652,654,3,
  	84,42,0,653,651,1,0,0,0,654,657,1,0,0,0,655,653,1,0,0,0,655,656,1,0,0,
  	0,656,83,1,0,0,0,657,655,1,0,0,0,658,660,3,114,57,0,659,661,5,46,0,0,
  	660,659,1,0,0,0,660,661,1,0,0,0,661,662,1,0,0,0,662,663,3,54,27,0,663,
  	664,3,114,57,0,664,85,1,0,0,0,665,670,3,88,44,0,666,667,5,55,0,0,667,
  	669,3,88,44,0,668,666,1,0,0,0,669,672,1,0,0,0,670,668,1,0,0,0,670,671,
  	1,0,0,0,671,87,1,0,0,0,672,670,1,0,0,0,673,674,3,114,57,0,674,675,3,74,
  	37,0,675,676,5,56,0,0,676,677,3,54,27,0,677,678,3,114,57,0,678,89,1,0,
  	0,0,679,687,3,92,46,0,680,681,3,114,57,0,681,682,5,55,0,0,682,683,3,114,
  	57,0,683,684,3,92,46,0,684,686,1,0,0,0,685,680,1,0,0,0,686,689,1,0,0,
  	0,687,685,1,0,0,0,687,688,1,0,0,0,688,91,1,0,0,0,689,687,1,0,0,0,690,
  	692,5,46,0,0,691,690,1,0,0,0,691,692,1,0,0,0,692,693,1,0,0,0,693,697,
  	3,74,37,0,694,697,3,58,29,0,695,697,3,62,31,0,696,691,1,0,0,0,696,694,
  	1,0,0,0,696,695,1,0,0,0,697,699,1,0,0,0,698,700,3,80,40,0,699,698,1,0,
  	0,0,699,700,1,0,0,0,700,703,1,0,0,0,701,702,5,56,0,0,702,704,3,94,47,
  	0,703,701,1,0,0,0,703,704,1,0,0,0,704,93,1,0,0,0,705,709,5,93,0,0,706,
  	709,5,100,0,0,707,709,3,74,37,0,708,705,1,0,0,0,708,706,1,0,0,0,708,707,
  	1,0,0,0,709,95,1,0,0,0,710,716,3,98,49,0,711,712,3,112,56,0,712,713,3,
  	98,49,0,713,715,1,0,0,0,714,711,1,0,0,0,715,718,1,0,0,0,716,714,1,0,0,
  	0,716,717,1,0,0,0,717,97,1,0,0,0,718,716,1,0,0,0,719,735,3,8,4,0,720,
  	735,3,14,7,0,721,735,3,26,13,0,722,735,3,28,14,0,723,735,3,30,15,0,724,
  	735,3,32,16,0,725,735,3,36,18,0,726,735,3,54,27,0,727,735,3,56,28,0,728,
  	735,3,72,36,0,729,735,3,66,33,0,730,735,3,34,17,0,731,735,3,22,11,0,732,
  	735,3,100,50,0,733,735,3,114,57,0,734,719,1,0,0,0,734,720,1,0,0,0,734,
  	721,1,0,0,0,734,722,1,0,0,0,734,723,1,0,0,0,734,724,1,0,0,0,734,725,1,
  	0,0,0,734,726,1,0,0,0,734,727,1,0,0,0,734,728,1,0,0,0,734,729,1,0,0,0,
  	734,730,1,0,0,0,734,731,1,0,0,0,734,732,1,0,0,0,734,733,1,0,0,0,735,99,
  	1,0,0,0,736,737,5,19,0,0,737,738,3,98,49,0,738,101,1,0,0,0,739,740,7,
  	2,0,0,740,103,1,0,0,0,741,742,7,3,0,0,742,105,1,0,0,0,743,744,7,4,0,0,
  	744,107,1,0,0,0,745,746,7,5,0,0,746,109,1,0,0,0,747,748,7,6,0,0,748,111,
  	1,0,0,0,749,750,5,48,0,0,750,113,1,0,0,0,751,753,3,112,56,0,752,751,1,
  	0,0,0,753,756,1,0,0,0,754,752,1,0,0,0,754,755,1,0,0,0,755,115,1,0,0,0,
  	756,754,1,0,0,0,76,125,145,149,155,164,171,181,187,193,200,210,219,226,
  	232,243,254,258,264,270,276,282,293,299,303,311,314,320,330,343,348,354,
  	358,362,367,371,381,383,391,397,425,431,436,439,468,490,492,500,512,518,
  	529,533,538,544,550,556,561,572,587,601,605,609,616,635,647,655,660,670,
  	687,691,696,699,703,708,716,734,754
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  mavkaparserParserStaticData = staticData.release();
}

}

MavkaParser::MavkaParser(TokenStream *input) : MavkaParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

MavkaParser::MavkaParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  MavkaParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *mavkaparserParserStaticData->atn, mavkaparserParserStaticData->decisionToDFA, mavkaparserParserStaticData->sharedContextCache, options);
}

MavkaParser::~MavkaParser() {
  delete _interpreter;
}

const atn::ATN& MavkaParser::getATN() const {
  return *mavkaparserParserStaticData->atn;
}

std::string MavkaParser::getGrammarFileName() const {
  return "MavkaParser.g4";
}

const std::vector<std::string>& MavkaParser::getRuleNames() const {
  return mavkaparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& MavkaParser::getVocabulary() const {
  return mavkaparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView MavkaParser::getSerializedATN() const {
  return mavkaparserParserStaticData->serializedATN;
}


//----------------- FileContext ------------------------------------------------------------------

MavkaParser::FileContext::FileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::FileContext::EOF() {
  return getToken(MavkaParser::EOF, 0);
}

MavkaParser::ProgramContext* MavkaParser::FileContext::program() {
  return getRuleContext<MavkaParser::ProgramContext>(0);
}


size_t MavkaParser::FileContext::getRuleIndex() const {
  return MavkaParser::RuleFile;
}

void MavkaParser::FileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFile(this);
}

void MavkaParser::FileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFile(this);
}

MavkaParser::FileContext* MavkaParser::file() {
  FileContext *_localctx = _tracker.createInstance<FileContext>(_ctx, getState());
  enterRule(_localctx, 0, MavkaParser::RuleFile);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(116);
    antlrcpp::downCast<FileContext *>(_localctx)->f_program = program();
    setState(117);
    match(MavkaParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgramContext ------------------------------------------------------------------

MavkaParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MavkaParser::Program_elementContext *> MavkaParser::ProgramContext::program_element() {
  return getRuleContexts<MavkaParser::Program_elementContext>();
}

MavkaParser::Program_elementContext* MavkaParser::ProgramContext::program_element(size_t i) {
  return getRuleContext<MavkaParser::Program_elementContext>(i);
}

std::vector<MavkaParser::NlContext *> MavkaParser::ProgramContext::nl() {
  return getRuleContexts<MavkaParser::NlContext>();
}

MavkaParser::NlContext* MavkaParser::ProgramContext::nl(size_t i) {
  return getRuleContext<MavkaParser::NlContext>(i);
}


size_t MavkaParser::ProgramContext::getRuleIndex() const {
  return MavkaParser::RuleProgram;
}

void MavkaParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void MavkaParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

MavkaParser::ProgramContext* MavkaParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 2, MavkaParser::RuleProgram);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(119);
    program_element();
    setState(125);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(120);
        nl();
        setState(121);
        program_element(); 
      }
      setState(127);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Program_elementContext ------------------------------------------------------------------

MavkaParser::Program_elementContext::Program_elementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MavkaParser::ModuleContext* MavkaParser::Program_elementContext::module() {
  return getRuleContext<MavkaParser::ModuleContext>(0);
}

MavkaParser::StructureContext* MavkaParser::Program_elementContext::structure() {
  return getRuleContext<MavkaParser::StructureContext>(0);
}

MavkaParser::MockupContext* MavkaParser::Program_elementContext::mockup() {
  return getRuleContext<MavkaParser::MockupContext>(0);
}

MavkaParser::DiiaContext* MavkaParser::Program_elementContext::diia() {
  return getRuleContext<MavkaParser::DiiaContext>(0);
}

MavkaParser::IfContext* MavkaParser::Program_elementContext::if_() {
  return getRuleContext<MavkaParser::IfContext>(0);
}

MavkaParser::EachContext* MavkaParser::Program_elementContext::each() {
  return getRuleContext<MavkaParser::EachContext>(0);
}

MavkaParser::WhileContext* MavkaParser::Program_elementContext::while_() {
  return getRuleContext<MavkaParser::WhileContext>(0);
}

MavkaParser::TryContext* MavkaParser::Program_elementContext::try_() {
  return getRuleContext<MavkaParser::TryContext>(0);
}

MavkaParser::ExprContext* MavkaParser::Program_elementContext::expr() {
  return getRuleContext<MavkaParser::ExprContext>(0);
}

MavkaParser::ThrowContext* MavkaParser::Program_elementContext::throw_() {
  return getRuleContext<MavkaParser::ThrowContext>(0);
}

MavkaParser::EvalContext* MavkaParser::Program_elementContext::eval() {
  return getRuleContext<MavkaParser::EvalContext>(0);
}

MavkaParser::Wait_assignContext* MavkaParser::Program_elementContext::wait_assign() {
  return getRuleContext<MavkaParser::Wait_assignContext>(0);
}

MavkaParser::AssignContext* MavkaParser::Program_elementContext::assign() {
  return getRuleContext<MavkaParser::AssignContext>(0);
}

MavkaParser::NlsContext* MavkaParser::Program_elementContext::nls() {
  return getRuleContext<MavkaParser::NlsContext>(0);
}

MavkaParser::TakeContext* MavkaParser::Program_elementContext::take() {
  return getRuleContext<MavkaParser::TakeContext>(0);
}

MavkaParser::GiveContext* MavkaParser::Program_elementContext::give() {
  return getRuleContext<MavkaParser::GiveContext>(0);
}

MavkaParser::Mockup_implContext* MavkaParser::Program_elementContext::mockup_impl() {
  return getRuleContext<MavkaParser::Mockup_implContext>(0);
}


size_t MavkaParser::Program_elementContext::getRuleIndex() const {
  return MavkaParser::RuleProgram_element;
}

void MavkaParser::Program_elementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram_element(this);
}

void MavkaParser::Program_elementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram_element(this);
}

MavkaParser::Program_elementContext* MavkaParser::program_element() {
  Program_elementContext *_localctx = _tracker.createInstance<Program_elementContext>(_ctx, getState());
  enterRule(_localctx, 4, MavkaParser::RuleProgram_element);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(145);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(128);
      module();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(129);
      structure();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(130);
      mockup();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(131);
      diia();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(132);
      if_();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(133);
      each();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(134);
      while_();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(135);
      try_();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(136);
      expr();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(137);
      throw_();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(138);
      eval();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(139);
      wait_assign();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(140);
      assign();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(141);
      nls();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(142);
      take();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(143);
      give();
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(144);
      mockup_impl();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModuleContext ------------------------------------------------------------------

MavkaParser::ModuleContext::ModuleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::ModuleContext::MODULE() {
  return getToken(MavkaParser::MODULE, 0);
}

std::vector<MavkaParser::NlContext *> MavkaParser::ModuleContext::nl() {
  return getRuleContexts<MavkaParser::NlContext>();
}

MavkaParser::NlContext* MavkaParser::ModuleContext::nl(size_t i) {
  return getRuleContext<MavkaParser::NlContext>(i);
}

MavkaParser::NlsContext* MavkaParser::ModuleContext::nls() {
  return getRuleContext<MavkaParser::NlsContext>(0);
}

tree::TerminalNode* MavkaParser::ModuleContext::END() {
  return getToken(MavkaParser::END, 0);
}

MavkaParser::IdentifierContext* MavkaParser::ModuleContext::identifier() {
  return getRuleContext<MavkaParser::IdentifierContext>(0);
}

MavkaParser::ProgramContext* MavkaParser::ModuleContext::program() {
  return getRuleContext<MavkaParser::ProgramContext>(0);
}


size_t MavkaParser::ModuleContext::getRuleIndex() const {
  return MavkaParser::RuleModule;
}

void MavkaParser::ModuleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModule(this);
}

void MavkaParser::ModuleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModule(this);
}

MavkaParser::ModuleContext* MavkaParser::module() {
  ModuleContext *_localctx = _tracker.createInstance<ModuleContext>(_ctx, getState());
  enterRule(_localctx, 6, MavkaParser::RuleModule);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(147);
    match(MavkaParser::MODULE);
    setState(149);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MavkaParser::ID) {
      setState(148);
      antlrcpp::downCast<ModuleContext *>(_localctx)->m_name = identifier();
    }
    setState(151);
    nl();
    setState(155);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      setState(152);
      antlrcpp::downCast<ModuleContext *>(_localctx)->m_program = program();
      setState(153);
      nl();
      break;
    }

    default:
      break;
    }
    setState(157);
    nls();
    setState(158);
    match(MavkaParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructureContext ------------------------------------------------------------------

MavkaParser::StructureContext::StructureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::StructureContext::STRUCTURE() {
  return getToken(MavkaParser::STRUCTURE, 0);
}

std::vector<MavkaParser::NlContext *> MavkaParser::StructureContext::nl() {
  return getRuleContexts<MavkaParser::NlContext>();
}

MavkaParser::NlContext* MavkaParser::StructureContext::nl(size_t i) {
  return getRuleContext<MavkaParser::NlContext>(i);
}

MavkaParser::NlsContext* MavkaParser::StructureContext::nls() {
  return getRuleContext<MavkaParser::NlsContext>(0);
}

tree::TerminalNode* MavkaParser::StructureContext::END() {
  return getToken(MavkaParser::END, 0);
}

MavkaParser::IdentifierContext* MavkaParser::StructureContext::identifier() {
  return getRuleContext<MavkaParser::IdentifierContext>(0);
}

tree::TerminalNode* MavkaParser::StructureContext::IS() {
  return getToken(MavkaParser::IS, 0);
}

MavkaParser::Identifiers_chainContext* MavkaParser::StructureContext::identifiers_chain() {
  return getRuleContext<MavkaParser::Identifiers_chainContext>(0);
}

MavkaParser::Structure_elementsContext* MavkaParser::StructureContext::structure_elements() {
  return getRuleContext<MavkaParser::Structure_elementsContext>(0);
}


size_t MavkaParser::StructureContext::getRuleIndex() const {
  return MavkaParser::RuleStructure;
}

void MavkaParser::StructureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructure(this);
}

void MavkaParser::StructureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructure(this);
}

MavkaParser::StructureContext* MavkaParser::structure() {
  StructureContext *_localctx = _tracker.createInstance<StructureContext>(_ctx, getState());
  enterRule(_localctx, 8, MavkaParser::RuleStructure);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(160);
    match(MavkaParser::STRUCTURE);
    setState(161);
    antlrcpp::downCast<StructureContext *>(_localctx)->s_name = identifier();
    setState(164);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MavkaParser::IS) {
      setState(162);
      match(MavkaParser::IS);
      setState(163);
      antlrcpp::downCast<StructureContext *>(_localctx)->s_parent = identifiers_chain(0);
    }
    setState(166);
    nl();
    setState(167);
    nls();
    setState(171);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 11610842790363140) != 0) || _la == MavkaParser::ID) {
      setState(168);
      antlrcpp::downCast<StructureContext *>(_localctx)->s_elements = structure_elements();
      setState(169);
      nl();
    }
    setState(173);
    match(MavkaParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Structure_elementsContext ------------------------------------------------------------------

MavkaParser::Structure_elementsContext::Structure_elementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MavkaParser::Structure_elementContext *> MavkaParser::Structure_elementsContext::structure_element() {
  return getRuleContexts<MavkaParser::Structure_elementContext>();
}

MavkaParser::Structure_elementContext* MavkaParser::Structure_elementsContext::structure_element(size_t i) {
  return getRuleContext<MavkaParser::Structure_elementContext>(i);
}

std::vector<MavkaParser::NlContext *> MavkaParser::Structure_elementsContext::nl() {
  return getRuleContexts<MavkaParser::NlContext>();
}

MavkaParser::NlContext* MavkaParser::Structure_elementsContext::nl(size_t i) {
  return getRuleContext<MavkaParser::NlContext>(i);
}


size_t MavkaParser::Structure_elementsContext::getRuleIndex() const {
  return MavkaParser::RuleStructure_elements;
}

void MavkaParser::Structure_elementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructure_elements(this);
}

void MavkaParser::Structure_elementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructure_elements(this);
}

MavkaParser::Structure_elementsContext* MavkaParser::structure_elements() {
  Structure_elementsContext *_localctx = _tracker.createInstance<Structure_elementsContext>(_ctx, getState());
  enterRule(_localctx, 10, MavkaParser::RuleStructure_elements);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(175);
    structure_element();
    setState(181);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(176);
        nl();
        setState(177);
        structure_element(); 
      }
      setState(183);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Structure_elementContext ------------------------------------------------------------------

MavkaParser::Structure_elementContext::Structure_elementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MavkaParser::ParamContext* MavkaParser::Structure_elementContext::param() {
  return getRuleContext<MavkaParser::ParamContext>(0);
}

MavkaParser::DiiaContext* MavkaParser::Structure_elementContext::diia() {
  return getRuleContext<MavkaParser::DiiaContext>(0);
}

MavkaParser::NlsContext* MavkaParser::Structure_elementContext::nls() {
  return getRuleContext<MavkaParser::NlsContext>(0);
}


size_t MavkaParser::Structure_elementContext::getRuleIndex() const {
  return MavkaParser::RuleStructure_element;
}

void MavkaParser::Structure_elementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructure_element(this);
}

void MavkaParser::Structure_elementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructure_element(this);
}

MavkaParser::Structure_elementContext* MavkaParser::structure_element() {
  Structure_elementContext *_localctx = _tracker.createInstance<Structure_elementContext>(_ctx, getState());
  enterRule(_localctx, 12, MavkaParser::RuleStructure_element);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(187);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MavkaParser::SPREAD:
      case MavkaParser::OPEN_PAREN:
      case MavkaParser::OPEN_ARRAY:
      case MavkaParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(184);
        param();
        break;
      }

      case MavkaParser::DIIA:
      case MavkaParser::ASYNC: {
        enterOuterAlt(_localctx, 2);
        setState(185);
        diia();
        break;
      }

      case MavkaParser::NL: {
        enterOuterAlt(_localctx, 3);
        setState(186);
        nls();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MockupContext ------------------------------------------------------------------

MavkaParser::MockupContext::MockupContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::MockupContext::MOCKUP() {
  return getToken(MavkaParser::MOCKUP, 0);
}

std::vector<MavkaParser::NlContext *> MavkaParser::MockupContext::nl() {
  return getRuleContexts<MavkaParser::NlContext>();
}

MavkaParser::NlContext* MavkaParser::MockupContext::nl(size_t i) {
  return getRuleContext<MavkaParser::NlContext>(i);
}

std::vector<MavkaParser::NlsContext *> MavkaParser::MockupContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::MockupContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

tree::TerminalNode* MavkaParser::MockupContext::END() {
  return getToken(MavkaParser::END, 0);
}

MavkaParser::IdentifierContext* MavkaParser::MockupContext::identifier() {
  return getRuleContext<MavkaParser::IdentifierContext>(0);
}

tree::TerminalNode* MavkaParser::MockupContext::IS() {
  return getToken(MavkaParser::IS, 0);
}

MavkaParser::Mockup_parentsContext* MavkaParser::MockupContext::mockup_parents() {
  return getRuleContext<MavkaParser::Mockup_parentsContext>(0);
}

MavkaParser::Mockup_methodsContext* MavkaParser::MockupContext::mockup_methods() {
  return getRuleContext<MavkaParser::Mockup_methodsContext>(0);
}


size_t MavkaParser::MockupContext::getRuleIndex() const {
  return MavkaParser::RuleMockup;
}

void MavkaParser::MockupContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMockup(this);
}

void MavkaParser::MockupContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMockup(this);
}

MavkaParser::MockupContext* MavkaParser::mockup() {
  MockupContext *_localctx = _tracker.createInstance<MockupContext>(_ctx, getState());
  enterRule(_localctx, 14, MavkaParser::RuleMockup);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(189);
    match(MavkaParser::MOCKUP);
    setState(190);
    antlrcpp::downCast<MockupContext *>(_localctx)->m_name = identifier();
    setState(193);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MavkaParser::IS) {
      setState(191);
      match(MavkaParser::IS);
      setState(192);
      antlrcpp::downCast<MockupContext *>(_localctx)->m_parents = mockup_parents();
    }
    setState(195);
    nl();
    setState(196);
    nls();
    setState(200);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MavkaParser::ID) {
      setState(197);
      antlrcpp::downCast<MockupContext *>(_localctx)->m_methods = mockup_methods();
      setState(198);
      nl();
    }
    setState(202);
    nls();
    setState(203);
    match(MavkaParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Mockup_parentsContext ------------------------------------------------------------------

MavkaParser::Mockup_parentsContext::Mockup_parentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MavkaParser::Identifiers_chainContext *> MavkaParser::Mockup_parentsContext::identifiers_chain() {
  return getRuleContexts<MavkaParser::Identifiers_chainContext>();
}

MavkaParser::Identifiers_chainContext* MavkaParser::Mockup_parentsContext::identifiers_chain(size_t i) {
  return getRuleContext<MavkaParser::Identifiers_chainContext>(i);
}

std::vector<tree::TerminalNode *> MavkaParser::Mockup_parentsContext::COMMA() {
  return getTokens(MavkaParser::COMMA);
}

tree::TerminalNode* MavkaParser::Mockup_parentsContext::COMMA(size_t i) {
  return getToken(MavkaParser::COMMA, i);
}


size_t MavkaParser::Mockup_parentsContext::getRuleIndex() const {
  return MavkaParser::RuleMockup_parents;
}

void MavkaParser::Mockup_parentsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMockup_parents(this);
}

void MavkaParser::Mockup_parentsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMockup_parents(this);
}

MavkaParser::Mockup_parentsContext* MavkaParser::mockup_parents() {
  Mockup_parentsContext *_localctx = _tracker.createInstance<Mockup_parentsContext>(_ctx, getState());
  enterRule(_localctx, 16, MavkaParser::RuleMockup_parents);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(205);
    identifiers_chain(0);
    setState(210);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MavkaParser::COMMA) {
      setState(206);
      match(MavkaParser::COMMA);
      setState(207);
      identifiers_chain(0);
      setState(212);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Mockup_methodsContext ------------------------------------------------------------------

MavkaParser::Mockup_methodsContext::Mockup_methodsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MavkaParser::Mockup_methodContext *> MavkaParser::Mockup_methodsContext::mockup_method() {
  return getRuleContexts<MavkaParser::Mockup_methodContext>();
}

MavkaParser::Mockup_methodContext* MavkaParser::Mockup_methodsContext::mockup_method(size_t i) {
  return getRuleContext<MavkaParser::Mockup_methodContext>(i);
}

std::vector<MavkaParser::NlContext *> MavkaParser::Mockup_methodsContext::nl() {
  return getRuleContexts<MavkaParser::NlContext>();
}

MavkaParser::NlContext* MavkaParser::Mockup_methodsContext::nl(size_t i) {
  return getRuleContext<MavkaParser::NlContext>(i);
}


size_t MavkaParser::Mockup_methodsContext::getRuleIndex() const {
  return MavkaParser::RuleMockup_methods;
}

void MavkaParser::Mockup_methodsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMockup_methods(this);
}

void MavkaParser::Mockup_methodsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMockup_methods(this);
}

MavkaParser::Mockup_methodsContext* MavkaParser::mockup_methods() {
  Mockup_methodsContext *_localctx = _tracker.createInstance<Mockup_methodsContext>(_ctx, getState());
  enterRule(_localctx, 18, MavkaParser::RuleMockup_methods);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(213);
    mockup_method();
    setState(219);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(214);
        nl();
        setState(215);
        mockup_method(); 
      }
      setState(221);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Mockup_methodContext ------------------------------------------------------------------

MavkaParser::Mockup_methodContext::Mockup_methodContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::Mockup_methodContext::OPEN_PAREN() {
  return getToken(MavkaParser::OPEN_PAREN, 0);
}

tree::TerminalNode* MavkaParser::Mockup_methodContext::CLOSE_PAREN() {
  return getToken(MavkaParser::CLOSE_PAREN, 0);
}

MavkaParser::IdentifierContext* MavkaParser::Mockup_methodContext::identifier() {
  return getRuleContext<MavkaParser::IdentifierContext>(0);
}

std::vector<MavkaParser::NlsContext *> MavkaParser::Mockup_methodContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Mockup_methodContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

MavkaParser::Type_valueContext* MavkaParser::Mockup_methodContext::type_value() {
  return getRuleContext<MavkaParser::Type_valueContext>(0);
}

MavkaParser::ParamsContext* MavkaParser::Mockup_methodContext::params() {
  return getRuleContext<MavkaParser::ParamsContext>(0);
}


size_t MavkaParser::Mockup_methodContext::getRuleIndex() const {
  return MavkaParser::RuleMockup_method;
}

void MavkaParser::Mockup_methodContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMockup_method(this);
}

void MavkaParser::Mockup_methodContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMockup_method(this);
}

MavkaParser::Mockup_methodContext* MavkaParser::mockup_method() {
  Mockup_methodContext *_localctx = _tracker.createInstance<Mockup_methodContext>(_ctx, getState());
  enterRule(_localctx, 20, MavkaParser::RuleMockup_method);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(222);
    antlrcpp::downCast<Mockup_methodContext *>(_localctx)->mm_name = identifier();
    setState(223);
    match(MavkaParser::OPEN_PAREN);

    setState(224);
    nls();
    setState(226);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 46) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 46)) & 70368744177825) != 0)) {
      setState(225);
      antlrcpp::downCast<Mockup_methodContext *>(_localctx)->mm_params = params();
    }
    setState(228);
    nls();
    setState(230);
    match(MavkaParser::CLOSE_PAREN);
    setState(232);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MavkaParser::ID) {
      setState(231);
      antlrcpp::downCast<Mockup_methodContext *>(_localctx)->mm_type = type_value(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Mockup_implContext ------------------------------------------------------------------

MavkaParser::Mockup_implContext::Mockup_implContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::Mockup_implContext::IMPLEMENT() {
  return getToken(MavkaParser::IMPLEMENT, 0);
}

tree::TerminalNode* MavkaParser::Mockup_implContext::AS() {
  return getToken(MavkaParser::AS, 0);
}

std::vector<MavkaParser::NlContext *> MavkaParser::Mockup_implContext::nl() {
  return getRuleContexts<MavkaParser::NlContext>();
}

MavkaParser::NlContext* MavkaParser::Mockup_implContext::nl(size_t i) {
  return getRuleContext<MavkaParser::NlContext>(i);
}

std::vector<MavkaParser::NlsContext *> MavkaParser::Mockup_implContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Mockup_implContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

tree::TerminalNode* MavkaParser::Mockup_implContext::END() {
  return getToken(MavkaParser::END, 0);
}

std::vector<MavkaParser::Identifiers_chainContext *> MavkaParser::Mockup_implContext::identifiers_chain() {
  return getRuleContexts<MavkaParser::Identifiers_chainContext>();
}

MavkaParser::Identifiers_chainContext* MavkaParser::Mockup_implContext::identifiers_chain(size_t i) {
  return getRuleContext<MavkaParser::Identifiers_chainContext>(i);
}

MavkaParser::Mockup_impl_bodyContext* MavkaParser::Mockup_implContext::mockup_impl_body() {
  return getRuleContext<MavkaParser::Mockup_impl_bodyContext>(0);
}


size_t MavkaParser::Mockup_implContext::getRuleIndex() const {
  return MavkaParser::RuleMockup_impl;
}

void MavkaParser::Mockup_implContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMockup_impl(this);
}

void MavkaParser::Mockup_implContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMockup_impl(this);
}

MavkaParser::Mockup_implContext* MavkaParser::mockup_impl() {
  Mockup_implContext *_localctx = _tracker.createInstance<Mockup_implContext>(_ctx, getState());
  enterRule(_localctx, 22, MavkaParser::RuleMockup_impl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(234);
    match(MavkaParser::IMPLEMENT);
    setState(235);
    antlrcpp::downCast<Mockup_implContext *>(_localctx)->mi_mockup_name = identifiers_chain(0);
    setState(236);
    match(MavkaParser::AS);
    setState(237);
    antlrcpp::downCast<Mockup_implContext *>(_localctx)->mi_structure_name = identifiers_chain(0);
    setState(238);
    nl();
    setState(239);
    nls();
    setState(243);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MavkaParser::DIIA

    || _la == MavkaParser::ASYNC) {
      setState(240);
      antlrcpp::downCast<Mockup_implContext *>(_localctx)->mi_body = mockup_impl_body();
      setState(241);
      nl();
    }
    setState(245);
    nls();
    setState(246);
    match(MavkaParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Mockup_impl_bodyContext ------------------------------------------------------------------

MavkaParser::Mockup_impl_bodyContext::Mockup_impl_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MavkaParser::DiiaContext *> MavkaParser::Mockup_impl_bodyContext::diia() {
  return getRuleContexts<MavkaParser::DiiaContext>();
}

MavkaParser::DiiaContext* MavkaParser::Mockup_impl_bodyContext::diia(size_t i) {
  return getRuleContext<MavkaParser::DiiaContext>(i);
}

std::vector<MavkaParser::NlContext *> MavkaParser::Mockup_impl_bodyContext::nl() {
  return getRuleContexts<MavkaParser::NlContext>();
}

MavkaParser::NlContext* MavkaParser::Mockup_impl_bodyContext::nl(size_t i) {
  return getRuleContext<MavkaParser::NlContext>(i);
}


size_t MavkaParser::Mockup_impl_bodyContext::getRuleIndex() const {
  return MavkaParser::RuleMockup_impl_body;
}

void MavkaParser::Mockup_impl_bodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMockup_impl_body(this);
}

void MavkaParser::Mockup_impl_bodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMockup_impl_body(this);
}

MavkaParser::Mockup_impl_bodyContext* MavkaParser::mockup_impl_body() {
  Mockup_impl_bodyContext *_localctx = _tracker.createInstance<Mockup_impl_bodyContext>(_ctx, getState());
  enterRule(_localctx, 24, MavkaParser::RuleMockup_impl_body);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(248);
    diia();
    setState(254);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(249);
        nl();
        setState(250);
        diia(); 
      }
      setState(256);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DiiaContext ------------------------------------------------------------------

MavkaParser::DiiaContext::DiiaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::DiiaContext::DIIA() {
  return getToken(MavkaParser::DIIA, 0);
}

tree::TerminalNode* MavkaParser::DiiaContext::OPEN_PAREN() {
  return getToken(MavkaParser::OPEN_PAREN, 0);
}

tree::TerminalNode* MavkaParser::DiiaContext::CLOSE_PAREN() {
  return getToken(MavkaParser::CLOSE_PAREN, 0);
}

std::vector<MavkaParser::NlContext *> MavkaParser::DiiaContext::nl() {
  return getRuleContexts<MavkaParser::NlContext>();
}

MavkaParser::NlContext* MavkaParser::DiiaContext::nl(size_t i) {
  return getRuleContext<MavkaParser::NlContext>(i);
}

std::vector<MavkaParser::NlsContext *> MavkaParser::DiiaContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::DiiaContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

tree::TerminalNode* MavkaParser::DiiaContext::END() {
  return getToken(MavkaParser::END, 0);
}

std::vector<MavkaParser::IdentifierContext *> MavkaParser::DiiaContext::identifier() {
  return getRuleContexts<MavkaParser::IdentifierContext>();
}

MavkaParser::IdentifierContext* MavkaParser::DiiaContext::identifier(size_t i) {
  return getRuleContext<MavkaParser::IdentifierContext>(i);
}

tree::TerminalNode* MavkaParser::DiiaContext::DOT() {
  return getToken(MavkaParser::DOT, 0);
}

tree::TerminalNode* MavkaParser::DiiaContext::ASYNC() {
  return getToken(MavkaParser::ASYNC, 0);
}

MavkaParser::Type_valueContext* MavkaParser::DiiaContext::type_value() {
  return getRuleContext<MavkaParser::Type_valueContext>(0);
}

MavkaParser::BodyContext* MavkaParser::DiiaContext::body() {
  return getRuleContext<MavkaParser::BodyContext>(0);
}

MavkaParser::ParamsContext* MavkaParser::DiiaContext::params() {
  return getRuleContext<MavkaParser::ParamsContext>(0);
}


size_t MavkaParser::DiiaContext::getRuleIndex() const {
  return MavkaParser::RuleDiia;
}

void MavkaParser::DiiaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDiia(this);
}

void MavkaParser::DiiaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDiia(this);
}

MavkaParser::DiiaContext* MavkaParser::diia() {
  DiiaContext *_localctx = _tracker.createInstance<DiiaContext>(_ctx, getState());
  enterRule(_localctx, 26, MavkaParser::RuleDiia);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(258);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MavkaParser::ASYNC) {
      setState(257);
      antlrcpp::downCast<DiiaContext *>(_localctx)->d_async = match(MavkaParser::ASYNC);
    }
    setState(260);
    match(MavkaParser::DIIA);
    setState(264);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      setState(261);
      antlrcpp::downCast<DiiaContext *>(_localctx)->d_structure = identifier();
      setState(262);
      match(MavkaParser::DOT);
      break;
    }

    default:
      break;
    }
    setState(266);
    antlrcpp::downCast<DiiaContext *>(_localctx)->d_name = identifier();
    setState(267);
    match(MavkaParser::OPEN_PAREN);

    setState(268);
    nls();
    setState(270);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 46) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 46)) & 70368744177825) != 0)) {
      setState(269);
      antlrcpp::downCast<DiiaContext *>(_localctx)->d_params = params();
    }
    setState(272);
    nls();
    setState(274);
    match(MavkaParser::CLOSE_PAREN);
    setState(276);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MavkaParser::ID) {
      setState(275);
      antlrcpp::downCast<DiiaContext *>(_localctx)->d_type = type_value(0);
    }
    setState(278);
    nl();
    setState(282);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      setState(279);
      antlrcpp::downCast<DiiaContext *>(_localctx)->d_body = body();
      setState(280);
      nl();
      break;
    }

    default:
      break;
    }
    setState(284);
    nls();
    setState(285);
    match(MavkaParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfContext ------------------------------------------------------------------

MavkaParser::IfContext::IfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::IfContext::IF() {
  return getToken(MavkaParser::IF, 0);
}

std::vector<MavkaParser::NlContext *> MavkaParser::IfContext::nl() {
  return getRuleContexts<MavkaParser::NlContext>();
}

MavkaParser::NlContext* MavkaParser::IfContext::nl(size_t i) {
  return getRuleContext<MavkaParser::NlContext>(i);
}

MavkaParser::ExprContext* MavkaParser::IfContext::expr() {
  return getRuleContext<MavkaParser::ExprContext>(0);
}

std::vector<MavkaParser::BodyContext *> MavkaParser::IfContext::body() {
  return getRuleContexts<MavkaParser::BodyContext>();
}

MavkaParser::BodyContext* MavkaParser::IfContext::body(size_t i) {
  return getRuleContext<MavkaParser::BodyContext>(i);
}

tree::TerminalNode* MavkaParser::IfContext::END() {
  return getToken(MavkaParser::END, 0);
}

MavkaParser::IfContext* MavkaParser::IfContext::if_() {
  return getRuleContext<MavkaParser::IfContext>(0);
}

tree::TerminalNode* MavkaParser::IfContext::ELSE() {
  return getToken(MavkaParser::ELSE, 0);
}


size_t MavkaParser::IfContext::getRuleIndex() const {
  return MavkaParser::RuleIf;
}

void MavkaParser::IfContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf(this);
}

void MavkaParser::IfContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf(this);
}

MavkaParser::IfContext* MavkaParser::if_() {
  IfContext *_localctx = _tracker.createInstance<IfContext>(_ctx, getState());
  enterRule(_localctx, 28, MavkaParser::RuleIf);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(287);
    match(MavkaParser::IF);
    setState(288);
    antlrcpp::downCast<IfContext *>(_localctx)->i_value = expr();
    setState(289);
    nl();
    setState(293);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      setState(290);
      antlrcpp::downCast<IfContext *>(_localctx)->i_body = body();
      setState(291);
      nl();
      break;
    }

    default:
      break;
    }
    setState(303);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MavkaParser::END:
      case MavkaParser::ELSE: {
        setState(299);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == MavkaParser::ELSE) {
          setState(295);
          match(MavkaParser::ELSE);
          setState(296);
          antlrcpp::downCast<IfContext *>(_localctx)->i_else_body = body();
          setState(297);
          nl();
        }
        setState(301);
        match(MavkaParser::END);
        break;
      }

      case MavkaParser::IF: {
        setState(302);
        antlrcpp::downCast<IfContext *>(_localctx)->i_else_if = if_();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EachContext ------------------------------------------------------------------

MavkaParser::EachContext::EachContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::EachContext::FOR() {
  return getToken(MavkaParser::FOR, 0);
}

std::vector<MavkaParser::NlContext *> MavkaParser::EachContext::nl() {
  return getRuleContexts<MavkaParser::NlContext>();
}

MavkaParser::NlContext* MavkaParser::EachContext::nl(size_t i) {
  return getRuleContext<MavkaParser::NlContext>(i);
}

tree::TerminalNode* MavkaParser::EachContext::END() {
  return getToken(MavkaParser::END, 0);
}

MavkaParser::ExprContext* MavkaParser::EachContext::expr() {
  return getRuleContext<MavkaParser::ExprContext>(0);
}

tree::TerminalNode* MavkaParser::EachContext::AS() {
  return getToken(MavkaParser::AS, 0);
}

std::vector<MavkaParser::IdentifierContext *> MavkaParser::EachContext::identifier() {
  return getRuleContexts<MavkaParser::IdentifierContext>();
}

MavkaParser::IdentifierContext* MavkaParser::EachContext::identifier(size_t i) {
  return getRuleContext<MavkaParser::IdentifierContext>(i);
}

MavkaParser::BodyContext* MavkaParser::EachContext::body() {
  return getRuleContext<MavkaParser::BodyContext>(0);
}

tree::TerminalNode* MavkaParser::EachContext::COMMA() {
  return getToken(MavkaParser::COMMA, 0);
}


size_t MavkaParser::EachContext::getRuleIndex() const {
  return MavkaParser::RuleEach;
}

void MavkaParser::EachContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEach(this);
}

void MavkaParser::EachContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEach(this);
}

MavkaParser::EachContext* MavkaParser::each() {
  EachContext *_localctx = _tracker.createInstance<EachContext>(_ctx, getState());
  enterRule(_localctx, 30, MavkaParser::RuleEach);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(305);
    match(MavkaParser::FOR);
    setState(306);
    antlrcpp::downCast<EachContext *>(_localctx)->e_iterator = expr();
    setState(314);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MavkaParser::AS) {
      setState(307);
      match(MavkaParser::AS);
      setState(311);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
      case 1: {
        setState(308);
        antlrcpp::downCast<EachContext *>(_localctx)->e_key_name = identifier();
        setState(309);
        match(MavkaParser::COMMA);
        break;
      }

      default:
        break;
      }
      setState(313);
      antlrcpp::downCast<EachContext *>(_localctx)->e_name = identifier();
    }
    setState(316);
    nl();
    setState(320);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 13243617767856156) != 0) || ((((_la - 73) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 73)) & 135790787) != 0)) {
      setState(317);
      antlrcpp::downCast<EachContext *>(_localctx)->e_body = body();
      setState(318);
      nl();
    }
    setState(322);
    match(MavkaParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileContext ------------------------------------------------------------------

MavkaParser::WhileContext::WhileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::WhileContext::WHILE() {
  return getToken(MavkaParser::WHILE, 0);
}

std::vector<MavkaParser::NlContext *> MavkaParser::WhileContext::nl() {
  return getRuleContexts<MavkaParser::NlContext>();
}

MavkaParser::NlContext* MavkaParser::WhileContext::nl(size_t i) {
  return getRuleContext<MavkaParser::NlContext>(i);
}

tree::TerminalNode* MavkaParser::WhileContext::END() {
  return getToken(MavkaParser::END, 0);
}

MavkaParser::ExprContext* MavkaParser::WhileContext::expr() {
  return getRuleContext<MavkaParser::ExprContext>(0);
}

MavkaParser::BodyContext* MavkaParser::WhileContext::body() {
  return getRuleContext<MavkaParser::BodyContext>(0);
}


size_t MavkaParser::WhileContext::getRuleIndex() const {
  return MavkaParser::RuleWhile;
}

void MavkaParser::WhileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhile(this);
}

void MavkaParser::WhileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhile(this);
}

MavkaParser::WhileContext* MavkaParser::while_() {
  WhileContext *_localctx = _tracker.createInstance<WhileContext>(_ctx, getState());
  enterRule(_localctx, 32, MavkaParser::RuleWhile);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(324);
    match(MavkaParser::WHILE);
    setState(325);
    antlrcpp::downCast<WhileContext *>(_localctx)->w_value = expr();
    setState(326);
    nl();
    setState(330);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 13243617767856156) != 0) || ((((_la - 73) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 73)) & 135790787) != 0)) {
      setState(327);
      antlrcpp::downCast<WhileContext *>(_localctx)->w_body = body();
      setState(328);
      nl();
    }
    setState(332);
    match(MavkaParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EvalContext ------------------------------------------------------------------

MavkaParser::EvalContext::EvalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::EvalContext::EVAL() {
  return getToken(MavkaParser::EVAL, 0);
}

MavkaParser::ValueContext* MavkaParser::EvalContext::value() {
  return getRuleContext<MavkaParser::ValueContext>(0);
}


size_t MavkaParser::EvalContext::getRuleIndex() const {
  return MavkaParser::RuleEval;
}

void MavkaParser::EvalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEval(this);
}

void MavkaParser::EvalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEval(this);
}

MavkaParser::EvalContext* MavkaParser::eval() {
  EvalContext *_localctx = _tracker.createInstance<EvalContext>(_ctx, getState());
  enterRule(_localctx, 34, MavkaParser::RuleEval);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(334);
    match(MavkaParser::EVAL);
    setState(335);
    antlrcpp::downCast<EvalContext *>(_localctx)->e_value = value(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TryContext ------------------------------------------------------------------

MavkaParser::TryContext::TryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::TryContext::TRY() {
  return getToken(MavkaParser::TRY, 0);
}

std::vector<MavkaParser::NlContext *> MavkaParser::TryContext::nl() {
  return getRuleContexts<MavkaParser::NlContext>();
}

MavkaParser::NlContext* MavkaParser::TryContext::nl(size_t i) {
  return getRuleContext<MavkaParser::NlContext>(i);
}

tree::TerminalNode* MavkaParser::TryContext::CATCH() {
  return getToken(MavkaParser::CATCH, 0);
}

tree::TerminalNode* MavkaParser::TryContext::END() {
  return getToken(MavkaParser::END, 0);
}

std::vector<MavkaParser::BodyContext *> MavkaParser::TryContext::body() {
  return getRuleContexts<MavkaParser::BodyContext>();
}

MavkaParser::BodyContext* MavkaParser::TryContext::body(size_t i) {
  return getRuleContext<MavkaParser::BodyContext>(i);
}

MavkaParser::IdentifierContext* MavkaParser::TryContext::identifier() {
  return getRuleContext<MavkaParser::IdentifierContext>(0);
}


size_t MavkaParser::TryContext::getRuleIndex() const {
  return MavkaParser::RuleTry;
}

void MavkaParser::TryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTry(this);
}

void MavkaParser::TryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTry(this);
}

MavkaParser::TryContext* MavkaParser::try_() {
  TryContext *_localctx = _tracker.createInstance<TryContext>(_ctx, getState());
  enterRule(_localctx, 36, MavkaParser::RuleTry);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(337);
    match(MavkaParser::TRY);
    setState(338);
    nl();
    setState(339);
    antlrcpp::downCast<TryContext *>(_localctx)->t_body = body();
    setState(340);
    nl();
    setState(341);
    match(MavkaParser::CATCH);
    setState(343);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      setState(342);
      antlrcpp::downCast<TryContext *>(_localctx)->tc_name = identifier();
      break;
    }

    default:
      break;
    }
    setState(348);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 13243617767856156) != 0) || ((((_la - 73) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 73)) & 135790787) != 0)) {
      setState(345);
      antlrcpp::downCast<TryContext *>(_localctx)->tc_body = body();
      setState(346);
      nl();
    }
    setState(350);
    match(MavkaParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TakeContext ------------------------------------------------------------------

MavkaParser::TakeContext::TakeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MavkaParser::TakeContext::getRuleIndex() const {
  return MavkaParser::RuleTake;
}

void MavkaParser::TakeContext::copyFrom(TakeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Take_moduleContext ------------------------------------------------------------------

tree::TerminalNode* MavkaParser::Take_moduleContext::TAKE() {
  return getToken(MavkaParser::TAKE, 0);
}

MavkaParser::Identifiers_chainContext* MavkaParser::Take_moduleContext::identifiers_chain() {
  return getRuleContext<MavkaParser::Identifiers_chainContext>(0);
}

tree::TerminalNode* MavkaParser::Take_moduleContext::AS() {
  return getToken(MavkaParser::AS, 0);
}

tree::TerminalNode* MavkaParser::Take_moduleContext::DOT() {
  return getToken(MavkaParser::DOT, 0);
}

tree::TerminalNode* MavkaParser::Take_moduleContext::STAR_ALL() {
  return getToken(MavkaParser::STAR_ALL, 0);
}

MavkaParser::IdentifierContext* MavkaParser::Take_moduleContext::identifier() {
  return getRuleContext<MavkaParser::IdentifierContext>(0);
}

MavkaParser::Take_moduleContext::Take_moduleContext(TakeContext *ctx) { copyFrom(ctx); }

void MavkaParser::Take_moduleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTake_module(this);
}
void MavkaParser::Take_moduleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTake_module(this);
}
//----------------- Take_pakContext ------------------------------------------------------------------

tree::TerminalNode* MavkaParser::Take_pakContext::TAKE_PAK() {
  return getToken(MavkaParser::TAKE_PAK, 0);
}

MavkaParser::Identifiers_chainContext* MavkaParser::Take_pakContext::identifiers_chain() {
  return getRuleContext<MavkaParser::Identifiers_chainContext>(0);
}

tree::TerminalNode* MavkaParser::Take_pakContext::AS() {
  return getToken(MavkaParser::AS, 0);
}

tree::TerminalNode* MavkaParser::Take_pakContext::STAR_ALL() {
  return getToken(MavkaParser::STAR_ALL, 0);
}

MavkaParser::IdentifierContext* MavkaParser::Take_pakContext::identifier() {
  return getRuleContext<MavkaParser::IdentifierContext>(0);
}

MavkaParser::Take_pakContext::Take_pakContext(TakeContext *ctx) { copyFrom(ctx); }

void MavkaParser::Take_pakContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTake_pak(this);
}
void MavkaParser::Take_pakContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTake_pak(this);
}
//----------------- Take_fileContext ------------------------------------------------------------------

tree::TerminalNode* MavkaParser::Take_fileContext::TAKE_FILE() {
  return getToken(MavkaParser::TAKE_FILE, 0);
}

tree::TerminalNode* MavkaParser::Take_fileContext::AS() {
  return getToken(MavkaParser::AS, 0);
}

tree::TerminalNode* MavkaParser::Take_fileContext::STRING() {
  return getToken(MavkaParser::STRING, 0);
}

MavkaParser::IdentifierContext* MavkaParser::Take_fileContext::identifier() {
  return getRuleContext<MavkaParser::IdentifierContext>(0);
}

MavkaParser::Take_fileContext::Take_fileContext(TakeContext *ctx) { copyFrom(ctx); }

void MavkaParser::Take_fileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTake_file(this);
}
void MavkaParser::Take_fileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTake_file(this);
}
//----------------- Take_remoteContext ------------------------------------------------------------------

tree::TerminalNode* MavkaParser::Take_remoteContext::TAKE() {
  return getToken(MavkaParser::TAKE, 0);
}

tree::TerminalNode* MavkaParser::Take_remoteContext::STRING() {
  return getToken(MavkaParser::STRING, 0);
}

tree::TerminalNode* MavkaParser::Take_remoteContext::AS() {
  return getToken(MavkaParser::AS, 0);
}

MavkaParser::IdentifierContext* MavkaParser::Take_remoteContext::identifier() {
  return getRuleContext<MavkaParser::IdentifierContext>(0);
}

MavkaParser::Take_remoteContext::Take_remoteContext(TakeContext *ctx) { copyFrom(ctx); }

void MavkaParser::Take_remoteContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTake_remote(this);
}
void MavkaParser::Take_remoteContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTake_remote(this);
}
MavkaParser::TakeContext* MavkaParser::take() {
  TakeContext *_localctx = _tracker.createInstance<TakeContext>(_ctx, getState());
  enterRule(_localctx, 38, MavkaParser::RuleTake);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(383);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<MavkaParser::Take_moduleContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(352);
      match(MavkaParser::TAKE);
      setState(354);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MavkaParser::DOT) {
        setState(353);
        antlrcpp::downCast<Take_moduleContext *>(_localctx)->tm_absolute = match(MavkaParser::DOT);
      }
      setState(356);
      antlrcpp::downCast<Take_moduleContext *>(_localctx)->tm_elements_chain = identifiers_chain(0);
      setState(358);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MavkaParser::STAR_ALL) {
        setState(357);
        antlrcpp::downCast<Take_moduleContext *>(_localctx)->tm_star = match(MavkaParser::STAR_ALL);
      }
      setState(362);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MavkaParser::AS) {
        setState(360);
        match(MavkaParser::AS);
        setState(361);
        antlrcpp::downCast<Take_moduleContext *>(_localctx)->tm_as = identifier();
      }
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<MavkaParser::Take_pakContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(364);
      match(MavkaParser::TAKE_PAK);
      setState(365);
      antlrcpp::downCast<Take_pakContext *>(_localctx)->tp_elements_chain = identifiers_chain(0);
      setState(367);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MavkaParser::STAR_ALL) {
        setState(366);
        antlrcpp::downCast<Take_pakContext *>(_localctx)->tp_star = match(MavkaParser::STAR_ALL);
      }
      setState(371);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MavkaParser::AS) {
        setState(369);
        match(MavkaParser::AS);
        setState(370);
        antlrcpp::downCast<Take_pakContext *>(_localctx)->tp_as = identifier();
      }
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<MavkaParser::Take_fileContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(373);
      match(MavkaParser::TAKE_FILE);
      setState(374);
      antlrcpp::downCast<Take_fileContext *>(_localctx)->tf_name = match(MavkaParser::STRING);
      setState(375);
      match(MavkaParser::AS);
      setState(376);
      antlrcpp::downCast<Take_fileContext *>(_localctx)->tf_as = identifier();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<MavkaParser::Take_remoteContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(377);
      match(MavkaParser::TAKE);
      setState(378);
      antlrcpp::downCast<Take_remoteContext *>(_localctx)->tr_url = match(MavkaParser::STRING);
      setState(381);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MavkaParser::AS) {
        setState(379);
        match(MavkaParser::AS);
        setState(380);
        antlrcpp::downCast<Take_remoteContext *>(_localctx)->tr_as = identifier();
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GiveContext ------------------------------------------------------------------

MavkaParser::GiveContext::GiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::GiveContext::GIVE() {
  return getToken(MavkaParser::GIVE, 0);
}

std::vector<MavkaParser::Give_elementContext *> MavkaParser::GiveContext::give_element() {
  return getRuleContexts<MavkaParser::Give_elementContext>();
}

MavkaParser::Give_elementContext* MavkaParser::GiveContext::give_element(size_t i) {
  return getRuleContext<MavkaParser::Give_elementContext>(i);
}

std::vector<tree::TerminalNode *> MavkaParser::GiveContext::COMMA() {
  return getTokens(MavkaParser::COMMA);
}

tree::TerminalNode* MavkaParser::GiveContext::COMMA(size_t i) {
  return getToken(MavkaParser::COMMA, i);
}


size_t MavkaParser::GiveContext::getRuleIndex() const {
  return MavkaParser::RuleGive;
}

void MavkaParser::GiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGive(this);
}

void MavkaParser::GiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGive(this);
}

MavkaParser::GiveContext* MavkaParser::give() {
  GiveContext *_localctx = _tracker.createInstance<GiveContext>(_ctx, getState());
  enterRule(_localctx, 40, MavkaParser::RuleGive);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(385);
    match(MavkaParser::GIVE);
    setState(386);
    give_element();
    setState(391);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MavkaParser::COMMA) {
      setState(387);
      match(MavkaParser::COMMA);
      setState(388);
      give_element();
      setState(393);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Give_elementContext ------------------------------------------------------------------

MavkaParser::Give_elementContext::Give_elementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MavkaParser::IdentifierContext *> MavkaParser::Give_elementContext::identifier() {
  return getRuleContexts<MavkaParser::IdentifierContext>();
}

MavkaParser::IdentifierContext* MavkaParser::Give_elementContext::identifier(size_t i) {
  return getRuleContext<MavkaParser::IdentifierContext>(i);
}

tree::TerminalNode* MavkaParser::Give_elementContext::AS() {
  return getToken(MavkaParser::AS, 0);
}


size_t MavkaParser::Give_elementContext::getRuleIndex() const {
  return MavkaParser::RuleGive_element;
}

void MavkaParser::Give_elementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGive_element(this);
}

void MavkaParser::Give_elementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGive_element(this);
}

MavkaParser::Give_elementContext* MavkaParser::give_element() {
  Give_elementContext *_localctx = _tracker.createInstance<Give_elementContext>(_ctx, getState());
  enterRule(_localctx, 42, MavkaParser::RuleGive_element);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(394);
    antlrcpp::downCast<Give_elementContext *>(_localctx)->ge_name = identifier();
    setState(397);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MavkaParser::AS) {
      setState(395);
      match(MavkaParser::AS);
      setState(396);
      antlrcpp::downCast<Give_elementContext *>(_localctx)->ge_as = identifier();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueContext ------------------------------------------------------------------

MavkaParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MavkaParser::ValueContext::getRuleIndex() const {
  return MavkaParser::RuleValue;
}

void MavkaParser::ValueContext::copyFrom(ValueContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Arithmetic_mulContext ------------------------------------------------------------------

std::vector<MavkaParser::ValueContext *> MavkaParser::Arithmetic_mulContext::value() {
  return getRuleContexts<MavkaParser::ValueContext>();
}

MavkaParser::ValueContext* MavkaParser::Arithmetic_mulContext::value(size_t i) {
  return getRuleContext<MavkaParser::ValueContext>(i);
}

MavkaParser::Arithmetic_op_mulContext* MavkaParser::Arithmetic_mulContext::arithmetic_op_mul() {
  return getRuleContext<MavkaParser::Arithmetic_op_mulContext>(0);
}

MavkaParser::Arithmetic_mulContext::Arithmetic_mulContext(ValueContext *ctx) { copyFrom(ctx); }

void MavkaParser::Arithmetic_mulContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArithmetic_mul(this);
}
void MavkaParser::Arithmetic_mulContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArithmetic_mul(this);
}
//----------------- Get_elementContext ------------------------------------------------------------------

tree::TerminalNode* MavkaParser::Get_elementContext::OPEN_ARRAY() {
  return getToken(MavkaParser::OPEN_ARRAY, 0);
}

tree::TerminalNode* MavkaParser::Get_elementContext::CLOSE_ARRAY() {
  return getToken(MavkaParser::CLOSE_ARRAY, 0);
}

MavkaParser::ValueContext* MavkaParser::Get_elementContext::value() {
  return getRuleContext<MavkaParser::ValueContext>(0);
}

MavkaParser::ExprContext* MavkaParser::Get_elementContext::expr() {
  return getRuleContext<MavkaParser::ExprContext>(0);
}

MavkaParser::Get_elementContext::Get_elementContext(ValueContext *ctx) { copyFrom(ctx); }

void MavkaParser::Get_elementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGet_element(this);
}
void MavkaParser::Get_elementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGet_element(this);
}
//----------------- ChainContext ------------------------------------------------------------------

tree::TerminalNode* MavkaParser::ChainContext::DOT() {
  return getToken(MavkaParser::DOT, 0);
}

MavkaParser::ValueContext* MavkaParser::ChainContext::value() {
  return getRuleContext<MavkaParser::ValueContext>(0);
}

MavkaParser::Extended_identifierContext* MavkaParser::ChainContext::extended_identifier() {
  return getRuleContext<MavkaParser::Extended_identifierContext>(0);
}

MavkaParser::ChainContext::ChainContext(ValueContext *ctx) { copyFrom(ctx); }

void MavkaParser::ChainContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterChain(this);
}
void MavkaParser::ChainContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitChain(this);
}
//----------------- Pre_incrementContext ------------------------------------------------------------------

tree::TerminalNode* MavkaParser::Pre_incrementContext::INCREMENT() {
  return getToken(MavkaParser::INCREMENT, 0);
}

MavkaParser::ValueContext* MavkaParser::Pre_incrementContext::value() {
  return getRuleContext<MavkaParser::ValueContext>(0);
}

MavkaParser::Pre_incrementContext::Pre_incrementContext(ValueContext *ctx) { copyFrom(ctx); }

void MavkaParser::Pre_incrementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPre_increment(this);
}
void MavkaParser::Pre_incrementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPre_increment(this);
}
//----------------- Arithmetic_addContext ------------------------------------------------------------------

std::vector<MavkaParser::ValueContext *> MavkaParser::Arithmetic_addContext::value() {
  return getRuleContexts<MavkaParser::ValueContext>();
}

MavkaParser::ValueContext* MavkaParser::Arithmetic_addContext::value(size_t i) {
  return getRuleContext<MavkaParser::ValueContext>(i);
}

MavkaParser::Arithmetic_op_addContext* MavkaParser::Arithmetic_addContext::arithmetic_op_add() {
  return getRuleContext<MavkaParser::Arithmetic_op_addContext>(0);
}

MavkaParser::Arithmetic_addContext::Arithmetic_addContext(ValueContext *ctx) { copyFrom(ctx); }

void MavkaParser::Arithmetic_addContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArithmetic_add(this);
}
void MavkaParser::Arithmetic_addContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArithmetic_add(this);
}
//----------------- ComparisonContext ------------------------------------------------------------------

std::vector<MavkaParser::ValueContext *> MavkaParser::ComparisonContext::value() {
  return getRuleContexts<MavkaParser::ValueContext>();
}

MavkaParser::ValueContext* MavkaParser::ComparisonContext::value(size_t i) {
  return getRuleContext<MavkaParser::ValueContext>(i);
}

MavkaParser::Comparison_opContext* MavkaParser::ComparisonContext::comparison_op() {
  return getRuleContext<MavkaParser::Comparison_opContext>(0);
}

MavkaParser::ComparisonContext::ComparisonContext(ValueContext *ctx) { copyFrom(ctx); }

void MavkaParser::ComparisonContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparison(this);
}
void MavkaParser::ComparisonContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparison(this);
}
//----------------- StringContext ------------------------------------------------------------------

tree::TerminalNode* MavkaParser::StringContext::STRING() {
  return getToken(MavkaParser::STRING, 0);
}

MavkaParser::StringContext::StringContext(ValueContext *ctx) { copyFrom(ctx); }

void MavkaParser::StringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterString(this);
}
void MavkaParser::StringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitString(this);
}
//----------------- Bitwise_notContext ------------------------------------------------------------------

tree::TerminalNode* MavkaParser::Bitwise_notContext::TILDA() {
  return getToken(MavkaParser::TILDA, 0);
}

MavkaParser::ValueContext* MavkaParser::Bitwise_notContext::value() {
  return getRuleContext<MavkaParser::ValueContext>(0);
}

MavkaParser::Bitwise_notContext::Bitwise_notContext(ValueContext *ctx) { copyFrom(ctx); }

void MavkaParser::Bitwise_notContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitwise_not(this);
}
void MavkaParser::Bitwise_notContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitwise_not(this);
}
//----------------- TestContext ------------------------------------------------------------------

std::vector<MavkaParser::ValueContext *> MavkaParser::TestContext::value() {
  return getRuleContexts<MavkaParser::ValueContext>();
}

MavkaParser::ValueContext* MavkaParser::TestContext::value(size_t i) {
  return getRuleContext<MavkaParser::ValueContext>(i);
}

MavkaParser::Test_opContext* MavkaParser::TestContext::test_op() {
  return getRuleContext<MavkaParser::Test_opContext>(0);
}

MavkaParser::TestContext::TestContext(ValueContext *ctx) { copyFrom(ctx); }

void MavkaParser::TestContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTest(this);
}
void MavkaParser::TestContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTest(this);
}
//----------------- Call_exprContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> MavkaParser::Call_exprContext::OPEN_PAREN() {
  return getTokens(MavkaParser::OPEN_PAREN);
}

tree::TerminalNode* MavkaParser::Call_exprContext::OPEN_PAREN(size_t i) {
  return getToken(MavkaParser::OPEN_PAREN, i);
}

std::vector<tree::TerminalNode *> MavkaParser::Call_exprContext::CLOSE_PAREN() {
  return getTokens(MavkaParser::CLOSE_PAREN);
}

tree::TerminalNode* MavkaParser::Call_exprContext::CLOSE_PAREN(size_t i) {
  return getToken(MavkaParser::CLOSE_PAREN, i);
}

MavkaParser::ExprContext* MavkaParser::Call_exprContext::expr() {
  return getRuleContext<MavkaParser::ExprContext>(0);
}

MavkaParser::ArgsContext* MavkaParser::Call_exprContext::args() {
  return getRuleContext<MavkaParser::ArgsContext>(0);
}

MavkaParser::Named_argsContext* MavkaParser::Call_exprContext::named_args() {
  return getRuleContext<MavkaParser::Named_argsContext>(0);
}

MavkaParser::Call_exprContext::Call_exprContext(ValueContext *ctx) { copyFrom(ctx); }

void MavkaParser::Call_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCall_expr(this);
}
void MavkaParser::Call_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCall_expr(this);
}
//----------------- PositiveContext ------------------------------------------------------------------

tree::TerminalNode* MavkaParser::PositiveContext::PLUS() {
  return getToken(MavkaParser::PLUS, 0);
}

MavkaParser::ValueContext* MavkaParser::PositiveContext::value() {
  return getRuleContext<MavkaParser::ValueContext>(0);
}

MavkaParser::PositiveContext::PositiveContext(ValueContext *ctx) { copyFrom(ctx); }

void MavkaParser::PositiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPositive(this);
}
void MavkaParser::PositiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPositive(this);
}
//----------------- NestedContext ------------------------------------------------------------------

tree::TerminalNode* MavkaParser::NestedContext::OPEN_PAREN() {
  return getToken(MavkaParser::OPEN_PAREN, 0);
}

tree::TerminalNode* MavkaParser::NestedContext::CLOSE_PAREN() {
  return getToken(MavkaParser::CLOSE_PAREN, 0);
}

MavkaParser::ExprContext* MavkaParser::NestedContext::expr() {
  return getRuleContext<MavkaParser::ExprContext>(0);
}

MavkaParser::NestedContext::NestedContext(ValueContext *ctx) { copyFrom(ctx); }

void MavkaParser::NestedContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNested(this);
}
void MavkaParser::NestedContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNested(this);
}
//----------------- CallContext ------------------------------------------------------------------

tree::TerminalNode* MavkaParser::CallContext::OPEN_PAREN() {
  return getToken(MavkaParser::OPEN_PAREN, 0);
}

tree::TerminalNode* MavkaParser::CallContext::CLOSE_PAREN() {
  return getToken(MavkaParser::CLOSE_PAREN, 0);
}

MavkaParser::ValueContext* MavkaParser::CallContext::value() {
  return getRuleContext<MavkaParser::ValueContext>(0);
}

MavkaParser::ArgsContext* MavkaParser::CallContext::args() {
  return getRuleContext<MavkaParser::ArgsContext>(0);
}

MavkaParser::Named_argsContext* MavkaParser::CallContext::named_args() {
  return getRuleContext<MavkaParser::Named_argsContext>(0);
}

MavkaParser::CallContext::CallContext(ValueContext *ctx) { copyFrom(ctx); }

void MavkaParser::CallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCall(this);
}
void MavkaParser::CallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCall(this);
}
//----------------- NumberContext ------------------------------------------------------------------

tree::TerminalNode* MavkaParser::NumberContext::NUMBER() {
  return getToken(MavkaParser::NUMBER, 0);
}

MavkaParser::NumberContext::NumberContext(ValueContext *ctx) { copyFrom(ctx); }

void MavkaParser::NumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumber(this);
}
void MavkaParser::NumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumber(this);
}
//----------------- NegativeContext ------------------------------------------------------------------

tree::TerminalNode* MavkaParser::NegativeContext::MINUS() {
  return getToken(MavkaParser::MINUS, 0);
}

MavkaParser::ValueContext* MavkaParser::NegativeContext::value() {
  return getRuleContext<MavkaParser::ValueContext>(0);
}

MavkaParser::NegativeContext::NegativeContext(ValueContext *ctx) { copyFrom(ctx); }

void MavkaParser::NegativeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNegative(this);
}
void MavkaParser::NegativeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNegative(this);
}
//----------------- NotContext ------------------------------------------------------------------

tree::TerminalNode* MavkaParser::NotContext::NOT() {
  return getToken(MavkaParser::NOT, 0);
}

MavkaParser::ValueContext* MavkaParser::NotContext::value() {
  return getRuleContext<MavkaParser::ValueContext>(0);
}

MavkaParser::NotContext::NotContext(ValueContext *ctx) { copyFrom(ctx); }

void MavkaParser::NotContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNot(this);
}
void MavkaParser::NotContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNot(this);
}
//----------------- DictionaryContext ------------------------------------------------------------------

tree::TerminalNode* MavkaParser::DictionaryContext::OPEN_PAREN() {
  return getToken(MavkaParser::OPEN_PAREN, 0);
}

tree::TerminalNode* MavkaParser::DictionaryContext::CLOSE_PAREN() {
  return getToken(MavkaParser::CLOSE_PAREN, 0);
}

MavkaParser::Dictionary_argsContext* MavkaParser::DictionaryContext::dictionary_args() {
  return getRuleContext<MavkaParser::Dictionary_argsContext>(0);
}

MavkaParser::DictionaryContext::DictionaryContext(ValueContext *ctx) { copyFrom(ctx); }

void MavkaParser::DictionaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDictionary(this);
}
void MavkaParser::DictionaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDictionary(this);
}
//----------------- ArrayContext ------------------------------------------------------------------

tree::TerminalNode* MavkaParser::ArrayContext::OPEN_ARRAY() {
  return getToken(MavkaParser::OPEN_ARRAY, 0);
}

tree::TerminalNode* MavkaParser::ArrayContext::CLOSE_ARRAY() {
  return getToken(MavkaParser::CLOSE_ARRAY, 0);
}

MavkaParser::Array_elementsContext* MavkaParser::ArrayContext::array_elements() {
  return getRuleContext<MavkaParser::Array_elementsContext>(0);
}

MavkaParser::ArrayContext::ArrayContext(ValueContext *ctx) { copyFrom(ctx); }

void MavkaParser::ArrayContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArray(this);
}
void MavkaParser::ArrayContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArray(this);
}
//----------------- Pre_decrementContext ------------------------------------------------------------------

tree::TerminalNode* MavkaParser::Pre_decrementContext::DECREMENT() {
  return getToken(MavkaParser::DECREMENT, 0);
}

MavkaParser::ValueContext* MavkaParser::Pre_decrementContext::value() {
  return getRuleContext<MavkaParser::ValueContext>(0);
}

MavkaParser::Pre_decrementContext::Pre_decrementContext(ValueContext *ctx) { copyFrom(ctx); }

void MavkaParser::Pre_decrementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPre_decrement(this);
}
void MavkaParser::Pre_decrementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPre_decrement(this);
}
//----------------- BitwiseContext ------------------------------------------------------------------

std::vector<MavkaParser::ValueContext *> MavkaParser::BitwiseContext::value() {
  return getRuleContexts<MavkaParser::ValueContext>();
}

MavkaParser::ValueContext* MavkaParser::BitwiseContext::value(size_t i) {
  return getRuleContext<MavkaParser::ValueContext>(i);
}

MavkaParser::Bitwise_opContext* MavkaParser::BitwiseContext::bitwise_op() {
  return getRuleContext<MavkaParser::Bitwise_opContext>(0);
}

MavkaParser::BitwiseContext::BitwiseContext(ValueContext *ctx) { copyFrom(ctx); }

void MavkaParser::BitwiseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitwise(this);
}
void MavkaParser::BitwiseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitwise(this);
}
//----------------- Post_decrementContext ------------------------------------------------------------------

tree::TerminalNode* MavkaParser::Post_decrementContext::DECREMENT() {
  return getToken(MavkaParser::DECREMENT, 0);
}

MavkaParser::ValueContext* MavkaParser::Post_decrementContext::value() {
  return getRuleContext<MavkaParser::ValueContext>(0);
}

MavkaParser::Post_decrementContext::Post_decrementContext(ValueContext *ctx) { copyFrom(ctx); }

void MavkaParser::Post_decrementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPost_decrement(this);
}
void MavkaParser::Post_decrementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPost_decrement(this);
}
//----------------- IdContext ------------------------------------------------------------------

MavkaParser::IdentifierContext* MavkaParser::IdContext::identifier() {
  return getRuleContext<MavkaParser::IdentifierContext>(0);
}

MavkaParser::IdContext::IdContext(ValueContext *ctx) { copyFrom(ctx); }

void MavkaParser::IdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterId(this);
}
void MavkaParser::IdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitId(this);
}
//----------------- Post_incrementContext ------------------------------------------------------------------

tree::TerminalNode* MavkaParser::Post_incrementContext::INCREMENT() {
  return getToken(MavkaParser::INCREMENT, 0);
}

MavkaParser::ValueContext* MavkaParser::Post_incrementContext::value() {
  return getRuleContext<MavkaParser::ValueContext>(0);
}

MavkaParser::Post_incrementContext::Post_incrementContext(ValueContext *ctx) { copyFrom(ctx); }

void MavkaParser::Post_incrementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPost_increment(this);
}
void MavkaParser::Post_incrementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPost_increment(this);
}
//----------------- TernaryContext ------------------------------------------------------------------

std::vector<MavkaParser::NlsContext *> MavkaParser::TernaryContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::TernaryContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

tree::TerminalNode* MavkaParser::TernaryContext::TERNARY() {
  return getToken(MavkaParser::TERNARY, 0);
}

tree::TerminalNode* MavkaParser::TernaryContext::COLON() {
  return getToken(MavkaParser::COLON, 0);
}

MavkaParser::ValueContext* MavkaParser::TernaryContext::value() {
  return getRuleContext<MavkaParser::ValueContext>(0);
}

std::vector<MavkaParser::ExprContext *> MavkaParser::TernaryContext::expr() {
  return getRuleContexts<MavkaParser::ExprContext>();
}

MavkaParser::ExprContext* MavkaParser::TernaryContext::expr(size_t i) {
  return getRuleContext<MavkaParser::ExprContext>(i);
}

MavkaParser::TernaryContext::TernaryContext(ValueContext *ctx) { copyFrom(ctx); }

void MavkaParser::TernaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTernary(this);
}
void MavkaParser::TernaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTernary(this);
}

MavkaParser::ValueContext* MavkaParser::value() {
   return value(0);
}

MavkaParser::ValueContext* MavkaParser::value(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  MavkaParser::ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, parentState);
  MavkaParser::ValueContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 44;
  enterRecursionRule(_localctx, 44, MavkaParser::RuleValue, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(439);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<NumberContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(400);
      match(MavkaParser::NUMBER);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<StringContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(401);
      match(MavkaParser::STRING);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<IdContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(402);
      identifier();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<PositiveContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(403);
      match(MavkaParser::PLUS);
      setState(404);
      antlrcpp::downCast<PositiveContext *>(_localctx)->p_value = value(19);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<NegativeContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(405);
      match(MavkaParser::MINUS);
      setState(406);
      antlrcpp::downCast<NegativeContext *>(_localctx)->n_value = value(18);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<Pre_decrementContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(407);
      match(MavkaParser::DECREMENT);
      setState(408);
      antlrcpp::downCast<Pre_decrementContext *>(_localctx)->pd_value = value(17);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<Pre_incrementContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(409);
      match(MavkaParser::INCREMENT);
      setState(410);
      antlrcpp::downCast<Pre_incrementContext *>(_localctx)->pi_value = value(16);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<NotContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(411);
      match(MavkaParser::NOT);
      setState(412);
      antlrcpp::downCast<NotContext *>(_localctx)->n_value = value(13);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<Bitwise_notContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(413);
      match(MavkaParser::TILDA);
      setState(414);
      antlrcpp::downCast<Bitwise_notContext *>(_localctx)->bn_value = value(12);
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<NestedContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(415);
      match(MavkaParser::OPEN_PAREN);
      setState(416);
      antlrcpp::downCast<NestedContext *>(_localctx)->n_value = expr();
      setState(417);
      match(MavkaParser::CLOSE_PAREN);
      break;
    }

    case 11: {
      _localctx = _tracker.createInstance<Call_exprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(419);
      match(MavkaParser::OPEN_PAREN);
      setState(420);
      antlrcpp::downCast<Call_exprContext *>(_localctx)->c_value = expr();
      setState(421);
      match(MavkaParser::CLOSE_PAREN);
      setState(422);
      match(MavkaParser::OPEN_PAREN);
      setState(425);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
      case 1: {
        setState(423);
        antlrcpp::downCast<Call_exprContext *>(_localctx)->c_args = args();
        break;
      }

      case 2: {
        setState(424);
        antlrcpp::downCast<Call_exprContext *>(_localctx)->c_named_args = named_args();
        break;
      }

      default:
        break;
      }
      setState(427);
      match(MavkaParser::CLOSE_PAREN);
      break;
    }

    case 12: {
      _localctx = _tracker.createInstance<ArrayContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(429);
      match(MavkaParser::OPEN_ARRAY);
      setState(431);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 13229323906453508) != 0) || ((((_la - 73) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 73)) & 135790787) != 0)) {
        setState(430);
        antlrcpp::downCast<ArrayContext *>(_localctx)->a_elements = array_elements();
      }
      setState(433);
      match(MavkaParser::CLOSE_ARRAY);
      break;
    }

    case 13: {
      _localctx = _tracker.createInstance<DictionaryContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(434);
      match(MavkaParser::OPEN_PAREN);
      setState(436);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((((_la - 48) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 48)) & 4521191813414913) != 0)) {
        setState(435);
        antlrcpp::downCast<DictionaryContext *>(_localctx)->d_args = dictionary_args();
      }
      setState(438);
      match(MavkaParser::CLOSE_PAREN);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(492);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(490);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<Arithmetic_mulContext>(_tracker.createInstance<ValueContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->a_left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleValue);
          setState(441);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(442);
          antlrcpp::downCast<Arithmetic_mulContext *>(_localctx)->a_operation = arithmetic_op_mul();
          setState(443);
          antlrcpp::downCast<Arithmetic_mulContext *>(_localctx)->a_right = value(9);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<Arithmetic_addContext>(_tracker.createInstance<ValueContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->a_left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleValue);
          setState(445);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(446);
          antlrcpp::downCast<Arithmetic_addContext *>(_localctx)->a_operation = arithmetic_op_add();
          setState(447);
          antlrcpp::downCast<Arithmetic_addContext *>(_localctx)->a_right = value(8);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<BitwiseContext>(_tracker.createInstance<ValueContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->b_left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleValue);
          setState(449);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(450);
          antlrcpp::downCast<BitwiseContext *>(_localctx)->b_operation = bitwise_op();
          setState(451);
          antlrcpp::downCast<BitwiseContext *>(_localctx)->b_right = value(7);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<ComparisonContext>(_tracker.createInstance<ValueContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->c_left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleValue);
          setState(453);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(454);
          antlrcpp::downCast<ComparisonContext *>(_localctx)->c_operation = comparison_op();
          setState(455);
          antlrcpp::downCast<ComparisonContext *>(_localctx)->c_right = value(6);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<TestContext>(_tracker.createInstance<ValueContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->t_left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleValue);
          setState(457);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(458);
          antlrcpp::downCast<TestContext *>(_localctx)->t_operation = test_op();
          setState(459);
          antlrcpp::downCast<TestContext *>(_localctx)->t_right = value(5);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<ChainContext>(_tracker.createInstance<ValueContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->c_left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleValue);
          setState(461);

          if (!(precpred(_ctx, 21))) throw FailedPredicateException(this, "precpred(_ctx, 21)");
          setState(462);
          match(MavkaParser::DOT);
          setState(463);
          antlrcpp::downCast<ChainContext *>(_localctx)->c_right = extended_identifier();
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<CallContext>(_tracker.createInstance<ValueContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->c_value = previousContext;
          pushNewRecursionContext(newContext, startState, RuleValue);
          setState(464);

          if (!(precpred(_ctx, 20))) throw FailedPredicateException(this, "precpred(_ctx, 20)");
          setState(465);
          match(MavkaParser::OPEN_PAREN);
          setState(468);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
          case 1: {
            setState(466);
            antlrcpp::downCast<CallContext *>(_localctx)->c_args = args();
            break;
          }

          case 2: {
            setState(467);
            antlrcpp::downCast<CallContext *>(_localctx)->c_named_args = named_args();
            break;
          }

          default:
            break;
          }
          setState(470);
          match(MavkaParser::CLOSE_PAREN);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<Post_decrementContext>(_tracker.createInstance<ValueContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->pd_value = previousContext;
          pushNewRecursionContext(newContext, startState, RuleValue);
          setState(471);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(472);
          match(MavkaParser::DECREMENT);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<Post_incrementContext>(_tracker.createInstance<ValueContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->pi_value = previousContext;
          pushNewRecursionContext(newContext, startState, RuleValue);
          setState(473);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(474);
          match(MavkaParser::INCREMENT);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<Get_elementContext>(_tracker.createInstance<ValueContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->a_left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleValue);
          setState(475);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(476);
          match(MavkaParser::OPEN_ARRAY);
          setState(477);
          antlrcpp::downCast<Get_elementContext *>(_localctx)->a_element = expr();
          setState(478);
          match(MavkaParser::CLOSE_ARRAY);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<TernaryContext>(_tracker.createInstance<ValueContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->t_value = previousContext;
          pushNewRecursionContext(newContext, startState, RuleValue);
          setState(480);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(481);
          nls();
          setState(482);
          match(MavkaParser::TERNARY);
          setState(483);
          nls();
          setState(484);
          antlrcpp::downCast<TernaryContext *>(_localctx)->t_positive = expr();
          setState(485);
          nls();
          setState(486);
          match(MavkaParser::COLON);
          setState(487);
          nls();
          setState(488);
          antlrcpp::downCast<TernaryContext *>(_localctx)->t_negative = expr();
          break;
        }

        default:
          break;
        } 
      }
      setState(494);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Array_elementsContext ------------------------------------------------------------------

MavkaParser::Array_elementsContext::Array_elementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MavkaParser::Array_elementContext *> MavkaParser::Array_elementsContext::array_element() {
  return getRuleContexts<MavkaParser::Array_elementContext>();
}

MavkaParser::Array_elementContext* MavkaParser::Array_elementsContext::array_element(size_t i) {
  return getRuleContext<MavkaParser::Array_elementContext>(i);
}

std::vector<tree::TerminalNode *> MavkaParser::Array_elementsContext::COMMA() {
  return getTokens(MavkaParser::COMMA);
}

tree::TerminalNode* MavkaParser::Array_elementsContext::COMMA(size_t i) {
  return getToken(MavkaParser::COMMA, i);
}


size_t MavkaParser::Array_elementsContext::getRuleIndex() const {
  return MavkaParser::RuleArray_elements;
}

void MavkaParser::Array_elementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArray_elements(this);
}

void MavkaParser::Array_elementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArray_elements(this);
}

MavkaParser::Array_elementsContext* MavkaParser::array_elements() {
  Array_elementsContext *_localctx = _tracker.createInstance<Array_elementsContext>(_ctx, getState());
  enterRule(_localctx, 46, MavkaParser::RuleArray_elements);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(495);
    array_element();
    setState(500);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MavkaParser::COMMA) {
      setState(496);
      match(MavkaParser::COMMA);
      setState(497);
      array_element();
      setState(502);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Array_elementContext ------------------------------------------------------------------

MavkaParser::Array_elementContext::Array_elementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MavkaParser::NlsContext *> MavkaParser::Array_elementContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Array_elementContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

MavkaParser::ExprContext* MavkaParser::Array_elementContext::expr() {
  return getRuleContext<MavkaParser::ExprContext>(0);
}


size_t MavkaParser::Array_elementContext::getRuleIndex() const {
  return MavkaParser::RuleArray_element;
}

void MavkaParser::Array_elementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArray_element(this);
}

void MavkaParser::Array_elementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArray_element(this);
}

MavkaParser::Array_elementContext* MavkaParser::array_element() {
  Array_elementContext *_localctx = _tracker.createInstance<Array_elementContext>(_ctx, getState());
  enterRule(_localctx, 48, MavkaParser::RuleArray_element);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(503);
    nls();
    setState(504);
    antlrcpp::downCast<Array_elementContext *>(_localctx)->ae_value = expr();
    setState(505);
    nls();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Dictionary_argsContext ------------------------------------------------------------------

MavkaParser::Dictionary_argsContext::Dictionary_argsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MavkaParser::Dictionary_argContext *> MavkaParser::Dictionary_argsContext::dictionary_arg() {
  return getRuleContexts<MavkaParser::Dictionary_argContext>();
}

MavkaParser::Dictionary_argContext* MavkaParser::Dictionary_argsContext::dictionary_arg(size_t i) {
  return getRuleContext<MavkaParser::Dictionary_argContext>(i);
}

std::vector<tree::TerminalNode *> MavkaParser::Dictionary_argsContext::COMMA() {
  return getTokens(MavkaParser::COMMA);
}

tree::TerminalNode* MavkaParser::Dictionary_argsContext::COMMA(size_t i) {
  return getToken(MavkaParser::COMMA, i);
}


size_t MavkaParser::Dictionary_argsContext::getRuleIndex() const {
  return MavkaParser::RuleDictionary_args;
}

void MavkaParser::Dictionary_argsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDictionary_args(this);
}

void MavkaParser::Dictionary_argsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDictionary_args(this);
}

MavkaParser::Dictionary_argsContext* MavkaParser::dictionary_args() {
  Dictionary_argsContext *_localctx = _tracker.createInstance<Dictionary_argsContext>(_ctx, getState());
  enterRule(_localctx, 50, MavkaParser::RuleDictionary_args);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(507);
    dictionary_arg();
    setState(512);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MavkaParser::COMMA) {
      setState(508);
      match(MavkaParser::COMMA);
      setState(509);
      dictionary_arg();
      setState(514);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Dictionary_argContext ------------------------------------------------------------------

MavkaParser::Dictionary_argContext::Dictionary_argContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MavkaParser::NlsContext *> MavkaParser::Dictionary_argContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Dictionary_argContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

tree::TerminalNode* MavkaParser::Dictionary_argContext::ASSIGN() {
  return getToken(MavkaParser::ASSIGN, 0);
}

MavkaParser::ExprContext* MavkaParser::Dictionary_argContext::expr() {
  return getRuleContext<MavkaParser::ExprContext>(0);
}

MavkaParser::IdentifierContext* MavkaParser::Dictionary_argContext::identifier() {
  return getRuleContext<MavkaParser::IdentifierContext>(0);
}

tree::TerminalNode* MavkaParser::Dictionary_argContext::STRING() {
  return getToken(MavkaParser::STRING, 0);
}


size_t MavkaParser::Dictionary_argContext::getRuleIndex() const {
  return MavkaParser::RuleDictionary_arg;
}

void MavkaParser::Dictionary_argContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDictionary_arg(this);
}

void MavkaParser::Dictionary_argContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDictionary_arg(this);
}

MavkaParser::Dictionary_argContext* MavkaParser::dictionary_arg() {
  Dictionary_argContext *_localctx = _tracker.createInstance<Dictionary_argContext>(_ctx, getState());
  enterRule(_localctx, 52, MavkaParser::RuleDictionary_arg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(515);
    nls();
    setState(518);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MavkaParser::ID: {
        setState(516);
        antlrcpp::downCast<Dictionary_argContext *>(_localctx)->da_name_id = identifier();
        break;
      }

      case MavkaParser::STRING: {
        setState(517);
        antlrcpp::downCast<Dictionary_argContext *>(_localctx)->da_name_string = match(MavkaParser::STRING);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(520);
    match(MavkaParser::ASSIGN);
    setState(521);
    antlrcpp::downCast<Dictionary_argContext *>(_localctx)->da_value = expr();
    setState(522);
    nls();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

MavkaParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MavkaParser::ExprContext::getRuleIndex() const {
  return MavkaParser::RuleExpr;
}

void MavkaParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Anonymous_diiaContext ------------------------------------------------------------------

tree::TerminalNode* MavkaParser::Anonymous_diiaContext::DIIA() {
  return getToken(MavkaParser::DIIA, 0);
}

tree::TerminalNode* MavkaParser::Anonymous_diiaContext::OPEN_PAREN() {
  return getToken(MavkaParser::OPEN_PAREN, 0);
}

tree::TerminalNode* MavkaParser::Anonymous_diiaContext::CLOSE_PAREN() {
  return getToken(MavkaParser::CLOSE_PAREN, 0);
}

std::vector<MavkaParser::NlContext *> MavkaParser::Anonymous_diiaContext::nl() {
  return getRuleContexts<MavkaParser::NlContext>();
}

MavkaParser::NlContext* MavkaParser::Anonymous_diiaContext::nl(size_t i) {
  return getRuleContext<MavkaParser::NlContext>(i);
}

std::vector<MavkaParser::NlsContext *> MavkaParser::Anonymous_diiaContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Anonymous_diiaContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

tree::TerminalNode* MavkaParser::Anonymous_diiaContext::END() {
  return getToken(MavkaParser::END, 0);
}

tree::TerminalNode* MavkaParser::Anonymous_diiaContext::ASYNC() {
  return getToken(MavkaParser::ASYNC, 0);
}

MavkaParser::Type_valueContext* MavkaParser::Anonymous_diiaContext::type_value() {
  return getRuleContext<MavkaParser::Type_valueContext>(0);
}

MavkaParser::BodyContext* MavkaParser::Anonymous_diiaContext::body() {
  return getRuleContext<MavkaParser::BodyContext>(0);
}

MavkaParser::ParamsContext* MavkaParser::Anonymous_diiaContext::params() {
  return getRuleContext<MavkaParser::ParamsContext>(0);
}

MavkaParser::Anonymous_diiaContext::Anonymous_diiaContext(ExprContext *ctx) { copyFrom(ctx); }

void MavkaParser::Anonymous_diiaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnonymous_diia(this);
}
void MavkaParser::Anonymous_diiaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnonymous_diia(this);
}
//----------------- WaitContext ------------------------------------------------------------------

tree::TerminalNode* MavkaParser::WaitContext::WAIT() {
  return getToken(MavkaParser::WAIT, 0);
}

MavkaParser::ValueContext* MavkaParser::WaitContext::value() {
  return getRuleContext<MavkaParser::ValueContext>(0);
}

MavkaParser::WaitContext::WaitContext(ExprContext *ctx) { copyFrom(ctx); }

void MavkaParser::WaitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWait(this);
}
void MavkaParser::WaitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWait(this);
}
//----------------- FunctionContext ------------------------------------------------------------------

tree::TerminalNode* MavkaParser::FunctionContext::OPEN_PAREN() {
  return getToken(MavkaParser::OPEN_PAREN, 0);
}

tree::TerminalNode* MavkaParser::FunctionContext::CLOSE_PAREN() {
  return getToken(MavkaParser::CLOSE_PAREN, 0);
}

tree::TerminalNode* MavkaParser::FunctionContext::COLON() {
  return getToken(MavkaParser::COLON, 0);
}

MavkaParser::ExprContext* MavkaParser::FunctionContext::expr() {
  return getRuleContext<MavkaParser::ExprContext>(0);
}

MavkaParser::ParamsContext* MavkaParser::FunctionContext::params() {
  return getRuleContext<MavkaParser::ParamsContext>(0);
}

MavkaParser::Type_valueContext* MavkaParser::FunctionContext::type_value() {
  return getRuleContext<MavkaParser::Type_valueContext>(0);
}

MavkaParser::FunctionContext::FunctionContext(ExprContext *ctx) { copyFrom(ctx); }

void MavkaParser::FunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction(this);
}
void MavkaParser::FunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction(this);
}
//----------------- SimpleContext ------------------------------------------------------------------

MavkaParser::ValueContext* MavkaParser::SimpleContext::value() {
  return getRuleContext<MavkaParser::ValueContext>(0);
}

MavkaParser::SimpleContext::SimpleContext(ExprContext *ctx) { copyFrom(ctx); }

void MavkaParser::SimpleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimple(this);
}
void MavkaParser::SimpleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimple(this);
}
MavkaParser::ExprContext* MavkaParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 54, MavkaParser::RuleExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(561);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<MavkaParser::SimpleContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(524);
      value(0);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<MavkaParser::WaitContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(525);
      match(MavkaParser::WAIT);
      setState(526);
      antlrcpp::downCast<WaitContext *>(_localctx)->w_value = value(0);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<MavkaParser::FunctionContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(527);
      match(MavkaParser::OPEN_PAREN);
      setState(529);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((((_la - 46) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 46)) & 70368744177825) != 0)) {
        setState(528);
        antlrcpp::downCast<FunctionContext *>(_localctx)->f_params = params();
      }
      setState(531);
      match(MavkaParser::CLOSE_PAREN);
      setState(533);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MavkaParser::ID) {
        setState(532);
        antlrcpp::downCast<FunctionContext *>(_localctx)->f_type = type_value(0);
      }
      setState(535);
      match(MavkaParser::COLON);
      setState(536);
      antlrcpp::downCast<FunctionContext *>(_localctx)->f_body = expr();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<MavkaParser::Anonymous_diiaContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(538);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MavkaParser::ASYNC) {
        setState(537);
        antlrcpp::downCast<Anonymous_diiaContext *>(_localctx)->d_async = match(MavkaParser::ASYNC);
      }
      setState(540);
      match(MavkaParser::DIIA);
      setState(541);
      match(MavkaParser::OPEN_PAREN);

      setState(542);
      nls();
      setState(544);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((((_la - 46) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 46)) & 70368744177825) != 0)) {
        setState(543);
        antlrcpp::downCast<Anonymous_diiaContext *>(_localctx)->d_params = params();
      }
      setState(546);
      nls();
      setState(548);
      match(MavkaParser::CLOSE_PAREN);
      setState(550);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MavkaParser::ID) {
        setState(549);
        antlrcpp::downCast<Anonymous_diiaContext *>(_localctx)->d_type = type_value(0);
      }
      setState(552);
      nl();
      setState(556);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx)) {
      case 1: {
        setState(553);
        antlrcpp::downCast<Anonymous_diiaContext *>(_localctx)->d_body = body();
        setState(554);
        nl();
        break;
      }

      default:
        break;
      }
      setState(558);
      nls();
      setState(559);
      match(MavkaParser::END);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ThrowContext ------------------------------------------------------------------

MavkaParser::ThrowContext::ThrowContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::ThrowContext::THROW() {
  return getToken(MavkaParser::THROW, 0);
}

MavkaParser::ExprContext* MavkaParser::ThrowContext::expr() {
  return getRuleContext<MavkaParser::ExprContext>(0);
}


size_t MavkaParser::ThrowContext::getRuleIndex() const {
  return MavkaParser::RuleThrow;
}

void MavkaParser::ThrowContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThrow(this);
}

void MavkaParser::ThrowContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThrow(this);
}

MavkaParser::ThrowContext* MavkaParser::throw_() {
  ThrowContext *_localctx = _tracker.createInstance<ThrowContext>(_ctx, getState());
  enterRule(_localctx, 56, MavkaParser::RuleThrow);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(563);
    match(MavkaParser::THROW);
    setState(564);
    antlrcpp::downCast<ThrowContext *>(_localctx)->t_value = expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Array_destructionContext ------------------------------------------------------------------

MavkaParser::Array_destructionContext::Array_destructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::Array_destructionContext::OPEN_ARRAY() {
  return getToken(MavkaParser::OPEN_ARRAY, 0);
}

std::vector<MavkaParser::Array_destruction_elContext *> MavkaParser::Array_destructionContext::array_destruction_el() {
  return getRuleContexts<MavkaParser::Array_destruction_elContext>();
}

MavkaParser::Array_destruction_elContext* MavkaParser::Array_destructionContext::array_destruction_el(size_t i) {
  return getRuleContext<MavkaParser::Array_destruction_elContext>(i);
}

tree::TerminalNode* MavkaParser::Array_destructionContext::CLOSE_ARRAY() {
  return getToken(MavkaParser::CLOSE_ARRAY, 0);
}

std::vector<tree::TerminalNode *> MavkaParser::Array_destructionContext::COMMA() {
  return getTokens(MavkaParser::COMMA);
}

tree::TerminalNode* MavkaParser::Array_destructionContext::COMMA(size_t i) {
  return getToken(MavkaParser::COMMA, i);
}


size_t MavkaParser::Array_destructionContext::getRuleIndex() const {
  return MavkaParser::RuleArray_destruction;
}

void MavkaParser::Array_destructionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArray_destruction(this);
}

void MavkaParser::Array_destructionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArray_destruction(this);
}

MavkaParser::Array_destructionContext* MavkaParser::array_destruction() {
  Array_destructionContext *_localctx = _tracker.createInstance<Array_destructionContext>(_ctx, getState());
  enterRule(_localctx, 58, MavkaParser::RuleArray_destruction);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(566);
    match(MavkaParser::OPEN_ARRAY);
    setState(567);
    array_destruction_el();
    setState(572);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MavkaParser::COMMA) {
      setState(568);
      match(MavkaParser::COMMA);
      setState(569);
      array_destruction_el();
      setState(574);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(575);
    match(MavkaParser::CLOSE_ARRAY);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Array_destruction_elContext ------------------------------------------------------------------

MavkaParser::Array_destruction_elContext::Array_destruction_elContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MavkaParser::NlsContext *> MavkaParser::Array_destruction_elContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Array_destruction_elContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

MavkaParser::IdentifierContext* MavkaParser::Array_destruction_elContext::identifier() {
  return getRuleContext<MavkaParser::IdentifierContext>(0);
}


size_t MavkaParser::Array_destruction_elContext::getRuleIndex() const {
  return MavkaParser::RuleArray_destruction_el;
}

void MavkaParser::Array_destruction_elContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArray_destruction_el(this);
}

void MavkaParser::Array_destruction_elContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArray_destruction_el(this);
}

MavkaParser::Array_destruction_elContext* MavkaParser::array_destruction_el() {
  Array_destruction_elContext *_localctx = _tracker.createInstance<Array_destruction_elContext>(_ctx, getState());
  enterRule(_localctx, 60, MavkaParser::RuleArray_destruction_el);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(577);
    nls();
    setState(578);
    antlrcpp::downCast<Array_destruction_elContext *>(_localctx)->ade_id = identifier();
    setState(579);
    nls();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Object_destructionContext ------------------------------------------------------------------

MavkaParser::Object_destructionContext::Object_destructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::Object_destructionContext::OPEN_PAREN() {
  return getToken(MavkaParser::OPEN_PAREN, 0);
}

std::vector<MavkaParser::Object_destruction_elContext *> MavkaParser::Object_destructionContext::object_destruction_el() {
  return getRuleContexts<MavkaParser::Object_destruction_elContext>();
}

MavkaParser::Object_destruction_elContext* MavkaParser::Object_destructionContext::object_destruction_el(size_t i) {
  return getRuleContext<MavkaParser::Object_destruction_elContext>(i);
}

tree::TerminalNode* MavkaParser::Object_destructionContext::CLOSE_PAREN() {
  return getToken(MavkaParser::CLOSE_PAREN, 0);
}

std::vector<tree::TerminalNode *> MavkaParser::Object_destructionContext::COMMA() {
  return getTokens(MavkaParser::COMMA);
}

tree::TerminalNode* MavkaParser::Object_destructionContext::COMMA(size_t i) {
  return getToken(MavkaParser::COMMA, i);
}


size_t MavkaParser::Object_destructionContext::getRuleIndex() const {
  return MavkaParser::RuleObject_destruction;
}

void MavkaParser::Object_destructionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObject_destruction(this);
}

void MavkaParser::Object_destructionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObject_destruction(this);
}

MavkaParser::Object_destructionContext* MavkaParser::object_destruction() {
  Object_destructionContext *_localctx = _tracker.createInstance<Object_destructionContext>(_ctx, getState());
  enterRule(_localctx, 62, MavkaParser::RuleObject_destruction);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(581);
    match(MavkaParser::OPEN_PAREN);
    setState(582);
    object_destruction_el();
    setState(587);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MavkaParser::COMMA) {
      setState(583);
      match(MavkaParser::COMMA);
      setState(584);
      object_destruction_el();
      setState(589);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(590);
    match(MavkaParser::CLOSE_PAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Object_destruction_elContext ------------------------------------------------------------------

MavkaParser::Object_destruction_elContext::Object_destruction_elContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MavkaParser::NlsContext *> MavkaParser::Object_destruction_elContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Object_destruction_elContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

MavkaParser::IdentifierContext* MavkaParser::Object_destruction_elContext::identifier() {
  return getRuleContext<MavkaParser::IdentifierContext>(0);
}


size_t MavkaParser::Object_destruction_elContext::getRuleIndex() const {
  return MavkaParser::RuleObject_destruction_el;
}

void MavkaParser::Object_destruction_elContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObject_destruction_el(this);
}

void MavkaParser::Object_destruction_elContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObject_destruction_el(this);
}

MavkaParser::Object_destruction_elContext* MavkaParser::object_destruction_el() {
  Object_destruction_elContext *_localctx = _tracker.createInstance<Object_destruction_elContext>(_ctx, getState());
  enterRule(_localctx, 64, MavkaParser::RuleObject_destruction_el);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(592);
    nls();
    setState(593);
    antlrcpp::downCast<Object_destruction_elContext *>(_localctx)->ode_id = identifier();
    setState(594);
    nls();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignContext ------------------------------------------------------------------

MavkaParser::AssignContext::AssignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MavkaParser::Assign_symbolContext* MavkaParser::AssignContext::assign_symbol() {
  return getRuleContext<MavkaParser::Assign_symbolContext>(0);
}

MavkaParser::Assign_valueContext* MavkaParser::AssignContext::assign_value() {
  return getRuleContext<MavkaParser::Assign_valueContext>(0);
}

MavkaParser::IdentifierContext* MavkaParser::AssignContext::identifier() {
  return getRuleContext<MavkaParser::IdentifierContext>(0);
}

MavkaParser::Array_destructionContext* MavkaParser::AssignContext::array_destruction() {
  return getRuleContext<MavkaParser::Array_destructionContext>(0);
}

MavkaParser::Object_destructionContext* MavkaParser::AssignContext::object_destruction() {
  return getRuleContext<MavkaParser::Object_destructionContext>(0);
}

MavkaParser::Identifiers_chainContext* MavkaParser::AssignContext::identifiers_chain() {
  return getRuleContext<MavkaParser::Identifiers_chainContext>(0);
}

MavkaParser::Type_valueContext* MavkaParser::AssignContext::type_value() {
  return getRuleContext<MavkaParser::Type_valueContext>(0);
}

tree::TerminalNode* MavkaParser::AssignContext::OPEN_ARRAY() {
  return getToken(MavkaParser::OPEN_ARRAY, 0);
}

tree::TerminalNode* MavkaParser::AssignContext::CLOSE_ARRAY() {
  return getToken(MavkaParser::CLOSE_ARRAY, 0);
}

MavkaParser::ExprContext* MavkaParser::AssignContext::expr() {
  return getRuleContext<MavkaParser::ExprContext>(0);
}


size_t MavkaParser::AssignContext::getRuleIndex() const {
  return MavkaParser::RuleAssign;
}

void MavkaParser::AssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssign(this);
}

void MavkaParser::AssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssign(this);
}

MavkaParser::AssignContext* MavkaParser::assign() {
  AssignContext *_localctx = _tracker.createInstance<AssignContext>(_ctx, getState());
  enterRule(_localctx, 66, MavkaParser::RuleAssign);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(609);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx)) {
    case 1: {
      setState(596);
      antlrcpp::downCast<AssignContext *>(_localctx)->a_identifiers_chain = identifiers_chain(0);
      setState(601);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MavkaParser::OPEN_ARRAY) {
        setState(597);
        match(MavkaParser::OPEN_ARRAY);
        setState(598);
        antlrcpp::downCast<AssignContext *>(_localctx)->a_set_element = expr();
        setState(599);
        match(MavkaParser::CLOSE_ARRAY);
      }
      break;
    }

    case 2: {
      setState(603);
      antlrcpp::downCast<AssignContext *>(_localctx)->a_identifier = identifier();
      setState(605);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MavkaParser::ID) {
        setState(604);
        antlrcpp::downCast<AssignContext *>(_localctx)->a_type = type_value(0);
      }
      break;
    }

    case 3: {
      setState(607);
      antlrcpp::downCast<AssignContext *>(_localctx)->a_array_destruction = array_destruction();
      break;
    }

    case 4: {
      setState(608);
      antlrcpp::downCast<AssignContext *>(_localctx)->a_object_destruction = object_destruction();
      break;
    }

    default:
      break;
    }
    setState(611);
    antlrcpp::downCast<AssignContext *>(_localctx)->a_symbol = assign_symbol();
    setState(612);
    antlrcpp::downCast<AssignContext *>(_localctx)->a_value = assign_value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Assign_valueContext ------------------------------------------------------------------

MavkaParser::Assign_valueContext::Assign_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MavkaParser::ExprContext* MavkaParser::Assign_valueContext::expr() {
  return getRuleContext<MavkaParser::ExprContext>(0);
}

MavkaParser::AssignContext* MavkaParser::Assign_valueContext::assign() {
  return getRuleContext<MavkaParser::AssignContext>(0);
}


size_t MavkaParser::Assign_valueContext::getRuleIndex() const {
  return MavkaParser::RuleAssign_value;
}

void MavkaParser::Assign_valueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssign_value(this);
}

void MavkaParser::Assign_valueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssign_value(this);
}

MavkaParser::Assign_valueContext* MavkaParser::assign_value() {
  Assign_valueContext *_localctx = _tracker.createInstance<Assign_valueContext>(_ctx, getState());
  enterRule(_localctx, 68, MavkaParser::RuleAssign_value);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(616);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(614);
      expr();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(615);
      assign();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Assign_symbolContext ------------------------------------------------------------------

MavkaParser::Assign_symbolContext::Assign_symbolContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::Assign_symbolContext::ASSIGN() {
  return getToken(MavkaParser::ASSIGN, 0);
}

tree::TerminalNode* MavkaParser::Assign_symbolContext::ASSIGN_PARENT() {
  return getToken(MavkaParser::ASSIGN_PARENT, 0);
}

tree::TerminalNode* MavkaParser::Assign_symbolContext::ASSIGN_ADD() {
  return getToken(MavkaParser::ASSIGN_ADD, 0);
}

tree::TerminalNode* MavkaParser::Assign_symbolContext::ASSIGN_SUB() {
  return getToken(MavkaParser::ASSIGN_SUB, 0);
}

tree::TerminalNode* MavkaParser::Assign_symbolContext::ASSIGN_MUL() {
  return getToken(MavkaParser::ASSIGN_MUL, 0);
}

tree::TerminalNode* MavkaParser::Assign_symbolContext::ASSIGN_DIV() {
  return getToken(MavkaParser::ASSIGN_DIV, 0);
}

tree::TerminalNode* MavkaParser::Assign_symbolContext::ASSIGN_DIVDIV() {
  return getToken(MavkaParser::ASSIGN_DIVDIV, 0);
}

tree::TerminalNode* MavkaParser::Assign_symbolContext::ASSIGN_MOD() {
  return getToken(MavkaParser::ASSIGN_MOD, 0);
}

tree::TerminalNode* MavkaParser::Assign_symbolContext::ASSIGN_POW() {
  return getToken(MavkaParser::ASSIGN_POW, 0);
}

tree::TerminalNode* MavkaParser::Assign_symbolContext::ASSIGN_BW_AND() {
  return getToken(MavkaParser::ASSIGN_BW_AND, 0);
}

tree::TerminalNode* MavkaParser::Assign_symbolContext::ASSIGN_BW_OR() {
  return getToken(MavkaParser::ASSIGN_BW_OR, 0);
}

tree::TerminalNode* MavkaParser::Assign_symbolContext::ASSIGN_BW_SHIFT_LEFT() {
  return getToken(MavkaParser::ASSIGN_BW_SHIFT_LEFT, 0);
}

tree::TerminalNode* MavkaParser::Assign_symbolContext::ASSIGN_BW_SHIFT_RIGHT() {
  return getToken(MavkaParser::ASSIGN_BW_SHIFT_RIGHT, 0);
}

tree::TerminalNode* MavkaParser::Assign_symbolContext::ASSIGN_XOR() {
  return getToken(MavkaParser::ASSIGN_XOR, 0);
}

tree::TerminalNode* MavkaParser::Assign_symbolContext::ASSIGN_AND() {
  return getToken(MavkaParser::ASSIGN_AND, 0);
}

tree::TerminalNode* MavkaParser::Assign_symbolContext::ASSIGN_OR() {
  return getToken(MavkaParser::ASSIGN_OR, 0);
}

tree::TerminalNode* MavkaParser::Assign_symbolContext::ASSIGN_IF() {
  return getToken(MavkaParser::ASSIGN_IF, 0);
}


size_t MavkaParser::Assign_symbolContext::getRuleIndex() const {
  return MavkaParser::RuleAssign_symbol;
}

void MavkaParser::Assign_symbolContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssign_symbol(this);
}

void MavkaParser::Assign_symbolContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssign_symbol(this);
}

MavkaParser::Assign_symbolContext* MavkaParser::assign_symbol() {
  Assign_symbolContext *_localctx = _tracker.createInstance<Assign_symbolContext>(_ctx, getState());
  enterRule(_localctx, 70, MavkaParser::RuleAssign_symbol);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(618);
    _la = _input->LA(1);
    if (!(((((_la - 56) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 56)) & 131071) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Wait_assignContext ------------------------------------------------------------------

MavkaParser::Wait_assignContext::Wait_assignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::Wait_assignContext::WAIT() {
  return getToken(MavkaParser::WAIT, 0);
}

MavkaParser::AssignContext* MavkaParser::Wait_assignContext::assign() {
  return getRuleContext<MavkaParser::AssignContext>(0);
}


size_t MavkaParser::Wait_assignContext::getRuleIndex() const {
  return MavkaParser::RuleWait_assign;
}

void MavkaParser::Wait_assignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWait_assign(this);
}

void MavkaParser::Wait_assignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWait_assign(this);
}

MavkaParser::Wait_assignContext* MavkaParser::wait_assign() {
  Wait_assignContext *_localctx = _tracker.createInstance<Wait_assignContext>(_ctx, getState());
  enterRule(_localctx, 72, MavkaParser::RuleWait_assign);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(620);
    match(MavkaParser::WAIT);
    setState(621);
    antlrcpp::downCast<Wait_assignContext *>(_localctx)->wa_assign = assign();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierContext ------------------------------------------------------------------

MavkaParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::IdentifierContext::ID() {
  return getToken(MavkaParser::ID, 0);
}


size_t MavkaParser::IdentifierContext::getRuleIndex() const {
  return MavkaParser::RuleIdentifier;
}

void MavkaParser::IdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifier(this);
}

void MavkaParser::IdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifier(this);
}

MavkaParser::IdentifierContext* MavkaParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 74, MavkaParser::RuleIdentifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(623);
    match(MavkaParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Extended_identifierContext ------------------------------------------------------------------

MavkaParser::Extended_identifierContext::Extended_identifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::Extended_identifierContext::ID() {
  return getToken(MavkaParser::ID, 0);
}

tree::TerminalNode* MavkaParser::Extended_identifierContext::END() {
  return getToken(MavkaParser::END, 0);
}

tree::TerminalNode* MavkaParser::Extended_identifierContext::DIIA() {
  return getToken(MavkaParser::DIIA, 0);
}

tree::TerminalNode* MavkaParser::Extended_identifierContext::STRUCTURE() {
  return getToken(MavkaParser::STRUCTURE, 0);
}

tree::TerminalNode* MavkaParser::Extended_identifierContext::FOR() {
  return getToken(MavkaParser::FOR, 0);
}

tree::TerminalNode* MavkaParser::Extended_identifierContext::IF() {
  return getToken(MavkaParser::IF, 0);
}

tree::TerminalNode* MavkaParser::Extended_identifierContext::WAIT() {
  return getToken(MavkaParser::WAIT, 0);
}

tree::TerminalNode* MavkaParser::Extended_identifierContext::TAKE() {
  return getToken(MavkaParser::TAKE, 0);
}

tree::TerminalNode* MavkaParser::Extended_identifierContext::GIVE() {
  return getToken(MavkaParser::GIVE, 0);
}

tree::TerminalNode* MavkaParser::Extended_identifierContext::AS() {
  return getToken(MavkaParser::AS, 0);
}

tree::TerminalNode* MavkaParser::Extended_identifierContext::IS() {
  return getToken(MavkaParser::IS, 0);
}

tree::TerminalNode* MavkaParser::Extended_identifierContext::RETURN() {
  return getToken(MavkaParser::RETURN, 0);
}

tree::TerminalNode* MavkaParser::Extended_identifierContext::ASYNC() {
  return getToken(MavkaParser::ASYNC, 0);
}

tree::TerminalNode* MavkaParser::Extended_identifierContext::AND() {
  return getToken(MavkaParser::AND, 0);
}

tree::TerminalNode* MavkaParser::Extended_identifierContext::OR() {
  return getToken(MavkaParser::OR, 0);
}

tree::TerminalNode* MavkaParser::Extended_identifierContext::TRY() {
  return getToken(MavkaParser::TRY, 0);
}

tree::TerminalNode* MavkaParser::Extended_identifierContext::CATCH() {
  return getToken(MavkaParser::CATCH, 0);
}

tree::TerminalNode* MavkaParser::Extended_identifierContext::ELSE() {
  return getToken(MavkaParser::ELSE, 0);
}

tree::TerminalNode* MavkaParser::Extended_identifierContext::THROW() {
  return getToken(MavkaParser::THROW, 0);
}

tree::TerminalNode* MavkaParser::Extended_identifierContext::WHILE() {
  return getToken(MavkaParser::WHILE, 0);
}

tree::TerminalNode* MavkaParser::Extended_identifierContext::MODULE() {
  return getToken(MavkaParser::MODULE, 0);
}

tree::TerminalNode* MavkaParser::Extended_identifierContext::EQ_WORD() {
  return getToken(MavkaParser::EQ_WORD, 0);
}

tree::TerminalNode* MavkaParser::Extended_identifierContext::GR_WORD() {
  return getToken(MavkaParser::GR_WORD, 0);
}

tree::TerminalNode* MavkaParser::Extended_identifierContext::SM_WORD() {
  return getToken(MavkaParser::SM_WORD, 0);
}

tree::TerminalNode* MavkaParser::Extended_identifierContext::MOCKUP() {
  return getToken(MavkaParser::MOCKUP, 0);
}

tree::TerminalNode* MavkaParser::Extended_identifierContext::IMPLEMENTS() {
  return getToken(MavkaParser::IMPLEMENTS, 0);
}

tree::TerminalNode* MavkaParser::Extended_identifierContext::EVAL() {
  return getToken(MavkaParser::EVAL, 0);
}

tree::TerminalNode* MavkaParser::Extended_identifierContext::WHEN() {
  return getToken(MavkaParser::WHEN, 0);
}

tree::TerminalNode* MavkaParser::Extended_identifierContext::TA() {
  return getToken(MavkaParser::TA, 0);
}


size_t MavkaParser::Extended_identifierContext::getRuleIndex() const {
  return MavkaParser::RuleExtended_identifier;
}

void MavkaParser::Extended_identifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExtended_identifier(this);
}

void MavkaParser::Extended_identifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExtended_identifier(this);
}

MavkaParser::Extended_identifierContext* MavkaParser::extended_identifier() {
  Extended_identifierContext *_localctx = _tracker.createInstance<Extended_identifierContext>(_ctx, getState());
  enterRule(_localctx, 76, MavkaParser::RuleExtended_identifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(625);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 64879239051294) != 0) || _la == MavkaParser::ID)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Identifiers_chainContext ------------------------------------------------------------------

MavkaParser::Identifiers_chainContext::Identifiers_chainContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MavkaParser::IdentifierContext* MavkaParser::Identifiers_chainContext::identifier() {
  return getRuleContext<MavkaParser::IdentifierContext>(0);
}

tree::TerminalNode* MavkaParser::Identifiers_chainContext::DOT() {
  return getToken(MavkaParser::DOT, 0);
}

std::vector<MavkaParser::Identifiers_chainContext *> MavkaParser::Identifiers_chainContext::identifiers_chain() {
  return getRuleContexts<MavkaParser::Identifiers_chainContext>();
}

MavkaParser::Identifiers_chainContext* MavkaParser::Identifiers_chainContext::identifiers_chain(size_t i) {
  return getRuleContext<MavkaParser::Identifiers_chainContext>(i);
}


size_t MavkaParser::Identifiers_chainContext::getRuleIndex() const {
  return MavkaParser::RuleIdentifiers_chain;
}

void MavkaParser::Identifiers_chainContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifiers_chain(this);
}

void MavkaParser::Identifiers_chainContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifiers_chain(this);
}


MavkaParser::Identifiers_chainContext* MavkaParser::identifiers_chain() {
   return identifiers_chain(0);
}

MavkaParser::Identifiers_chainContext* MavkaParser::identifiers_chain(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  MavkaParser::Identifiers_chainContext *_localctx = _tracker.createInstance<Identifiers_chainContext>(_ctx, parentState);
  MavkaParser::Identifiers_chainContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 78;
  enterRecursionRule(_localctx, 78, MavkaParser::RuleIdentifiers_chain, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(628);
    antlrcpp::downCast<Identifiers_chainContext *>(_localctx)->ic_identifier = identifier();
    _ctx->stop = _input->LT(-1);
    setState(635);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Identifiers_chainContext>(parentContext, parentState);
        _localctx->ic_left = previousContext;
        pushNewRecursionContext(_localctx, startState, RuleIdentifiers_chain);
        setState(630);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(631);
        match(MavkaParser::DOT);
        setState(632);
        antlrcpp::downCast<Identifiers_chainContext *>(_localctx)->ic_right = identifiers_chain(2); 
      }
      setState(637);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Type_valueContext ------------------------------------------------------------------

MavkaParser::Type_valueContext::Type_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MavkaParser::Identifiers_chainContext* MavkaParser::Type_valueContext::identifiers_chain() {
  return getRuleContext<MavkaParser::Identifiers_chainContext>(0);
}

std::vector<MavkaParser::Type_valueContext *> MavkaParser::Type_valueContext::type_value() {
  return getRuleContexts<MavkaParser::Type_valueContext>();
}

MavkaParser::Type_valueContext* MavkaParser::Type_valueContext::type_value(size_t i) {
  return getRuleContext<MavkaParser::Type_valueContext>(i);
}

MavkaParser::Test_opContext* MavkaParser::Type_valueContext::test_op() {
  return getRuleContext<MavkaParser::Test_opContext>(0);
}


size_t MavkaParser::Type_valueContext::getRuleIndex() const {
  return MavkaParser::RuleType_value;
}

void MavkaParser::Type_valueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType_value(this);
}

void MavkaParser::Type_valueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType_value(this);
}


MavkaParser::Type_valueContext* MavkaParser::type_value() {
   return type_value(0);
}

MavkaParser::Type_valueContext* MavkaParser::type_value(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  MavkaParser::Type_valueContext *_localctx = _tracker.createInstance<Type_valueContext>(_ctx, parentState);
  MavkaParser::Type_valueContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 80;
  enterRecursionRule(_localctx, 80, MavkaParser::RuleType_value, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(639);
    antlrcpp::downCast<Type_valueContext *>(_localctx)->tv_single = identifiers_chain(0);
    _ctx->stop = _input->LT(-1);
    setState(647);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Type_valueContext>(parentContext, parentState);
        _localctx->tv_left = previousContext;
        pushNewRecursionContext(_localctx, startState, RuleType_value);
        setState(641);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(642);
        antlrcpp::downCast<Type_valueContext *>(_localctx)->tv_operation = test_op();
        setState(643);
        antlrcpp::downCast<Type_valueContext *>(_localctx)->tv_right = type_value(2); 
      }
      setState(649);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ArgsContext ------------------------------------------------------------------

MavkaParser::ArgsContext::ArgsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MavkaParser::ArgContext *> MavkaParser::ArgsContext::arg() {
  return getRuleContexts<MavkaParser::ArgContext>();
}

MavkaParser::ArgContext* MavkaParser::ArgsContext::arg(size_t i) {
  return getRuleContext<MavkaParser::ArgContext>(i);
}

std::vector<tree::TerminalNode *> MavkaParser::ArgsContext::COMMA() {
  return getTokens(MavkaParser::COMMA);
}

tree::TerminalNode* MavkaParser::ArgsContext::COMMA(size_t i) {
  return getToken(MavkaParser::COMMA, i);
}


size_t MavkaParser::ArgsContext::getRuleIndex() const {
  return MavkaParser::RuleArgs;
}

void MavkaParser::ArgsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgs(this);
}

void MavkaParser::ArgsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgs(this);
}

MavkaParser::ArgsContext* MavkaParser::args() {
  ArgsContext *_localctx = _tracker.createInstance<ArgsContext>(_ctx, getState());
  enterRule(_localctx, 82, MavkaParser::RuleArgs);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(650);
    arg();
    setState(655);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MavkaParser::COMMA) {
      setState(651);
      match(MavkaParser::COMMA);
      setState(652);
      arg();
      setState(657);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgContext ------------------------------------------------------------------

MavkaParser::ArgContext::ArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MavkaParser::NlsContext *> MavkaParser::ArgContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::ArgContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

MavkaParser::ExprContext* MavkaParser::ArgContext::expr() {
  return getRuleContext<MavkaParser::ExprContext>(0);
}

tree::TerminalNode* MavkaParser::ArgContext::SPREAD() {
  return getToken(MavkaParser::SPREAD, 0);
}


size_t MavkaParser::ArgContext::getRuleIndex() const {
  return MavkaParser::RuleArg;
}

void MavkaParser::ArgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArg(this);
}

void MavkaParser::ArgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArg(this);
}

MavkaParser::ArgContext* MavkaParser::arg() {
  ArgContext *_localctx = _tracker.createInstance<ArgContext>(_ctx, getState());
  enterRule(_localctx, 84, MavkaParser::RuleArg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(658);
    nls();
    setState(660);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MavkaParser::SPREAD) {
      setState(659);
      antlrcpp::downCast<ArgContext *>(_localctx)->a_spread = match(MavkaParser::SPREAD);
    }
    setState(662);
    antlrcpp::downCast<ArgContext *>(_localctx)->a_value = expr();
    setState(663);
    nls();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Named_argsContext ------------------------------------------------------------------

MavkaParser::Named_argsContext::Named_argsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MavkaParser::Named_argContext *> MavkaParser::Named_argsContext::named_arg() {
  return getRuleContexts<MavkaParser::Named_argContext>();
}

MavkaParser::Named_argContext* MavkaParser::Named_argsContext::named_arg(size_t i) {
  return getRuleContext<MavkaParser::Named_argContext>(i);
}

std::vector<tree::TerminalNode *> MavkaParser::Named_argsContext::COMMA() {
  return getTokens(MavkaParser::COMMA);
}

tree::TerminalNode* MavkaParser::Named_argsContext::COMMA(size_t i) {
  return getToken(MavkaParser::COMMA, i);
}


size_t MavkaParser::Named_argsContext::getRuleIndex() const {
  return MavkaParser::RuleNamed_args;
}

void MavkaParser::Named_argsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamed_args(this);
}

void MavkaParser::Named_argsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamed_args(this);
}

MavkaParser::Named_argsContext* MavkaParser::named_args() {
  Named_argsContext *_localctx = _tracker.createInstance<Named_argsContext>(_ctx, getState());
  enterRule(_localctx, 86, MavkaParser::RuleNamed_args);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(665);
    named_arg();
    setState(670);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MavkaParser::COMMA) {
      setState(666);
      match(MavkaParser::COMMA);
      setState(667);
      named_arg();
      setState(672);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Named_argContext ------------------------------------------------------------------

MavkaParser::Named_argContext::Named_argContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MavkaParser::NlsContext *> MavkaParser::Named_argContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Named_argContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

tree::TerminalNode* MavkaParser::Named_argContext::ASSIGN() {
  return getToken(MavkaParser::ASSIGN, 0);
}

MavkaParser::IdentifierContext* MavkaParser::Named_argContext::identifier() {
  return getRuleContext<MavkaParser::IdentifierContext>(0);
}

MavkaParser::ExprContext* MavkaParser::Named_argContext::expr() {
  return getRuleContext<MavkaParser::ExprContext>(0);
}


size_t MavkaParser::Named_argContext::getRuleIndex() const {
  return MavkaParser::RuleNamed_arg;
}

void MavkaParser::Named_argContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamed_arg(this);
}

void MavkaParser::Named_argContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamed_arg(this);
}

MavkaParser::Named_argContext* MavkaParser::named_arg() {
  Named_argContext *_localctx = _tracker.createInstance<Named_argContext>(_ctx, getState());
  enterRule(_localctx, 88, MavkaParser::RuleNamed_arg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(673);
    nls();
    setState(674);
    antlrcpp::downCast<Named_argContext *>(_localctx)->na_name = identifier();
    setState(675);
    match(MavkaParser::ASSIGN);
    setState(676);
    antlrcpp::downCast<Named_argContext *>(_localctx)->na_value = expr();
    setState(677);
    nls();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamsContext ------------------------------------------------------------------

MavkaParser::ParamsContext::ParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MavkaParser::ParamContext *> MavkaParser::ParamsContext::param() {
  return getRuleContexts<MavkaParser::ParamContext>();
}

MavkaParser::ParamContext* MavkaParser::ParamsContext::param(size_t i) {
  return getRuleContext<MavkaParser::ParamContext>(i);
}

std::vector<MavkaParser::NlsContext *> MavkaParser::ParamsContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::ParamsContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

std::vector<tree::TerminalNode *> MavkaParser::ParamsContext::COMMA() {
  return getTokens(MavkaParser::COMMA);
}

tree::TerminalNode* MavkaParser::ParamsContext::COMMA(size_t i) {
  return getToken(MavkaParser::COMMA, i);
}


size_t MavkaParser::ParamsContext::getRuleIndex() const {
  return MavkaParser::RuleParams;
}

void MavkaParser::ParamsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParams(this);
}

void MavkaParser::ParamsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParams(this);
}

MavkaParser::ParamsContext* MavkaParser::params() {
  ParamsContext *_localctx = _tracker.createInstance<ParamsContext>(_ctx, getState());
  enterRule(_localctx, 90, MavkaParser::RuleParams);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(679);
    param();
    setState(687);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(680);
        nls();
        setState(681);
        match(MavkaParser::COMMA);
        setState(682);
        nls();
        setState(683);
        param(); 
      }
      setState(689);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamContext ------------------------------------------------------------------

MavkaParser::ParamContext::ParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MavkaParser::IdentifierContext* MavkaParser::ParamContext::identifier() {
  return getRuleContext<MavkaParser::IdentifierContext>(0);
}

MavkaParser::Array_destructionContext* MavkaParser::ParamContext::array_destruction() {
  return getRuleContext<MavkaParser::Array_destructionContext>(0);
}

MavkaParser::Object_destructionContext* MavkaParser::ParamContext::object_destruction() {
  return getRuleContext<MavkaParser::Object_destructionContext>(0);
}

tree::TerminalNode* MavkaParser::ParamContext::ASSIGN() {
  return getToken(MavkaParser::ASSIGN, 0);
}

MavkaParser::Type_valueContext* MavkaParser::ParamContext::type_value() {
  return getRuleContext<MavkaParser::Type_valueContext>(0);
}

MavkaParser::Param_valueContext* MavkaParser::ParamContext::param_value() {
  return getRuleContext<MavkaParser::Param_valueContext>(0);
}

tree::TerminalNode* MavkaParser::ParamContext::SPREAD() {
  return getToken(MavkaParser::SPREAD, 0);
}


size_t MavkaParser::ParamContext::getRuleIndex() const {
  return MavkaParser::RuleParam;
}

void MavkaParser::ParamContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParam(this);
}

void MavkaParser::ParamContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParam(this);
}

MavkaParser::ParamContext* MavkaParser::param() {
  ParamContext *_localctx = _tracker.createInstance<ParamContext>(_ctx, getState());
  enterRule(_localctx, 92, MavkaParser::RuleParam);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(696);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MavkaParser::SPREAD:
      case MavkaParser::ID: {
        setState(691);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == MavkaParser::SPREAD) {
          setState(690);
          antlrcpp::downCast<ParamContext *>(_localctx)->p_spread = match(MavkaParser::SPREAD);
        }
        setState(693);
        antlrcpp::downCast<ParamContext *>(_localctx)->p_name = identifier();
        break;
      }

      case MavkaParser::OPEN_ARRAY: {
        setState(694);
        antlrcpp::downCast<ParamContext *>(_localctx)->p_array_destruction = array_destruction();
        break;
      }

      case MavkaParser::OPEN_PAREN: {
        setState(695);
        antlrcpp::downCast<ParamContext *>(_localctx)->p_object_destruction = object_destruction();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(699);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MavkaParser::ID) {
      setState(698);
      antlrcpp::downCast<ParamContext *>(_localctx)->p_type = type_value(0);
    }
    setState(703);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MavkaParser::ASSIGN) {
      setState(701);
      match(MavkaParser::ASSIGN);
      setState(702);
      antlrcpp::downCast<ParamContext *>(_localctx)->p_value = param_value();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Param_valueContext ------------------------------------------------------------------

MavkaParser::Param_valueContext::Param_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MavkaParser::Param_valueContext::getRuleIndex() const {
  return MavkaParser::RuleParam_value;
}

void MavkaParser::Param_valueContext::copyFrom(Param_valueContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Param_value_identifierContext ------------------------------------------------------------------

MavkaParser::IdentifierContext* MavkaParser::Param_value_identifierContext::identifier() {
  return getRuleContext<MavkaParser::IdentifierContext>(0);
}

MavkaParser::Param_value_identifierContext::Param_value_identifierContext(Param_valueContext *ctx) { copyFrom(ctx); }

void MavkaParser::Param_value_identifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParam_value_identifier(this);
}
void MavkaParser::Param_value_identifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParam_value_identifier(this);
}
//----------------- Param_value_numberContext ------------------------------------------------------------------

tree::TerminalNode* MavkaParser::Param_value_numberContext::NUMBER() {
  return getToken(MavkaParser::NUMBER, 0);
}

MavkaParser::Param_value_numberContext::Param_value_numberContext(Param_valueContext *ctx) { copyFrom(ctx); }

void MavkaParser::Param_value_numberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParam_value_number(this);
}
void MavkaParser::Param_value_numberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParam_value_number(this);
}
//----------------- Param_value_stringContext ------------------------------------------------------------------

tree::TerminalNode* MavkaParser::Param_value_stringContext::STRING() {
  return getToken(MavkaParser::STRING, 0);
}

MavkaParser::Param_value_stringContext::Param_value_stringContext(Param_valueContext *ctx) { copyFrom(ctx); }

void MavkaParser::Param_value_stringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParam_value_string(this);
}
void MavkaParser::Param_value_stringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParam_value_string(this);
}
MavkaParser::Param_valueContext* MavkaParser::param_value() {
  Param_valueContext *_localctx = _tracker.createInstance<Param_valueContext>(_ctx, getState());
  enterRule(_localctx, 94, MavkaParser::RuleParam_value);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(708);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MavkaParser::NUMBER: {
        _localctx = _tracker.createInstance<MavkaParser::Param_value_numberContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(705);
        match(MavkaParser::NUMBER);
        break;
      }

      case MavkaParser::STRING: {
        _localctx = _tracker.createInstance<MavkaParser::Param_value_stringContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(706);
        match(MavkaParser::STRING);
        break;
      }

      case MavkaParser::ID: {
        _localctx = _tracker.createInstance<MavkaParser::Param_value_identifierContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(707);
        identifier();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BodyContext ------------------------------------------------------------------

MavkaParser::BodyContext::BodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MavkaParser::Body_elementContext *> MavkaParser::BodyContext::body_element() {
  return getRuleContexts<MavkaParser::Body_elementContext>();
}

MavkaParser::Body_elementContext* MavkaParser::BodyContext::body_element(size_t i) {
  return getRuleContext<MavkaParser::Body_elementContext>(i);
}

std::vector<MavkaParser::NlContext *> MavkaParser::BodyContext::nl() {
  return getRuleContexts<MavkaParser::NlContext>();
}

MavkaParser::NlContext* MavkaParser::BodyContext::nl(size_t i) {
  return getRuleContext<MavkaParser::NlContext>(i);
}


size_t MavkaParser::BodyContext::getRuleIndex() const {
  return MavkaParser::RuleBody;
}

void MavkaParser::BodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBody(this);
}

void MavkaParser::BodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBody(this);
}

MavkaParser::BodyContext* MavkaParser::body() {
  BodyContext *_localctx = _tracker.createInstance<BodyContext>(_ctx, getState());
  enterRule(_localctx, 96, MavkaParser::RuleBody);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(710);
    body_element();
    setState(716);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(711);
        nl();
        setState(712);
        body_element(); 
      }
      setState(718);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Body_elementContext ------------------------------------------------------------------

MavkaParser::Body_elementContext::Body_elementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MavkaParser::StructureContext* MavkaParser::Body_elementContext::structure() {
  return getRuleContext<MavkaParser::StructureContext>(0);
}

MavkaParser::MockupContext* MavkaParser::Body_elementContext::mockup() {
  return getRuleContext<MavkaParser::MockupContext>(0);
}

MavkaParser::DiiaContext* MavkaParser::Body_elementContext::diia() {
  return getRuleContext<MavkaParser::DiiaContext>(0);
}

MavkaParser::IfContext* MavkaParser::Body_elementContext::if_() {
  return getRuleContext<MavkaParser::IfContext>(0);
}

MavkaParser::EachContext* MavkaParser::Body_elementContext::each() {
  return getRuleContext<MavkaParser::EachContext>(0);
}

MavkaParser::WhileContext* MavkaParser::Body_elementContext::while_() {
  return getRuleContext<MavkaParser::WhileContext>(0);
}

MavkaParser::TryContext* MavkaParser::Body_elementContext::try_() {
  return getRuleContext<MavkaParser::TryContext>(0);
}

MavkaParser::ExprContext* MavkaParser::Body_elementContext::expr() {
  return getRuleContext<MavkaParser::ExprContext>(0);
}

MavkaParser::ThrowContext* MavkaParser::Body_elementContext::throw_() {
  return getRuleContext<MavkaParser::ThrowContext>(0);
}

MavkaParser::Wait_assignContext* MavkaParser::Body_elementContext::wait_assign() {
  return getRuleContext<MavkaParser::Wait_assignContext>(0);
}

MavkaParser::AssignContext* MavkaParser::Body_elementContext::assign() {
  return getRuleContext<MavkaParser::AssignContext>(0);
}

MavkaParser::EvalContext* MavkaParser::Body_elementContext::eval() {
  return getRuleContext<MavkaParser::EvalContext>(0);
}

MavkaParser::Mockup_implContext* MavkaParser::Body_elementContext::mockup_impl() {
  return getRuleContext<MavkaParser::Mockup_implContext>(0);
}

MavkaParser::Return_body_lineContext* MavkaParser::Body_elementContext::return_body_line() {
  return getRuleContext<MavkaParser::Return_body_lineContext>(0);
}

MavkaParser::NlsContext* MavkaParser::Body_elementContext::nls() {
  return getRuleContext<MavkaParser::NlsContext>(0);
}


size_t MavkaParser::Body_elementContext::getRuleIndex() const {
  return MavkaParser::RuleBody_element;
}

void MavkaParser::Body_elementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBody_element(this);
}

void MavkaParser::Body_elementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBody_element(this);
}

MavkaParser::Body_elementContext* MavkaParser::body_element() {
  Body_elementContext *_localctx = _tracker.createInstance<Body_elementContext>(_ctx, getState());
  enterRule(_localctx, 98, MavkaParser::RuleBody_element);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(734);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 74, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(719);
      structure();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(720);
      mockup();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(721);
      diia();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(722);
      if_();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(723);
      each();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(724);
      while_();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(725);
      try_();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(726);
      expr();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(727);
      throw_();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(728);
      wait_assign();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(729);
      assign();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(730);
      eval();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(731);
      mockup_impl();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(732);
      return_body_line();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(733);
      nls();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Return_body_lineContext ------------------------------------------------------------------

MavkaParser::Return_body_lineContext::Return_body_lineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::Return_body_lineContext::RETURN() {
  return getToken(MavkaParser::RETURN, 0);
}

MavkaParser::Body_elementContext* MavkaParser::Return_body_lineContext::body_element() {
  return getRuleContext<MavkaParser::Body_elementContext>(0);
}


size_t MavkaParser::Return_body_lineContext::getRuleIndex() const {
  return MavkaParser::RuleReturn_body_line;
}

void MavkaParser::Return_body_lineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturn_body_line(this);
}

void MavkaParser::Return_body_lineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturn_body_line(this);
}

MavkaParser::Return_body_lineContext* MavkaParser::return_body_line() {
  Return_body_lineContext *_localctx = _tracker.createInstance<Return_body_lineContext>(_ctx, getState());
  enterRule(_localctx, 100, MavkaParser::RuleReturn_body_line);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(736);
    match(MavkaParser::RETURN);
    setState(737);
    antlrcpp::downCast<Return_body_lineContext *>(_localctx)->rbl = body_element();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Arithmetic_op_mulContext ------------------------------------------------------------------

MavkaParser::Arithmetic_op_mulContext::Arithmetic_op_mulContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::Arithmetic_op_mulContext::MUL() {
  return getToken(MavkaParser::MUL, 0);
}

tree::TerminalNode* MavkaParser::Arithmetic_op_mulContext::DIV() {
  return getToken(MavkaParser::DIV, 0);
}

tree::TerminalNode* MavkaParser::Arithmetic_op_mulContext::PERCENT() {
  return getToken(MavkaParser::PERCENT, 0);
}

tree::TerminalNode* MavkaParser::Arithmetic_op_mulContext::DIVDIV() {
  return getToken(MavkaParser::DIVDIV, 0);
}

tree::TerminalNode* MavkaParser::Arithmetic_op_mulContext::POW() {
  return getToken(MavkaParser::POW, 0);
}


size_t MavkaParser::Arithmetic_op_mulContext::getRuleIndex() const {
  return MavkaParser::RuleArithmetic_op_mul;
}

void MavkaParser::Arithmetic_op_mulContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArithmetic_op_mul(this);
}

void MavkaParser::Arithmetic_op_mulContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArithmetic_op_mul(this);
}

MavkaParser::Arithmetic_op_mulContext* MavkaParser::arithmetic_op_mul() {
  Arithmetic_op_mulContext *_localctx = _tracker.createInstance<Arithmetic_op_mulContext>(_ctx, getState());
  enterRule(_localctx, 102, MavkaParser::RuleArithmetic_op_mul);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(739);
    _la = _input->LA(1);
    if (!(((((_la - 75) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 75)) & 451) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Arithmetic_op_addContext ------------------------------------------------------------------

MavkaParser::Arithmetic_op_addContext::Arithmetic_op_addContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::Arithmetic_op_addContext::PLUS() {
  return getToken(MavkaParser::PLUS, 0);
}

tree::TerminalNode* MavkaParser::Arithmetic_op_addContext::MINUS() {
  return getToken(MavkaParser::MINUS, 0);
}


size_t MavkaParser::Arithmetic_op_addContext::getRuleIndex() const {
  return MavkaParser::RuleArithmetic_op_add;
}

void MavkaParser::Arithmetic_op_addContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArithmetic_op_add(this);
}

void MavkaParser::Arithmetic_op_addContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArithmetic_op_add(this);
}

MavkaParser::Arithmetic_op_addContext* MavkaParser::arithmetic_op_add() {
  Arithmetic_op_addContext *_localctx = _tracker.createInstance<Arithmetic_op_addContext>(_ctx, getState());
  enterRule(_localctx, 104, MavkaParser::RuleArithmetic_op_add);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(741);
    _la = _input->LA(1);
    if (!(_la == MavkaParser::PLUS

    || _la == MavkaParser::MINUS)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Bitwise_opContext ------------------------------------------------------------------

MavkaParser::Bitwise_opContext::Bitwise_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::Bitwise_opContext::XOR() {
  return getToken(MavkaParser::XOR, 0);
}

tree::TerminalNode* MavkaParser::Bitwise_opContext::OR_BW() {
  return getToken(MavkaParser::OR_BW, 0);
}

tree::TerminalNode* MavkaParser::Bitwise_opContext::AND_BW() {
  return getToken(MavkaParser::AND_BW, 0);
}

tree::TerminalNode* MavkaParser::Bitwise_opContext::BW_SHIFT_LEFT() {
  return getToken(MavkaParser::BW_SHIFT_LEFT, 0);
}

tree::TerminalNode* MavkaParser::Bitwise_opContext::BW_SHIFT_RIGHT() {
  return getToken(MavkaParser::BW_SHIFT_RIGHT, 0);
}


size_t MavkaParser::Bitwise_opContext::getRuleIndex() const {
  return MavkaParser::RuleBitwise_op;
}

void MavkaParser::Bitwise_opContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitwise_op(this);
}

void MavkaParser::Bitwise_opContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitwise_op(this);
}

MavkaParser::Bitwise_opContext* MavkaParser::bitwise_op() {
  Bitwise_opContext *_localctx = _tracker.createInstance<Bitwise_opContext>(_ctx, getState());
  enterRule(_localctx, 106, MavkaParser::RuleBitwise_op);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(743);
    _la = _input->LA(1);
    if (!(((((_la - 84) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 84)) & 121) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Test_opContext ------------------------------------------------------------------

MavkaParser::Test_opContext::Test_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::Test_opContext::AND() {
  return getToken(MavkaParser::AND, 0);
}

tree::TerminalNode* MavkaParser::Test_opContext::OR() {
  return getToken(MavkaParser::OR, 0);
}

tree::TerminalNode* MavkaParser::Test_opContext::OR_SYM() {
  return getToken(MavkaParser::OR_SYM, 0);
}

tree::TerminalNode* MavkaParser::Test_opContext::AND_SYM() {
  return getToken(MavkaParser::AND_SYM, 0);
}


size_t MavkaParser::Test_opContext::getRuleIndex() const {
  return MavkaParser::RuleTest_op;
}

void MavkaParser::Test_opContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTest_op(this);
}

void MavkaParser::Test_opContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTest_op(this);
}

MavkaParser::Test_opContext* MavkaParser::test_op() {
  Test_opContext *_localctx = _tracker.createInstance<Test_opContext>(_ctx, getState());
  enterRule(_localctx, 108, MavkaParser::RuleTest_op);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(745);
    _la = _input->LA(1);
    if (!(_la == MavkaParser::AND

    || _la == MavkaParser::OR || _la == MavkaParser::OR_SYM

    || _la == MavkaParser::AND_SYM)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Comparison_opContext ------------------------------------------------------------------

MavkaParser::Comparison_opContext::Comparison_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::Comparison_opContext::EQ() {
  return getToken(MavkaParser::EQ, 0);
}

tree::TerminalNode* MavkaParser::Comparison_opContext::NOT_EQ() {
  return getToken(MavkaParser::NOT_EQ, 0);
}

tree::TerminalNode* MavkaParser::Comparison_opContext::GREATER() {
  return getToken(MavkaParser::GREATER, 0);
}

tree::TerminalNode* MavkaParser::Comparison_opContext::SMALLER() {
  return getToken(MavkaParser::SMALLER, 0);
}

tree::TerminalNode* MavkaParser::Comparison_opContext::GREATER_EQ() {
  return getToken(MavkaParser::GREATER_EQ, 0);
}

tree::TerminalNode* MavkaParser::Comparison_opContext::SMALLER_EQ() {
  return getToken(MavkaParser::SMALLER_EQ, 0);
}

tree::TerminalNode* MavkaParser::Comparison_opContext::IS() {
  return getToken(MavkaParser::IS, 0);
}

tree::TerminalNode* MavkaParser::Comparison_opContext::NOT_IS_WORD() {
  return getToken(MavkaParser::NOT_IS_WORD, 0);
}

tree::TerminalNode* MavkaParser::Comparison_opContext::EQ_WORD() {
  return getToken(MavkaParser::EQ_WORD, 0);
}

tree::TerminalNode* MavkaParser::Comparison_opContext::NOT_EQ_WORD() {
  return getToken(MavkaParser::NOT_EQ_WORD, 0);
}

tree::TerminalNode* MavkaParser::Comparison_opContext::GR_WORD() {
  return getToken(MavkaParser::GR_WORD, 0);
}

tree::TerminalNode* MavkaParser::Comparison_opContext::NOT_GR_WORD() {
  return getToken(MavkaParser::NOT_GR_WORD, 0);
}

tree::TerminalNode* MavkaParser::Comparison_opContext::SM_WORD() {
  return getToken(MavkaParser::SM_WORD, 0);
}

tree::TerminalNode* MavkaParser::Comparison_opContext::NOT_SM_WORD() {
  return getToken(MavkaParser::NOT_SM_WORD, 0);
}

tree::TerminalNode* MavkaParser::Comparison_opContext::HAS_IS_WORD() {
  return getToken(MavkaParser::HAS_IS_WORD, 0);
}

tree::TerminalNode* MavkaParser::Comparison_opContext::NOT_HAS_IS_WORD() {
  return getToken(MavkaParser::NOT_HAS_IS_WORD, 0);
}


size_t MavkaParser::Comparison_opContext::getRuleIndex() const {
  return MavkaParser::RuleComparison_op;
}

void MavkaParser::Comparison_opContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparison_op(this);
}

void MavkaParser::Comparison_opContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparison_op(this);
}

MavkaParser::Comparison_opContext* MavkaParser::comparison_op() {
  Comparison_opContext *_localctx = _tracker.createInstance<Comparison_opContext>(_ctx, getState());
  enterRule(_localctx, 110, MavkaParser::RuleComparison_op);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(747);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 548682336224) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NlContext ------------------------------------------------------------------

MavkaParser::NlContext::NlContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::NlContext::NL() {
  return getToken(MavkaParser::NL, 0);
}


size_t MavkaParser::NlContext::getRuleIndex() const {
  return MavkaParser::RuleNl;
}

void MavkaParser::NlContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNl(this);
}

void MavkaParser::NlContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNl(this);
}

MavkaParser::NlContext* MavkaParser::nl() {
  NlContext *_localctx = _tracker.createInstance<NlContext>(_ctx, getState());
  enterRule(_localctx, 112, MavkaParser::RuleNl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(749);
    match(MavkaParser::NL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NlsContext ------------------------------------------------------------------

MavkaParser::NlsContext::NlsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MavkaParser::NlContext *> MavkaParser::NlsContext::nl() {
  return getRuleContexts<MavkaParser::NlContext>();
}

MavkaParser::NlContext* MavkaParser::NlsContext::nl(size_t i) {
  return getRuleContext<MavkaParser::NlContext>(i);
}


size_t MavkaParser::NlsContext::getRuleIndex() const {
  return MavkaParser::RuleNls;
}

void MavkaParser::NlsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNls(this);
}

void MavkaParser::NlsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNls(this);
}

MavkaParser::NlsContext* MavkaParser::nls() {
  NlsContext *_localctx = _tracker.createInstance<NlsContext>(_ctx, getState());
  enterRule(_localctx, 114, MavkaParser::RuleNls);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(754);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(751);
        nl(); 
      }
      setState(756);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool MavkaParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 22: return valueSempred(antlrcpp::downCast<ValueContext *>(context), predicateIndex);
    case 39: return identifiers_chainSempred(antlrcpp::downCast<Identifiers_chainContext *>(context), predicateIndex);
    case 40: return type_valueSempred(antlrcpp::downCast<Type_valueContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool MavkaParser::valueSempred(ValueContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 8);
    case 1: return precpred(_ctx, 7);
    case 2: return precpred(_ctx, 6);
    case 3: return precpred(_ctx, 5);
    case 4: return precpred(_ctx, 4);
    case 5: return precpred(_ctx, 21);
    case 6: return precpred(_ctx, 20);
    case 7: return precpred(_ctx, 15);
    case 8: return precpred(_ctx, 14);
    case 9: return precpred(_ctx, 11);
    case 10: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

bool MavkaParser::identifiers_chainSempred(Identifiers_chainContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 11: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool MavkaParser::type_valueSempred(Type_valueContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 12: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void MavkaParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  mavkaparserParserInitialize();
#else
  ::antlr4::internal::call_once(mavkaparserParserOnceFlag, mavkaparserParserInitialize);
#endif
}
