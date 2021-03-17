
// Generated from CSS.g4 by ANTLR 4.9

#pragma once


#include "antlr4-runtime.h"
#include "CSSListener.h"


/**
 * This class provides an empty implementation of CSSListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  CSSBaseListener : public CSSListener {
public:

  virtual void enterStylesheet(CSSParser::StylesheetContext * /*ctx*/) override { }
  virtual void exitStylesheet(CSSParser::StylesheetContext * /*ctx*/) override { }

  virtual void enterGoodCharset(CSSParser::GoodCharsetContext * /*ctx*/) override { }
  virtual void exitGoodCharset(CSSParser::GoodCharsetContext * /*ctx*/) override { }

  virtual void enterBadCharset(CSSParser::BadCharsetContext * /*ctx*/) override { }
  virtual void exitBadCharset(CSSParser::BadCharsetContext * /*ctx*/) override { }

  virtual void enterGoodImport(CSSParser::GoodImportContext * /*ctx*/) override { }
  virtual void exitGoodImport(CSSParser::GoodImportContext * /*ctx*/) override { }

  virtual void enterBadImport(CSSParser::BadImportContext * /*ctx*/) override { }
  virtual void exitBadImport(CSSParser::BadImportContext * /*ctx*/) override { }

  virtual void enterGoodNamespace(CSSParser::GoodNamespaceContext * /*ctx*/) override { }
  virtual void exitGoodNamespace(CSSParser::GoodNamespaceContext * /*ctx*/) override { }

  virtual void enterBadNamespace(CSSParser::BadNamespaceContext * /*ctx*/) override { }
  virtual void exitBadNamespace(CSSParser::BadNamespaceContext * /*ctx*/) override { }

  virtual void enterNamespacePrefix(CSSParser::NamespacePrefixContext * /*ctx*/) override { }
  virtual void exitNamespacePrefix(CSSParser::NamespacePrefixContext * /*ctx*/) override { }

  virtual void enterMedia(CSSParser::MediaContext * /*ctx*/) override { }
  virtual void exitMedia(CSSParser::MediaContext * /*ctx*/) override { }

  virtual void enterMediaQueryList(CSSParser::MediaQueryListContext * /*ctx*/) override { }
  virtual void exitMediaQueryList(CSSParser::MediaQueryListContext * /*ctx*/) override { }

  virtual void enterMediaQuery(CSSParser::MediaQueryContext * /*ctx*/) override { }
  virtual void exitMediaQuery(CSSParser::MediaQueryContext * /*ctx*/) override { }

  virtual void enterMediaType(CSSParser::MediaTypeContext * /*ctx*/) override { }
  virtual void exitMediaType(CSSParser::MediaTypeContext * /*ctx*/) override { }

  virtual void enterMediaExpression(CSSParser::MediaExpressionContext * /*ctx*/) override { }
  virtual void exitMediaExpression(CSSParser::MediaExpressionContext * /*ctx*/) override { }

  virtual void enterMediaFeature(CSSParser::MediaFeatureContext * /*ctx*/) override { }
  virtual void exitMediaFeature(CSSParser::MediaFeatureContext * /*ctx*/) override { }

  virtual void enterPage(CSSParser::PageContext * /*ctx*/) override { }
  virtual void exitPage(CSSParser::PageContext * /*ctx*/) override { }

  virtual void enterPseudoPage(CSSParser::PseudoPageContext * /*ctx*/) override { }
  virtual void exitPseudoPage(CSSParser::PseudoPageContext * /*ctx*/) override { }

  virtual void enterSelectorGroup(CSSParser::SelectorGroupContext * /*ctx*/) override { }
  virtual void exitSelectorGroup(CSSParser::SelectorGroupContext * /*ctx*/) override { }

  virtual void enterSelector(CSSParser::SelectorContext * /*ctx*/) override { }
  virtual void exitSelector(CSSParser::SelectorContext * /*ctx*/) override { }

  virtual void enterCombinator(CSSParser::CombinatorContext * /*ctx*/) override { }
  virtual void exitCombinator(CSSParser::CombinatorContext * /*ctx*/) override { }

  virtual void enterSimpleSelectorSequence(CSSParser::SimpleSelectorSequenceContext * /*ctx*/) override { }
  virtual void exitSimpleSelectorSequence(CSSParser::SimpleSelectorSequenceContext * /*ctx*/) override { }

  virtual void enterTypeSelector(CSSParser::TypeSelectorContext * /*ctx*/) override { }
  virtual void exitTypeSelector(CSSParser::TypeSelectorContext * /*ctx*/) override { }

  virtual void enterTypeNamespacePrefix(CSSParser::TypeNamespacePrefixContext * /*ctx*/) override { }
  virtual void exitTypeNamespacePrefix(CSSParser::TypeNamespacePrefixContext * /*ctx*/) override { }

  virtual void enterElementName(CSSParser::ElementNameContext * /*ctx*/) override { }
  virtual void exitElementName(CSSParser::ElementNameContext * /*ctx*/) override { }

  virtual void enterUniversal(CSSParser::UniversalContext * /*ctx*/) override { }
  virtual void exitUniversal(CSSParser::UniversalContext * /*ctx*/) override { }

  virtual void enterClassName(CSSParser::ClassNameContext * /*ctx*/) override { }
  virtual void exitClassName(CSSParser::ClassNameContext * /*ctx*/) override { }

  virtual void enterAttrib(CSSParser::AttribContext * /*ctx*/) override { }
  virtual void exitAttrib(CSSParser::AttribContext * /*ctx*/) override { }

  virtual void enterPseudo(CSSParser::PseudoContext * /*ctx*/) override { }
  virtual void exitPseudo(CSSParser::PseudoContext * /*ctx*/) override { }

  virtual void enterFunctionalPseudo(CSSParser::FunctionalPseudoContext * /*ctx*/) override { }
  virtual void exitFunctionalPseudo(CSSParser::FunctionalPseudoContext * /*ctx*/) override { }

  virtual void enterExpression(CSSParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(CSSParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterNegation(CSSParser::NegationContext * /*ctx*/) override { }
  virtual void exitNegation(CSSParser::NegationContext * /*ctx*/) override { }

  virtual void enterNegationArg(CSSParser::NegationArgContext * /*ctx*/) override { }
  virtual void exitNegationArg(CSSParser::NegationArgContext * /*ctx*/) override { }

  virtual void enterGoodOperator(CSSParser::GoodOperatorContext * /*ctx*/) override { }
  virtual void exitGoodOperator(CSSParser::GoodOperatorContext * /*ctx*/) override { }

  virtual void enterBadOperator(CSSParser::BadOperatorContext * /*ctx*/) override { }
  virtual void exitBadOperator(CSSParser::BadOperatorContext * /*ctx*/) override { }

  virtual void enterGoodProperty(CSSParser::GoodPropertyContext * /*ctx*/) override { }
  virtual void exitGoodProperty(CSSParser::GoodPropertyContext * /*ctx*/) override { }

  virtual void enterBadProperty(CSSParser::BadPropertyContext * /*ctx*/) override { }
  virtual void exitBadProperty(CSSParser::BadPropertyContext * /*ctx*/) override { }

  virtual void enterKnownRuleset(CSSParser::KnownRulesetContext * /*ctx*/) override { }
  virtual void exitKnownRuleset(CSSParser::KnownRulesetContext * /*ctx*/) override { }

  virtual void enterUnknownRuleset(CSSParser::UnknownRulesetContext * /*ctx*/) override { }
  virtual void exitUnknownRuleset(CSSParser::UnknownRulesetContext * /*ctx*/) override { }

  virtual void enterDeclarationList(CSSParser::DeclarationListContext * /*ctx*/) override { }
  virtual void exitDeclarationList(CSSParser::DeclarationListContext * /*ctx*/) override { }

  virtual void enterKnownDeclaration(CSSParser::KnownDeclarationContext * /*ctx*/) override { }
  virtual void exitKnownDeclaration(CSSParser::KnownDeclarationContext * /*ctx*/) override { }

  virtual void enterUnknownDeclaration(CSSParser::UnknownDeclarationContext * /*ctx*/) override { }
  virtual void exitUnknownDeclaration(CSSParser::UnknownDeclarationContext * /*ctx*/) override { }

  virtual void enterPrio(CSSParser::PrioContext * /*ctx*/) override { }
  virtual void exitPrio(CSSParser::PrioContext * /*ctx*/) override { }

  virtual void enterValue(CSSParser::ValueContext * /*ctx*/) override { }
  virtual void exitValue(CSSParser::ValueContext * /*ctx*/) override { }

  virtual void enterExpr(CSSParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(CSSParser::ExprContext * /*ctx*/) override { }

  virtual void enterKnownTerm(CSSParser::KnownTermContext * /*ctx*/) override { }
  virtual void exitKnownTerm(CSSParser::KnownTermContext * /*ctx*/) override { }

  virtual void enterUnknownTerm(CSSParser::UnknownTermContext * /*ctx*/) override { }
  virtual void exitUnknownTerm(CSSParser::UnknownTermContext * /*ctx*/) override { }

  virtual void enterBadTerm(CSSParser::BadTermContext * /*ctx*/) override { }
  virtual void exitBadTerm(CSSParser::BadTermContext * /*ctx*/) override { }

  virtual void enterFunction_(CSSParser::Function_Context * /*ctx*/) override { }
  virtual void exitFunction_(CSSParser::Function_Context * /*ctx*/) override { }

  virtual void enterDxImageTransform(CSSParser::DxImageTransformContext * /*ctx*/) override { }
  virtual void exitDxImageTransform(CSSParser::DxImageTransformContext * /*ctx*/) override { }

  virtual void enterHexcolor(CSSParser::HexcolorContext * /*ctx*/) override { }
  virtual void exitHexcolor(CSSParser::HexcolorContext * /*ctx*/) override { }

  virtual void enterNumber(CSSParser::NumberContext * /*ctx*/) override { }
  virtual void exitNumber(CSSParser::NumberContext * /*ctx*/) override { }

  virtual void enterPercentage(CSSParser::PercentageContext * /*ctx*/) override { }
  virtual void exitPercentage(CSSParser::PercentageContext * /*ctx*/) override { }

  virtual void enterDimension(CSSParser::DimensionContext * /*ctx*/) override { }
  virtual void exitDimension(CSSParser::DimensionContext * /*ctx*/) override { }

  virtual void enterUnknownDimension(CSSParser::UnknownDimensionContext * /*ctx*/) override { }
  virtual void exitUnknownDimension(CSSParser::UnknownDimensionContext * /*ctx*/) override { }

  virtual void enterAny(CSSParser::AnyContext * /*ctx*/) override { }
  virtual void exitAny(CSSParser::AnyContext * /*ctx*/) override { }

  virtual void enterUnknownAtRule(CSSParser::UnknownAtRuleContext * /*ctx*/) override { }
  virtual void exitUnknownAtRule(CSSParser::UnknownAtRuleContext * /*ctx*/) override { }

  virtual void enterAtKeyword(CSSParser::AtKeywordContext * /*ctx*/) override { }
  virtual void exitAtKeyword(CSSParser::AtKeywordContext * /*ctx*/) override { }

  virtual void enterUnused(CSSParser::UnusedContext * /*ctx*/) override { }
  virtual void exitUnused(CSSParser::UnusedContext * /*ctx*/) override { }

  virtual void enterBlock(CSSParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(CSSParser::BlockContext * /*ctx*/) override { }

  virtual void enterNestedStatement(CSSParser::NestedStatementContext * /*ctx*/) override { }
  virtual void exitNestedStatement(CSSParser::NestedStatementContext * /*ctx*/) override { }

  virtual void enterGroupRuleBody(CSSParser::GroupRuleBodyContext * /*ctx*/) override { }
  virtual void exitGroupRuleBody(CSSParser::GroupRuleBodyContext * /*ctx*/) override { }

  virtual void enterSupportsRule(CSSParser::SupportsRuleContext * /*ctx*/) override { }
  virtual void exitSupportsRule(CSSParser::SupportsRuleContext * /*ctx*/) override { }

  virtual void enterSupportsCondition(CSSParser::SupportsConditionContext * /*ctx*/) override { }
  virtual void exitSupportsCondition(CSSParser::SupportsConditionContext * /*ctx*/) override { }

  virtual void enterSupportsConditionInParens(CSSParser::SupportsConditionInParensContext * /*ctx*/) override { }
  virtual void exitSupportsConditionInParens(CSSParser::SupportsConditionInParensContext * /*ctx*/) override { }

  virtual void enterSupportsNegation(CSSParser::SupportsNegationContext * /*ctx*/) override { }
  virtual void exitSupportsNegation(CSSParser::SupportsNegationContext * /*ctx*/) override { }

  virtual void enterSupportsConjunction(CSSParser::SupportsConjunctionContext * /*ctx*/) override { }
  virtual void exitSupportsConjunction(CSSParser::SupportsConjunctionContext * /*ctx*/) override { }

  virtual void enterSupportsDisjunction(CSSParser::SupportsDisjunctionContext * /*ctx*/) override { }
  virtual void exitSupportsDisjunction(CSSParser::SupportsDisjunctionContext * /*ctx*/) override { }

  virtual void enterSupportsDeclarationCondition(CSSParser::SupportsDeclarationConditionContext * /*ctx*/) override { }
  virtual void exitSupportsDeclarationCondition(CSSParser::SupportsDeclarationConditionContext * /*ctx*/) override { }

  virtual void enterGeneralEnclosed(CSSParser::GeneralEnclosedContext * /*ctx*/) override { }
  virtual void exitGeneralEnclosed(CSSParser::GeneralEnclosedContext * /*ctx*/) override { }

  virtual void enterVar_(CSSParser::Var_Context * /*ctx*/) override { }
  virtual void exitVar_(CSSParser::Var_Context * /*ctx*/) override { }

  virtual void enterCalc(CSSParser::CalcContext * /*ctx*/) override { }
  virtual void exitCalc(CSSParser::CalcContext * /*ctx*/) override { }

  virtual void enterCalcSum(CSSParser::CalcSumContext * /*ctx*/) override { }
  virtual void exitCalcSum(CSSParser::CalcSumContext * /*ctx*/) override { }

  virtual void enterCalcProduct(CSSParser::CalcProductContext * /*ctx*/) override { }
  virtual void exitCalcProduct(CSSParser::CalcProductContext * /*ctx*/) override { }

  virtual void enterCalcValue(CSSParser::CalcValueContext * /*ctx*/) override { }
  virtual void exitCalcValue(CSSParser::CalcValueContext * /*ctx*/) override { }

  virtual void enterFontFaceRule(CSSParser::FontFaceRuleContext * /*ctx*/) override { }
  virtual void exitFontFaceRule(CSSParser::FontFaceRuleContext * /*ctx*/) override { }

  virtual void enterKnownFontFaceDeclaration(CSSParser::KnownFontFaceDeclarationContext * /*ctx*/) override { }
  virtual void exitKnownFontFaceDeclaration(CSSParser::KnownFontFaceDeclarationContext * /*ctx*/) override { }

  virtual void enterUnknownFontFaceDeclaration(CSSParser::UnknownFontFaceDeclarationContext * /*ctx*/) override { }
  virtual void exitUnknownFontFaceDeclaration(CSSParser::UnknownFontFaceDeclarationContext * /*ctx*/) override { }

  virtual void enterKeyframesRule(CSSParser::KeyframesRuleContext * /*ctx*/) override { }
  virtual void exitKeyframesRule(CSSParser::KeyframesRuleContext * /*ctx*/) override { }

  virtual void enterKeyframesBlocks(CSSParser::KeyframesBlocksContext * /*ctx*/) override { }
  virtual void exitKeyframesBlocks(CSSParser::KeyframesBlocksContext * /*ctx*/) override { }

  virtual void enterKeyframeSelector(CSSParser::KeyframeSelectorContext * /*ctx*/) override { }
  virtual void exitKeyframeSelector(CSSParser::KeyframeSelectorContext * /*ctx*/) override { }

  virtual void enterViewport(CSSParser::ViewportContext * /*ctx*/) override { }
  virtual void exitViewport(CSSParser::ViewportContext * /*ctx*/) override { }

  virtual void enterCounterStyle(CSSParser::CounterStyleContext * /*ctx*/) override { }
  virtual void exitCounterStyle(CSSParser::CounterStyleContext * /*ctx*/) override { }

  virtual void enterFontFeatureValuesRule(CSSParser::FontFeatureValuesRuleContext * /*ctx*/) override { }
  virtual void exitFontFeatureValuesRule(CSSParser::FontFeatureValuesRuleContext * /*ctx*/) override { }

  virtual void enterFontFamilyNameList(CSSParser::FontFamilyNameListContext * /*ctx*/) override { }
  virtual void exitFontFamilyNameList(CSSParser::FontFamilyNameListContext * /*ctx*/) override { }

  virtual void enterFontFamilyName(CSSParser::FontFamilyNameContext * /*ctx*/) override { }
  virtual void exitFontFamilyName(CSSParser::FontFamilyNameContext * /*ctx*/) override { }

  virtual void enterFeatureValueBlock(CSSParser::FeatureValueBlockContext * /*ctx*/) override { }
  virtual void exitFeatureValueBlock(CSSParser::FeatureValueBlockContext * /*ctx*/) override { }

  virtual void enterFeatureType(CSSParser::FeatureTypeContext * /*ctx*/) override { }
  virtual void exitFeatureType(CSSParser::FeatureTypeContext * /*ctx*/) override { }

  virtual void enterFeatureValueDefinition(CSSParser::FeatureValueDefinitionContext * /*ctx*/) override { }
  virtual void exitFeatureValueDefinition(CSSParser::FeatureValueDefinitionContext * /*ctx*/) override { }

  virtual void enterIdent(CSSParser::IdentContext * /*ctx*/) override { }
  virtual void exitIdent(CSSParser::IdentContext * /*ctx*/) override { }

  virtual void enterWs(CSSParser::WsContext * /*ctx*/) override { }
  virtual void exitWs(CSSParser::WsContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

