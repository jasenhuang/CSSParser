
// Generated from CSS.g4 by ANTLR 4.9

#pragma once


#include "antlr4-runtime.h"
#include "CSSParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by CSSParser.
 */
class  CSSListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterStylesheet(CSSParser::StylesheetContext *ctx) = 0;
  virtual void exitStylesheet(CSSParser::StylesheetContext *ctx) = 0;

  virtual void enterGoodCharset(CSSParser::GoodCharsetContext *ctx) = 0;
  virtual void exitGoodCharset(CSSParser::GoodCharsetContext *ctx) = 0;

  virtual void enterBadCharset(CSSParser::BadCharsetContext *ctx) = 0;
  virtual void exitBadCharset(CSSParser::BadCharsetContext *ctx) = 0;

  virtual void enterGoodImport(CSSParser::GoodImportContext *ctx) = 0;
  virtual void exitGoodImport(CSSParser::GoodImportContext *ctx) = 0;

  virtual void enterBadImport(CSSParser::BadImportContext *ctx) = 0;
  virtual void exitBadImport(CSSParser::BadImportContext *ctx) = 0;

  virtual void enterGoodNamespace(CSSParser::GoodNamespaceContext *ctx) = 0;
  virtual void exitGoodNamespace(CSSParser::GoodNamespaceContext *ctx) = 0;

  virtual void enterBadNamespace(CSSParser::BadNamespaceContext *ctx) = 0;
  virtual void exitBadNamespace(CSSParser::BadNamespaceContext *ctx) = 0;

  virtual void enterNamespacePrefix(CSSParser::NamespacePrefixContext *ctx) = 0;
  virtual void exitNamespacePrefix(CSSParser::NamespacePrefixContext *ctx) = 0;

  virtual void enterMedia(CSSParser::MediaContext *ctx) = 0;
  virtual void exitMedia(CSSParser::MediaContext *ctx) = 0;

  virtual void enterMediaQueryList(CSSParser::MediaQueryListContext *ctx) = 0;
  virtual void exitMediaQueryList(CSSParser::MediaQueryListContext *ctx) = 0;

  virtual void enterMediaQuery(CSSParser::MediaQueryContext *ctx) = 0;
  virtual void exitMediaQuery(CSSParser::MediaQueryContext *ctx) = 0;

  virtual void enterMediaType(CSSParser::MediaTypeContext *ctx) = 0;
  virtual void exitMediaType(CSSParser::MediaTypeContext *ctx) = 0;

  virtual void enterMediaExpression(CSSParser::MediaExpressionContext *ctx) = 0;
  virtual void exitMediaExpression(CSSParser::MediaExpressionContext *ctx) = 0;

  virtual void enterMediaFeature(CSSParser::MediaFeatureContext *ctx) = 0;
  virtual void exitMediaFeature(CSSParser::MediaFeatureContext *ctx) = 0;

  virtual void enterPage(CSSParser::PageContext *ctx) = 0;
  virtual void exitPage(CSSParser::PageContext *ctx) = 0;

  virtual void enterPseudoPage(CSSParser::PseudoPageContext *ctx) = 0;
  virtual void exitPseudoPage(CSSParser::PseudoPageContext *ctx) = 0;

  virtual void enterSelectorGroup(CSSParser::SelectorGroupContext *ctx) = 0;
  virtual void exitSelectorGroup(CSSParser::SelectorGroupContext *ctx) = 0;

  virtual void enterSelector(CSSParser::SelectorContext *ctx) = 0;
  virtual void exitSelector(CSSParser::SelectorContext *ctx) = 0;

  virtual void enterCombinator(CSSParser::CombinatorContext *ctx) = 0;
  virtual void exitCombinator(CSSParser::CombinatorContext *ctx) = 0;

  virtual void enterSimpleSelectorSequence(CSSParser::SimpleSelectorSequenceContext *ctx) = 0;
  virtual void exitSimpleSelectorSequence(CSSParser::SimpleSelectorSequenceContext *ctx) = 0;

  virtual void enterTypeSelector(CSSParser::TypeSelectorContext *ctx) = 0;
  virtual void exitTypeSelector(CSSParser::TypeSelectorContext *ctx) = 0;

  virtual void enterTypeNamespacePrefix(CSSParser::TypeNamespacePrefixContext *ctx) = 0;
  virtual void exitTypeNamespacePrefix(CSSParser::TypeNamespacePrefixContext *ctx) = 0;

  virtual void enterElementName(CSSParser::ElementNameContext *ctx) = 0;
  virtual void exitElementName(CSSParser::ElementNameContext *ctx) = 0;

  virtual void enterUniversal(CSSParser::UniversalContext *ctx) = 0;
  virtual void exitUniversal(CSSParser::UniversalContext *ctx) = 0;

  virtual void enterClassName(CSSParser::ClassNameContext *ctx) = 0;
  virtual void exitClassName(CSSParser::ClassNameContext *ctx) = 0;

  virtual void enterAttrib(CSSParser::AttribContext *ctx) = 0;
  virtual void exitAttrib(CSSParser::AttribContext *ctx) = 0;

  virtual void enterPseudo(CSSParser::PseudoContext *ctx) = 0;
  virtual void exitPseudo(CSSParser::PseudoContext *ctx) = 0;

  virtual void enterFunctionalPseudo(CSSParser::FunctionalPseudoContext *ctx) = 0;
  virtual void exitFunctionalPseudo(CSSParser::FunctionalPseudoContext *ctx) = 0;

  virtual void enterExpression(CSSParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(CSSParser::ExpressionContext *ctx) = 0;

  virtual void enterNegation(CSSParser::NegationContext *ctx) = 0;
  virtual void exitNegation(CSSParser::NegationContext *ctx) = 0;

  virtual void enterNegationArg(CSSParser::NegationArgContext *ctx) = 0;
  virtual void exitNegationArg(CSSParser::NegationArgContext *ctx) = 0;

  virtual void enterGoodOperator(CSSParser::GoodOperatorContext *ctx) = 0;
  virtual void exitGoodOperator(CSSParser::GoodOperatorContext *ctx) = 0;

  virtual void enterBadOperator(CSSParser::BadOperatorContext *ctx) = 0;
  virtual void exitBadOperator(CSSParser::BadOperatorContext *ctx) = 0;

  virtual void enterGoodProperty(CSSParser::GoodPropertyContext *ctx) = 0;
  virtual void exitGoodProperty(CSSParser::GoodPropertyContext *ctx) = 0;

  virtual void enterBadProperty(CSSParser::BadPropertyContext *ctx) = 0;
  virtual void exitBadProperty(CSSParser::BadPropertyContext *ctx) = 0;

  virtual void enterKnownRuleset(CSSParser::KnownRulesetContext *ctx) = 0;
  virtual void exitKnownRuleset(CSSParser::KnownRulesetContext *ctx) = 0;

  virtual void enterUnknownRuleset(CSSParser::UnknownRulesetContext *ctx) = 0;
  virtual void exitUnknownRuleset(CSSParser::UnknownRulesetContext *ctx) = 0;

  virtual void enterDeclarationList(CSSParser::DeclarationListContext *ctx) = 0;
  virtual void exitDeclarationList(CSSParser::DeclarationListContext *ctx) = 0;

  virtual void enterKnownDeclaration(CSSParser::KnownDeclarationContext *ctx) = 0;
  virtual void exitKnownDeclaration(CSSParser::KnownDeclarationContext *ctx) = 0;

  virtual void enterUnknownDeclaration(CSSParser::UnknownDeclarationContext *ctx) = 0;
  virtual void exitUnknownDeclaration(CSSParser::UnknownDeclarationContext *ctx) = 0;

  virtual void enterPrio(CSSParser::PrioContext *ctx) = 0;
  virtual void exitPrio(CSSParser::PrioContext *ctx) = 0;

  virtual void enterValue(CSSParser::ValueContext *ctx) = 0;
  virtual void exitValue(CSSParser::ValueContext *ctx) = 0;

  virtual void enterExpr(CSSParser::ExprContext *ctx) = 0;
  virtual void exitExpr(CSSParser::ExprContext *ctx) = 0;

  virtual void enterKnownTerm(CSSParser::KnownTermContext *ctx) = 0;
  virtual void exitKnownTerm(CSSParser::KnownTermContext *ctx) = 0;

  virtual void enterUnknownTerm(CSSParser::UnknownTermContext *ctx) = 0;
  virtual void exitUnknownTerm(CSSParser::UnknownTermContext *ctx) = 0;

  virtual void enterBadTerm(CSSParser::BadTermContext *ctx) = 0;
  virtual void exitBadTerm(CSSParser::BadTermContext *ctx) = 0;

  virtual void enterFunction_(CSSParser::Function_Context *ctx) = 0;
  virtual void exitFunction_(CSSParser::Function_Context *ctx) = 0;

  virtual void enterDxImageTransform(CSSParser::DxImageTransformContext *ctx) = 0;
  virtual void exitDxImageTransform(CSSParser::DxImageTransformContext *ctx) = 0;

  virtual void enterHexcolor(CSSParser::HexcolorContext *ctx) = 0;
  virtual void exitHexcolor(CSSParser::HexcolorContext *ctx) = 0;

  virtual void enterNumber(CSSParser::NumberContext *ctx) = 0;
  virtual void exitNumber(CSSParser::NumberContext *ctx) = 0;

  virtual void enterPercentage(CSSParser::PercentageContext *ctx) = 0;
  virtual void exitPercentage(CSSParser::PercentageContext *ctx) = 0;

  virtual void enterDimension(CSSParser::DimensionContext *ctx) = 0;
  virtual void exitDimension(CSSParser::DimensionContext *ctx) = 0;

  virtual void enterUnknownDimension(CSSParser::UnknownDimensionContext *ctx) = 0;
  virtual void exitUnknownDimension(CSSParser::UnknownDimensionContext *ctx) = 0;

  virtual void enterAny(CSSParser::AnyContext *ctx) = 0;
  virtual void exitAny(CSSParser::AnyContext *ctx) = 0;

  virtual void enterUnknownAtRule(CSSParser::UnknownAtRuleContext *ctx) = 0;
  virtual void exitUnknownAtRule(CSSParser::UnknownAtRuleContext *ctx) = 0;

  virtual void enterAtKeyword(CSSParser::AtKeywordContext *ctx) = 0;
  virtual void exitAtKeyword(CSSParser::AtKeywordContext *ctx) = 0;

  virtual void enterUnused(CSSParser::UnusedContext *ctx) = 0;
  virtual void exitUnused(CSSParser::UnusedContext *ctx) = 0;

  virtual void enterBlock(CSSParser::BlockContext *ctx) = 0;
  virtual void exitBlock(CSSParser::BlockContext *ctx) = 0;

  virtual void enterNestedStatement(CSSParser::NestedStatementContext *ctx) = 0;
  virtual void exitNestedStatement(CSSParser::NestedStatementContext *ctx) = 0;

  virtual void enterGroupRuleBody(CSSParser::GroupRuleBodyContext *ctx) = 0;
  virtual void exitGroupRuleBody(CSSParser::GroupRuleBodyContext *ctx) = 0;

  virtual void enterSupportsRule(CSSParser::SupportsRuleContext *ctx) = 0;
  virtual void exitSupportsRule(CSSParser::SupportsRuleContext *ctx) = 0;

  virtual void enterSupportsCondition(CSSParser::SupportsConditionContext *ctx) = 0;
  virtual void exitSupportsCondition(CSSParser::SupportsConditionContext *ctx) = 0;

  virtual void enterSupportsConditionInParens(CSSParser::SupportsConditionInParensContext *ctx) = 0;
  virtual void exitSupportsConditionInParens(CSSParser::SupportsConditionInParensContext *ctx) = 0;

  virtual void enterSupportsNegation(CSSParser::SupportsNegationContext *ctx) = 0;
  virtual void exitSupportsNegation(CSSParser::SupportsNegationContext *ctx) = 0;

  virtual void enterSupportsConjunction(CSSParser::SupportsConjunctionContext *ctx) = 0;
  virtual void exitSupportsConjunction(CSSParser::SupportsConjunctionContext *ctx) = 0;

  virtual void enterSupportsDisjunction(CSSParser::SupportsDisjunctionContext *ctx) = 0;
  virtual void exitSupportsDisjunction(CSSParser::SupportsDisjunctionContext *ctx) = 0;

  virtual void enterSupportsDeclarationCondition(CSSParser::SupportsDeclarationConditionContext *ctx) = 0;
  virtual void exitSupportsDeclarationCondition(CSSParser::SupportsDeclarationConditionContext *ctx) = 0;

  virtual void enterGeneralEnclosed(CSSParser::GeneralEnclosedContext *ctx) = 0;
  virtual void exitGeneralEnclosed(CSSParser::GeneralEnclosedContext *ctx) = 0;

  virtual void enterVar_(CSSParser::Var_Context *ctx) = 0;
  virtual void exitVar_(CSSParser::Var_Context *ctx) = 0;

  virtual void enterCalc(CSSParser::CalcContext *ctx) = 0;
  virtual void exitCalc(CSSParser::CalcContext *ctx) = 0;

  virtual void enterCalcSum(CSSParser::CalcSumContext *ctx) = 0;
  virtual void exitCalcSum(CSSParser::CalcSumContext *ctx) = 0;

  virtual void enterCalcProduct(CSSParser::CalcProductContext *ctx) = 0;
  virtual void exitCalcProduct(CSSParser::CalcProductContext *ctx) = 0;

  virtual void enterCalcValue(CSSParser::CalcValueContext *ctx) = 0;
  virtual void exitCalcValue(CSSParser::CalcValueContext *ctx) = 0;

  virtual void enterFontFaceRule(CSSParser::FontFaceRuleContext *ctx) = 0;
  virtual void exitFontFaceRule(CSSParser::FontFaceRuleContext *ctx) = 0;

  virtual void enterKnownFontFaceDeclaration(CSSParser::KnownFontFaceDeclarationContext *ctx) = 0;
  virtual void exitKnownFontFaceDeclaration(CSSParser::KnownFontFaceDeclarationContext *ctx) = 0;

  virtual void enterUnknownFontFaceDeclaration(CSSParser::UnknownFontFaceDeclarationContext *ctx) = 0;
  virtual void exitUnknownFontFaceDeclaration(CSSParser::UnknownFontFaceDeclarationContext *ctx) = 0;

  virtual void enterKeyframesRule(CSSParser::KeyframesRuleContext *ctx) = 0;
  virtual void exitKeyframesRule(CSSParser::KeyframesRuleContext *ctx) = 0;

  virtual void enterKeyframesBlocks(CSSParser::KeyframesBlocksContext *ctx) = 0;
  virtual void exitKeyframesBlocks(CSSParser::KeyframesBlocksContext *ctx) = 0;

  virtual void enterKeyframeSelector(CSSParser::KeyframeSelectorContext *ctx) = 0;
  virtual void exitKeyframeSelector(CSSParser::KeyframeSelectorContext *ctx) = 0;

  virtual void enterViewport(CSSParser::ViewportContext *ctx) = 0;
  virtual void exitViewport(CSSParser::ViewportContext *ctx) = 0;

  virtual void enterCounterStyle(CSSParser::CounterStyleContext *ctx) = 0;
  virtual void exitCounterStyle(CSSParser::CounterStyleContext *ctx) = 0;

  virtual void enterFontFeatureValuesRule(CSSParser::FontFeatureValuesRuleContext *ctx) = 0;
  virtual void exitFontFeatureValuesRule(CSSParser::FontFeatureValuesRuleContext *ctx) = 0;

  virtual void enterFontFamilyNameList(CSSParser::FontFamilyNameListContext *ctx) = 0;
  virtual void exitFontFamilyNameList(CSSParser::FontFamilyNameListContext *ctx) = 0;

  virtual void enterFontFamilyName(CSSParser::FontFamilyNameContext *ctx) = 0;
  virtual void exitFontFamilyName(CSSParser::FontFamilyNameContext *ctx) = 0;

  virtual void enterFeatureValueBlock(CSSParser::FeatureValueBlockContext *ctx) = 0;
  virtual void exitFeatureValueBlock(CSSParser::FeatureValueBlockContext *ctx) = 0;

  virtual void enterFeatureType(CSSParser::FeatureTypeContext *ctx) = 0;
  virtual void exitFeatureType(CSSParser::FeatureTypeContext *ctx) = 0;

  virtual void enterFeatureValueDefinition(CSSParser::FeatureValueDefinitionContext *ctx) = 0;
  virtual void exitFeatureValueDefinition(CSSParser::FeatureValueDefinitionContext *ctx) = 0;

  virtual void enterIdent(CSSParser::IdentContext *ctx) = 0;
  virtual void exitIdent(CSSParser::IdentContext *ctx) = 0;

  virtual void enterWs(CSSParser::WsContext *ctx) = 0;
  virtual void exitWs(CSSParser::WsContext *ctx) = 0;


};

