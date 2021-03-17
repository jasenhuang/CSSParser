/* Copyright (c) 2012-2017 The ANTLR Project. All rights reserved.
 * Use of this file is governed by the BSD 3-clause license that
 * can be found in the LICENSE.txt file in the project root.
 */

//
//  main.cpp
//  antlr4-cpp-demo
//
//  Created by Mike Lischke on 13.03.16.
//

#include <iostream>
#include "CSSLexer.h"
#include "CSSParser.h"

using namespace antlr4;

int main(int , const char **) {
  //ANTLRInputStream input("h2.preface {/* 序言前言标题 */margin: 30% 0 0.11111em;}");
    
    ANTLRFileStream input("style.css");
    CSSLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    tokens.fill();
    for (auto token : tokens.getTokens()) {
        std::cout << token->toString() << std::endl;
    }

    CSSParser parser(&tokens);
    tree::ParseTree* tree = parser.stylesheet();
    
    std::cout << tree->toStringTree(&parser) << std::endl << std::endl;

    return 0;
}
