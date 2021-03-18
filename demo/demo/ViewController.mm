//
//  ViewController.m
//  demo
//
//  Created by 黄栩生 on 2021/3/18.
//

#import "ViewController.h"
#include <iostream>
#include "CSSLexer.h"
#include "CSSParser.h"

using namespace antlr4;

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
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
    
}


@end
