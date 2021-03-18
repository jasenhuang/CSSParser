
// Generated from CSS.g4 by ANTLR 4.9

#pragma once


#include "antlr4-runtime.h"




class  CSSParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, Comment = 16, Space = 17, Cdo = 18, Cdc = 19, Includes = 20, 
    DashMatch = 21, Hash = 22, Import = 23, Page = 24, Media = 25, Namespace = 26, 
    Charset = 27, Important = 28, Percentage = 29, Uri = 30, UnicodeRange = 31, 
    MediaOnly = 32, Not = 33, And = 34, Dimension = 35, UnknownDimension = 36, 
    Plus = 37, Minus = 38, Greater = 39, Comma = 40, Tilde = 41, PseudoNot = 42, 
    Number = 43, String = 44, PrefixMatch = 45, SuffixMatch = 46, SubstringMatch = 47, 
    FontFace = 48, Supports = 49, Or = 50, Keyframes = 51, From = 52, To = 53, 
    Calc = 54, Viewport = 55, CounterStyle = 56, FontFeatureValues = 57, 
    DxImageTransform = 58, Variable = 59, Var = 60, Ident = 61, Function = 62
  };

  enum {
    RuleStylesheet = 0, RuleCharset = 1, RuleImports = 2, RuleNamespace_ = 3, 
    RuleNamespacePrefix = 4, RuleMedia = 5, RuleMediaQueryList = 6, RuleMediaQuery = 7, 
    RuleMediaType = 8, RuleMediaExpression = 9, RuleMediaFeature = 10, RulePage = 11, 
    RulePseudoPage = 12, RuleSelectorGroup = 13, RuleSelector = 14, RuleCombinator = 15, 
    RuleSimpleSelectorSequence = 16, RuleTypeSelector = 17, RuleTypeNamespacePrefix = 18, 
    RuleElementName = 19, RuleUniversal = 20, RuleClassName = 21, RuleAttrib = 22, 
    RulePseudo = 23, RuleFunctionalPseudo = 24, RuleExpression = 25, RuleNegation = 26, 
    RuleNegationArg = 27, RuleOperator_ = 28, RuleProperty = 29, RuleRuleset = 30, 
    RuleDeclarationList = 31, RuleDeclaration = 32, RulePrio = 33, RuleValue = 34, 
    RuleExpr = 35, RuleTerm = 36, RuleFunction_ = 37, RuleDxImageTransform = 38, 
    RuleHexcolor = 39, RuleNumber = 40, RulePercentage = 41, RuleDimension = 42, 
    RuleUnknownDimension = 43, RuleAny = 44, RuleAtRule = 45, RuleAtKeyword = 46, 
    RuleUnused = 47, RuleBlock = 48, RuleStatement = 49, RuleGroupRuleBody = 50, 
    RuleSupportsRule = 51, RuleSupportsCondition = 52, RuleSupportsConditionInParens = 53, 
    RuleSupportsNegation = 54, RuleSupportsConjunction = 55, RuleSupportsDisjunction = 56, 
    RuleSupportsDeclarationCondition = 57, RuleGeneralEnclosed = 58, RuleVar_ = 59, 
    RuleCalc = 60, RuleCalcSum = 61, RuleCalcProduct = 62, RuleCalcValue = 63, 
    RuleFontFaceRule = 64, RuleFontFaceDeclaration = 65, RuleKeyframesRule = 66, 
    RuleKeyframesBlocks = 67, RuleKeyframeSelector = 68, RuleViewport = 69, 
    RuleCounterStyle = 70, RuleFontFeatureValuesRule = 71, RuleFontFamilyNameList = 72, 
    RuleFontFamilyName = 73, RuleFeatureValueBlock = 74, RuleFeatureType = 75, 
    RuleFeatureValueDefinition = 76, RuleIdent = 77, RuleWs = 78
  };

  explicit CSSParser(antlr4::TokenStream *input);
  ~CSSParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class StylesheetContext;
  class CharsetContext;
  class ImportsContext;
  class Namespace_Context;
  class NamespacePrefixContext;
  class MediaContext;
  class MediaQueryListContext;
  class MediaQueryContext;
  class MediaTypeContext;
  class MediaExpressionContext;
  class MediaFeatureContext;
  class PageContext;
  class PseudoPageContext;
  class SelectorGroupContext;
  class SelectorContext;
  class CombinatorContext;
  class SimpleSelectorSequenceContext;
  class TypeSelectorContext;
  class TypeNamespacePrefixContext;
  class ElementNameContext;
  class UniversalContext;
  class ClassNameContext;
  class AttribContext;
  class PseudoContext;
  class FunctionalPseudoContext;
  class ExpressionContext;
  class NegationContext;
  class NegationArgContext;
  class Operator_Context;
  class PropertyContext;
  class RulesetContext;
  class DeclarationListContext;
  class DeclarationContext;
  class PrioContext;
  class ValueContext;
  class ExprContext;
  class TermContext;
  class Function_Context;
  class DxImageTransformContext;
  class HexcolorContext;
  class NumberContext;
  class PercentageContext;
  class DimensionContext;
  class UnknownDimensionContext;
  class AnyContext;
  class AtRuleContext;
  class AtKeywordContext;
  class UnusedContext;
  class BlockContext;
  class StatementContext;
  class GroupRuleBodyContext;
  class SupportsRuleContext;
  class SupportsConditionContext;
  class SupportsConditionInParensContext;
  class SupportsNegationContext;
  class SupportsConjunctionContext;
  class SupportsDisjunctionContext;
  class SupportsDeclarationConditionContext;
  class GeneralEnclosedContext;
  class Var_Context;
  class CalcContext;
  class CalcSumContext;
  class CalcProductContext;
  class CalcValueContext;
  class FontFaceRuleContext;
  class FontFaceDeclarationContext;
  class KeyframesRuleContext;
  class KeyframesBlocksContext;
  class KeyframeSelectorContext;
  class ViewportContext;
  class CounterStyleContext;
  class FontFeatureValuesRuleContext;
  class FontFamilyNameListContext;
  class FontFamilyNameContext;
  class FeatureValueBlockContext;
  class FeatureTypeContext;
  class FeatureValueDefinitionContext;
  class IdentContext;
  class WsContext; 

  class  StylesheetContext : public antlr4::ParserRuleContext {
  public:
    StylesheetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    WsContext *ws();
    std::vector<CharsetContext *> charset();
    CharsetContext* charset(size_t i);
    std::vector<ImportsContext *> imports();
    ImportsContext* imports(size_t i);
    std::vector<Namespace_Context *> namespace_();
    Namespace_Context* namespace_(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comment();
    antlr4::tree::TerminalNode* Comment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Space();
    antlr4::tree::TerminalNode* Space(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Cdo();
    antlr4::tree::TerminalNode* Cdo(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Cdc();
    antlr4::tree::TerminalNode* Cdc(size_t i);

   
  };

  StylesheetContext* stylesheet();

  class  CharsetContext : public antlr4::ParserRuleContext {
  public:
    CharsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    CharsetContext() = default;
    void copyFrom(CharsetContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  BadCharsetContext : public CharsetContext {
  public:
    BadCharsetContext(CharsetContext *ctx);

    antlr4::tree::TerminalNode *Charset();
    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);
    antlr4::tree::TerminalNode *String();
  };

  class  GoodCharsetContext : public CharsetContext {
  public:
    GoodCharsetContext(CharsetContext *ctx);

    antlr4::tree::TerminalNode *Charset();
    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);
    antlr4::tree::TerminalNode *String();
  };

  CharsetContext* charset();

  class  ImportsContext : public antlr4::ParserRuleContext {
  public:
    ImportsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ImportsContext() = default;
    void copyFrom(ImportsContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  BadImportContext : public ImportsContext {
  public:
    BadImportContext(ImportsContext *ctx);

    antlr4::tree::TerminalNode *Import();
    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);
    MediaQueryListContext *mediaQueryList();
    antlr4::tree::TerminalNode *String();
    antlr4::tree::TerminalNode *Uri();
  };

  class  GoodImportContext : public ImportsContext {
  public:
    GoodImportContext(ImportsContext *ctx);

    antlr4::tree::TerminalNode *Import();
    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);
    MediaQueryListContext *mediaQueryList();
    antlr4::tree::TerminalNode *String();
    antlr4::tree::TerminalNode *Uri();
  };

  ImportsContext* imports();

  class  Namespace_Context : public antlr4::ParserRuleContext {
  public:
    Namespace_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Namespace_Context() = default;
    void copyFrom(Namespace_Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  GoodNamespaceContext : public Namespace_Context {
  public:
    GoodNamespaceContext(Namespace_Context *ctx);

    antlr4::tree::TerminalNode *Namespace();
    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);
    antlr4::tree::TerminalNode *String();
    antlr4::tree::TerminalNode *Uri();
    NamespacePrefixContext *namespacePrefix();
  };

  class  BadNamespaceContext : public Namespace_Context {
  public:
    BadNamespaceContext(Namespace_Context *ctx);

    antlr4::tree::TerminalNode *Namespace();
    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);
    antlr4::tree::TerminalNode *String();
    antlr4::tree::TerminalNode *Uri();
    NamespacePrefixContext *namespacePrefix();
  };

  Namespace_Context* namespace_();

  class  NamespacePrefixContext : public antlr4::ParserRuleContext {
  public:
    NamespacePrefixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();

   
  };

  NamespacePrefixContext* namespacePrefix();

  class  MediaContext : public antlr4::ParserRuleContext {
  public:
    MediaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Media();
    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);
    MediaQueryListContext *mediaQueryList();
    GroupRuleBodyContext *groupRuleBody();

   
  };

  MediaContext* media();

  class  MediaQueryListContext : public antlr4::ParserRuleContext {
  public:
    MediaQueryListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);
    std::vector<MediaQueryContext *> mediaQuery();
    MediaQueryContext* mediaQuery(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

   
  };

  MediaQueryListContext* mediaQueryList();

  class  MediaQueryContext : public antlr4::ParserRuleContext {
  public:
    MediaQueryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);
    MediaTypeContext *mediaType();
    std::vector<antlr4::tree::TerminalNode *> And();
    antlr4::tree::TerminalNode* And(size_t i);
    std::vector<MediaExpressionContext *> mediaExpression();
    MediaExpressionContext* mediaExpression(size_t i);
    antlr4::tree::TerminalNode *MediaOnly();
    antlr4::tree::TerminalNode *Not();

   
  };

  MediaQueryContext* mediaQuery();

  class  MediaTypeContext : public antlr4::ParserRuleContext {
  public:
    MediaTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();

   
  };

  MediaTypeContext* mediaType();

  class  MediaExpressionContext : public antlr4::ParserRuleContext {
  public:
    MediaExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);
    MediaFeatureContext *mediaFeature();
    ExprContext *expr();

   
  };

  MediaExpressionContext* mediaExpression();

  class  MediaFeatureContext : public antlr4::ParserRuleContext {
  public:
    MediaFeatureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();
    WsContext *ws();

   
  };

  MediaFeatureContext* mediaFeature();

  class  PageContext : public antlr4::ParserRuleContext {
  public:
    PageContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Page();
    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);
    PseudoPageContext *pseudoPage();
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);

   
  };

  PageContext* page();

  class  PseudoPageContext : public antlr4::ParserRuleContext {
  public:
    PseudoPageContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();
    WsContext *ws();

   
  };

  PseudoPageContext* pseudoPage();

  class  SelectorGroupContext : public antlr4::ParserRuleContext {
  public:
    SelectorGroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SelectorContext *> selector();
    SelectorContext* selector(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);

   
  };

  SelectorGroupContext* selectorGroup();

  class  SelectorContext : public antlr4::ParserRuleContext {
  public:
    SelectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SimpleSelectorSequenceContext *> simpleSelectorSequence();
    SimpleSelectorSequenceContext* simpleSelectorSequence(size_t i);
    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);
    std::vector<CombinatorContext *> combinator();
    CombinatorContext* combinator(size_t i);

   
  };

  SelectorContext* selector();

  class  CombinatorContext : public antlr4::ParserRuleContext {
  public:
    CombinatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Plus();
    WsContext *ws();
    antlr4::tree::TerminalNode *Greater();
    antlr4::tree::TerminalNode *Tilde();
    antlr4::tree::TerminalNode *Space();

   
  };

  CombinatorContext* combinator();

  class  SimpleSelectorSequenceContext : public antlr4::ParserRuleContext {
  public:
    SimpleSelectorSequenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeSelectorContext *typeSelector();
    UniversalContext *universal();
    std::vector<antlr4::tree::TerminalNode *> Hash();
    antlr4::tree::TerminalNode* Hash(size_t i);
    std::vector<ClassNameContext *> className();
    ClassNameContext* className(size_t i);
    std::vector<AttribContext *> attrib();
    AttribContext* attrib(size_t i);
    std::vector<PseudoContext *> pseudo();
    PseudoContext* pseudo(size_t i);
    std::vector<NegationContext *> negation();
    NegationContext* negation(size_t i);

   
  };

  SimpleSelectorSequenceContext* simpleSelectorSequence();

  class  TypeSelectorContext : public antlr4::ParserRuleContext {
  public:
    TypeSelectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ElementNameContext *elementName();
    TypeNamespacePrefixContext *typeNamespacePrefix();

   
  };

  TypeSelectorContext* typeSelector();

  class  TypeNamespacePrefixContext : public antlr4::ParserRuleContext {
  public:
    TypeNamespacePrefixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();

   
  };

  TypeNamespacePrefixContext* typeNamespacePrefix();

  class  ElementNameContext : public antlr4::ParserRuleContext {
  public:
    ElementNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();

   
  };

  ElementNameContext* elementName();

  class  UniversalContext : public antlr4::ParserRuleContext {
  public:
    UniversalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeNamespacePrefixContext *typeNamespacePrefix();

   
  };

  UniversalContext* universal();

  class  ClassNameContext : public antlr4::ParserRuleContext {
  public:
    ClassNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();

   
  };

  ClassNameContext* className();

  class  AttribContext : public antlr4::ParserRuleContext {
  public:
    AttribContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);
    std::vector<IdentContext *> ident();
    IdentContext* ident(size_t i);
    TypeNamespacePrefixContext *typeNamespacePrefix();
    antlr4::tree::TerminalNode *PrefixMatch();
    antlr4::tree::TerminalNode *SuffixMatch();
    antlr4::tree::TerminalNode *SubstringMatch();
    antlr4::tree::TerminalNode *Includes();
    antlr4::tree::TerminalNode *DashMatch();
    antlr4::tree::TerminalNode *String();

   
  };

  AttribContext* attrib();

  class  PseudoContext : public antlr4::ParserRuleContext {
  public:
    PseudoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();
    FunctionalPseudoContext *functionalPseudo();

   
  };

  PseudoContext* pseudo();

  class  FunctionalPseudoContext : public antlr4::ParserRuleContext {
  public:
    FunctionalPseudoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Function();
    WsContext *ws();
    ExpressionContext *expression();

   
  };

  FunctionalPseudoContext* functionalPseudo();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Plus();
    antlr4::tree::TerminalNode* Plus(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Minus();
    antlr4::tree::TerminalNode* Minus(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Dimension();
    antlr4::tree::TerminalNode* Dimension(size_t i);
    std::vector<antlr4::tree::TerminalNode *> UnknownDimension();
    antlr4::tree::TerminalNode* UnknownDimension(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Number();
    antlr4::tree::TerminalNode* Number(size_t i);
    std::vector<antlr4::tree::TerminalNode *> String();
    antlr4::tree::TerminalNode* String(size_t i);
    std::vector<IdentContext *> ident();
    IdentContext* ident(size_t i);

   
  };

  ExpressionContext* expression();

  class  NegationContext : public antlr4::ParserRuleContext {
  public:
    NegationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PseudoNot();
    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);
    NegationArgContext *negationArg();

   
  };

  NegationContext* negation();

  class  NegationArgContext : public antlr4::ParserRuleContext {
  public:
    NegationArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeSelectorContext *typeSelector();
    UniversalContext *universal();
    antlr4::tree::TerminalNode *Hash();
    ClassNameContext *className();
    AttribContext *attrib();
    PseudoContext *pseudo();

   
  };

  NegationArgContext* negationArg();

  class  Operator_Context : public antlr4::ParserRuleContext {
  public:
    Operator_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Operator_Context() = default;
    void copyFrom(Operator_Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  BadOperatorContext : public Operator_Context {
  public:
    BadOperatorContext(Operator_Context *ctx);

    WsContext *ws();
  };

  class  GoodOperatorContext : public Operator_Context {
  public:
    GoodOperatorContext(Operator_Context *ctx);

    WsContext *ws();
    antlr4::tree::TerminalNode *Comma();
    antlr4::tree::TerminalNode *Space();
  };

  Operator_Context* operator_();

  class  PropertyContext : public antlr4::ParserRuleContext {
  public:
    PropertyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PropertyContext() = default;
    void copyFrom(PropertyContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  BadPropertyContext : public PropertyContext {
  public:
    BadPropertyContext(PropertyContext *ctx);

    IdentContext *ident();
  };

  class  GoodPropertyContext : public PropertyContext {
  public:
    GoodPropertyContext(PropertyContext *ctx);

    IdentContext *ident();
    WsContext *ws();
    antlr4::tree::TerminalNode *Variable();
  };

  PropertyContext* property();

  class  RulesetContext : public antlr4::ParserRuleContext {
  public:
    RulesetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    RulesetContext() = default;
    void copyFrom(RulesetContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  UnknownRulesetContext : public RulesetContext {
  public:
    UnknownRulesetContext(RulesetContext *ctx);

    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);
    std::vector<AnyContext *> any();
    AnyContext* any(size_t i);
    DeclarationListContext *declarationList();
  };

  class  KnownRulesetContext : public RulesetContext {
  public:
    KnownRulesetContext(RulesetContext *ctx);

    SelectorGroupContext *selectorGroup();
    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);
    DeclarationListContext *declarationList();
  };

  RulesetContext* ruleset();

  class  DeclarationListContext : public antlr4::ParserRuleContext {
  public:
    DeclarationListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);
    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);

   
  };

  DeclarationListContext* declarationList();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    DeclarationContext() = default;
    void copyFrom(DeclarationContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  UnknownDeclarationContext : public DeclarationContext {
  public:
    UnknownDeclarationContext(DeclarationContext *ctx);

    PropertyContext *property();
    WsContext *ws();
    ValueContext *value();
  };

  class  KnownDeclarationContext : public DeclarationContext {
  public:
    KnownDeclarationContext(DeclarationContext *ctx);

    PropertyContext *property();
    WsContext *ws();
    ExprContext *expr();
    PrioContext *prio();
  };

  DeclarationContext* declaration();

  class  PrioContext : public antlr4::ParserRuleContext {
  public:
    PrioContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Important();
    WsContext *ws();

   
  };

  PrioContext* prio();

  class  ValueContext : public antlr4::ParserRuleContext {
  public:
    ValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AnyContext *> any();
    AnyContext* any(size_t i);
    std::vector<BlockContext *> block();
    BlockContext* block(size_t i);
    std::vector<AtKeywordContext *> atKeyword();
    AtKeywordContext* atKeyword(size_t i);
    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);

   
  };

  ValueContext* value();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TermContext *> term();
    TermContext* term(size_t i);
    std::vector<Operator_Context *> operator_();
    Operator_Context* operator_(size_t i);

   
  };

  ExprContext* expr();

  class  TermContext : public antlr4::ParserRuleContext {
  public:
    TermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TermContext() = default;
    void copyFrom(TermContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  BadTermContext : public TermContext {
  public:
    BadTermContext(TermContext *ctx);

    DxImageTransformContext *dxImageTransform();
  };

  class  KnownTermContext : public TermContext {
  public:
    KnownTermContext(TermContext *ctx);

    NumberContext *number();
    WsContext *ws();
    PercentageContext *percentage();
    DimensionContext *dimension();
    antlr4::tree::TerminalNode *String();
    antlr4::tree::TerminalNode *UnicodeRange();
    IdentContext *ident();
    Var_Context *var_();
    antlr4::tree::TerminalNode *Uri();
    HexcolorContext *hexcolor();
    CalcContext *calc();
    Function_Context *function_();
  };

  class  UnknownTermContext : public TermContext {
  public:
    UnknownTermContext(TermContext *ctx);

    UnknownDimensionContext *unknownDimension();
    WsContext *ws();
  };

  TermContext* term();

  class  Function_Context : public antlr4::ParserRuleContext {
  public:
    Function_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Function();
    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);
    ExprContext *expr();

   
  };

  Function_Context* function_();

  class  DxImageTransformContext : public antlr4::ParserRuleContext {
  public:
    DxImageTransformContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DxImageTransform();
    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);
    ExprContext *expr();

   
  };

  DxImageTransformContext* dxImageTransform();

  class  HexcolorContext : public antlr4::ParserRuleContext {
  public:
    HexcolorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Hash();
    WsContext *ws();

   
  };

  HexcolorContext* hexcolor();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Number();
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Minus();

   
  };

  NumberContext* number();

  class  PercentageContext : public antlr4::ParserRuleContext {
  public:
    PercentageContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Percentage();
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Minus();

   
  };

  PercentageContext* percentage();

  class  DimensionContext : public antlr4::ParserRuleContext {
  public:
    DimensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Dimension();
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Minus();

   
  };

  DimensionContext* dimension();

  class  UnknownDimensionContext : public antlr4::ParserRuleContext {
  public:
    UnknownDimensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UnknownDimension();
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Minus();

   
  };

  UnknownDimensionContext* unknownDimension();

  class  AnyContext : public antlr4::ParserRuleContext {
  public:
    AnyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();
    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);
    NumberContext *number();
    PercentageContext *percentage();
    DimensionContext *dimension();
    UnknownDimensionContext *unknownDimension();
    antlr4::tree::TerminalNode *String();
    antlr4::tree::TerminalNode *Uri();
    antlr4::tree::TerminalNode *Hash();
    antlr4::tree::TerminalNode *UnicodeRange();
    antlr4::tree::TerminalNode *Includes();
    antlr4::tree::TerminalNode *DashMatch();
    antlr4::tree::TerminalNode *Function();
    std::vector<AnyContext *> any();
    AnyContext* any(size_t i);
    std::vector<UnusedContext *> unused();
    UnusedContext* unused(size_t i);

   
  };

  AnyContext* any();

  class  AtRuleContext : public antlr4::ParserRuleContext {
  public:
    AtRuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AtRuleContext() = default;
    void copyFrom(AtRuleContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  UnknownAtRuleContext : public AtRuleContext {
  public:
    UnknownAtRuleContext(AtRuleContext *ctx);

    AtKeywordContext *atKeyword();
    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);
    BlockContext *block();
    std::vector<AnyContext *> any();
    AnyContext* any(size_t i);
  };

  AtRuleContext* atRule();

  class  AtKeywordContext : public antlr4::ParserRuleContext {
  public:
    AtKeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();

   
  };

  AtKeywordContext* atKeyword();

  class  UnusedContext : public antlr4::ParserRuleContext {
  public:
    UnusedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();
    AtKeywordContext *atKeyword();
    WsContext *ws();
    antlr4::tree::TerminalNode *Cdo();
    antlr4::tree::TerminalNode *Cdc();

   
  };

  UnusedContext* unused();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);
    std::vector<DeclarationListContext *> declarationList();
    DeclarationListContext* declarationList(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<AnyContext *> any();
    AnyContext* any(size_t i);
    std::vector<BlockContext *> block();
    BlockContext* block(size_t i);
    std::vector<AtKeywordContext *> atKeyword();
    AtKeywordContext* atKeyword(size_t i);

   
  };

  BlockContext* block();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RulesetContext *ruleset();
    MediaContext *media();
    PageContext *page();
    FontFaceRuleContext *fontFaceRule();
    KeyframesRuleContext *keyframesRule();
    SupportsRuleContext *supportsRule();
    ViewportContext *viewport();
    CounterStyleContext *counterStyle();
    FontFeatureValuesRuleContext *fontFeatureValuesRule();
    AtRuleContext *atRule();

   
  };

  StatementContext* statement();

  class  GroupRuleBodyContext : public antlr4::ParserRuleContext {
  public:
    GroupRuleBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

   
  };

  GroupRuleBodyContext* groupRuleBody();

  class  SupportsRuleContext : public antlr4::ParserRuleContext {
  public:
    SupportsRuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Supports();
    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);
    SupportsConditionContext *supportsCondition();
    GroupRuleBodyContext *groupRuleBody();

   
  };

  SupportsRuleContext* supportsRule();

  class  SupportsConditionContext : public antlr4::ParserRuleContext {
  public:
    SupportsConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SupportsNegationContext *supportsNegation();
    SupportsConjunctionContext *supportsConjunction();
    SupportsDisjunctionContext *supportsDisjunction();
    SupportsConditionInParensContext *supportsConditionInParens();

   
  };

  SupportsConditionContext* supportsCondition();

  class  SupportsConditionInParensContext : public antlr4::ParserRuleContext {
  public:
    SupportsConditionInParensContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);
    SupportsConditionContext *supportsCondition();
    SupportsDeclarationConditionContext *supportsDeclarationCondition();
    GeneralEnclosedContext *generalEnclosed();

   
  };

  SupportsConditionInParensContext* supportsConditionInParens();

  class  SupportsNegationContext : public antlr4::ParserRuleContext {
  public:
    SupportsNegationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Not();
    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);
    antlr4::tree::TerminalNode *Space();
    SupportsConditionInParensContext *supportsConditionInParens();

   
  };

  SupportsNegationContext* supportsNegation();

  class  SupportsConjunctionContext : public antlr4::ParserRuleContext {
  public:
    SupportsConjunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SupportsConditionInParensContext *> supportsConditionInParens();
    SupportsConditionInParensContext* supportsConditionInParens(size_t i);
    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Space();
    antlr4::tree::TerminalNode* Space(size_t i);
    std::vector<antlr4::tree::TerminalNode *> And();
    antlr4::tree::TerminalNode* And(size_t i);

   
  };

  SupportsConjunctionContext* supportsConjunction();

  class  SupportsDisjunctionContext : public antlr4::ParserRuleContext {
  public:
    SupportsDisjunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SupportsConditionInParensContext *> supportsConditionInParens();
    SupportsConditionInParensContext* supportsConditionInParens(size_t i);
    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Space();
    antlr4::tree::TerminalNode* Space(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Or();
    antlr4::tree::TerminalNode* Or(size_t i);

   
  };

  SupportsDisjunctionContext* supportsDisjunction();

  class  SupportsDeclarationConditionContext : public antlr4::ParserRuleContext {
  public:
    SupportsDeclarationConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    WsContext *ws();
    DeclarationContext *declaration();

   
  };

  SupportsDeclarationConditionContext* supportsDeclarationCondition();

  class  GeneralEnclosedContext : public antlr4::ParserRuleContext {
  public:
    GeneralEnclosedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Function();
    std::vector<AnyContext *> any();
    AnyContext* any(size_t i);
    std::vector<UnusedContext *> unused();
    UnusedContext* unused(size_t i);

   
  };

  GeneralEnclosedContext* generalEnclosed();

  class  Var_Context : public antlr4::ParserRuleContext {
  public:
    Var_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Var();
    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);
    antlr4::tree::TerminalNode *Variable();

   
  };

  Var_Context* var_();

  class  CalcContext : public antlr4::ParserRuleContext {
  public:
    CalcContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Calc();
    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);
    CalcSumContext *calcSum();

   
  };

  CalcContext* calc();

  class  CalcSumContext : public antlr4::ParserRuleContext {
  public:
    CalcSumContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CalcProductContext *> calcProduct();
    CalcProductContext* calcProduct(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Space();
    antlr4::tree::TerminalNode* Space(size_t i);
    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Plus();
    antlr4::tree::TerminalNode* Plus(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Minus();
    antlr4::tree::TerminalNode* Minus(size_t i);

   
  };

  CalcSumContext* calcSum();

  class  CalcProductContext : public antlr4::ParserRuleContext {
  public:
    CalcProductContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CalcValueContext *> calcValue();
    CalcValueContext* calcValue(size_t i);
    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);
    std::vector<NumberContext *> number();
    NumberContext* number(size_t i);

   
  };

  CalcProductContext* calcProduct();

  class  CalcValueContext : public antlr4::ParserRuleContext {
  public:
    CalcValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();
    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);
    DimensionContext *dimension();
    UnknownDimensionContext *unknownDimension();
    PercentageContext *percentage();
    CalcSumContext *calcSum();

   
  };

  CalcValueContext* calcValue();

  class  FontFaceRuleContext : public antlr4::ParserRuleContext {
  public:
    FontFaceRuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FontFace();
    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);
    std::vector<FontFaceDeclarationContext *> fontFaceDeclaration();
    FontFaceDeclarationContext* fontFaceDeclaration(size_t i);

   
  };

  FontFaceRuleContext* fontFaceRule();

  class  FontFaceDeclarationContext : public antlr4::ParserRuleContext {
  public:
    FontFaceDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FontFaceDeclarationContext() = default;
    void copyFrom(FontFaceDeclarationContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  KnownFontFaceDeclarationContext : public FontFaceDeclarationContext {
  public:
    KnownFontFaceDeclarationContext(FontFaceDeclarationContext *ctx);

    PropertyContext *property();
    WsContext *ws();
    ExprContext *expr();
  };

  class  UnknownFontFaceDeclarationContext : public FontFaceDeclarationContext {
  public:
    UnknownFontFaceDeclarationContext(FontFaceDeclarationContext *ctx);

    PropertyContext *property();
    WsContext *ws();
    ValueContext *value();
  };

  FontFaceDeclarationContext* fontFaceDeclaration();

  class  KeyframesRuleContext : public antlr4::ParserRuleContext {
  public:
    KeyframesRuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Keyframes();
    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);
    antlr4::tree::TerminalNode *Space();
    IdentContext *ident();
    KeyframesBlocksContext *keyframesBlocks();

   
  };

  KeyframesRuleContext* keyframesRule();

  class  KeyframesBlocksContext : public antlr4::ParserRuleContext {
  public:
    KeyframesBlocksContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<KeyframeSelectorContext *> keyframeSelector();
    KeyframeSelectorContext* keyframeSelector(size_t i);
    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);
    std::vector<DeclarationListContext *> declarationList();
    DeclarationListContext* declarationList(size_t i);

   
  };

  KeyframesBlocksContext* keyframesBlocks();

  class  KeyframeSelectorContext : public antlr4::ParserRuleContext {
  public:
    KeyframeSelectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);
    std::vector<antlr4::tree::TerminalNode *> From();
    antlr4::tree::TerminalNode* From(size_t i);
    std::vector<antlr4::tree::TerminalNode *> To();
    antlr4::tree::TerminalNode* To(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Percentage();
    antlr4::tree::TerminalNode* Percentage(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

   
  };

  KeyframeSelectorContext* keyframeSelector();

  class  ViewportContext : public antlr4::ParserRuleContext {
  public:
    ViewportContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Viewport();
    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);
    DeclarationListContext *declarationList();

   
  };

  ViewportContext* viewport();

  class  CounterStyleContext : public antlr4::ParserRuleContext {
  public:
    CounterStyleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CounterStyle();
    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);
    IdentContext *ident();
    DeclarationListContext *declarationList();

   
  };

  CounterStyleContext* counterStyle();

  class  FontFeatureValuesRuleContext : public antlr4::ParserRuleContext {
  public:
    FontFeatureValuesRuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FontFeatureValues();
    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);
    FontFamilyNameListContext *fontFamilyNameList();
    std::vector<FeatureValueBlockContext *> featureValueBlock();
    FeatureValueBlockContext* featureValueBlock(size_t i);

   
  };

  FontFeatureValuesRuleContext* fontFeatureValuesRule();

  class  FontFamilyNameListContext : public antlr4::ParserRuleContext {
  public:
    FontFamilyNameListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FontFamilyNameContext *> fontFamilyName();
    FontFamilyNameContext* fontFamilyName(size_t i);
    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

   
  };

  FontFamilyNameListContext* fontFamilyNameList();

  class  FontFamilyNameContext : public antlr4::ParserRuleContext {
  public:
    FontFamilyNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *String();
    std::vector<IdentContext *> ident();
    IdentContext* ident(size_t i);
    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);

   
  };

  FontFamilyNameContext* fontFamilyName();

  class  FeatureValueBlockContext : public antlr4::ParserRuleContext {
  public:
    FeatureValueBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FeatureTypeContext *featureType();
    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);
    std::vector<FeatureValueDefinitionContext *> featureValueDefinition();
    FeatureValueDefinitionContext* featureValueDefinition(size_t i);

   
  };

  FeatureValueBlockContext* featureValueBlock();

  class  FeatureTypeContext : public antlr4::ParserRuleContext {
  public:
    FeatureTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AtKeywordContext *atKeyword();

   
  };

  FeatureTypeContext* featureType();

  class  FeatureValueDefinitionContext : public antlr4::ParserRuleContext {
  public:
    FeatureValueDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();
    std::vector<WsContext *> ws();
    WsContext* ws(size_t i);
    std::vector<NumberContext *> number();
    NumberContext* number(size_t i);

   
  };

  FeatureValueDefinitionContext* featureValueDefinition();

  class  IdentContext : public antlr4::ParserRuleContext {
  public:
    IdentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Ident();
    antlr4::tree::TerminalNode *MediaOnly();
    antlr4::tree::TerminalNode *Not();
    antlr4::tree::TerminalNode *And();
    antlr4::tree::TerminalNode *Or();
    antlr4::tree::TerminalNode *From();
    antlr4::tree::TerminalNode *To();

   
  };

  IdentContext* ident();

  class  WsContext : public antlr4::ParserRuleContext {
  public:
    WsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Comment();
    antlr4::tree::TerminalNode* Comment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Space();
    antlr4::tree::TerminalNode* Space(size_t i);

   
  };

  WsContext* ws();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

