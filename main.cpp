#include <iostream>

#include "antlr4-runtime.h"
#include "MavkaLexer.h"
#include "MavkaParser.h"
#include "MavkaParserBaseListener.h"

class TreeShapeListener : public MavkaParserBaseListener {
public:
    void enterFile(MavkaParser::FileContext *ctx) override {
        std::cout << "enterFile" << std::endl;
    }
};


int main(int argc, const char* argv[]) {
    std::ifstream stream;
    stream.open(argv[1]);
    antlr4::ANTLRInputStream input(stream);
    MavkaLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    MavkaParser parser(&tokens);

    antlr4::tree::ParseTree *tree = parser.file();
    TreeShapeListener listener;
    antlr4::tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);

    return 0;
}