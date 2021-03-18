
// Generated from CSS.g4 by ANTLR 4.9



#include "CSSParser.h"


using namespace antlrcpp;
using namespace antlr4;

CSSParser::CSSParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

CSSParser::~CSSParser() {
  delete _interpreter;
}

std::string CSSParser::getGrammarFileName() const {
  return "CSS.g4";
}

const std::vector<std::string>& CSSParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& CSSParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- StylesheetContext ------------------------------------------------------------------

CSSParser::StylesheetContext::StylesheetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CSSParser::WsContext* CSSParser::StylesheetContext::ws() {
  return getRuleContext<CSSParser::WsContext>(0);
}

std::vector<CSSParser::CharsetContext *> CSSParser::StylesheetContext::charset() {
  return getRuleContexts<CSSParser::CharsetContext>();
}

CSSParser::CharsetContext* CSSParser::StylesheetContext::charset(size_t i) {
  return getRuleContext<CSSParser::CharsetContext>(i);
}

std::vector<CSSParser::ImportsContext *> CSSParser::StylesheetContext::imports() {
  return getRuleContexts<CSSParser::ImportsContext>();
}

CSSParser::ImportsContext* CSSParser::StylesheetContext::imports(size_t i) {
  return getRuleContext<CSSParser::ImportsContext>(i);
}

std::vector<CSSParser::Namespace_Context *> CSSParser::StylesheetContext::namespace_() {
  return getRuleContexts<CSSParser::Namespace_Context>();
}

CSSParser::Namespace_Context* CSSParser::StylesheetContext::namespace_(size_t i) {
  return getRuleContext<CSSParser::Namespace_Context>(i);
}

std::vector<CSSParser::StatementContext *> CSSParser::StylesheetContext::statement() {
  return getRuleContexts<CSSParser::StatementContext>();
}

CSSParser::StatementContext* CSSParser::StylesheetContext::statement(size_t i) {
  return getRuleContext<CSSParser::StatementContext>(i);
}

std::vector<tree::TerminalNode *> CSSParser::StylesheetContext::Comment() {
  return getTokens(CSSParser::Comment);
}

tree::TerminalNode* CSSParser::StylesheetContext::Comment(size_t i) {
  return getToken(CSSParser::Comment, i);
}

std::vector<tree::TerminalNode *> CSSParser::StylesheetContext::Space() {
  return getTokens(CSSParser::Space);
}

tree::TerminalNode* CSSParser::StylesheetContext::Space(size_t i) {
  return getToken(CSSParser::Space, i);
}

std::vector<tree::TerminalNode *> CSSParser::StylesheetContext::Cdo() {
  return getTokens(CSSParser::Cdo);
}

tree::TerminalNode* CSSParser::StylesheetContext::Cdo(size_t i) {
  return getToken(CSSParser::Cdo, i);
}

std::vector<tree::TerminalNode *> CSSParser::StylesheetContext::Cdc() {
  return getTokens(CSSParser::Cdc);
}

tree::TerminalNode* CSSParser::StylesheetContext::Cdc(size_t i) {
  return getToken(CSSParser::Cdc, i);
}


size_t CSSParser::StylesheetContext::getRuleIndex() const {
  return CSSParser::RuleStylesheet;
}


CSSParser::StylesheetContext* CSSParser::stylesheet() {
  StylesheetContext *_localctx = _tracker.createInstance<StylesheetContext>(_ctx, getState());
  enterRule(_localctx, 0, CSSParser::RuleStylesheet);
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
    setState(158);
    ws();
    setState(168);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CSSParser::Charset) {
      setState(159);
      charset();
      setState(163);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CSSParser::Comment)
        | (1ULL << CSSParser::Space)
        | (1ULL << CSSParser::Cdo)
        | (1ULL << CSSParser::Cdc))) != 0)) {
        setState(160);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << CSSParser::Comment)
          | (1ULL << CSSParser::Space)
          | (1ULL << CSSParser::Cdo)
          | (1ULL << CSSParser::Cdc))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(165);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(170);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(180);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CSSParser::Import) {
      setState(171);
      imports();
      setState(175);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CSSParser::Comment)
        | (1ULL << CSSParser::Space)
        | (1ULL << CSSParser::Cdo)
        | (1ULL << CSSParser::Cdc))) != 0)) {
        setState(172);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << CSSParser::Comment)
          | (1ULL << CSSParser::Space)
          | (1ULL << CSSParser::Cdo)
          | (1ULL << CSSParser::Cdc))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(177);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(182);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(192);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CSSParser::Namespace) {
      setState(183);
      namespace_();
      setState(187);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CSSParser::Comment)
        | (1ULL << CSSParser::Space)
        | (1ULL << CSSParser::Cdo)
        | (1ULL << CSSParser::Cdc))) != 0)) {
        setState(184);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << CSSParser::Comment)
          | (1ULL << CSSParser::Space)
          | (1ULL << CSSParser::Cdo)
          | (1ULL << CSSParser::Cdc))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(189);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(194);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(204);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CSSParser::T__1)
      | (1ULL << CSSParser::T__2)
      | (1ULL << CSSParser::T__4)
      | (1ULL << CSSParser::T__6)
      | (1ULL << CSSParser::T__7)
      | (1ULL << CSSParser::T__8)
      | (1ULL << CSSParser::T__9)
      | (1ULL << CSSParser::T__14)
      | (1ULL << CSSParser::Includes)
      | (1ULL << CSSParser::DashMatch)
      | (1ULL << CSSParser::Hash)
      | (1ULL << CSSParser::Page)
      | (1ULL << CSSParser::Media)
      | (1ULL << CSSParser::Percentage)
      | (1ULL << CSSParser::Uri)
      | (1ULL << CSSParser::UnicodeRange)
      | (1ULL << CSSParser::MediaOnly)
      | (1ULL << CSSParser::Not)
      | (1ULL << CSSParser::And)
      | (1ULL << CSSParser::Dimension)
      | (1ULL << CSSParser::UnknownDimension)
      | (1ULL << CSSParser::Plus)
      | (1ULL << CSSParser::Minus)
      | (1ULL << CSSParser::PseudoNot)
      | (1ULL << CSSParser::Number)
      | (1ULL << CSSParser::String)
      | (1ULL << CSSParser::FontFace)
      | (1ULL << CSSParser::Supports)
      | (1ULL << CSSParser::Or)
      | (1ULL << CSSParser::Keyframes)
      | (1ULL << CSSParser::From)
      | (1ULL << CSSParser::To)
      | (1ULL << CSSParser::Viewport)
      | (1ULL << CSSParser::CounterStyle)
      | (1ULL << CSSParser::FontFeatureValues)
      | (1ULL << CSSParser::Ident)
      | (1ULL << CSSParser::Function))) != 0)) {
      setState(195);
      statement();
      setState(199);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CSSParser::Comment)
        | (1ULL << CSSParser::Space)
        | (1ULL << CSSParser::Cdo)
        | (1ULL << CSSParser::Cdc))) != 0)) {
        setState(196);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << CSSParser::Comment)
          | (1ULL << CSSParser::Space)
          | (1ULL << CSSParser::Cdo)
          | (1ULL << CSSParser::Cdc))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(201);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(206);
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

//----------------- CharsetContext ------------------------------------------------------------------

CSSParser::CharsetContext::CharsetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSSParser::CharsetContext::getRuleIndex() const {
  return CSSParser::RuleCharset;
}

void CSSParser::CharsetContext::copyFrom(CharsetContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- BadCharsetContext ------------------------------------------------------------------

tree::TerminalNode* CSSParser::BadCharsetContext::Charset() {
  return getToken(CSSParser::Charset, 0);
}

std::vector<CSSParser::WsContext *> CSSParser::BadCharsetContext::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::BadCharsetContext::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}

tree::TerminalNode* CSSParser::BadCharsetContext::String() {
  return getToken(CSSParser::String, 0);
}

CSSParser::BadCharsetContext::BadCharsetContext(CharsetContext *ctx) { copyFrom(ctx); }


//----------------- GoodCharsetContext ------------------------------------------------------------------

tree::TerminalNode* CSSParser::GoodCharsetContext::Charset() {
  return getToken(CSSParser::Charset, 0);
}

std::vector<CSSParser::WsContext *> CSSParser::GoodCharsetContext::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::GoodCharsetContext::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}

tree::TerminalNode* CSSParser::GoodCharsetContext::String() {
  return getToken(CSSParser::String, 0);
}

CSSParser::GoodCharsetContext::GoodCharsetContext(CharsetContext *ctx) { copyFrom(ctx); }


CSSParser::CharsetContext* CSSParser::charset() {
  CharsetContext *_localctx = _tracker.createInstance<CharsetContext>(_ctx, getState());
  enterRule(_localctx, 2, CSSParser::RuleCharset);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(219);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<CharsetContext *>(_tracker.createInstance<CSSParser::GoodCharsetContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(207);
      match(CSSParser::Charset);
      setState(208);
      ws();
      setState(209);
      match(CSSParser::String);
      setState(210);
      ws();
      setState(211);
      match(CSSParser::T__0);
      setState(212);
      ws();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<CharsetContext *>(_tracker.createInstance<CSSParser::BadCharsetContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(214);
      match(CSSParser::Charset);
      setState(215);
      ws();
      setState(216);
      match(CSSParser::String);
      setState(217);
      ws();
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

//----------------- ImportsContext ------------------------------------------------------------------

CSSParser::ImportsContext::ImportsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSSParser::ImportsContext::getRuleIndex() const {
  return CSSParser::RuleImports;
}

void CSSParser::ImportsContext::copyFrom(ImportsContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- BadImportContext ------------------------------------------------------------------

tree::TerminalNode* CSSParser::BadImportContext::Import() {
  return getToken(CSSParser::Import, 0);
}

std::vector<CSSParser::WsContext *> CSSParser::BadImportContext::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::BadImportContext::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}

CSSParser::MediaQueryListContext* CSSParser::BadImportContext::mediaQueryList() {
  return getRuleContext<CSSParser::MediaQueryListContext>(0);
}

tree::TerminalNode* CSSParser::BadImportContext::String() {
  return getToken(CSSParser::String, 0);
}

tree::TerminalNode* CSSParser::BadImportContext::Uri() {
  return getToken(CSSParser::Uri, 0);
}

CSSParser::BadImportContext::BadImportContext(ImportsContext *ctx) { copyFrom(ctx); }


//----------------- GoodImportContext ------------------------------------------------------------------

tree::TerminalNode* CSSParser::GoodImportContext::Import() {
  return getToken(CSSParser::Import, 0);
}

std::vector<CSSParser::WsContext *> CSSParser::GoodImportContext::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::GoodImportContext::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}

CSSParser::MediaQueryListContext* CSSParser::GoodImportContext::mediaQueryList() {
  return getRuleContext<CSSParser::MediaQueryListContext>(0);
}

tree::TerminalNode* CSSParser::GoodImportContext::String() {
  return getToken(CSSParser::String, 0);
}

tree::TerminalNode* CSSParser::GoodImportContext::Uri() {
  return getToken(CSSParser::Uri, 0);
}

CSSParser::GoodImportContext::GoodImportContext(ImportsContext *ctx) { copyFrom(ctx); }


CSSParser::ImportsContext* CSSParser::imports() {
  ImportsContext *_localctx = _tracker.createInstance<ImportsContext>(_ctx, getState());
  enterRule(_localctx, 4, CSSParser::RuleImports);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(247);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<ImportsContext *>(_tracker.createInstance<CSSParser::GoodImportContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(221);
      match(CSSParser::Import);
      setState(222);
      ws();
      setState(223);
      _la = _input->LA(1);
      if (!(_la == CSSParser::Uri

      || _la == CSSParser::String)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(224);
      ws();
      setState(225);
      mediaQueryList();
      setState(226);
      match(CSSParser::T__0);
      setState(227);
      ws();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<ImportsContext *>(_tracker.createInstance<CSSParser::GoodImportContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(229);
      match(CSSParser::Import);
      setState(230);
      ws();
      setState(231);
      _la = _input->LA(1);
      if (!(_la == CSSParser::Uri

      || _la == CSSParser::String)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(232);
      ws();
      setState(233);
      match(CSSParser::T__0);
      setState(234);
      ws();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<ImportsContext *>(_tracker.createInstance<CSSParser::BadImportContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(236);
      match(CSSParser::Import);
      setState(237);
      ws();
      setState(238);
      _la = _input->LA(1);
      if (!(_la == CSSParser::Uri

      || _la == CSSParser::String)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(239);
      ws();
      setState(240);
      mediaQueryList();
      break;
    }

    case 4: {
      _localctx = dynamic_cast<ImportsContext *>(_tracker.createInstance<CSSParser::BadImportContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(242);
      match(CSSParser::Import);
      setState(243);
      ws();
      setState(244);
      _la = _input->LA(1);
      if (!(_la == CSSParser::Uri

      || _la == CSSParser::String)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(245);
      ws();
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

//----------------- Namespace_Context ------------------------------------------------------------------

CSSParser::Namespace_Context::Namespace_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSSParser::Namespace_Context::getRuleIndex() const {
  return CSSParser::RuleNamespace_;
}

void CSSParser::Namespace_Context::copyFrom(Namespace_Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- GoodNamespaceContext ------------------------------------------------------------------

tree::TerminalNode* CSSParser::GoodNamespaceContext::Namespace() {
  return getToken(CSSParser::Namespace, 0);
}

std::vector<CSSParser::WsContext *> CSSParser::GoodNamespaceContext::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::GoodNamespaceContext::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}

tree::TerminalNode* CSSParser::GoodNamespaceContext::String() {
  return getToken(CSSParser::String, 0);
}

tree::TerminalNode* CSSParser::GoodNamespaceContext::Uri() {
  return getToken(CSSParser::Uri, 0);
}

CSSParser::NamespacePrefixContext* CSSParser::GoodNamespaceContext::namespacePrefix() {
  return getRuleContext<CSSParser::NamespacePrefixContext>(0);
}

CSSParser::GoodNamespaceContext::GoodNamespaceContext(Namespace_Context *ctx) { copyFrom(ctx); }


//----------------- BadNamespaceContext ------------------------------------------------------------------

tree::TerminalNode* CSSParser::BadNamespaceContext::Namespace() {
  return getToken(CSSParser::Namespace, 0);
}

std::vector<CSSParser::WsContext *> CSSParser::BadNamespaceContext::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::BadNamespaceContext::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}

tree::TerminalNode* CSSParser::BadNamespaceContext::String() {
  return getToken(CSSParser::String, 0);
}

tree::TerminalNode* CSSParser::BadNamespaceContext::Uri() {
  return getToken(CSSParser::Uri, 0);
}

CSSParser::NamespacePrefixContext* CSSParser::BadNamespaceContext::namespacePrefix() {
  return getRuleContext<CSSParser::NamespacePrefixContext>(0);
}

CSSParser::BadNamespaceContext::BadNamespaceContext(Namespace_Context *ctx) { copyFrom(ctx); }


CSSParser::Namespace_Context* CSSParser::namespace_() {
  Namespace_Context *_localctx = _tracker.createInstance<Namespace_Context>(_ctx, getState());
  enterRule(_localctx, 6, CSSParser::RuleNamespace_);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(271);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<Namespace_Context *>(_tracker.createInstance<CSSParser::GoodNamespaceContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(249);
      match(CSSParser::Namespace);
      setState(250);
      ws();
      setState(254);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CSSParser::MediaOnly)
        | (1ULL << CSSParser::Not)
        | (1ULL << CSSParser::And)
        | (1ULL << CSSParser::Or)
        | (1ULL << CSSParser::From)
        | (1ULL << CSSParser::To)
        | (1ULL << CSSParser::Ident))) != 0)) {
        setState(251);
        namespacePrefix();
        setState(252);
        ws();
      }
      setState(256);
      _la = _input->LA(1);
      if (!(_la == CSSParser::Uri

      || _la == CSSParser::String)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(257);
      ws();
      setState(258);
      match(CSSParser::T__0);
      setState(259);
      ws();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<Namespace_Context *>(_tracker.createInstance<CSSParser::BadNamespaceContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(261);
      match(CSSParser::Namespace);
      setState(262);
      ws();
      setState(266);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CSSParser::MediaOnly)
        | (1ULL << CSSParser::Not)
        | (1ULL << CSSParser::And)
        | (1ULL << CSSParser::Or)
        | (1ULL << CSSParser::From)
        | (1ULL << CSSParser::To)
        | (1ULL << CSSParser::Ident))) != 0)) {
        setState(263);
        namespacePrefix();
        setState(264);
        ws();
      }
      setState(268);
      _la = _input->LA(1);
      if (!(_la == CSSParser::Uri

      || _la == CSSParser::String)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(269);
      ws();
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

//----------------- NamespacePrefixContext ------------------------------------------------------------------

CSSParser::NamespacePrefixContext::NamespacePrefixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CSSParser::IdentContext* CSSParser::NamespacePrefixContext::ident() {
  return getRuleContext<CSSParser::IdentContext>(0);
}


size_t CSSParser::NamespacePrefixContext::getRuleIndex() const {
  return CSSParser::RuleNamespacePrefix;
}


CSSParser::NamespacePrefixContext* CSSParser::namespacePrefix() {
  NamespacePrefixContext *_localctx = _tracker.createInstance<NamespacePrefixContext>(_ctx, getState());
  enterRule(_localctx, 8, CSSParser::RuleNamespacePrefix);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(273);
    ident();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MediaContext ------------------------------------------------------------------

CSSParser::MediaContext::MediaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CSSParser::MediaContext::Media() {
  return getToken(CSSParser::Media, 0);
}

std::vector<CSSParser::WsContext *> CSSParser::MediaContext::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::MediaContext::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}

CSSParser::MediaQueryListContext* CSSParser::MediaContext::mediaQueryList() {
  return getRuleContext<CSSParser::MediaQueryListContext>(0);
}

CSSParser::GroupRuleBodyContext* CSSParser::MediaContext::groupRuleBody() {
  return getRuleContext<CSSParser::GroupRuleBodyContext>(0);
}


size_t CSSParser::MediaContext::getRuleIndex() const {
  return CSSParser::RuleMedia;
}


CSSParser::MediaContext* CSSParser::media() {
  MediaContext *_localctx = _tracker.createInstance<MediaContext>(_ctx, getState());
  enterRule(_localctx, 10, CSSParser::RuleMedia);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(275);
    match(CSSParser::Media);
    setState(276);
    ws();
    setState(277);
    mediaQueryList();
    setState(278);
    groupRuleBody();
    setState(279);
    ws();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MediaQueryListContext ------------------------------------------------------------------

CSSParser::MediaQueryListContext::MediaQueryListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CSSParser::WsContext *> CSSParser::MediaQueryListContext::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::MediaQueryListContext::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}

std::vector<CSSParser::MediaQueryContext *> CSSParser::MediaQueryListContext::mediaQuery() {
  return getRuleContexts<CSSParser::MediaQueryContext>();
}

CSSParser::MediaQueryContext* CSSParser::MediaQueryListContext::mediaQuery(size_t i) {
  return getRuleContext<CSSParser::MediaQueryContext>(i);
}

std::vector<tree::TerminalNode *> CSSParser::MediaQueryListContext::Comma() {
  return getTokens(CSSParser::Comma);
}

tree::TerminalNode* CSSParser::MediaQueryListContext::Comma(size_t i) {
  return getToken(CSSParser::Comma, i);
}


size_t CSSParser::MediaQueryListContext::getRuleIndex() const {
  return CSSParser::RuleMediaQueryList;
}


CSSParser::MediaQueryListContext* CSSParser::mediaQueryList() {
  MediaQueryListContext *_localctx = _tracker.createInstance<MediaQueryListContext>(_ctx, getState());
  enterRule(_localctx, 12, CSSParser::RuleMediaQueryList);
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
    setState(291);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      setState(281);
      mediaQuery();
      setState(288);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == CSSParser::Comma) {
        setState(282);
        match(CSSParser::Comma);
        setState(283);
        ws();
        setState(284);
        mediaQuery();
        setState(290);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    default:
      break;
    }
    setState(293);
    ws();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MediaQueryContext ------------------------------------------------------------------

CSSParser::MediaQueryContext::MediaQueryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CSSParser::WsContext *> CSSParser::MediaQueryContext::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::MediaQueryContext::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}

CSSParser::MediaTypeContext* CSSParser::MediaQueryContext::mediaType() {
  return getRuleContext<CSSParser::MediaTypeContext>(0);
}

std::vector<tree::TerminalNode *> CSSParser::MediaQueryContext::And() {
  return getTokens(CSSParser::And);
}

tree::TerminalNode* CSSParser::MediaQueryContext::And(size_t i) {
  return getToken(CSSParser::And, i);
}

std::vector<CSSParser::MediaExpressionContext *> CSSParser::MediaQueryContext::mediaExpression() {
  return getRuleContexts<CSSParser::MediaExpressionContext>();
}

CSSParser::MediaExpressionContext* CSSParser::MediaQueryContext::mediaExpression(size_t i) {
  return getRuleContext<CSSParser::MediaExpressionContext>(i);
}

tree::TerminalNode* CSSParser::MediaQueryContext::MediaOnly() {
  return getToken(CSSParser::MediaOnly, 0);
}

tree::TerminalNode* CSSParser::MediaQueryContext::Not() {
  return getToken(CSSParser::Not, 0);
}


size_t CSSParser::MediaQueryContext::getRuleIndex() const {
  return CSSParser::RuleMediaQuery;
}


CSSParser::MediaQueryContext* CSSParser::mediaQuery() {
  MediaQueryContext *_localctx = _tracker.createInstance<MediaQueryContext>(_ctx, getState());
  enterRule(_localctx, 14, CSSParser::RuleMediaQuery);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(320);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CSSParser::Comment:
      case CSSParser::Space:
      case CSSParser::MediaOnly:
      case CSSParser::Not:
      case CSSParser::And:
      case CSSParser::Or:
      case CSSParser::From:
      case CSSParser::To:
      case CSSParser::Ident: {
        enterOuterAlt(_localctx, 1);
        setState(296);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
        case 1: {
          setState(295);
          _la = _input->LA(1);
          if (!(_la == CSSParser::MediaOnly

          || _la == CSSParser::Not)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          break;
        }

        default:
          break;
        }
        setState(298);
        ws();
        setState(299);
        mediaType();
        setState(300);
        ws();
        setState(307);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(301);
            match(CSSParser::And);
            setState(302);
            ws();
            setState(303);
            mediaExpression(); 
          }
          setState(309);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
        }
        break;
      }

      case CSSParser::T__1: {
        enterOuterAlt(_localctx, 2);
        setState(310);
        mediaExpression();
        setState(317);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(311);
            match(CSSParser::And);
            setState(312);
            ws();
            setState(313);
            mediaExpression(); 
          }
          setState(319);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
        }
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

//----------------- MediaTypeContext ------------------------------------------------------------------

CSSParser::MediaTypeContext::MediaTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CSSParser::IdentContext* CSSParser::MediaTypeContext::ident() {
  return getRuleContext<CSSParser::IdentContext>(0);
}


size_t CSSParser::MediaTypeContext::getRuleIndex() const {
  return CSSParser::RuleMediaType;
}


CSSParser::MediaTypeContext* CSSParser::mediaType() {
  MediaTypeContext *_localctx = _tracker.createInstance<MediaTypeContext>(_ctx, getState());
  enterRule(_localctx, 16, CSSParser::RuleMediaType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(322);
    ident();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MediaExpressionContext ------------------------------------------------------------------

CSSParser::MediaExpressionContext::MediaExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CSSParser::WsContext *> CSSParser::MediaExpressionContext::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::MediaExpressionContext::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}

CSSParser::MediaFeatureContext* CSSParser::MediaExpressionContext::mediaFeature() {
  return getRuleContext<CSSParser::MediaFeatureContext>(0);
}

CSSParser::ExprContext* CSSParser::MediaExpressionContext::expr() {
  return getRuleContext<CSSParser::ExprContext>(0);
}


size_t CSSParser::MediaExpressionContext::getRuleIndex() const {
  return CSSParser::RuleMediaExpression;
}


CSSParser::MediaExpressionContext* CSSParser::mediaExpression() {
  MediaExpressionContext *_localctx = _tracker.createInstance<MediaExpressionContext>(_ctx, getState());
  enterRule(_localctx, 18, CSSParser::RuleMediaExpression);
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
    match(CSSParser::T__1);
    setState(325);
    ws();
    setState(326);
    mediaFeature();
    setState(331);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CSSParser::T__2) {
      setState(327);
      match(CSSParser::T__2);
      setState(328);
      ws();
      setState(329);
      expr();
    }
    setState(333);
    match(CSSParser::T__3);
    setState(334);
    ws();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MediaFeatureContext ------------------------------------------------------------------

CSSParser::MediaFeatureContext::MediaFeatureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CSSParser::IdentContext* CSSParser::MediaFeatureContext::ident() {
  return getRuleContext<CSSParser::IdentContext>(0);
}

CSSParser::WsContext* CSSParser::MediaFeatureContext::ws() {
  return getRuleContext<CSSParser::WsContext>(0);
}


size_t CSSParser::MediaFeatureContext::getRuleIndex() const {
  return CSSParser::RuleMediaFeature;
}


CSSParser::MediaFeatureContext* CSSParser::mediaFeature() {
  MediaFeatureContext *_localctx = _tracker.createInstance<MediaFeatureContext>(_ctx, getState());
  enterRule(_localctx, 20, CSSParser::RuleMediaFeature);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(336);
    ident();
    setState(337);
    ws();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PageContext ------------------------------------------------------------------

CSSParser::PageContext::PageContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CSSParser::PageContext::Page() {
  return getToken(CSSParser::Page, 0);
}

std::vector<CSSParser::WsContext *> CSSParser::PageContext::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::PageContext::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}

CSSParser::PseudoPageContext* CSSParser::PageContext::pseudoPage() {
  return getRuleContext<CSSParser::PseudoPageContext>(0);
}

std::vector<CSSParser::DeclarationContext *> CSSParser::PageContext::declaration() {
  return getRuleContexts<CSSParser::DeclarationContext>();
}

CSSParser::DeclarationContext* CSSParser::PageContext::declaration(size_t i) {
  return getRuleContext<CSSParser::DeclarationContext>(i);
}


size_t CSSParser::PageContext::getRuleIndex() const {
  return CSSParser::RulePage;
}


CSSParser::PageContext* CSSParser::page() {
  PageContext *_localctx = _tracker.createInstance<PageContext>(_ctx, getState());
  enterRule(_localctx, 22, CSSParser::RulePage);
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
    setState(339);
    match(CSSParser::Page);
    setState(340);
    ws();
    setState(342);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CSSParser::T__2) {
      setState(341);
      pseudoPage();
    }
    setState(344);
    match(CSSParser::T__4);
    setState(345);
    ws();
    setState(347);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CSSParser::T__6)
      | (1ULL << CSSParser::T__13)
      | (1ULL << CSSParser::MediaOnly)
      | (1ULL << CSSParser::Not)
      | (1ULL << CSSParser::And)
      | (1ULL << CSSParser::Or)
      | (1ULL << CSSParser::From)
      | (1ULL << CSSParser::To)
      | (1ULL << CSSParser::Variable)
      | (1ULL << CSSParser::Ident))) != 0)) {
      setState(346);
      declaration();
    }
    setState(356);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CSSParser::T__0) {
      setState(349);
      match(CSSParser::T__0);
      setState(350);
      ws();
      setState(352);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CSSParser::T__6)
        | (1ULL << CSSParser::T__13)
        | (1ULL << CSSParser::MediaOnly)
        | (1ULL << CSSParser::Not)
        | (1ULL << CSSParser::And)
        | (1ULL << CSSParser::Or)
        | (1ULL << CSSParser::From)
        | (1ULL << CSSParser::To)
        | (1ULL << CSSParser::Variable)
        | (1ULL << CSSParser::Ident))) != 0)) {
        setState(351);
        declaration();
      }
      setState(358);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(359);
    match(CSSParser::T__5);
    setState(360);
    ws();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PseudoPageContext ------------------------------------------------------------------

CSSParser::PseudoPageContext::PseudoPageContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CSSParser::IdentContext* CSSParser::PseudoPageContext::ident() {
  return getRuleContext<CSSParser::IdentContext>(0);
}

CSSParser::WsContext* CSSParser::PseudoPageContext::ws() {
  return getRuleContext<CSSParser::WsContext>(0);
}


size_t CSSParser::PseudoPageContext::getRuleIndex() const {
  return CSSParser::RulePseudoPage;
}


CSSParser::PseudoPageContext* CSSParser::pseudoPage() {
  PseudoPageContext *_localctx = _tracker.createInstance<PseudoPageContext>(_ctx, getState());
  enterRule(_localctx, 24, CSSParser::RulePseudoPage);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(362);
    match(CSSParser::T__2);
    setState(363);
    ident();
    setState(364);
    ws();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SelectorGroupContext ------------------------------------------------------------------

CSSParser::SelectorGroupContext::SelectorGroupContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CSSParser::SelectorContext *> CSSParser::SelectorGroupContext::selector() {
  return getRuleContexts<CSSParser::SelectorContext>();
}

CSSParser::SelectorContext* CSSParser::SelectorGroupContext::selector(size_t i) {
  return getRuleContext<CSSParser::SelectorContext>(i);
}

std::vector<tree::TerminalNode *> CSSParser::SelectorGroupContext::Comma() {
  return getTokens(CSSParser::Comma);
}

tree::TerminalNode* CSSParser::SelectorGroupContext::Comma(size_t i) {
  return getToken(CSSParser::Comma, i);
}

std::vector<CSSParser::WsContext *> CSSParser::SelectorGroupContext::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::SelectorGroupContext::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}


size_t CSSParser::SelectorGroupContext::getRuleIndex() const {
  return CSSParser::RuleSelectorGroup;
}


CSSParser::SelectorGroupContext* CSSParser::selectorGroup() {
  SelectorGroupContext *_localctx = _tracker.createInstance<SelectorGroupContext>(_ctx, getState());
  enterRule(_localctx, 26, CSSParser::RuleSelectorGroup);
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
    setState(366);
    selector();
    setState(373);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CSSParser::Comma) {
      setState(367);
      match(CSSParser::Comma);
      setState(368);
      ws();
      setState(369);
      selector();
      setState(375);
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

//----------------- SelectorContext ------------------------------------------------------------------

CSSParser::SelectorContext::SelectorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CSSParser::SimpleSelectorSequenceContext *> CSSParser::SelectorContext::simpleSelectorSequence() {
  return getRuleContexts<CSSParser::SimpleSelectorSequenceContext>();
}

CSSParser::SimpleSelectorSequenceContext* CSSParser::SelectorContext::simpleSelectorSequence(size_t i) {
  return getRuleContext<CSSParser::SimpleSelectorSequenceContext>(i);
}

std::vector<CSSParser::WsContext *> CSSParser::SelectorContext::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::SelectorContext::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}

std::vector<CSSParser::CombinatorContext *> CSSParser::SelectorContext::combinator() {
  return getRuleContexts<CSSParser::CombinatorContext>();
}

CSSParser::CombinatorContext* CSSParser::SelectorContext::combinator(size_t i) {
  return getRuleContext<CSSParser::CombinatorContext>(i);
}


size_t CSSParser::SelectorContext::getRuleIndex() const {
  return CSSParser::RuleSelector;
}


CSSParser::SelectorContext* CSSParser::selector() {
  SelectorContext *_localctx = _tracker.createInstance<SelectorContext>(_ctx, getState());
  enterRule(_localctx, 28, CSSParser::RuleSelector);
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
    setState(376);
    simpleSelectorSequence();
    setState(377);
    ws();
    setState(384);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CSSParser::Space)
      | (1ULL << CSSParser::Plus)
      | (1ULL << CSSParser::Greater)
      | (1ULL << CSSParser::Tilde))) != 0)) {
      setState(378);
      combinator();
      setState(379);
      simpleSelectorSequence();
      setState(380);
      ws();
      setState(386);
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

//----------------- CombinatorContext ------------------------------------------------------------------

CSSParser::CombinatorContext::CombinatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CSSParser::CombinatorContext::Plus() {
  return getToken(CSSParser::Plus, 0);
}

CSSParser::WsContext* CSSParser::CombinatorContext::ws() {
  return getRuleContext<CSSParser::WsContext>(0);
}

tree::TerminalNode* CSSParser::CombinatorContext::Greater() {
  return getToken(CSSParser::Greater, 0);
}

tree::TerminalNode* CSSParser::CombinatorContext::Tilde() {
  return getToken(CSSParser::Tilde, 0);
}

tree::TerminalNode* CSSParser::CombinatorContext::Space() {
  return getToken(CSSParser::Space, 0);
}


size_t CSSParser::CombinatorContext::getRuleIndex() const {
  return CSSParser::RuleCombinator;
}


CSSParser::CombinatorContext* CSSParser::combinator() {
  CombinatorContext *_localctx = _tracker.createInstance<CombinatorContext>(_ctx, getState());
  enterRule(_localctx, 30, CSSParser::RuleCombinator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(395);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CSSParser::Plus: {
        enterOuterAlt(_localctx, 1);
        setState(387);
        match(CSSParser::Plus);
        setState(388);
        ws();
        break;
      }

      case CSSParser::Greater: {
        enterOuterAlt(_localctx, 2);
        setState(389);
        match(CSSParser::Greater);
        setState(390);
        ws();
        break;
      }

      case CSSParser::Tilde: {
        enterOuterAlt(_localctx, 3);
        setState(391);
        match(CSSParser::Tilde);
        setState(392);
        ws();
        break;
      }

      case CSSParser::Space: {
        enterOuterAlt(_localctx, 4);
        setState(393);
        match(CSSParser::Space);
        setState(394);
        ws();
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

//----------------- SimpleSelectorSequenceContext ------------------------------------------------------------------

CSSParser::SimpleSelectorSequenceContext::SimpleSelectorSequenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CSSParser::TypeSelectorContext* CSSParser::SimpleSelectorSequenceContext::typeSelector() {
  return getRuleContext<CSSParser::TypeSelectorContext>(0);
}

CSSParser::UniversalContext* CSSParser::SimpleSelectorSequenceContext::universal() {
  return getRuleContext<CSSParser::UniversalContext>(0);
}

std::vector<tree::TerminalNode *> CSSParser::SimpleSelectorSequenceContext::Hash() {
  return getTokens(CSSParser::Hash);
}

tree::TerminalNode* CSSParser::SimpleSelectorSequenceContext::Hash(size_t i) {
  return getToken(CSSParser::Hash, i);
}

std::vector<CSSParser::ClassNameContext *> CSSParser::SimpleSelectorSequenceContext::className() {
  return getRuleContexts<CSSParser::ClassNameContext>();
}

CSSParser::ClassNameContext* CSSParser::SimpleSelectorSequenceContext::className(size_t i) {
  return getRuleContext<CSSParser::ClassNameContext>(i);
}

std::vector<CSSParser::AttribContext *> CSSParser::SimpleSelectorSequenceContext::attrib() {
  return getRuleContexts<CSSParser::AttribContext>();
}

CSSParser::AttribContext* CSSParser::SimpleSelectorSequenceContext::attrib(size_t i) {
  return getRuleContext<CSSParser::AttribContext>(i);
}

std::vector<CSSParser::PseudoContext *> CSSParser::SimpleSelectorSequenceContext::pseudo() {
  return getRuleContexts<CSSParser::PseudoContext>();
}

CSSParser::PseudoContext* CSSParser::SimpleSelectorSequenceContext::pseudo(size_t i) {
  return getRuleContext<CSSParser::PseudoContext>(i);
}

std::vector<CSSParser::NegationContext *> CSSParser::SimpleSelectorSequenceContext::negation() {
  return getRuleContexts<CSSParser::NegationContext>();
}

CSSParser::NegationContext* CSSParser::SimpleSelectorSequenceContext::negation(size_t i) {
  return getRuleContext<CSSParser::NegationContext>(i);
}


size_t CSSParser::SimpleSelectorSequenceContext::getRuleIndex() const {
  return CSSParser::RuleSimpleSelectorSequence;
}


CSSParser::SimpleSelectorSequenceContext* CSSParser::simpleSelectorSequence() {
  SimpleSelectorSequenceContext *_localctx = _tracker.createInstance<SimpleSelectorSequenceContext>(_ctx, getState());
  enterRule(_localctx, 32, CSSParser::RuleSimpleSelectorSequence);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(420);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CSSParser::T__6:
      case CSSParser::T__7:
      case CSSParser::MediaOnly:
      case CSSParser::Not:
      case CSSParser::And:
      case CSSParser::Or:
      case CSSParser::From:
      case CSSParser::To:
      case CSSParser::Ident: {
        enterOuterAlt(_localctx, 1);
        setState(399);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
        case 1: {
          setState(397);
          typeSelector();
          break;
        }

        case 2: {
          setState(398);
          universal();
          break;
        }

        default:
          break;
        }
        setState(408);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << CSSParser::T__2)
          | (1ULL << CSSParser::T__8)
          | (1ULL << CSSParser::T__9)
          | (1ULL << CSSParser::Hash)
          | (1ULL << CSSParser::PseudoNot))) != 0)) {
          setState(406);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case CSSParser::Hash: {
              setState(401);
              match(CSSParser::Hash);
              break;
            }

            case CSSParser::T__8: {
              setState(402);
              className();
              break;
            }

            case CSSParser::T__9: {
              setState(403);
              attrib();
              break;
            }

            case CSSParser::T__2: {
              setState(404);
              pseudo();
              break;
            }

            case CSSParser::PseudoNot: {
              setState(405);
              negation();
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          setState(410);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case CSSParser::T__2:
      case CSSParser::T__8:
      case CSSParser::T__9:
      case CSSParser::Hash:
      case CSSParser::PseudoNot: {
        enterOuterAlt(_localctx, 2);
        setState(416); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(416);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case CSSParser::Hash: {
              setState(411);
              match(CSSParser::Hash);
              break;
            }

            case CSSParser::T__8: {
              setState(412);
              className();
              break;
            }

            case CSSParser::T__9: {
              setState(413);
              attrib();
              break;
            }

            case CSSParser::T__2: {
              setState(414);
              pseudo();
              break;
            }

            case CSSParser::PseudoNot: {
              setState(415);
              negation();
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          setState(418); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << CSSParser::T__2)
          | (1ULL << CSSParser::T__8)
          | (1ULL << CSSParser::T__9)
          | (1ULL << CSSParser::Hash)
          | (1ULL << CSSParser::PseudoNot))) != 0));
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

//----------------- TypeSelectorContext ------------------------------------------------------------------

CSSParser::TypeSelectorContext::TypeSelectorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CSSParser::ElementNameContext* CSSParser::TypeSelectorContext::elementName() {
  return getRuleContext<CSSParser::ElementNameContext>(0);
}

CSSParser::TypeNamespacePrefixContext* CSSParser::TypeSelectorContext::typeNamespacePrefix() {
  return getRuleContext<CSSParser::TypeNamespacePrefixContext>(0);
}


size_t CSSParser::TypeSelectorContext::getRuleIndex() const {
  return CSSParser::RuleTypeSelector;
}


CSSParser::TypeSelectorContext* CSSParser::typeSelector() {
  TypeSelectorContext *_localctx = _tracker.createInstance<TypeSelectorContext>(_ctx, getState());
  enterRule(_localctx, 34, CSSParser::RuleTypeSelector);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(423);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      setState(422);
      typeNamespacePrefix();
      break;
    }

    default:
      break;
    }
    setState(425);
    elementName();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeNamespacePrefixContext ------------------------------------------------------------------

CSSParser::TypeNamespacePrefixContext::TypeNamespacePrefixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CSSParser::IdentContext* CSSParser::TypeNamespacePrefixContext::ident() {
  return getRuleContext<CSSParser::IdentContext>(0);
}


size_t CSSParser::TypeNamespacePrefixContext::getRuleIndex() const {
  return CSSParser::RuleTypeNamespacePrefix;
}


CSSParser::TypeNamespacePrefixContext* CSSParser::typeNamespacePrefix() {
  TypeNamespacePrefixContext *_localctx = _tracker.createInstance<TypeNamespacePrefixContext>(_ctx, getState());
  enterRule(_localctx, 36, CSSParser::RuleTypeNamespacePrefix);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(429);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CSSParser::MediaOnly:
      case CSSParser::Not:
      case CSSParser::And:
      case CSSParser::Or:
      case CSSParser::From:
      case CSSParser::To:
      case CSSParser::Ident: {
        setState(427);
        ident();
        break;
      }

      case CSSParser::T__6: {
        setState(428);
        match(CSSParser::T__6);
        break;
      }

      case CSSParser::T__7: {
        break;
      }

    default:
      break;
    }
    setState(431);
    match(CSSParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementNameContext ------------------------------------------------------------------

CSSParser::ElementNameContext::ElementNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CSSParser::IdentContext* CSSParser::ElementNameContext::ident() {
  return getRuleContext<CSSParser::IdentContext>(0);
}


size_t CSSParser::ElementNameContext::getRuleIndex() const {
  return CSSParser::RuleElementName;
}


CSSParser::ElementNameContext* CSSParser::elementName() {
  ElementNameContext *_localctx = _tracker.createInstance<ElementNameContext>(_ctx, getState());
  enterRule(_localctx, 38, CSSParser::RuleElementName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(433);
    ident();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UniversalContext ------------------------------------------------------------------

CSSParser::UniversalContext::UniversalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CSSParser::TypeNamespacePrefixContext* CSSParser::UniversalContext::typeNamespacePrefix() {
  return getRuleContext<CSSParser::TypeNamespacePrefixContext>(0);
}


size_t CSSParser::UniversalContext::getRuleIndex() const {
  return CSSParser::RuleUniversal;
}


CSSParser::UniversalContext* CSSParser::universal() {
  UniversalContext *_localctx = _tracker.createInstance<UniversalContext>(_ctx, getState());
  enterRule(_localctx, 40, CSSParser::RuleUniversal);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(436);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
    case 1: {
      setState(435);
      typeNamespacePrefix();
      break;
    }

    default:
      break;
    }
    setState(438);
    match(CSSParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassNameContext ------------------------------------------------------------------

CSSParser::ClassNameContext::ClassNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CSSParser::IdentContext* CSSParser::ClassNameContext::ident() {
  return getRuleContext<CSSParser::IdentContext>(0);
}


size_t CSSParser::ClassNameContext::getRuleIndex() const {
  return CSSParser::RuleClassName;
}


CSSParser::ClassNameContext* CSSParser::className() {
  ClassNameContext *_localctx = _tracker.createInstance<ClassNameContext>(_ctx, getState());
  enterRule(_localctx, 42, CSSParser::RuleClassName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(440);
    match(CSSParser::T__8);
    setState(441);
    ident();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttribContext ------------------------------------------------------------------

CSSParser::AttribContext::AttribContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CSSParser::WsContext *> CSSParser::AttribContext::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::AttribContext::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}

std::vector<CSSParser::IdentContext *> CSSParser::AttribContext::ident() {
  return getRuleContexts<CSSParser::IdentContext>();
}

CSSParser::IdentContext* CSSParser::AttribContext::ident(size_t i) {
  return getRuleContext<CSSParser::IdentContext>(i);
}

CSSParser::TypeNamespacePrefixContext* CSSParser::AttribContext::typeNamespacePrefix() {
  return getRuleContext<CSSParser::TypeNamespacePrefixContext>(0);
}

tree::TerminalNode* CSSParser::AttribContext::PrefixMatch() {
  return getToken(CSSParser::PrefixMatch, 0);
}

tree::TerminalNode* CSSParser::AttribContext::SuffixMatch() {
  return getToken(CSSParser::SuffixMatch, 0);
}

tree::TerminalNode* CSSParser::AttribContext::SubstringMatch() {
  return getToken(CSSParser::SubstringMatch, 0);
}

tree::TerminalNode* CSSParser::AttribContext::Includes() {
  return getToken(CSSParser::Includes, 0);
}

tree::TerminalNode* CSSParser::AttribContext::DashMatch() {
  return getToken(CSSParser::DashMatch, 0);
}

tree::TerminalNode* CSSParser::AttribContext::String() {
  return getToken(CSSParser::String, 0);
}


size_t CSSParser::AttribContext::getRuleIndex() const {
  return CSSParser::RuleAttrib;
}


CSSParser::AttribContext* CSSParser::attrib() {
  AttribContext *_localctx = _tracker.createInstance<AttribContext>(_ctx, getState());
  enterRule(_localctx, 44, CSSParser::RuleAttrib);
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
    setState(443);
    match(CSSParser::T__9);
    setState(444);
    ws();
    setState(446);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
    case 1: {
      setState(445);
      typeNamespacePrefix();
      break;
    }

    default:
      break;
    }
    setState(448);
    ident();
    setState(449);
    ws();
    setState(458);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CSSParser::T__10)
      | (1ULL << CSSParser::Includes)
      | (1ULL << CSSParser::DashMatch)
      | (1ULL << CSSParser::PrefixMatch)
      | (1ULL << CSSParser::SuffixMatch)
      | (1ULL << CSSParser::SubstringMatch))) != 0)) {
      setState(450);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CSSParser::T__10)
        | (1ULL << CSSParser::Includes)
        | (1ULL << CSSParser::DashMatch)
        | (1ULL << CSSParser::PrefixMatch)
        | (1ULL << CSSParser::SuffixMatch)
        | (1ULL << CSSParser::SubstringMatch))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(451);
      ws();
      setState(454);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case CSSParser::MediaOnly:
        case CSSParser::Not:
        case CSSParser::And:
        case CSSParser::Or:
        case CSSParser::From:
        case CSSParser::To:
        case CSSParser::Ident: {
          setState(452);
          ident();
          break;
        }

        case CSSParser::String: {
          setState(453);
          match(CSSParser::String);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(456);
      ws();
    }
    setState(460);
    match(CSSParser::T__11);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PseudoContext ------------------------------------------------------------------

CSSParser::PseudoContext::PseudoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CSSParser::IdentContext* CSSParser::PseudoContext::ident() {
  return getRuleContext<CSSParser::IdentContext>(0);
}

CSSParser::FunctionalPseudoContext* CSSParser::PseudoContext::functionalPseudo() {
  return getRuleContext<CSSParser::FunctionalPseudoContext>(0);
}


size_t CSSParser::PseudoContext::getRuleIndex() const {
  return CSSParser::RulePseudo;
}


CSSParser::PseudoContext* CSSParser::pseudo() {
  PseudoContext *_localctx = _tracker.createInstance<PseudoContext>(_ctx, getState());
  enterRule(_localctx, 46, CSSParser::RulePseudo);
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
    setState(462);
    match(CSSParser::T__2);
    setState(464);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CSSParser::T__2) {
      setState(463);
      match(CSSParser::T__2);
    }
    setState(468);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CSSParser::MediaOnly:
      case CSSParser::Not:
      case CSSParser::And:
      case CSSParser::Or:
      case CSSParser::From:
      case CSSParser::To:
      case CSSParser::Ident: {
        setState(466);
        ident();
        break;
      }

      case CSSParser::Function: {
        setState(467);
        functionalPseudo();
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

//----------------- FunctionalPseudoContext ------------------------------------------------------------------

CSSParser::FunctionalPseudoContext::FunctionalPseudoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CSSParser::FunctionalPseudoContext::Function() {
  return getToken(CSSParser::Function, 0);
}

CSSParser::WsContext* CSSParser::FunctionalPseudoContext::ws() {
  return getRuleContext<CSSParser::WsContext>(0);
}

CSSParser::ExpressionContext* CSSParser::FunctionalPseudoContext::expression() {
  return getRuleContext<CSSParser::ExpressionContext>(0);
}


size_t CSSParser::FunctionalPseudoContext::getRuleIndex() const {
  return CSSParser::RuleFunctionalPseudo;
}


CSSParser::FunctionalPseudoContext* CSSParser::functionalPseudo() {
  FunctionalPseudoContext *_localctx = _tracker.createInstance<FunctionalPseudoContext>(_ctx, getState());
  enterRule(_localctx, 48, CSSParser::RuleFunctionalPseudo);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(470);
    match(CSSParser::Function);
    setState(471);
    ws();
    setState(472);
    expression();
    setState(473);
    match(CSSParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

CSSParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CSSParser::WsContext *> CSSParser::ExpressionContext::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::ExpressionContext::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}

std::vector<tree::TerminalNode *> CSSParser::ExpressionContext::Plus() {
  return getTokens(CSSParser::Plus);
}

tree::TerminalNode* CSSParser::ExpressionContext::Plus(size_t i) {
  return getToken(CSSParser::Plus, i);
}

std::vector<tree::TerminalNode *> CSSParser::ExpressionContext::Minus() {
  return getTokens(CSSParser::Minus);
}

tree::TerminalNode* CSSParser::ExpressionContext::Minus(size_t i) {
  return getToken(CSSParser::Minus, i);
}

std::vector<tree::TerminalNode *> CSSParser::ExpressionContext::Dimension() {
  return getTokens(CSSParser::Dimension);
}

tree::TerminalNode* CSSParser::ExpressionContext::Dimension(size_t i) {
  return getToken(CSSParser::Dimension, i);
}

std::vector<tree::TerminalNode *> CSSParser::ExpressionContext::UnknownDimension() {
  return getTokens(CSSParser::UnknownDimension);
}

tree::TerminalNode* CSSParser::ExpressionContext::UnknownDimension(size_t i) {
  return getToken(CSSParser::UnknownDimension, i);
}

std::vector<tree::TerminalNode *> CSSParser::ExpressionContext::Number() {
  return getTokens(CSSParser::Number);
}

tree::TerminalNode* CSSParser::ExpressionContext::Number(size_t i) {
  return getToken(CSSParser::Number, i);
}

std::vector<tree::TerminalNode *> CSSParser::ExpressionContext::String() {
  return getTokens(CSSParser::String);
}

tree::TerminalNode* CSSParser::ExpressionContext::String(size_t i) {
  return getToken(CSSParser::String, i);
}

std::vector<CSSParser::IdentContext *> CSSParser::ExpressionContext::ident() {
  return getRuleContexts<CSSParser::IdentContext>();
}

CSSParser::IdentContext* CSSParser::ExpressionContext::ident(size_t i) {
  return getRuleContext<CSSParser::IdentContext>(i);
}


size_t CSSParser::ExpressionContext::getRuleIndex() const {
  return CSSParser::RuleExpression;
}


CSSParser::ExpressionContext* CSSParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 50, CSSParser::RuleExpression);
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
    setState(485); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(482);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case CSSParser::Plus: {
          setState(475);
          match(CSSParser::Plus);
          break;
        }

        case CSSParser::Minus: {
          setState(476);
          match(CSSParser::Minus);
          break;
        }

        case CSSParser::Dimension: {
          setState(477);
          match(CSSParser::Dimension);
          break;
        }

        case CSSParser::UnknownDimension: {
          setState(478);
          match(CSSParser::UnknownDimension);
          break;
        }

        case CSSParser::Number: {
          setState(479);
          match(CSSParser::Number);
          break;
        }

        case CSSParser::String: {
          setState(480);
          match(CSSParser::String);
          break;
        }

        case CSSParser::MediaOnly:
        case CSSParser::Not:
        case CSSParser::And:
        case CSSParser::Or:
        case CSSParser::From:
        case CSSParser::To:
        case CSSParser::Ident: {
          setState(481);
          ident();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(484);
      ws();
      setState(487); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CSSParser::MediaOnly)
      | (1ULL << CSSParser::Not)
      | (1ULL << CSSParser::And)
      | (1ULL << CSSParser::Dimension)
      | (1ULL << CSSParser::UnknownDimension)
      | (1ULL << CSSParser::Plus)
      | (1ULL << CSSParser::Minus)
      | (1ULL << CSSParser::Number)
      | (1ULL << CSSParser::String)
      | (1ULL << CSSParser::Or)
      | (1ULL << CSSParser::From)
      | (1ULL << CSSParser::To)
      | (1ULL << CSSParser::Ident))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NegationContext ------------------------------------------------------------------

CSSParser::NegationContext::NegationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CSSParser::NegationContext::PseudoNot() {
  return getToken(CSSParser::PseudoNot, 0);
}

std::vector<CSSParser::WsContext *> CSSParser::NegationContext::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::NegationContext::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}

CSSParser::NegationArgContext* CSSParser::NegationContext::negationArg() {
  return getRuleContext<CSSParser::NegationArgContext>(0);
}


size_t CSSParser::NegationContext::getRuleIndex() const {
  return CSSParser::RuleNegation;
}


CSSParser::NegationContext* CSSParser::negation() {
  NegationContext *_localctx = _tracker.createInstance<NegationContext>(_ctx, getState());
  enterRule(_localctx, 52, CSSParser::RuleNegation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(489);
    match(CSSParser::PseudoNot);
    setState(490);
    ws();
    setState(491);
    negationArg();
    setState(492);
    ws();
    setState(493);
    match(CSSParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NegationArgContext ------------------------------------------------------------------

CSSParser::NegationArgContext::NegationArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CSSParser::TypeSelectorContext* CSSParser::NegationArgContext::typeSelector() {
  return getRuleContext<CSSParser::TypeSelectorContext>(0);
}

CSSParser::UniversalContext* CSSParser::NegationArgContext::universal() {
  return getRuleContext<CSSParser::UniversalContext>(0);
}

tree::TerminalNode* CSSParser::NegationArgContext::Hash() {
  return getToken(CSSParser::Hash, 0);
}

CSSParser::ClassNameContext* CSSParser::NegationArgContext::className() {
  return getRuleContext<CSSParser::ClassNameContext>(0);
}

CSSParser::AttribContext* CSSParser::NegationArgContext::attrib() {
  return getRuleContext<CSSParser::AttribContext>(0);
}

CSSParser::PseudoContext* CSSParser::NegationArgContext::pseudo() {
  return getRuleContext<CSSParser::PseudoContext>(0);
}


size_t CSSParser::NegationArgContext::getRuleIndex() const {
  return CSSParser::RuleNegationArg;
}


CSSParser::NegationArgContext* CSSParser::negationArg() {
  NegationArgContext *_localctx = _tracker.createInstance<NegationArgContext>(_ctx, getState());
  enterRule(_localctx, 54, CSSParser::RuleNegationArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(501);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(495);
      typeSelector();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(496);
      universal();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(497);
      match(CSSParser::Hash);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(498);
      className();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(499);
      attrib();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(500);
      pseudo();
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

//----------------- Operator_Context ------------------------------------------------------------------

CSSParser::Operator_Context::Operator_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSSParser::Operator_Context::getRuleIndex() const {
  return CSSParser::RuleOperator_;
}

void CSSParser::Operator_Context::copyFrom(Operator_Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- BadOperatorContext ------------------------------------------------------------------

CSSParser::WsContext* CSSParser::BadOperatorContext::ws() {
  return getRuleContext<CSSParser::WsContext>(0);
}

CSSParser::BadOperatorContext::BadOperatorContext(Operator_Context *ctx) { copyFrom(ctx); }


//----------------- GoodOperatorContext ------------------------------------------------------------------

CSSParser::WsContext* CSSParser::GoodOperatorContext::ws() {
  return getRuleContext<CSSParser::WsContext>(0);
}

tree::TerminalNode* CSSParser::GoodOperatorContext::Comma() {
  return getToken(CSSParser::Comma, 0);
}

tree::TerminalNode* CSSParser::GoodOperatorContext::Space() {
  return getToken(CSSParser::Space, 0);
}

CSSParser::GoodOperatorContext::GoodOperatorContext(Operator_Context *ctx) { copyFrom(ctx); }


CSSParser::Operator_Context* CSSParser::operator_() {
  Operator_Context *_localctx = _tracker.createInstance<Operator_Context>(_ctx, getState());
  enterRule(_localctx, 56, CSSParser::RuleOperator_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(511);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CSSParser::T__12: {
        _localctx = dynamic_cast<Operator_Context *>(_tracker.createInstance<CSSParser::GoodOperatorContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(503);
        match(CSSParser::T__12);
        setState(504);
        ws();
        break;
      }

      case CSSParser::Comma: {
        _localctx = dynamic_cast<Operator_Context *>(_tracker.createInstance<CSSParser::GoodOperatorContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(505);
        match(CSSParser::Comma);
        setState(506);
        ws();
        break;
      }

      case CSSParser::Space: {
        _localctx = dynamic_cast<Operator_Context *>(_tracker.createInstance<CSSParser::GoodOperatorContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(507);
        match(CSSParser::Space);
        setState(508);
        ws();
        break;
      }

      case CSSParser::T__10: {
        _localctx = dynamic_cast<Operator_Context *>(_tracker.createInstance<CSSParser::BadOperatorContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(509);
        match(CSSParser::T__10);
        setState(510);
        ws();
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

//----------------- PropertyContext ------------------------------------------------------------------

CSSParser::PropertyContext::PropertyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSSParser::PropertyContext::getRuleIndex() const {
  return CSSParser::RuleProperty;
}

void CSSParser::PropertyContext::copyFrom(PropertyContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- BadPropertyContext ------------------------------------------------------------------

CSSParser::IdentContext* CSSParser::BadPropertyContext::ident() {
  return getRuleContext<CSSParser::IdentContext>(0);
}

CSSParser::BadPropertyContext::BadPropertyContext(PropertyContext *ctx) { copyFrom(ctx); }


//----------------- GoodPropertyContext ------------------------------------------------------------------

CSSParser::IdentContext* CSSParser::GoodPropertyContext::ident() {
  return getRuleContext<CSSParser::IdentContext>(0);
}

CSSParser::WsContext* CSSParser::GoodPropertyContext::ws() {
  return getRuleContext<CSSParser::WsContext>(0);
}

tree::TerminalNode* CSSParser::GoodPropertyContext::Variable() {
  return getToken(CSSParser::Variable, 0);
}

CSSParser::GoodPropertyContext::GoodPropertyContext(PropertyContext *ctx) { copyFrom(ctx); }


CSSParser::PropertyContext* CSSParser::property() {
  PropertyContext *_localctx = _tracker.createInstance<PropertyContext>(_ctx, getState());
  enterRule(_localctx, 58, CSSParser::RuleProperty);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(522);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CSSParser::MediaOnly:
      case CSSParser::Not:
      case CSSParser::And:
      case CSSParser::Or:
      case CSSParser::From:
      case CSSParser::To:
      case CSSParser::Ident: {
        _localctx = dynamic_cast<PropertyContext *>(_tracker.createInstance<CSSParser::GoodPropertyContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(513);
        ident();
        setState(514);
        ws();
        break;
      }

      case CSSParser::Variable: {
        _localctx = dynamic_cast<PropertyContext *>(_tracker.createInstance<CSSParser::GoodPropertyContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(516);
        match(CSSParser::Variable);
        setState(517);
        ws();
        break;
      }

      case CSSParser::T__6: {
        _localctx = dynamic_cast<PropertyContext *>(_tracker.createInstance<CSSParser::BadPropertyContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(518);
        match(CSSParser::T__6);
        setState(519);
        ident();
        break;
      }

      case CSSParser::T__13: {
        _localctx = dynamic_cast<PropertyContext *>(_tracker.createInstance<CSSParser::BadPropertyContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(520);
        match(CSSParser::T__13);
        setState(521);
        ident();
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

//----------------- RulesetContext ------------------------------------------------------------------

CSSParser::RulesetContext::RulesetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSSParser::RulesetContext::getRuleIndex() const {
  return CSSParser::RuleRuleset;
}

void CSSParser::RulesetContext::copyFrom(RulesetContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- UnknownRulesetContext ------------------------------------------------------------------

std::vector<CSSParser::WsContext *> CSSParser::UnknownRulesetContext::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::UnknownRulesetContext::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}

std::vector<CSSParser::AnyContext *> CSSParser::UnknownRulesetContext::any() {
  return getRuleContexts<CSSParser::AnyContext>();
}

CSSParser::AnyContext* CSSParser::UnknownRulesetContext::any(size_t i) {
  return getRuleContext<CSSParser::AnyContext>(i);
}

CSSParser::DeclarationListContext* CSSParser::UnknownRulesetContext::declarationList() {
  return getRuleContext<CSSParser::DeclarationListContext>(0);
}

CSSParser::UnknownRulesetContext::UnknownRulesetContext(RulesetContext *ctx) { copyFrom(ctx); }


//----------------- KnownRulesetContext ------------------------------------------------------------------

CSSParser::SelectorGroupContext* CSSParser::KnownRulesetContext::selectorGroup() {
  return getRuleContext<CSSParser::SelectorGroupContext>(0);
}

std::vector<CSSParser::WsContext *> CSSParser::KnownRulesetContext::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::KnownRulesetContext::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}

CSSParser::DeclarationListContext* CSSParser::KnownRulesetContext::declarationList() {
  return getRuleContext<CSSParser::DeclarationListContext>(0);
}

CSSParser::KnownRulesetContext::KnownRulesetContext(RulesetContext *ctx) { copyFrom(ctx); }


CSSParser::RulesetContext* CSSParser::ruleset() {
  RulesetContext *_localctx = _tracker.createInstance<RulesetContext>(_ctx, getState());
  enterRule(_localctx, 60, CSSParser::RuleRuleset);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(547);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<RulesetContext *>(_tracker.createInstance<CSSParser::KnownRulesetContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(524);
      selectorGroup();
      setState(525);
      match(CSSParser::T__4);
      setState(526);
      ws();
      setState(528);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CSSParser::T__0)
        | (1ULL << CSSParser::T__6)
        | (1ULL << CSSParser::T__13)
        | (1ULL << CSSParser::MediaOnly)
        | (1ULL << CSSParser::Not)
        | (1ULL << CSSParser::And)
        | (1ULL << CSSParser::Or)
        | (1ULL << CSSParser::From)
        | (1ULL << CSSParser::To)
        | (1ULL << CSSParser::Variable)
        | (1ULL << CSSParser::Ident))) != 0)) {
        setState(527);
        declarationList();
      }
      setState(530);
      match(CSSParser::T__5);
      setState(531);
      ws();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<RulesetContext *>(_tracker.createInstance<CSSParser::UnknownRulesetContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(536);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CSSParser::T__1)
        | (1ULL << CSSParser::T__2)
        | (1ULL << CSSParser::T__9)
        | (1ULL << CSSParser::Includes)
        | (1ULL << CSSParser::DashMatch)
        | (1ULL << CSSParser::Hash)
        | (1ULL << CSSParser::Percentage)
        | (1ULL << CSSParser::Uri)
        | (1ULL << CSSParser::UnicodeRange)
        | (1ULL << CSSParser::MediaOnly)
        | (1ULL << CSSParser::Not)
        | (1ULL << CSSParser::And)
        | (1ULL << CSSParser::Dimension)
        | (1ULL << CSSParser::UnknownDimension)
        | (1ULL << CSSParser::Plus)
        | (1ULL << CSSParser::Minus)
        | (1ULL << CSSParser::Number)
        | (1ULL << CSSParser::String)
        | (1ULL << CSSParser::Or)
        | (1ULL << CSSParser::From)
        | (1ULL << CSSParser::To)
        | (1ULL << CSSParser::Ident)
        | (1ULL << CSSParser::Function))) != 0)) {
        setState(533);
        any();
        setState(538);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(539);
      match(CSSParser::T__4);
      setState(540);
      ws();
      setState(542);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CSSParser::T__0)
        | (1ULL << CSSParser::T__6)
        | (1ULL << CSSParser::T__13)
        | (1ULL << CSSParser::MediaOnly)
        | (1ULL << CSSParser::Not)
        | (1ULL << CSSParser::And)
        | (1ULL << CSSParser::Or)
        | (1ULL << CSSParser::From)
        | (1ULL << CSSParser::To)
        | (1ULL << CSSParser::Variable)
        | (1ULL << CSSParser::Ident))) != 0)) {
        setState(541);
        declarationList();
      }
      setState(544);
      match(CSSParser::T__5);
      setState(545);
      ws();
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

//----------------- DeclarationListContext ------------------------------------------------------------------

CSSParser::DeclarationListContext::DeclarationListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CSSParser::DeclarationContext *> CSSParser::DeclarationListContext::declaration() {
  return getRuleContexts<CSSParser::DeclarationContext>();
}

CSSParser::DeclarationContext* CSSParser::DeclarationListContext::declaration(size_t i) {
  return getRuleContext<CSSParser::DeclarationContext>(i);
}

std::vector<CSSParser::WsContext *> CSSParser::DeclarationListContext::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::DeclarationListContext::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}


size_t CSSParser::DeclarationListContext::getRuleIndex() const {
  return CSSParser::RuleDeclarationList;
}


CSSParser::DeclarationListContext* CSSParser::declarationList() {
  DeclarationListContext *_localctx = _tracker.createInstance<DeclarationListContext>(_ctx, getState());
  enterRule(_localctx, 62, CSSParser::RuleDeclarationList);
  size_t _la = 0;

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
    setState(553);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CSSParser::T__0) {
      setState(549);
      match(CSSParser::T__0);
      setState(550);
      ws();
      setState(555);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(556);
    declaration();
    setState(557);
    ws();
    setState(565);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(558);
        match(CSSParser::T__0);
        setState(559);
        ws();
        setState(561);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx)) {
        case 1: {
          setState(560);
          declaration();
          break;
        }

        default:
          break;
        } 
      }
      setState(567);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

CSSParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSSParser::DeclarationContext::getRuleIndex() const {
  return CSSParser::RuleDeclaration;
}

void CSSParser::DeclarationContext::copyFrom(DeclarationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- UnknownDeclarationContext ------------------------------------------------------------------

CSSParser::PropertyContext* CSSParser::UnknownDeclarationContext::property() {
  return getRuleContext<CSSParser::PropertyContext>(0);
}

CSSParser::WsContext* CSSParser::UnknownDeclarationContext::ws() {
  return getRuleContext<CSSParser::WsContext>(0);
}

CSSParser::ValueContext* CSSParser::UnknownDeclarationContext::value() {
  return getRuleContext<CSSParser::ValueContext>(0);
}

CSSParser::UnknownDeclarationContext::UnknownDeclarationContext(DeclarationContext *ctx) { copyFrom(ctx); }


//----------------- KnownDeclarationContext ------------------------------------------------------------------

CSSParser::PropertyContext* CSSParser::KnownDeclarationContext::property() {
  return getRuleContext<CSSParser::PropertyContext>(0);
}

CSSParser::WsContext* CSSParser::KnownDeclarationContext::ws() {
  return getRuleContext<CSSParser::WsContext>(0);
}

CSSParser::ExprContext* CSSParser::KnownDeclarationContext::expr() {
  return getRuleContext<CSSParser::ExprContext>(0);
}

CSSParser::PrioContext* CSSParser::KnownDeclarationContext::prio() {
  return getRuleContext<CSSParser::PrioContext>(0);
}

CSSParser::KnownDeclarationContext::KnownDeclarationContext(DeclarationContext *ctx) { copyFrom(ctx); }


CSSParser::DeclarationContext* CSSParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 64, CSSParser::RuleDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(580);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<DeclarationContext *>(_tracker.createInstance<CSSParser::KnownDeclarationContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(568);
      property();
      setState(569);
      match(CSSParser::T__2);
      setState(570);
      ws();
      setState(571);
      expr();
      setState(573);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CSSParser::Important) {
        setState(572);
        prio();
      }
      break;
    }

    case 2: {
      _localctx = dynamic_cast<DeclarationContext *>(_tracker.createInstance<CSSParser::UnknownDeclarationContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(575);
      property();
      setState(576);
      match(CSSParser::T__2);
      setState(577);
      ws();
      setState(578);
      value();
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

//----------------- PrioContext ------------------------------------------------------------------

CSSParser::PrioContext::PrioContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CSSParser::PrioContext::Important() {
  return getToken(CSSParser::Important, 0);
}

CSSParser::WsContext* CSSParser::PrioContext::ws() {
  return getRuleContext<CSSParser::WsContext>(0);
}


size_t CSSParser::PrioContext::getRuleIndex() const {
  return CSSParser::RulePrio;
}


CSSParser::PrioContext* CSSParser::prio() {
  PrioContext *_localctx = _tracker.createInstance<PrioContext>(_ctx, getState());
  enterRule(_localctx, 66, CSSParser::RulePrio);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(582);
    match(CSSParser::Important);
    setState(583);
    ws();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueContext ------------------------------------------------------------------

CSSParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CSSParser::AnyContext *> CSSParser::ValueContext::any() {
  return getRuleContexts<CSSParser::AnyContext>();
}

CSSParser::AnyContext* CSSParser::ValueContext::any(size_t i) {
  return getRuleContext<CSSParser::AnyContext>(i);
}

std::vector<CSSParser::BlockContext *> CSSParser::ValueContext::block() {
  return getRuleContexts<CSSParser::BlockContext>();
}

CSSParser::BlockContext* CSSParser::ValueContext::block(size_t i) {
  return getRuleContext<CSSParser::BlockContext>(i);
}

std::vector<CSSParser::AtKeywordContext *> CSSParser::ValueContext::atKeyword() {
  return getRuleContexts<CSSParser::AtKeywordContext>();
}

CSSParser::AtKeywordContext* CSSParser::ValueContext::atKeyword(size_t i) {
  return getRuleContext<CSSParser::AtKeywordContext>(i);
}

std::vector<CSSParser::WsContext *> CSSParser::ValueContext::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::ValueContext::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}


size_t CSSParser::ValueContext::getRuleIndex() const {
  return CSSParser::RuleValue;
}


CSSParser::ValueContext* CSSParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 68, CSSParser::RuleValue);

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
    setState(590); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(590);
              _errHandler->sync(this);
              switch (_input->LA(1)) {
                case CSSParser::T__1:
                case CSSParser::T__2:
                case CSSParser::T__9:
                case CSSParser::Includes:
                case CSSParser::DashMatch:
                case CSSParser::Hash:
                case CSSParser::Percentage:
                case CSSParser::Uri:
                case CSSParser::UnicodeRange:
                case CSSParser::MediaOnly:
                case CSSParser::Not:
                case CSSParser::And:
                case CSSParser::Dimension:
                case CSSParser::UnknownDimension:
                case CSSParser::Plus:
                case CSSParser::Minus:
                case CSSParser::Number:
                case CSSParser::String:
                case CSSParser::Or:
                case CSSParser::From:
                case CSSParser::To:
                case CSSParser::Ident:
                case CSSParser::Function: {
                  setState(585);
                  any();
                  break;
                }

                case CSSParser::T__4: {
                  setState(586);
                  block();
                  break;
                }

                case CSSParser::T__14: {
                  setState(587);
                  atKeyword();
                  setState(588);
                  ws();
                  break;
                }

              default:
                throw NoViableAltException(this);
              }
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(592); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

CSSParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CSSParser::TermContext *> CSSParser::ExprContext::term() {
  return getRuleContexts<CSSParser::TermContext>();
}

CSSParser::TermContext* CSSParser::ExprContext::term(size_t i) {
  return getRuleContext<CSSParser::TermContext>(i);
}

std::vector<CSSParser::Operator_Context *> CSSParser::ExprContext::operator_() {
  return getRuleContexts<CSSParser::Operator_Context>();
}

CSSParser::Operator_Context* CSSParser::ExprContext::operator_(size_t i) {
  return getRuleContext<CSSParser::Operator_Context>(i);
}


size_t CSSParser::ExprContext::getRuleIndex() const {
  return CSSParser::RuleExpr;
}


CSSParser::ExprContext* CSSParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 70, CSSParser::RuleExpr);
  size_t _la = 0;

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
    setState(594);
    term();
    setState(601);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(596);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << CSSParser::T__10)
          | (1ULL << CSSParser::T__12)
          | (1ULL << CSSParser::Space)
          | (1ULL << CSSParser::Comma))) != 0)) {
          setState(595);
          operator_();
        }
        setState(598);
        term(); 
      }
      setState(603);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TermContext ------------------------------------------------------------------

CSSParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSSParser::TermContext::getRuleIndex() const {
  return CSSParser::RuleTerm;
}

void CSSParser::TermContext::copyFrom(TermContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- BadTermContext ------------------------------------------------------------------

CSSParser::DxImageTransformContext* CSSParser::BadTermContext::dxImageTransform() {
  return getRuleContext<CSSParser::DxImageTransformContext>(0);
}

CSSParser::BadTermContext::BadTermContext(TermContext *ctx) { copyFrom(ctx); }


//----------------- KnownTermContext ------------------------------------------------------------------

CSSParser::NumberContext* CSSParser::KnownTermContext::number() {
  return getRuleContext<CSSParser::NumberContext>(0);
}

CSSParser::WsContext* CSSParser::KnownTermContext::ws() {
  return getRuleContext<CSSParser::WsContext>(0);
}

CSSParser::PercentageContext* CSSParser::KnownTermContext::percentage() {
  return getRuleContext<CSSParser::PercentageContext>(0);
}

CSSParser::DimensionContext* CSSParser::KnownTermContext::dimension() {
  return getRuleContext<CSSParser::DimensionContext>(0);
}

tree::TerminalNode* CSSParser::KnownTermContext::String() {
  return getToken(CSSParser::String, 0);
}

tree::TerminalNode* CSSParser::KnownTermContext::UnicodeRange() {
  return getToken(CSSParser::UnicodeRange, 0);
}

CSSParser::IdentContext* CSSParser::KnownTermContext::ident() {
  return getRuleContext<CSSParser::IdentContext>(0);
}

CSSParser::Var_Context* CSSParser::KnownTermContext::var_() {
  return getRuleContext<CSSParser::Var_Context>(0);
}

tree::TerminalNode* CSSParser::KnownTermContext::Uri() {
  return getToken(CSSParser::Uri, 0);
}

CSSParser::HexcolorContext* CSSParser::KnownTermContext::hexcolor() {
  return getRuleContext<CSSParser::HexcolorContext>(0);
}

CSSParser::CalcContext* CSSParser::KnownTermContext::calc() {
  return getRuleContext<CSSParser::CalcContext>(0);
}

CSSParser::Function_Context* CSSParser::KnownTermContext::function_() {
  return getRuleContext<CSSParser::Function_Context>(0);
}

CSSParser::KnownTermContext::KnownTermContext(TermContext *ctx) { copyFrom(ctx); }


//----------------- UnknownTermContext ------------------------------------------------------------------

CSSParser::UnknownDimensionContext* CSSParser::UnknownTermContext::unknownDimension() {
  return getRuleContext<CSSParser::UnknownDimensionContext>(0);
}

CSSParser::WsContext* CSSParser::UnknownTermContext::ws() {
  return getRuleContext<CSSParser::WsContext>(0);
}

CSSParser::UnknownTermContext::UnknownTermContext(TermContext *ctx) { copyFrom(ctx); }


CSSParser::TermContext* CSSParser::term() {
  TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, getState());
  enterRule(_localctx, 72, CSSParser::RuleTerm);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(630);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<TermContext *>(_tracker.createInstance<CSSParser::KnownTermContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(604);
      number();
      setState(605);
      ws();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<TermContext *>(_tracker.createInstance<CSSParser::KnownTermContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(607);
      percentage();
      setState(608);
      ws();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<TermContext *>(_tracker.createInstance<CSSParser::KnownTermContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(610);
      dimension();
      setState(611);
      ws();
      break;
    }

    case 4: {
      _localctx = dynamic_cast<TermContext *>(_tracker.createInstance<CSSParser::KnownTermContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(613);
      match(CSSParser::String);
      setState(614);
      ws();
      break;
    }

    case 5: {
      _localctx = dynamic_cast<TermContext *>(_tracker.createInstance<CSSParser::KnownTermContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(615);
      match(CSSParser::UnicodeRange);
      setState(616);
      ws();
      break;
    }

    case 6: {
      _localctx = dynamic_cast<TermContext *>(_tracker.createInstance<CSSParser::KnownTermContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(617);
      ident();
      setState(618);
      ws();
      break;
    }

    case 7: {
      _localctx = dynamic_cast<TermContext *>(_tracker.createInstance<CSSParser::KnownTermContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(620);
      var_();
      break;
    }

    case 8: {
      _localctx = dynamic_cast<TermContext *>(_tracker.createInstance<CSSParser::KnownTermContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(621);
      match(CSSParser::Uri);
      setState(622);
      ws();
      break;
    }

    case 9: {
      _localctx = dynamic_cast<TermContext *>(_tracker.createInstance<CSSParser::KnownTermContext>(_localctx));
      enterOuterAlt(_localctx, 9);
      setState(623);
      hexcolor();
      break;
    }

    case 10: {
      _localctx = dynamic_cast<TermContext *>(_tracker.createInstance<CSSParser::KnownTermContext>(_localctx));
      enterOuterAlt(_localctx, 10);
      setState(624);
      calc();
      break;
    }

    case 11: {
      _localctx = dynamic_cast<TermContext *>(_tracker.createInstance<CSSParser::KnownTermContext>(_localctx));
      enterOuterAlt(_localctx, 11);
      setState(625);
      function_();
      break;
    }

    case 12: {
      _localctx = dynamic_cast<TermContext *>(_tracker.createInstance<CSSParser::UnknownTermContext>(_localctx));
      enterOuterAlt(_localctx, 12);
      setState(626);
      unknownDimension();
      setState(627);
      ws();
      break;
    }

    case 13: {
      _localctx = dynamic_cast<TermContext *>(_tracker.createInstance<CSSParser::BadTermContext>(_localctx));
      enterOuterAlt(_localctx, 13);
      setState(629);
      dxImageTransform();
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

//----------------- Function_Context ------------------------------------------------------------------

CSSParser::Function_Context::Function_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CSSParser::Function_Context::Function() {
  return getToken(CSSParser::Function, 0);
}

std::vector<CSSParser::WsContext *> CSSParser::Function_Context::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::Function_Context::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}

CSSParser::ExprContext* CSSParser::Function_Context::expr() {
  return getRuleContext<CSSParser::ExprContext>(0);
}


size_t CSSParser::Function_Context::getRuleIndex() const {
  return CSSParser::RuleFunction_;
}


CSSParser::Function_Context* CSSParser::function_() {
  Function_Context *_localctx = _tracker.createInstance<Function_Context>(_ctx, getState());
  enterRule(_localctx, 74, CSSParser::RuleFunction_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(632);
    match(CSSParser::Function);
    setState(633);
    ws();
    setState(634);
    expr();
    setState(635);
    match(CSSParser::T__3);
    setState(636);
    ws();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DxImageTransformContext ------------------------------------------------------------------

CSSParser::DxImageTransformContext::DxImageTransformContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CSSParser::DxImageTransformContext::DxImageTransform() {
  return getToken(CSSParser::DxImageTransform, 0);
}

std::vector<CSSParser::WsContext *> CSSParser::DxImageTransformContext::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::DxImageTransformContext::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}

CSSParser::ExprContext* CSSParser::DxImageTransformContext::expr() {
  return getRuleContext<CSSParser::ExprContext>(0);
}


size_t CSSParser::DxImageTransformContext::getRuleIndex() const {
  return CSSParser::RuleDxImageTransform;
}


CSSParser::DxImageTransformContext* CSSParser::dxImageTransform() {
  DxImageTransformContext *_localctx = _tracker.createInstance<DxImageTransformContext>(_ctx, getState());
  enterRule(_localctx, 76, CSSParser::RuleDxImageTransform);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(638);
    match(CSSParser::DxImageTransform);
    setState(639);
    ws();
    setState(640);
    expr();
    setState(641);
    match(CSSParser::T__3);
    setState(642);
    ws();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HexcolorContext ------------------------------------------------------------------

CSSParser::HexcolorContext::HexcolorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CSSParser::HexcolorContext::Hash() {
  return getToken(CSSParser::Hash, 0);
}

CSSParser::WsContext* CSSParser::HexcolorContext::ws() {
  return getRuleContext<CSSParser::WsContext>(0);
}


size_t CSSParser::HexcolorContext::getRuleIndex() const {
  return CSSParser::RuleHexcolor;
}


CSSParser::HexcolorContext* CSSParser::hexcolor() {
  HexcolorContext *_localctx = _tracker.createInstance<HexcolorContext>(_ctx, getState());
  enterRule(_localctx, 78, CSSParser::RuleHexcolor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(644);
    match(CSSParser::Hash);
    setState(645);
    ws();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

CSSParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CSSParser::NumberContext::Number() {
  return getToken(CSSParser::Number, 0);
}

tree::TerminalNode* CSSParser::NumberContext::Plus() {
  return getToken(CSSParser::Plus, 0);
}

tree::TerminalNode* CSSParser::NumberContext::Minus() {
  return getToken(CSSParser::Minus, 0);
}


size_t CSSParser::NumberContext::getRuleIndex() const {
  return CSSParser::RuleNumber;
}


CSSParser::NumberContext* CSSParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 80, CSSParser::RuleNumber);
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
    setState(648);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CSSParser::Plus

    || _la == CSSParser::Minus) {
      setState(647);
      _la = _input->LA(1);
      if (!(_la == CSSParser::Plus

      || _la == CSSParser::Minus)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(650);
    match(CSSParser::Number);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PercentageContext ------------------------------------------------------------------

CSSParser::PercentageContext::PercentageContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CSSParser::PercentageContext::Percentage() {
  return getToken(CSSParser::Percentage, 0);
}

tree::TerminalNode* CSSParser::PercentageContext::Plus() {
  return getToken(CSSParser::Plus, 0);
}

tree::TerminalNode* CSSParser::PercentageContext::Minus() {
  return getToken(CSSParser::Minus, 0);
}


size_t CSSParser::PercentageContext::getRuleIndex() const {
  return CSSParser::RulePercentage;
}


CSSParser::PercentageContext* CSSParser::percentage() {
  PercentageContext *_localctx = _tracker.createInstance<PercentageContext>(_ctx, getState());
  enterRule(_localctx, 82, CSSParser::RulePercentage);
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
    setState(653);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CSSParser::Plus

    || _la == CSSParser::Minus) {
      setState(652);
      _la = _input->LA(1);
      if (!(_la == CSSParser::Plus

      || _la == CSSParser::Minus)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(655);
    match(CSSParser::Percentage);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DimensionContext ------------------------------------------------------------------

CSSParser::DimensionContext::DimensionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CSSParser::DimensionContext::Dimension() {
  return getToken(CSSParser::Dimension, 0);
}

tree::TerminalNode* CSSParser::DimensionContext::Plus() {
  return getToken(CSSParser::Plus, 0);
}

tree::TerminalNode* CSSParser::DimensionContext::Minus() {
  return getToken(CSSParser::Minus, 0);
}


size_t CSSParser::DimensionContext::getRuleIndex() const {
  return CSSParser::RuleDimension;
}


CSSParser::DimensionContext* CSSParser::dimension() {
  DimensionContext *_localctx = _tracker.createInstance<DimensionContext>(_ctx, getState());
  enterRule(_localctx, 84, CSSParser::RuleDimension);
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
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CSSParser::Plus

    || _la == CSSParser::Minus) {
      setState(657);
      _la = _input->LA(1);
      if (!(_la == CSSParser::Plus

      || _la == CSSParser::Minus)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(660);
    match(CSSParser::Dimension);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnknownDimensionContext ------------------------------------------------------------------

CSSParser::UnknownDimensionContext::UnknownDimensionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CSSParser::UnknownDimensionContext::UnknownDimension() {
  return getToken(CSSParser::UnknownDimension, 0);
}

tree::TerminalNode* CSSParser::UnknownDimensionContext::Plus() {
  return getToken(CSSParser::Plus, 0);
}

tree::TerminalNode* CSSParser::UnknownDimensionContext::Minus() {
  return getToken(CSSParser::Minus, 0);
}


size_t CSSParser::UnknownDimensionContext::getRuleIndex() const {
  return CSSParser::RuleUnknownDimension;
}


CSSParser::UnknownDimensionContext* CSSParser::unknownDimension() {
  UnknownDimensionContext *_localctx = _tracker.createInstance<UnknownDimensionContext>(_ctx, getState());
  enterRule(_localctx, 86, CSSParser::RuleUnknownDimension);
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
    setState(663);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CSSParser::Plus

    || _la == CSSParser::Minus) {
      setState(662);
      _la = _input->LA(1);
      if (!(_la == CSSParser::Plus

      || _la == CSSParser::Minus)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(665);
    match(CSSParser::UnknownDimension);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnyContext ------------------------------------------------------------------

CSSParser::AnyContext::AnyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CSSParser::IdentContext* CSSParser::AnyContext::ident() {
  return getRuleContext<CSSParser::IdentContext>(0);
}

std::vector<CSSParser::WsContext *> CSSParser::AnyContext::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::AnyContext::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}

CSSParser::NumberContext* CSSParser::AnyContext::number() {
  return getRuleContext<CSSParser::NumberContext>(0);
}

CSSParser::PercentageContext* CSSParser::AnyContext::percentage() {
  return getRuleContext<CSSParser::PercentageContext>(0);
}

CSSParser::DimensionContext* CSSParser::AnyContext::dimension() {
  return getRuleContext<CSSParser::DimensionContext>(0);
}

CSSParser::UnknownDimensionContext* CSSParser::AnyContext::unknownDimension() {
  return getRuleContext<CSSParser::UnknownDimensionContext>(0);
}

tree::TerminalNode* CSSParser::AnyContext::String() {
  return getToken(CSSParser::String, 0);
}

tree::TerminalNode* CSSParser::AnyContext::Uri() {
  return getToken(CSSParser::Uri, 0);
}

tree::TerminalNode* CSSParser::AnyContext::Hash() {
  return getToken(CSSParser::Hash, 0);
}

tree::TerminalNode* CSSParser::AnyContext::UnicodeRange() {
  return getToken(CSSParser::UnicodeRange, 0);
}

tree::TerminalNode* CSSParser::AnyContext::Includes() {
  return getToken(CSSParser::Includes, 0);
}

tree::TerminalNode* CSSParser::AnyContext::DashMatch() {
  return getToken(CSSParser::DashMatch, 0);
}

tree::TerminalNode* CSSParser::AnyContext::Function() {
  return getToken(CSSParser::Function, 0);
}

std::vector<CSSParser::AnyContext *> CSSParser::AnyContext::any() {
  return getRuleContexts<CSSParser::AnyContext>();
}

CSSParser::AnyContext* CSSParser::AnyContext::any(size_t i) {
  return getRuleContext<CSSParser::AnyContext>(i);
}

std::vector<CSSParser::UnusedContext *> CSSParser::AnyContext::unused() {
  return getRuleContexts<CSSParser::UnusedContext>();
}

CSSParser::UnusedContext* CSSParser::AnyContext::unused(size_t i) {
  return getRuleContext<CSSParser::UnusedContext>(i);
}


size_t CSSParser::AnyContext::getRuleIndex() const {
  return CSSParser::RuleAny;
}


CSSParser::AnyContext* CSSParser::any() {
  AnyContext *_localctx = _tracker.createInstance<AnyContext>(_ctx, getState());
  enterRule(_localctx, 88, CSSParser::RuleAny);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(732);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(667);
      ident();
      setState(668);
      ws();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(670);
      number();
      setState(671);
      ws();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(673);
      percentage();
      setState(674);
      ws();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(676);
      dimension();
      setState(677);
      ws();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(679);
      unknownDimension();
      setState(680);
      ws();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(682);
      match(CSSParser::String);
      setState(683);
      ws();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(684);
      match(CSSParser::Uri);
      setState(685);
      ws();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(686);
      match(CSSParser::Hash);
      setState(687);
      ws();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(688);
      match(CSSParser::UnicodeRange);
      setState(689);
      ws();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(690);
      match(CSSParser::Includes);
      setState(691);
      ws();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(692);
      match(CSSParser::DashMatch);
      setState(693);
      ws();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(694);
      match(CSSParser::T__2);
      setState(695);
      ws();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(696);
      match(CSSParser::Function);
      setState(697);
      ws();
      setState(702);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CSSParser::T__0)
        | (1ULL << CSSParser::T__1)
        | (1ULL << CSSParser::T__2)
        | (1ULL << CSSParser::T__4)
        | (1ULL << CSSParser::T__9)
        | (1ULL << CSSParser::T__14)
        | (1ULL << CSSParser::Cdo)
        | (1ULL << CSSParser::Cdc)
        | (1ULL << CSSParser::Includes)
        | (1ULL << CSSParser::DashMatch)
        | (1ULL << CSSParser::Hash)
        | (1ULL << CSSParser::Percentage)
        | (1ULL << CSSParser::Uri)
        | (1ULL << CSSParser::UnicodeRange)
        | (1ULL << CSSParser::MediaOnly)
        | (1ULL << CSSParser::Not)
        | (1ULL << CSSParser::And)
        | (1ULL << CSSParser::Dimension)
        | (1ULL << CSSParser::UnknownDimension)
        | (1ULL << CSSParser::Plus)
        | (1ULL << CSSParser::Minus)
        | (1ULL << CSSParser::Number)
        | (1ULL << CSSParser::String)
        | (1ULL << CSSParser::Or)
        | (1ULL << CSSParser::From)
        | (1ULL << CSSParser::To)
        | (1ULL << CSSParser::Ident)
        | (1ULL << CSSParser::Function))) != 0)) {
        setState(700);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case CSSParser::T__1:
          case CSSParser::T__2:
          case CSSParser::T__9:
          case CSSParser::Includes:
          case CSSParser::DashMatch:
          case CSSParser::Hash:
          case CSSParser::Percentage:
          case CSSParser::Uri:
          case CSSParser::UnicodeRange:
          case CSSParser::MediaOnly:
          case CSSParser::Not:
          case CSSParser::And:
          case CSSParser::Dimension:
          case CSSParser::UnknownDimension:
          case CSSParser::Plus:
          case CSSParser::Minus:
          case CSSParser::Number:
          case CSSParser::String:
          case CSSParser::Or:
          case CSSParser::From:
          case CSSParser::To:
          case CSSParser::Ident:
          case CSSParser::Function: {
            setState(698);
            any();
            break;
          }

          case CSSParser::T__0:
          case CSSParser::T__4:
          case CSSParser::T__14:
          case CSSParser::Cdo:
          case CSSParser::Cdc: {
            setState(699);
            unused();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(704);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(705);
      match(CSSParser::T__3);
      setState(706);
      ws();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(708);
      match(CSSParser::T__1);
      setState(709);
      ws();
      setState(714);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CSSParser::T__0)
        | (1ULL << CSSParser::T__1)
        | (1ULL << CSSParser::T__2)
        | (1ULL << CSSParser::T__4)
        | (1ULL << CSSParser::T__9)
        | (1ULL << CSSParser::T__14)
        | (1ULL << CSSParser::Cdo)
        | (1ULL << CSSParser::Cdc)
        | (1ULL << CSSParser::Includes)
        | (1ULL << CSSParser::DashMatch)
        | (1ULL << CSSParser::Hash)
        | (1ULL << CSSParser::Percentage)
        | (1ULL << CSSParser::Uri)
        | (1ULL << CSSParser::UnicodeRange)
        | (1ULL << CSSParser::MediaOnly)
        | (1ULL << CSSParser::Not)
        | (1ULL << CSSParser::And)
        | (1ULL << CSSParser::Dimension)
        | (1ULL << CSSParser::UnknownDimension)
        | (1ULL << CSSParser::Plus)
        | (1ULL << CSSParser::Minus)
        | (1ULL << CSSParser::Number)
        | (1ULL << CSSParser::String)
        | (1ULL << CSSParser::Or)
        | (1ULL << CSSParser::From)
        | (1ULL << CSSParser::To)
        | (1ULL << CSSParser::Ident)
        | (1ULL << CSSParser::Function))) != 0)) {
        setState(712);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case CSSParser::T__1:
          case CSSParser::T__2:
          case CSSParser::T__9:
          case CSSParser::Includes:
          case CSSParser::DashMatch:
          case CSSParser::Hash:
          case CSSParser::Percentage:
          case CSSParser::Uri:
          case CSSParser::UnicodeRange:
          case CSSParser::MediaOnly:
          case CSSParser::Not:
          case CSSParser::And:
          case CSSParser::Dimension:
          case CSSParser::UnknownDimension:
          case CSSParser::Plus:
          case CSSParser::Minus:
          case CSSParser::Number:
          case CSSParser::String:
          case CSSParser::Or:
          case CSSParser::From:
          case CSSParser::To:
          case CSSParser::Ident:
          case CSSParser::Function: {
            setState(710);
            any();
            break;
          }

          case CSSParser::T__0:
          case CSSParser::T__4:
          case CSSParser::T__14:
          case CSSParser::Cdo:
          case CSSParser::Cdc: {
            setState(711);
            unused();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(716);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(717);
      match(CSSParser::T__3);
      setState(718);
      ws();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(720);
      match(CSSParser::T__9);
      setState(721);
      ws();
      setState(726);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CSSParser::T__0)
        | (1ULL << CSSParser::T__1)
        | (1ULL << CSSParser::T__2)
        | (1ULL << CSSParser::T__4)
        | (1ULL << CSSParser::T__9)
        | (1ULL << CSSParser::T__14)
        | (1ULL << CSSParser::Cdo)
        | (1ULL << CSSParser::Cdc)
        | (1ULL << CSSParser::Includes)
        | (1ULL << CSSParser::DashMatch)
        | (1ULL << CSSParser::Hash)
        | (1ULL << CSSParser::Percentage)
        | (1ULL << CSSParser::Uri)
        | (1ULL << CSSParser::UnicodeRange)
        | (1ULL << CSSParser::MediaOnly)
        | (1ULL << CSSParser::Not)
        | (1ULL << CSSParser::And)
        | (1ULL << CSSParser::Dimension)
        | (1ULL << CSSParser::UnknownDimension)
        | (1ULL << CSSParser::Plus)
        | (1ULL << CSSParser::Minus)
        | (1ULL << CSSParser::Number)
        | (1ULL << CSSParser::String)
        | (1ULL << CSSParser::Or)
        | (1ULL << CSSParser::From)
        | (1ULL << CSSParser::To)
        | (1ULL << CSSParser::Ident)
        | (1ULL << CSSParser::Function))) != 0)) {
        setState(724);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case CSSParser::T__1:
          case CSSParser::T__2:
          case CSSParser::T__9:
          case CSSParser::Includes:
          case CSSParser::DashMatch:
          case CSSParser::Hash:
          case CSSParser::Percentage:
          case CSSParser::Uri:
          case CSSParser::UnicodeRange:
          case CSSParser::MediaOnly:
          case CSSParser::Not:
          case CSSParser::And:
          case CSSParser::Dimension:
          case CSSParser::UnknownDimension:
          case CSSParser::Plus:
          case CSSParser::Minus:
          case CSSParser::Number:
          case CSSParser::String:
          case CSSParser::Or:
          case CSSParser::From:
          case CSSParser::To:
          case CSSParser::Ident:
          case CSSParser::Function: {
            setState(722);
            any();
            break;
          }

          case CSSParser::T__0:
          case CSSParser::T__4:
          case CSSParser::T__14:
          case CSSParser::Cdo:
          case CSSParser::Cdc: {
            setState(723);
            unused();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(728);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(729);
      match(CSSParser::T__11);
      setState(730);
      ws();
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

//----------------- AtRuleContext ------------------------------------------------------------------

CSSParser::AtRuleContext::AtRuleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSSParser::AtRuleContext::getRuleIndex() const {
  return CSSParser::RuleAtRule;
}

void CSSParser::AtRuleContext::copyFrom(AtRuleContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- UnknownAtRuleContext ------------------------------------------------------------------

CSSParser::AtKeywordContext* CSSParser::UnknownAtRuleContext::atKeyword() {
  return getRuleContext<CSSParser::AtKeywordContext>(0);
}

std::vector<CSSParser::WsContext *> CSSParser::UnknownAtRuleContext::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::UnknownAtRuleContext::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}

CSSParser::BlockContext* CSSParser::UnknownAtRuleContext::block() {
  return getRuleContext<CSSParser::BlockContext>(0);
}

std::vector<CSSParser::AnyContext *> CSSParser::UnknownAtRuleContext::any() {
  return getRuleContexts<CSSParser::AnyContext>();
}

CSSParser::AnyContext* CSSParser::UnknownAtRuleContext::any(size_t i) {
  return getRuleContext<CSSParser::AnyContext>(i);
}

CSSParser::UnknownAtRuleContext::UnknownAtRuleContext(AtRuleContext *ctx) { copyFrom(ctx); }


CSSParser::AtRuleContext* CSSParser::atRule() {
  AtRuleContext *_localctx = _tracker.createInstance<AtRuleContext>(_ctx, getState());
  enterRule(_localctx, 90, CSSParser::RuleAtRule);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = dynamic_cast<AtRuleContext *>(_tracker.createInstance<CSSParser::UnknownAtRuleContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(734);
    atKeyword();
    setState(735);
    ws();
    setState(739);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CSSParser::T__1)
      | (1ULL << CSSParser::T__2)
      | (1ULL << CSSParser::T__9)
      | (1ULL << CSSParser::Includes)
      | (1ULL << CSSParser::DashMatch)
      | (1ULL << CSSParser::Hash)
      | (1ULL << CSSParser::Percentage)
      | (1ULL << CSSParser::Uri)
      | (1ULL << CSSParser::UnicodeRange)
      | (1ULL << CSSParser::MediaOnly)
      | (1ULL << CSSParser::Not)
      | (1ULL << CSSParser::And)
      | (1ULL << CSSParser::Dimension)
      | (1ULL << CSSParser::UnknownDimension)
      | (1ULL << CSSParser::Plus)
      | (1ULL << CSSParser::Minus)
      | (1ULL << CSSParser::Number)
      | (1ULL << CSSParser::String)
      | (1ULL << CSSParser::Or)
      | (1ULL << CSSParser::From)
      | (1ULL << CSSParser::To)
      | (1ULL << CSSParser::Ident)
      | (1ULL << CSSParser::Function))) != 0)) {
      setState(736);
      any();
      setState(741);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(745);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CSSParser::T__4: {
        setState(742);
        block();
        break;
      }

      case CSSParser::T__0: {
        setState(743);
        match(CSSParser::T__0);
        setState(744);
        ws();
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

//----------------- AtKeywordContext ------------------------------------------------------------------

CSSParser::AtKeywordContext::AtKeywordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CSSParser::IdentContext* CSSParser::AtKeywordContext::ident() {
  return getRuleContext<CSSParser::IdentContext>(0);
}


size_t CSSParser::AtKeywordContext::getRuleIndex() const {
  return CSSParser::RuleAtKeyword;
}


CSSParser::AtKeywordContext* CSSParser::atKeyword() {
  AtKeywordContext *_localctx = _tracker.createInstance<AtKeywordContext>(_ctx, getState());
  enterRule(_localctx, 92, CSSParser::RuleAtKeyword);

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
    match(CSSParser::T__14);
    setState(748);
    ident();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnusedContext ------------------------------------------------------------------

CSSParser::UnusedContext::UnusedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CSSParser::BlockContext* CSSParser::UnusedContext::block() {
  return getRuleContext<CSSParser::BlockContext>(0);
}

CSSParser::AtKeywordContext* CSSParser::UnusedContext::atKeyword() {
  return getRuleContext<CSSParser::AtKeywordContext>(0);
}

CSSParser::WsContext* CSSParser::UnusedContext::ws() {
  return getRuleContext<CSSParser::WsContext>(0);
}

tree::TerminalNode* CSSParser::UnusedContext::Cdo() {
  return getToken(CSSParser::Cdo, 0);
}

tree::TerminalNode* CSSParser::UnusedContext::Cdc() {
  return getToken(CSSParser::Cdc, 0);
}


size_t CSSParser::UnusedContext::getRuleIndex() const {
  return CSSParser::RuleUnused;
}


CSSParser::UnusedContext* CSSParser::unused() {
  UnusedContext *_localctx = _tracker.createInstance<UnusedContext>(_ctx, getState());
  enterRule(_localctx, 94, CSSParser::RuleUnused);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(760);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CSSParser::T__4: {
        enterOuterAlt(_localctx, 1);
        setState(750);
        block();
        break;
      }

      case CSSParser::T__14: {
        enterOuterAlt(_localctx, 2);
        setState(751);
        atKeyword();
        setState(752);
        ws();
        break;
      }

      case CSSParser::T__0: {
        enterOuterAlt(_localctx, 3);
        setState(754);
        match(CSSParser::T__0);
        setState(755);
        ws();
        break;
      }

      case CSSParser::Cdo: {
        enterOuterAlt(_localctx, 4);
        setState(756);
        match(CSSParser::Cdo);
        setState(757);
        ws();
        break;
      }

      case CSSParser::Cdc: {
        enterOuterAlt(_localctx, 5);
        setState(758);
        match(CSSParser::Cdc);
        setState(759);
        ws();
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

//----------------- BlockContext ------------------------------------------------------------------

CSSParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CSSParser::WsContext *> CSSParser::BlockContext::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::BlockContext::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}

std::vector<CSSParser::DeclarationListContext *> CSSParser::BlockContext::declarationList() {
  return getRuleContexts<CSSParser::DeclarationListContext>();
}

CSSParser::DeclarationListContext* CSSParser::BlockContext::declarationList(size_t i) {
  return getRuleContext<CSSParser::DeclarationListContext>(i);
}

std::vector<CSSParser::StatementContext *> CSSParser::BlockContext::statement() {
  return getRuleContexts<CSSParser::StatementContext>();
}

CSSParser::StatementContext* CSSParser::BlockContext::statement(size_t i) {
  return getRuleContext<CSSParser::StatementContext>(i);
}

std::vector<CSSParser::AnyContext *> CSSParser::BlockContext::any() {
  return getRuleContexts<CSSParser::AnyContext>();
}

CSSParser::AnyContext* CSSParser::BlockContext::any(size_t i) {
  return getRuleContext<CSSParser::AnyContext>(i);
}

std::vector<CSSParser::BlockContext *> CSSParser::BlockContext::block() {
  return getRuleContexts<CSSParser::BlockContext>();
}

CSSParser::BlockContext* CSSParser::BlockContext::block(size_t i) {
  return getRuleContext<CSSParser::BlockContext>(i);
}

std::vector<CSSParser::AtKeywordContext *> CSSParser::BlockContext::atKeyword() {
  return getRuleContexts<CSSParser::AtKeywordContext>();
}

CSSParser::AtKeywordContext* CSSParser::BlockContext::atKeyword(size_t i) {
  return getRuleContext<CSSParser::AtKeywordContext>(i);
}


size_t CSSParser::BlockContext::getRuleIndex() const {
  return CSSParser::RuleBlock;
}


CSSParser::BlockContext* CSSParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 96, CSSParser::RuleBlock);
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
    setState(762);
    match(CSSParser::T__4);
    setState(763);
    ws();
    setState(775);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CSSParser::T__0)
      | (1ULL << CSSParser::T__1)
      | (1ULL << CSSParser::T__2)
      | (1ULL << CSSParser::T__4)
      | (1ULL << CSSParser::T__6)
      | (1ULL << CSSParser::T__7)
      | (1ULL << CSSParser::T__8)
      | (1ULL << CSSParser::T__9)
      | (1ULL << CSSParser::T__13)
      | (1ULL << CSSParser::T__14)
      | (1ULL << CSSParser::Includes)
      | (1ULL << CSSParser::DashMatch)
      | (1ULL << CSSParser::Hash)
      | (1ULL << CSSParser::Page)
      | (1ULL << CSSParser::Media)
      | (1ULL << CSSParser::Percentage)
      | (1ULL << CSSParser::Uri)
      | (1ULL << CSSParser::UnicodeRange)
      | (1ULL << CSSParser::MediaOnly)
      | (1ULL << CSSParser::Not)
      | (1ULL << CSSParser::And)
      | (1ULL << CSSParser::Dimension)
      | (1ULL << CSSParser::UnknownDimension)
      | (1ULL << CSSParser::Plus)
      | (1ULL << CSSParser::Minus)
      | (1ULL << CSSParser::PseudoNot)
      | (1ULL << CSSParser::Number)
      | (1ULL << CSSParser::String)
      | (1ULL << CSSParser::FontFace)
      | (1ULL << CSSParser::Supports)
      | (1ULL << CSSParser::Or)
      | (1ULL << CSSParser::Keyframes)
      | (1ULL << CSSParser::From)
      | (1ULL << CSSParser::To)
      | (1ULL << CSSParser::Viewport)
      | (1ULL << CSSParser::CounterStyle)
      | (1ULL << CSSParser::FontFeatureValues)
      | (1ULL << CSSParser::Variable)
      | (1ULL << CSSParser::Ident)
      | (1ULL << CSSParser::Function))) != 0)) {
      setState(773);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 74, _ctx)) {
      case 1: {
        setState(764);
        declarationList();
        break;
      }

      case 2: {
        setState(765);
        statement();
        break;
      }

      case 3: {
        setState(766);
        any();
        break;
      }

      case 4: {
        setState(767);
        block();
        break;
      }

      case 5: {
        setState(768);
        atKeyword();
        setState(769);
        ws();
        break;
      }

      case 6: {
        setState(771);
        match(CSSParser::T__0);
        setState(772);
        ws();
        break;
      }

      default:
        break;
      }
      setState(777);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(778);
    match(CSSParser::T__5);
    setState(779);
    ws();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

CSSParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CSSParser::RulesetContext* CSSParser::StatementContext::ruleset() {
  return getRuleContext<CSSParser::RulesetContext>(0);
}

CSSParser::MediaContext* CSSParser::StatementContext::media() {
  return getRuleContext<CSSParser::MediaContext>(0);
}

CSSParser::PageContext* CSSParser::StatementContext::page() {
  return getRuleContext<CSSParser::PageContext>(0);
}

CSSParser::FontFaceRuleContext* CSSParser::StatementContext::fontFaceRule() {
  return getRuleContext<CSSParser::FontFaceRuleContext>(0);
}

CSSParser::KeyframesRuleContext* CSSParser::StatementContext::keyframesRule() {
  return getRuleContext<CSSParser::KeyframesRuleContext>(0);
}

CSSParser::SupportsRuleContext* CSSParser::StatementContext::supportsRule() {
  return getRuleContext<CSSParser::SupportsRuleContext>(0);
}

CSSParser::ViewportContext* CSSParser::StatementContext::viewport() {
  return getRuleContext<CSSParser::ViewportContext>(0);
}

CSSParser::CounterStyleContext* CSSParser::StatementContext::counterStyle() {
  return getRuleContext<CSSParser::CounterStyleContext>(0);
}

CSSParser::FontFeatureValuesRuleContext* CSSParser::StatementContext::fontFeatureValuesRule() {
  return getRuleContext<CSSParser::FontFeatureValuesRuleContext>(0);
}

CSSParser::AtRuleContext* CSSParser::StatementContext::atRule() {
  return getRuleContext<CSSParser::AtRuleContext>(0);
}


size_t CSSParser::StatementContext::getRuleIndex() const {
  return CSSParser::RuleStatement;
}


CSSParser::StatementContext* CSSParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 98, CSSParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(791);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CSSParser::T__1:
      case CSSParser::T__2:
      case CSSParser::T__4:
      case CSSParser::T__6:
      case CSSParser::T__7:
      case CSSParser::T__8:
      case CSSParser::T__9:
      case CSSParser::Includes:
      case CSSParser::DashMatch:
      case CSSParser::Hash:
      case CSSParser::Percentage:
      case CSSParser::Uri:
      case CSSParser::UnicodeRange:
      case CSSParser::MediaOnly:
      case CSSParser::Not:
      case CSSParser::And:
      case CSSParser::Dimension:
      case CSSParser::UnknownDimension:
      case CSSParser::Plus:
      case CSSParser::Minus:
      case CSSParser::PseudoNot:
      case CSSParser::Number:
      case CSSParser::String:
      case CSSParser::Or:
      case CSSParser::From:
      case CSSParser::To:
      case CSSParser::Ident:
      case CSSParser::Function: {
        enterOuterAlt(_localctx, 1);
        setState(781);
        ruleset();
        break;
      }

      case CSSParser::Media: {
        enterOuterAlt(_localctx, 2);
        setState(782);
        media();
        break;
      }

      case CSSParser::Page: {
        enterOuterAlt(_localctx, 3);
        setState(783);
        page();
        break;
      }

      case CSSParser::FontFace: {
        enterOuterAlt(_localctx, 4);
        setState(784);
        fontFaceRule();
        break;
      }

      case CSSParser::Keyframes: {
        enterOuterAlt(_localctx, 5);
        setState(785);
        keyframesRule();
        break;
      }

      case CSSParser::Supports: {
        enterOuterAlt(_localctx, 6);
        setState(786);
        supportsRule();
        break;
      }

      case CSSParser::Viewport: {
        enterOuterAlt(_localctx, 7);
        setState(787);
        viewport();
        break;
      }

      case CSSParser::CounterStyle: {
        enterOuterAlt(_localctx, 8);
        setState(788);
        counterStyle();
        break;
      }

      case CSSParser::FontFeatureValues: {
        enterOuterAlt(_localctx, 9);
        setState(789);
        fontFeatureValuesRule();
        break;
      }

      case CSSParser::T__14: {
        enterOuterAlt(_localctx, 10);
        setState(790);
        atRule();
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

//----------------- GroupRuleBodyContext ------------------------------------------------------------------

CSSParser::GroupRuleBodyContext::GroupRuleBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CSSParser::WsContext *> CSSParser::GroupRuleBodyContext::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::GroupRuleBodyContext::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}

std::vector<CSSParser::StatementContext *> CSSParser::GroupRuleBodyContext::statement() {
  return getRuleContexts<CSSParser::StatementContext>();
}

CSSParser::StatementContext* CSSParser::GroupRuleBodyContext::statement(size_t i) {
  return getRuleContext<CSSParser::StatementContext>(i);
}


size_t CSSParser::GroupRuleBodyContext::getRuleIndex() const {
  return CSSParser::RuleGroupRuleBody;
}


CSSParser::GroupRuleBodyContext* CSSParser::groupRuleBody() {
  GroupRuleBodyContext *_localctx = _tracker.createInstance<GroupRuleBodyContext>(_ctx, getState());
  enterRule(_localctx, 100, CSSParser::RuleGroupRuleBody);
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
    setState(793);
    match(CSSParser::T__4);
    setState(794);
    ws();
    setState(798);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CSSParser::T__1)
      | (1ULL << CSSParser::T__2)
      | (1ULL << CSSParser::T__4)
      | (1ULL << CSSParser::T__6)
      | (1ULL << CSSParser::T__7)
      | (1ULL << CSSParser::T__8)
      | (1ULL << CSSParser::T__9)
      | (1ULL << CSSParser::T__14)
      | (1ULL << CSSParser::Includes)
      | (1ULL << CSSParser::DashMatch)
      | (1ULL << CSSParser::Hash)
      | (1ULL << CSSParser::Page)
      | (1ULL << CSSParser::Media)
      | (1ULL << CSSParser::Percentage)
      | (1ULL << CSSParser::Uri)
      | (1ULL << CSSParser::UnicodeRange)
      | (1ULL << CSSParser::MediaOnly)
      | (1ULL << CSSParser::Not)
      | (1ULL << CSSParser::And)
      | (1ULL << CSSParser::Dimension)
      | (1ULL << CSSParser::UnknownDimension)
      | (1ULL << CSSParser::Plus)
      | (1ULL << CSSParser::Minus)
      | (1ULL << CSSParser::PseudoNot)
      | (1ULL << CSSParser::Number)
      | (1ULL << CSSParser::String)
      | (1ULL << CSSParser::FontFace)
      | (1ULL << CSSParser::Supports)
      | (1ULL << CSSParser::Or)
      | (1ULL << CSSParser::Keyframes)
      | (1ULL << CSSParser::From)
      | (1ULL << CSSParser::To)
      | (1ULL << CSSParser::Viewport)
      | (1ULL << CSSParser::CounterStyle)
      | (1ULL << CSSParser::FontFeatureValues)
      | (1ULL << CSSParser::Ident)
      | (1ULL << CSSParser::Function))) != 0)) {
      setState(795);
      statement();
      setState(800);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(801);
    match(CSSParser::T__5);
    setState(802);
    ws();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SupportsRuleContext ------------------------------------------------------------------

CSSParser::SupportsRuleContext::SupportsRuleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CSSParser::SupportsRuleContext::Supports() {
  return getToken(CSSParser::Supports, 0);
}

std::vector<CSSParser::WsContext *> CSSParser::SupportsRuleContext::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::SupportsRuleContext::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}

CSSParser::SupportsConditionContext* CSSParser::SupportsRuleContext::supportsCondition() {
  return getRuleContext<CSSParser::SupportsConditionContext>(0);
}

CSSParser::GroupRuleBodyContext* CSSParser::SupportsRuleContext::groupRuleBody() {
  return getRuleContext<CSSParser::GroupRuleBodyContext>(0);
}


size_t CSSParser::SupportsRuleContext::getRuleIndex() const {
  return CSSParser::RuleSupportsRule;
}


CSSParser::SupportsRuleContext* CSSParser::supportsRule() {
  SupportsRuleContext *_localctx = _tracker.createInstance<SupportsRuleContext>(_ctx, getState());
  enterRule(_localctx, 102, CSSParser::RuleSupportsRule);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(804);
    match(CSSParser::Supports);
    setState(805);
    ws();
    setState(806);
    supportsCondition();
    setState(807);
    ws();
    setState(808);
    groupRuleBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SupportsConditionContext ------------------------------------------------------------------

CSSParser::SupportsConditionContext::SupportsConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CSSParser::SupportsNegationContext* CSSParser::SupportsConditionContext::supportsNegation() {
  return getRuleContext<CSSParser::SupportsNegationContext>(0);
}

CSSParser::SupportsConjunctionContext* CSSParser::SupportsConditionContext::supportsConjunction() {
  return getRuleContext<CSSParser::SupportsConjunctionContext>(0);
}

CSSParser::SupportsDisjunctionContext* CSSParser::SupportsConditionContext::supportsDisjunction() {
  return getRuleContext<CSSParser::SupportsDisjunctionContext>(0);
}

CSSParser::SupportsConditionInParensContext* CSSParser::SupportsConditionContext::supportsConditionInParens() {
  return getRuleContext<CSSParser::SupportsConditionInParensContext>(0);
}


size_t CSSParser::SupportsConditionContext::getRuleIndex() const {
  return CSSParser::RuleSupportsCondition;
}


CSSParser::SupportsConditionContext* CSSParser::supportsCondition() {
  SupportsConditionContext *_localctx = _tracker.createInstance<SupportsConditionContext>(_ctx, getState());
  enterRule(_localctx, 104, CSSParser::RuleSupportsCondition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(814);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(810);
      supportsNegation();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(811);
      supportsConjunction();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(812);
      supportsDisjunction();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(813);
      supportsConditionInParens();
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

//----------------- SupportsConditionInParensContext ------------------------------------------------------------------

CSSParser::SupportsConditionInParensContext::SupportsConditionInParensContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CSSParser::WsContext *> CSSParser::SupportsConditionInParensContext::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::SupportsConditionInParensContext::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}

CSSParser::SupportsConditionContext* CSSParser::SupportsConditionInParensContext::supportsCondition() {
  return getRuleContext<CSSParser::SupportsConditionContext>(0);
}

CSSParser::SupportsDeclarationConditionContext* CSSParser::SupportsConditionInParensContext::supportsDeclarationCondition() {
  return getRuleContext<CSSParser::SupportsDeclarationConditionContext>(0);
}

CSSParser::GeneralEnclosedContext* CSSParser::SupportsConditionInParensContext::generalEnclosed() {
  return getRuleContext<CSSParser::GeneralEnclosedContext>(0);
}


size_t CSSParser::SupportsConditionInParensContext::getRuleIndex() const {
  return CSSParser::RuleSupportsConditionInParens;
}


CSSParser::SupportsConditionInParensContext* CSSParser::supportsConditionInParens() {
  SupportsConditionInParensContext *_localctx = _tracker.createInstance<SupportsConditionInParensContext>(_ctx, getState());
  enterRule(_localctx, 106, CSSParser::RuleSupportsConditionInParens);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(824);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 79, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(816);
      match(CSSParser::T__1);
      setState(817);
      ws();
      setState(818);
      supportsCondition();
      setState(819);
      ws();
      setState(820);
      match(CSSParser::T__3);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(822);
      supportsDeclarationCondition();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(823);
      generalEnclosed();
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

//----------------- SupportsNegationContext ------------------------------------------------------------------

CSSParser::SupportsNegationContext::SupportsNegationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CSSParser::SupportsNegationContext::Not() {
  return getToken(CSSParser::Not, 0);
}

std::vector<CSSParser::WsContext *> CSSParser::SupportsNegationContext::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::SupportsNegationContext::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}

tree::TerminalNode* CSSParser::SupportsNegationContext::Space() {
  return getToken(CSSParser::Space, 0);
}

CSSParser::SupportsConditionInParensContext* CSSParser::SupportsNegationContext::supportsConditionInParens() {
  return getRuleContext<CSSParser::SupportsConditionInParensContext>(0);
}


size_t CSSParser::SupportsNegationContext::getRuleIndex() const {
  return CSSParser::RuleSupportsNegation;
}


CSSParser::SupportsNegationContext* CSSParser::supportsNegation() {
  SupportsNegationContext *_localctx = _tracker.createInstance<SupportsNegationContext>(_ctx, getState());
  enterRule(_localctx, 108, CSSParser::RuleSupportsNegation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(826);
    match(CSSParser::Not);
    setState(827);
    ws();
    setState(828);
    match(CSSParser::Space);
    setState(829);
    ws();
    setState(830);
    supportsConditionInParens();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SupportsConjunctionContext ------------------------------------------------------------------

CSSParser::SupportsConjunctionContext::SupportsConjunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CSSParser::SupportsConditionInParensContext *> CSSParser::SupportsConjunctionContext::supportsConditionInParens() {
  return getRuleContexts<CSSParser::SupportsConditionInParensContext>();
}

CSSParser::SupportsConditionInParensContext* CSSParser::SupportsConjunctionContext::supportsConditionInParens(size_t i) {
  return getRuleContext<CSSParser::SupportsConditionInParensContext>(i);
}

std::vector<CSSParser::WsContext *> CSSParser::SupportsConjunctionContext::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::SupportsConjunctionContext::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}

std::vector<tree::TerminalNode *> CSSParser::SupportsConjunctionContext::Space() {
  return getTokens(CSSParser::Space);
}

tree::TerminalNode* CSSParser::SupportsConjunctionContext::Space(size_t i) {
  return getToken(CSSParser::Space, i);
}

std::vector<tree::TerminalNode *> CSSParser::SupportsConjunctionContext::And() {
  return getTokens(CSSParser::And);
}

tree::TerminalNode* CSSParser::SupportsConjunctionContext::And(size_t i) {
  return getToken(CSSParser::And, i);
}


size_t CSSParser::SupportsConjunctionContext::getRuleIndex() const {
  return CSSParser::RuleSupportsConjunction;
}


CSSParser::SupportsConjunctionContext* CSSParser::supportsConjunction() {
  SupportsConjunctionContext *_localctx = _tracker.createInstance<SupportsConjunctionContext>(_ctx, getState());
  enterRule(_localctx, 110, CSSParser::RuleSupportsConjunction);

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
    setState(832);
    supportsConditionInParens();
    setState(842); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(833);
              ws();
              setState(834);
              match(CSSParser::Space);
              setState(835);
              ws();
              setState(836);
              match(CSSParser::And);
              setState(837);
              ws();
              setState(838);
              match(CSSParser::Space);
              setState(839);
              ws();
              setState(840);
              supportsConditionInParens();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(844); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 80, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SupportsDisjunctionContext ------------------------------------------------------------------

CSSParser::SupportsDisjunctionContext::SupportsDisjunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CSSParser::SupportsConditionInParensContext *> CSSParser::SupportsDisjunctionContext::supportsConditionInParens() {
  return getRuleContexts<CSSParser::SupportsConditionInParensContext>();
}

CSSParser::SupportsConditionInParensContext* CSSParser::SupportsDisjunctionContext::supportsConditionInParens(size_t i) {
  return getRuleContext<CSSParser::SupportsConditionInParensContext>(i);
}

std::vector<CSSParser::WsContext *> CSSParser::SupportsDisjunctionContext::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::SupportsDisjunctionContext::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}

std::vector<tree::TerminalNode *> CSSParser::SupportsDisjunctionContext::Space() {
  return getTokens(CSSParser::Space);
}

tree::TerminalNode* CSSParser::SupportsDisjunctionContext::Space(size_t i) {
  return getToken(CSSParser::Space, i);
}

std::vector<tree::TerminalNode *> CSSParser::SupportsDisjunctionContext::Or() {
  return getTokens(CSSParser::Or);
}

tree::TerminalNode* CSSParser::SupportsDisjunctionContext::Or(size_t i) {
  return getToken(CSSParser::Or, i);
}


size_t CSSParser::SupportsDisjunctionContext::getRuleIndex() const {
  return CSSParser::RuleSupportsDisjunction;
}


CSSParser::SupportsDisjunctionContext* CSSParser::supportsDisjunction() {
  SupportsDisjunctionContext *_localctx = _tracker.createInstance<SupportsDisjunctionContext>(_ctx, getState());
  enterRule(_localctx, 112, CSSParser::RuleSupportsDisjunction);

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
    setState(846);
    supportsConditionInParens();
    setState(856); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(847);
              ws();
              setState(848);
              match(CSSParser::Space);
              setState(849);
              ws();
              setState(850);
              match(CSSParser::Or);
              setState(851);
              ws();
              setState(852);
              match(CSSParser::Space);
              setState(853);
              ws();
              setState(854);
              supportsConditionInParens();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(858); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SupportsDeclarationConditionContext ------------------------------------------------------------------

CSSParser::SupportsDeclarationConditionContext::SupportsDeclarationConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CSSParser::WsContext* CSSParser::SupportsDeclarationConditionContext::ws() {
  return getRuleContext<CSSParser::WsContext>(0);
}

CSSParser::DeclarationContext* CSSParser::SupportsDeclarationConditionContext::declaration() {
  return getRuleContext<CSSParser::DeclarationContext>(0);
}


size_t CSSParser::SupportsDeclarationConditionContext::getRuleIndex() const {
  return CSSParser::RuleSupportsDeclarationCondition;
}


CSSParser::SupportsDeclarationConditionContext* CSSParser::supportsDeclarationCondition() {
  SupportsDeclarationConditionContext *_localctx = _tracker.createInstance<SupportsDeclarationConditionContext>(_ctx, getState());
  enterRule(_localctx, 114, CSSParser::RuleSupportsDeclarationCondition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(860);
    match(CSSParser::T__1);
    setState(861);
    ws();
    setState(862);
    declaration();
    setState(863);
    match(CSSParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GeneralEnclosedContext ------------------------------------------------------------------

CSSParser::GeneralEnclosedContext::GeneralEnclosedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CSSParser::GeneralEnclosedContext::Function() {
  return getToken(CSSParser::Function, 0);
}

std::vector<CSSParser::AnyContext *> CSSParser::GeneralEnclosedContext::any() {
  return getRuleContexts<CSSParser::AnyContext>();
}

CSSParser::AnyContext* CSSParser::GeneralEnclosedContext::any(size_t i) {
  return getRuleContext<CSSParser::AnyContext>(i);
}

std::vector<CSSParser::UnusedContext *> CSSParser::GeneralEnclosedContext::unused() {
  return getRuleContexts<CSSParser::UnusedContext>();
}

CSSParser::UnusedContext* CSSParser::GeneralEnclosedContext::unused(size_t i) {
  return getRuleContext<CSSParser::UnusedContext>(i);
}


size_t CSSParser::GeneralEnclosedContext::getRuleIndex() const {
  return CSSParser::RuleGeneralEnclosed;
}


CSSParser::GeneralEnclosedContext* CSSParser::generalEnclosed() {
  GeneralEnclosedContext *_localctx = _tracker.createInstance<GeneralEnclosedContext>(_ctx, getState());
  enterRule(_localctx, 116, CSSParser::RuleGeneralEnclosed);
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
    setState(865);
    _la = _input->LA(1);
    if (!(_la == CSSParser::T__1

    || _la == CSSParser::Function)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(870);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CSSParser::T__0)
      | (1ULL << CSSParser::T__1)
      | (1ULL << CSSParser::T__2)
      | (1ULL << CSSParser::T__4)
      | (1ULL << CSSParser::T__9)
      | (1ULL << CSSParser::T__14)
      | (1ULL << CSSParser::Cdo)
      | (1ULL << CSSParser::Cdc)
      | (1ULL << CSSParser::Includes)
      | (1ULL << CSSParser::DashMatch)
      | (1ULL << CSSParser::Hash)
      | (1ULL << CSSParser::Percentage)
      | (1ULL << CSSParser::Uri)
      | (1ULL << CSSParser::UnicodeRange)
      | (1ULL << CSSParser::MediaOnly)
      | (1ULL << CSSParser::Not)
      | (1ULL << CSSParser::And)
      | (1ULL << CSSParser::Dimension)
      | (1ULL << CSSParser::UnknownDimension)
      | (1ULL << CSSParser::Plus)
      | (1ULL << CSSParser::Minus)
      | (1ULL << CSSParser::Number)
      | (1ULL << CSSParser::String)
      | (1ULL << CSSParser::Or)
      | (1ULL << CSSParser::From)
      | (1ULL << CSSParser::To)
      | (1ULL << CSSParser::Ident)
      | (1ULL << CSSParser::Function))) != 0)) {
      setState(868);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case CSSParser::T__1:
        case CSSParser::T__2:
        case CSSParser::T__9:
        case CSSParser::Includes:
        case CSSParser::DashMatch:
        case CSSParser::Hash:
        case CSSParser::Percentage:
        case CSSParser::Uri:
        case CSSParser::UnicodeRange:
        case CSSParser::MediaOnly:
        case CSSParser::Not:
        case CSSParser::And:
        case CSSParser::Dimension:
        case CSSParser::UnknownDimension:
        case CSSParser::Plus:
        case CSSParser::Minus:
        case CSSParser::Number:
        case CSSParser::String:
        case CSSParser::Or:
        case CSSParser::From:
        case CSSParser::To:
        case CSSParser::Ident:
        case CSSParser::Function: {
          setState(866);
          any();
          break;
        }

        case CSSParser::T__0:
        case CSSParser::T__4:
        case CSSParser::T__14:
        case CSSParser::Cdo:
        case CSSParser::Cdc: {
          setState(867);
          unused();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(872);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(873);
    match(CSSParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_Context ------------------------------------------------------------------

CSSParser::Var_Context::Var_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CSSParser::Var_Context::Var() {
  return getToken(CSSParser::Var, 0);
}

std::vector<CSSParser::WsContext *> CSSParser::Var_Context::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::Var_Context::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}

tree::TerminalNode* CSSParser::Var_Context::Variable() {
  return getToken(CSSParser::Variable, 0);
}


size_t CSSParser::Var_Context::getRuleIndex() const {
  return CSSParser::RuleVar_;
}


CSSParser::Var_Context* CSSParser::var_() {
  Var_Context *_localctx = _tracker.createInstance<Var_Context>(_ctx, getState());
  enterRule(_localctx, 118, CSSParser::RuleVar_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(875);
    match(CSSParser::Var);
    setState(876);
    ws();
    setState(877);
    match(CSSParser::Variable);
    setState(878);
    ws();
    setState(879);
    match(CSSParser::T__3);
    setState(880);
    ws();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CalcContext ------------------------------------------------------------------

CSSParser::CalcContext::CalcContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CSSParser::CalcContext::Calc() {
  return getToken(CSSParser::Calc, 0);
}

std::vector<CSSParser::WsContext *> CSSParser::CalcContext::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::CalcContext::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}

CSSParser::CalcSumContext* CSSParser::CalcContext::calcSum() {
  return getRuleContext<CSSParser::CalcSumContext>(0);
}


size_t CSSParser::CalcContext::getRuleIndex() const {
  return CSSParser::RuleCalc;
}


CSSParser::CalcContext* CSSParser::calc() {
  CalcContext *_localctx = _tracker.createInstance<CalcContext>(_ctx, getState());
  enterRule(_localctx, 120, CSSParser::RuleCalc);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(882);
    match(CSSParser::Calc);
    setState(883);
    ws();
    setState(884);
    calcSum();
    setState(885);
    match(CSSParser::T__3);
    setState(886);
    ws();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CalcSumContext ------------------------------------------------------------------

CSSParser::CalcSumContext::CalcSumContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CSSParser::CalcProductContext *> CSSParser::CalcSumContext::calcProduct() {
  return getRuleContexts<CSSParser::CalcProductContext>();
}

CSSParser::CalcProductContext* CSSParser::CalcSumContext::calcProduct(size_t i) {
  return getRuleContext<CSSParser::CalcProductContext>(i);
}

std::vector<tree::TerminalNode *> CSSParser::CalcSumContext::Space() {
  return getTokens(CSSParser::Space);
}

tree::TerminalNode* CSSParser::CalcSumContext::Space(size_t i) {
  return getToken(CSSParser::Space, i);
}

std::vector<CSSParser::WsContext *> CSSParser::CalcSumContext::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::CalcSumContext::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}

std::vector<tree::TerminalNode *> CSSParser::CalcSumContext::Plus() {
  return getTokens(CSSParser::Plus);
}

tree::TerminalNode* CSSParser::CalcSumContext::Plus(size_t i) {
  return getToken(CSSParser::Plus, i);
}

std::vector<tree::TerminalNode *> CSSParser::CalcSumContext::Minus() {
  return getTokens(CSSParser::Minus);
}

tree::TerminalNode* CSSParser::CalcSumContext::Minus(size_t i) {
  return getToken(CSSParser::Minus, i);
}


size_t CSSParser::CalcSumContext::getRuleIndex() const {
  return CSSParser::RuleCalcSum;
}


CSSParser::CalcSumContext* CSSParser::calcSum() {
  CalcSumContext *_localctx = _tracker.createInstance<CalcSumContext>(_ctx, getState());
  enterRule(_localctx, 122, CSSParser::RuleCalcSum);
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
    setState(888);
    calcProduct();
    setState(899);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CSSParser::Space) {
      setState(889);
      match(CSSParser::Space);
      setState(890);
      ws();
      setState(891);
      _la = _input->LA(1);
      if (!(_la == CSSParser::Plus

      || _la == CSSParser::Minus)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(892);
      ws();
      setState(893);
      match(CSSParser::Space);
      setState(894);
      ws();
      setState(895);
      calcProduct();
      setState(901);
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

//----------------- CalcProductContext ------------------------------------------------------------------

CSSParser::CalcProductContext::CalcProductContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CSSParser::CalcValueContext *> CSSParser::CalcProductContext::calcValue() {
  return getRuleContexts<CSSParser::CalcValueContext>();
}

CSSParser::CalcValueContext* CSSParser::CalcProductContext::calcValue(size_t i) {
  return getRuleContext<CSSParser::CalcValueContext>(i);
}

std::vector<CSSParser::WsContext *> CSSParser::CalcProductContext::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::CalcProductContext::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}

std::vector<CSSParser::NumberContext *> CSSParser::CalcProductContext::number() {
  return getRuleContexts<CSSParser::NumberContext>();
}

CSSParser::NumberContext* CSSParser::CalcProductContext::number(size_t i) {
  return getRuleContext<CSSParser::NumberContext>(i);
}


size_t CSSParser::CalcProductContext::getRuleIndex() const {
  return CSSParser::RuleCalcProduct;
}


CSSParser::CalcProductContext* CSSParser::calcProduct() {
  CalcProductContext *_localctx = _tracker.createInstance<CalcProductContext>(_ctx, getState());
  enterRule(_localctx, 124, CSSParser::RuleCalcProduct);
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
    setState(902);
    calcValue();
    setState(914);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CSSParser::T__6

    || _la == CSSParser::T__12) {
      setState(912);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case CSSParser::T__6: {
          setState(903);
          match(CSSParser::T__6);
          setState(904);
          ws();
          setState(905);
          calcValue();
          break;
        }

        case CSSParser::T__12: {
          setState(907);
          match(CSSParser::T__12);
          setState(908);
          ws();
          setState(909);
          number();
          setState(910);
          ws();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(916);
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

//----------------- CalcValueContext ------------------------------------------------------------------

CSSParser::CalcValueContext::CalcValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CSSParser::NumberContext* CSSParser::CalcValueContext::number() {
  return getRuleContext<CSSParser::NumberContext>(0);
}

std::vector<CSSParser::WsContext *> CSSParser::CalcValueContext::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::CalcValueContext::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}

CSSParser::DimensionContext* CSSParser::CalcValueContext::dimension() {
  return getRuleContext<CSSParser::DimensionContext>(0);
}

CSSParser::UnknownDimensionContext* CSSParser::CalcValueContext::unknownDimension() {
  return getRuleContext<CSSParser::UnknownDimensionContext>(0);
}

CSSParser::PercentageContext* CSSParser::CalcValueContext::percentage() {
  return getRuleContext<CSSParser::PercentageContext>(0);
}

CSSParser::CalcSumContext* CSSParser::CalcValueContext::calcSum() {
  return getRuleContext<CSSParser::CalcSumContext>(0);
}


size_t CSSParser::CalcValueContext::getRuleIndex() const {
  return CSSParser::RuleCalcValue;
}


CSSParser::CalcValueContext* CSSParser::calcValue() {
  CalcValueContext *_localctx = _tracker.createInstance<CalcValueContext>(_ctx, getState());
  enterRule(_localctx, 126, CSSParser::RuleCalcValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(935);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 87, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(917);
      number();
      setState(918);
      ws();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(920);
      dimension();
      setState(921);
      ws();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(923);
      unknownDimension();
      setState(924);
      ws();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(926);
      percentage();
      setState(927);
      ws();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(929);
      match(CSSParser::T__1);
      setState(930);
      ws();
      setState(931);
      calcSum();
      setState(932);
      match(CSSParser::T__3);
      setState(933);
      ws();
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

//----------------- FontFaceRuleContext ------------------------------------------------------------------

CSSParser::FontFaceRuleContext::FontFaceRuleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CSSParser::FontFaceRuleContext::FontFace() {
  return getToken(CSSParser::FontFace, 0);
}

std::vector<CSSParser::WsContext *> CSSParser::FontFaceRuleContext::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::FontFaceRuleContext::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}

std::vector<CSSParser::FontFaceDeclarationContext *> CSSParser::FontFaceRuleContext::fontFaceDeclaration() {
  return getRuleContexts<CSSParser::FontFaceDeclarationContext>();
}

CSSParser::FontFaceDeclarationContext* CSSParser::FontFaceRuleContext::fontFaceDeclaration(size_t i) {
  return getRuleContext<CSSParser::FontFaceDeclarationContext>(i);
}


size_t CSSParser::FontFaceRuleContext::getRuleIndex() const {
  return CSSParser::RuleFontFaceRule;
}


CSSParser::FontFaceRuleContext* CSSParser::fontFaceRule() {
  FontFaceRuleContext *_localctx = _tracker.createInstance<FontFaceRuleContext>(_ctx, getState());
  enterRule(_localctx, 128, CSSParser::RuleFontFaceRule);
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
    setState(937);
    match(CSSParser::FontFace);
    setState(938);
    ws();
    setState(939);
    match(CSSParser::T__4);
    setState(940);
    ws();
    setState(942);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CSSParser::T__6)
      | (1ULL << CSSParser::T__13)
      | (1ULL << CSSParser::MediaOnly)
      | (1ULL << CSSParser::Not)
      | (1ULL << CSSParser::And)
      | (1ULL << CSSParser::Or)
      | (1ULL << CSSParser::From)
      | (1ULL << CSSParser::To)
      | (1ULL << CSSParser::Variable)
      | (1ULL << CSSParser::Ident))) != 0)) {
      setState(941);
      fontFaceDeclaration();
    }
    setState(951);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CSSParser::T__0) {
      setState(944);
      match(CSSParser::T__0);
      setState(945);
      ws();
      setState(947);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CSSParser::T__6)
        | (1ULL << CSSParser::T__13)
        | (1ULL << CSSParser::MediaOnly)
        | (1ULL << CSSParser::Not)
        | (1ULL << CSSParser::And)
        | (1ULL << CSSParser::Or)
        | (1ULL << CSSParser::From)
        | (1ULL << CSSParser::To)
        | (1ULL << CSSParser::Variable)
        | (1ULL << CSSParser::Ident))) != 0)) {
        setState(946);
        fontFaceDeclaration();
      }
      setState(953);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(954);
    match(CSSParser::T__5);
    setState(955);
    ws();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FontFaceDeclarationContext ------------------------------------------------------------------

CSSParser::FontFaceDeclarationContext::FontFaceDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSSParser::FontFaceDeclarationContext::getRuleIndex() const {
  return CSSParser::RuleFontFaceDeclaration;
}

void CSSParser::FontFaceDeclarationContext::copyFrom(FontFaceDeclarationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- KnownFontFaceDeclarationContext ------------------------------------------------------------------

CSSParser::PropertyContext* CSSParser::KnownFontFaceDeclarationContext::property() {
  return getRuleContext<CSSParser::PropertyContext>(0);
}

CSSParser::WsContext* CSSParser::KnownFontFaceDeclarationContext::ws() {
  return getRuleContext<CSSParser::WsContext>(0);
}

CSSParser::ExprContext* CSSParser::KnownFontFaceDeclarationContext::expr() {
  return getRuleContext<CSSParser::ExprContext>(0);
}

CSSParser::KnownFontFaceDeclarationContext::KnownFontFaceDeclarationContext(FontFaceDeclarationContext *ctx) { copyFrom(ctx); }


//----------------- UnknownFontFaceDeclarationContext ------------------------------------------------------------------

CSSParser::PropertyContext* CSSParser::UnknownFontFaceDeclarationContext::property() {
  return getRuleContext<CSSParser::PropertyContext>(0);
}

CSSParser::WsContext* CSSParser::UnknownFontFaceDeclarationContext::ws() {
  return getRuleContext<CSSParser::WsContext>(0);
}

CSSParser::ValueContext* CSSParser::UnknownFontFaceDeclarationContext::value() {
  return getRuleContext<CSSParser::ValueContext>(0);
}

CSSParser::UnknownFontFaceDeclarationContext::UnknownFontFaceDeclarationContext(FontFaceDeclarationContext *ctx) { copyFrom(ctx); }


CSSParser::FontFaceDeclarationContext* CSSParser::fontFaceDeclaration() {
  FontFaceDeclarationContext *_localctx = _tracker.createInstance<FontFaceDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 130, CSSParser::RuleFontFaceDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(967);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 91, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<FontFaceDeclarationContext *>(_tracker.createInstance<CSSParser::KnownFontFaceDeclarationContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(957);
      property();
      setState(958);
      match(CSSParser::T__2);
      setState(959);
      ws();
      setState(960);
      expr();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<FontFaceDeclarationContext *>(_tracker.createInstance<CSSParser::UnknownFontFaceDeclarationContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(962);
      property();
      setState(963);
      match(CSSParser::T__2);
      setState(964);
      ws();
      setState(965);
      value();
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

//----------------- KeyframesRuleContext ------------------------------------------------------------------

CSSParser::KeyframesRuleContext::KeyframesRuleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CSSParser::KeyframesRuleContext::Keyframes() {
  return getToken(CSSParser::Keyframes, 0);
}

std::vector<CSSParser::WsContext *> CSSParser::KeyframesRuleContext::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::KeyframesRuleContext::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}

tree::TerminalNode* CSSParser::KeyframesRuleContext::Space() {
  return getToken(CSSParser::Space, 0);
}

CSSParser::IdentContext* CSSParser::KeyframesRuleContext::ident() {
  return getRuleContext<CSSParser::IdentContext>(0);
}

CSSParser::KeyframesBlocksContext* CSSParser::KeyframesRuleContext::keyframesBlocks() {
  return getRuleContext<CSSParser::KeyframesBlocksContext>(0);
}


size_t CSSParser::KeyframesRuleContext::getRuleIndex() const {
  return CSSParser::RuleKeyframesRule;
}


CSSParser::KeyframesRuleContext* CSSParser::keyframesRule() {
  KeyframesRuleContext *_localctx = _tracker.createInstance<KeyframesRuleContext>(_ctx, getState());
  enterRule(_localctx, 132, CSSParser::RuleKeyframesRule);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(969);
    match(CSSParser::Keyframes);
    setState(970);
    ws();
    setState(971);
    match(CSSParser::Space);
    setState(972);
    ws();
    setState(973);
    ident();
    setState(974);
    ws();
    setState(975);
    match(CSSParser::T__4);
    setState(976);
    ws();
    setState(977);
    keyframesBlocks();
    setState(978);
    match(CSSParser::T__5);
    setState(979);
    ws();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- KeyframesBlocksContext ------------------------------------------------------------------

CSSParser::KeyframesBlocksContext::KeyframesBlocksContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CSSParser::KeyframeSelectorContext *> CSSParser::KeyframesBlocksContext::keyframeSelector() {
  return getRuleContexts<CSSParser::KeyframeSelectorContext>();
}

CSSParser::KeyframeSelectorContext* CSSParser::KeyframesBlocksContext::keyframeSelector(size_t i) {
  return getRuleContext<CSSParser::KeyframeSelectorContext>(i);
}

std::vector<CSSParser::WsContext *> CSSParser::KeyframesBlocksContext::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::KeyframesBlocksContext::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}

std::vector<CSSParser::DeclarationListContext *> CSSParser::KeyframesBlocksContext::declarationList() {
  return getRuleContexts<CSSParser::DeclarationListContext>();
}

CSSParser::DeclarationListContext* CSSParser::KeyframesBlocksContext::declarationList(size_t i) {
  return getRuleContext<CSSParser::DeclarationListContext>(i);
}


size_t CSSParser::KeyframesBlocksContext::getRuleIndex() const {
  return CSSParser::RuleKeyframesBlocks;
}


CSSParser::KeyframesBlocksContext* CSSParser::keyframesBlocks() {
  KeyframesBlocksContext *_localctx = _tracker.createInstance<KeyframesBlocksContext>(_ctx, getState());
  enterRule(_localctx, 134, CSSParser::RuleKeyframesBlocks);
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
    setState(992);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CSSParser::Percentage)
      | (1ULL << CSSParser::From)
      | (1ULL << CSSParser::To))) != 0)) {
      setState(981);
      keyframeSelector();
      setState(982);
      match(CSSParser::T__4);
      setState(983);
      ws();
      setState(985);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CSSParser::T__0)
        | (1ULL << CSSParser::T__6)
        | (1ULL << CSSParser::T__13)
        | (1ULL << CSSParser::MediaOnly)
        | (1ULL << CSSParser::Not)
        | (1ULL << CSSParser::And)
        | (1ULL << CSSParser::Or)
        | (1ULL << CSSParser::From)
        | (1ULL << CSSParser::To)
        | (1ULL << CSSParser::Variable)
        | (1ULL << CSSParser::Ident))) != 0)) {
        setState(984);
        declarationList();
      }
      setState(987);
      match(CSSParser::T__5);
      setState(988);
      ws();
      setState(994);
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

//----------------- KeyframeSelectorContext ------------------------------------------------------------------

CSSParser::KeyframeSelectorContext::KeyframeSelectorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CSSParser::WsContext *> CSSParser::KeyframeSelectorContext::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::KeyframeSelectorContext::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}

std::vector<tree::TerminalNode *> CSSParser::KeyframeSelectorContext::From() {
  return getTokens(CSSParser::From);
}

tree::TerminalNode* CSSParser::KeyframeSelectorContext::From(size_t i) {
  return getToken(CSSParser::From, i);
}

std::vector<tree::TerminalNode *> CSSParser::KeyframeSelectorContext::To() {
  return getTokens(CSSParser::To);
}

tree::TerminalNode* CSSParser::KeyframeSelectorContext::To(size_t i) {
  return getToken(CSSParser::To, i);
}

std::vector<tree::TerminalNode *> CSSParser::KeyframeSelectorContext::Percentage() {
  return getTokens(CSSParser::Percentage);
}

tree::TerminalNode* CSSParser::KeyframeSelectorContext::Percentage(size_t i) {
  return getToken(CSSParser::Percentage, i);
}

std::vector<tree::TerminalNode *> CSSParser::KeyframeSelectorContext::Comma() {
  return getTokens(CSSParser::Comma);
}

tree::TerminalNode* CSSParser::KeyframeSelectorContext::Comma(size_t i) {
  return getToken(CSSParser::Comma, i);
}


size_t CSSParser::KeyframeSelectorContext::getRuleIndex() const {
  return CSSParser::RuleKeyframeSelector;
}


CSSParser::KeyframeSelectorContext* CSSParser::keyframeSelector() {
  KeyframeSelectorContext *_localctx = _tracker.createInstance<KeyframeSelectorContext>(_ctx, getState());
  enterRule(_localctx, 136, CSSParser::RuleKeyframeSelector);
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
    setState(995);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CSSParser::Percentage)
      | (1ULL << CSSParser::From)
      | (1ULL << CSSParser::To))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(996);
    ws();
    setState(1004);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CSSParser::Comma) {
      setState(997);
      match(CSSParser::Comma);
      setState(998);
      ws();
      setState(999);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CSSParser::Percentage)
        | (1ULL << CSSParser::From)
        | (1ULL << CSSParser::To))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(1000);
      ws();
      setState(1006);
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

//----------------- ViewportContext ------------------------------------------------------------------

CSSParser::ViewportContext::ViewportContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CSSParser::ViewportContext::Viewport() {
  return getToken(CSSParser::Viewport, 0);
}

std::vector<CSSParser::WsContext *> CSSParser::ViewportContext::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::ViewportContext::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}

CSSParser::DeclarationListContext* CSSParser::ViewportContext::declarationList() {
  return getRuleContext<CSSParser::DeclarationListContext>(0);
}


size_t CSSParser::ViewportContext::getRuleIndex() const {
  return CSSParser::RuleViewport;
}


CSSParser::ViewportContext* CSSParser::viewport() {
  ViewportContext *_localctx = _tracker.createInstance<ViewportContext>(_ctx, getState());
  enterRule(_localctx, 138, CSSParser::RuleViewport);
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
    setState(1007);
    match(CSSParser::Viewport);
    setState(1008);
    ws();
    setState(1009);
    match(CSSParser::T__4);
    setState(1010);
    ws();
    setState(1012);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CSSParser::T__0)
      | (1ULL << CSSParser::T__6)
      | (1ULL << CSSParser::T__13)
      | (1ULL << CSSParser::MediaOnly)
      | (1ULL << CSSParser::Not)
      | (1ULL << CSSParser::And)
      | (1ULL << CSSParser::Or)
      | (1ULL << CSSParser::From)
      | (1ULL << CSSParser::To)
      | (1ULL << CSSParser::Variable)
      | (1ULL << CSSParser::Ident))) != 0)) {
      setState(1011);
      declarationList();
    }
    setState(1014);
    match(CSSParser::T__5);
    setState(1015);
    ws();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CounterStyleContext ------------------------------------------------------------------

CSSParser::CounterStyleContext::CounterStyleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CSSParser::CounterStyleContext::CounterStyle() {
  return getToken(CSSParser::CounterStyle, 0);
}

std::vector<CSSParser::WsContext *> CSSParser::CounterStyleContext::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::CounterStyleContext::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}

CSSParser::IdentContext* CSSParser::CounterStyleContext::ident() {
  return getRuleContext<CSSParser::IdentContext>(0);
}

CSSParser::DeclarationListContext* CSSParser::CounterStyleContext::declarationList() {
  return getRuleContext<CSSParser::DeclarationListContext>(0);
}


size_t CSSParser::CounterStyleContext::getRuleIndex() const {
  return CSSParser::RuleCounterStyle;
}


CSSParser::CounterStyleContext* CSSParser::counterStyle() {
  CounterStyleContext *_localctx = _tracker.createInstance<CounterStyleContext>(_ctx, getState());
  enterRule(_localctx, 140, CSSParser::RuleCounterStyle);
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
    setState(1017);
    match(CSSParser::CounterStyle);
    setState(1018);
    ws();
    setState(1019);
    ident();
    setState(1020);
    ws();
    setState(1021);
    match(CSSParser::T__4);
    setState(1022);
    ws();
    setState(1024);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CSSParser::T__0)
      | (1ULL << CSSParser::T__6)
      | (1ULL << CSSParser::T__13)
      | (1ULL << CSSParser::MediaOnly)
      | (1ULL << CSSParser::Not)
      | (1ULL << CSSParser::And)
      | (1ULL << CSSParser::Or)
      | (1ULL << CSSParser::From)
      | (1ULL << CSSParser::To)
      | (1ULL << CSSParser::Variable)
      | (1ULL << CSSParser::Ident))) != 0)) {
      setState(1023);
      declarationList();
    }
    setState(1026);
    match(CSSParser::T__5);
    setState(1027);
    ws();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FontFeatureValuesRuleContext ------------------------------------------------------------------

CSSParser::FontFeatureValuesRuleContext::FontFeatureValuesRuleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CSSParser::FontFeatureValuesRuleContext::FontFeatureValues() {
  return getToken(CSSParser::FontFeatureValues, 0);
}

std::vector<CSSParser::WsContext *> CSSParser::FontFeatureValuesRuleContext::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::FontFeatureValuesRuleContext::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}

CSSParser::FontFamilyNameListContext* CSSParser::FontFeatureValuesRuleContext::fontFamilyNameList() {
  return getRuleContext<CSSParser::FontFamilyNameListContext>(0);
}

std::vector<CSSParser::FeatureValueBlockContext *> CSSParser::FontFeatureValuesRuleContext::featureValueBlock() {
  return getRuleContexts<CSSParser::FeatureValueBlockContext>();
}

CSSParser::FeatureValueBlockContext* CSSParser::FontFeatureValuesRuleContext::featureValueBlock(size_t i) {
  return getRuleContext<CSSParser::FeatureValueBlockContext>(i);
}


size_t CSSParser::FontFeatureValuesRuleContext::getRuleIndex() const {
  return CSSParser::RuleFontFeatureValuesRule;
}


CSSParser::FontFeatureValuesRuleContext* CSSParser::fontFeatureValuesRule() {
  FontFeatureValuesRuleContext *_localctx = _tracker.createInstance<FontFeatureValuesRuleContext>(_ctx, getState());
  enterRule(_localctx, 142, CSSParser::RuleFontFeatureValuesRule);
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
    setState(1029);
    match(CSSParser::FontFeatureValues);
    setState(1030);
    ws();
    setState(1031);
    fontFamilyNameList();
    setState(1032);
    ws();
    setState(1033);
    match(CSSParser::T__4);
    setState(1034);
    ws();
    setState(1038);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CSSParser::T__14) {
      setState(1035);
      featureValueBlock();
      setState(1040);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1041);
    match(CSSParser::T__5);
    setState(1042);
    ws();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FontFamilyNameListContext ------------------------------------------------------------------

CSSParser::FontFamilyNameListContext::FontFamilyNameListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CSSParser::FontFamilyNameContext *> CSSParser::FontFamilyNameListContext::fontFamilyName() {
  return getRuleContexts<CSSParser::FontFamilyNameContext>();
}

CSSParser::FontFamilyNameContext* CSSParser::FontFamilyNameListContext::fontFamilyName(size_t i) {
  return getRuleContext<CSSParser::FontFamilyNameContext>(i);
}

std::vector<CSSParser::WsContext *> CSSParser::FontFamilyNameListContext::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::FontFamilyNameListContext::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}

std::vector<tree::TerminalNode *> CSSParser::FontFamilyNameListContext::Comma() {
  return getTokens(CSSParser::Comma);
}

tree::TerminalNode* CSSParser::FontFamilyNameListContext::Comma(size_t i) {
  return getToken(CSSParser::Comma, i);
}


size_t CSSParser::FontFamilyNameListContext::getRuleIndex() const {
  return CSSParser::RuleFontFamilyNameList;
}


CSSParser::FontFamilyNameListContext* CSSParser::fontFamilyNameList() {
  FontFamilyNameListContext *_localctx = _tracker.createInstance<FontFamilyNameListContext>(_ctx, getState());
  enterRule(_localctx, 144, CSSParser::RuleFontFamilyNameList);

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
    setState(1044);
    fontFamilyName();
    setState(1052);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 98, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1045);
        ws();
        setState(1046);
        match(CSSParser::Comma);
        setState(1047);
        ws();
        setState(1048);
        fontFamilyName(); 
      }
      setState(1054);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 98, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FontFamilyNameContext ------------------------------------------------------------------

CSSParser::FontFamilyNameContext::FontFamilyNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CSSParser::FontFamilyNameContext::String() {
  return getToken(CSSParser::String, 0);
}

std::vector<CSSParser::IdentContext *> CSSParser::FontFamilyNameContext::ident() {
  return getRuleContexts<CSSParser::IdentContext>();
}

CSSParser::IdentContext* CSSParser::FontFamilyNameContext::ident(size_t i) {
  return getRuleContext<CSSParser::IdentContext>(i);
}

std::vector<CSSParser::WsContext *> CSSParser::FontFamilyNameContext::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::FontFamilyNameContext::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}


size_t CSSParser::FontFamilyNameContext::getRuleIndex() const {
  return CSSParser::RuleFontFamilyName;
}


CSSParser::FontFamilyNameContext* CSSParser::fontFamilyName() {
  FontFamilyNameContext *_localctx = _tracker.createInstance<FontFamilyNameContext>(_ctx, getState());
  enterRule(_localctx, 146, CSSParser::RuleFontFamilyName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(1065);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CSSParser::String: {
        enterOuterAlt(_localctx, 1);
        setState(1055);
        match(CSSParser::String);
        break;
      }

      case CSSParser::MediaOnly:
      case CSSParser::Not:
      case CSSParser::And:
      case CSSParser::Or:
      case CSSParser::From:
      case CSSParser::To:
      case CSSParser::Ident: {
        enterOuterAlt(_localctx, 2);
        setState(1056);
        ident();
        setState(1062);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 99, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(1057);
            ws();
            setState(1058);
            ident(); 
          }
          setState(1064);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 99, _ctx);
        }
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

//----------------- FeatureValueBlockContext ------------------------------------------------------------------

CSSParser::FeatureValueBlockContext::FeatureValueBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CSSParser::FeatureTypeContext* CSSParser::FeatureValueBlockContext::featureType() {
  return getRuleContext<CSSParser::FeatureTypeContext>(0);
}

std::vector<CSSParser::WsContext *> CSSParser::FeatureValueBlockContext::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::FeatureValueBlockContext::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}

std::vector<CSSParser::FeatureValueDefinitionContext *> CSSParser::FeatureValueBlockContext::featureValueDefinition() {
  return getRuleContexts<CSSParser::FeatureValueDefinitionContext>();
}

CSSParser::FeatureValueDefinitionContext* CSSParser::FeatureValueBlockContext::featureValueDefinition(size_t i) {
  return getRuleContext<CSSParser::FeatureValueDefinitionContext>(i);
}


size_t CSSParser::FeatureValueBlockContext::getRuleIndex() const {
  return CSSParser::RuleFeatureValueBlock;
}


CSSParser::FeatureValueBlockContext* CSSParser::featureValueBlock() {
  FeatureValueBlockContext *_localctx = _tracker.createInstance<FeatureValueBlockContext>(_ctx, getState());
  enterRule(_localctx, 148, CSSParser::RuleFeatureValueBlock);
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
    setState(1067);
    featureType();
    setState(1068);
    ws();
    setState(1069);
    match(CSSParser::T__4);
    setState(1070);
    ws();
    setState(1072);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CSSParser::MediaOnly)
      | (1ULL << CSSParser::Not)
      | (1ULL << CSSParser::And)
      | (1ULL << CSSParser::Or)
      | (1ULL << CSSParser::From)
      | (1ULL << CSSParser::To)
      | (1ULL << CSSParser::Ident))) != 0)) {
      setState(1071);
      featureValueDefinition();
    }
    setState(1082);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CSSParser::T__0)
      | (1ULL << CSSParser::Comment)
      | (1ULL << CSSParser::Space))) != 0)) {
      setState(1074);
      ws();
      setState(1075);
      match(CSSParser::T__0);
      setState(1076);
      ws();
      setState(1078);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CSSParser::MediaOnly)
        | (1ULL << CSSParser::Not)
        | (1ULL << CSSParser::And)
        | (1ULL << CSSParser::Or)
        | (1ULL << CSSParser::From)
        | (1ULL << CSSParser::To)
        | (1ULL << CSSParser::Ident))) != 0)) {
        setState(1077);
        featureValueDefinition();
      }
      setState(1084);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1085);
    match(CSSParser::T__5);
    setState(1086);
    ws();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FeatureTypeContext ------------------------------------------------------------------

CSSParser::FeatureTypeContext::FeatureTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CSSParser::AtKeywordContext* CSSParser::FeatureTypeContext::atKeyword() {
  return getRuleContext<CSSParser::AtKeywordContext>(0);
}


size_t CSSParser::FeatureTypeContext::getRuleIndex() const {
  return CSSParser::RuleFeatureType;
}


CSSParser::FeatureTypeContext* CSSParser::featureType() {
  FeatureTypeContext *_localctx = _tracker.createInstance<FeatureTypeContext>(_ctx, getState());
  enterRule(_localctx, 150, CSSParser::RuleFeatureType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1088);
    atKeyword();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FeatureValueDefinitionContext ------------------------------------------------------------------

CSSParser::FeatureValueDefinitionContext::FeatureValueDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CSSParser::IdentContext* CSSParser::FeatureValueDefinitionContext::ident() {
  return getRuleContext<CSSParser::IdentContext>(0);
}

std::vector<CSSParser::WsContext *> CSSParser::FeatureValueDefinitionContext::ws() {
  return getRuleContexts<CSSParser::WsContext>();
}

CSSParser::WsContext* CSSParser::FeatureValueDefinitionContext::ws(size_t i) {
  return getRuleContext<CSSParser::WsContext>(i);
}

std::vector<CSSParser::NumberContext *> CSSParser::FeatureValueDefinitionContext::number() {
  return getRuleContexts<CSSParser::NumberContext>();
}

CSSParser::NumberContext* CSSParser::FeatureValueDefinitionContext::number(size_t i) {
  return getRuleContext<CSSParser::NumberContext>(i);
}


size_t CSSParser::FeatureValueDefinitionContext::getRuleIndex() const {
  return CSSParser::RuleFeatureValueDefinition;
}


CSSParser::FeatureValueDefinitionContext* CSSParser::featureValueDefinition() {
  FeatureValueDefinitionContext *_localctx = _tracker.createInstance<FeatureValueDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 152, CSSParser::RuleFeatureValueDefinition);

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
    setState(1090);
    ident();
    setState(1091);
    ws();
    setState(1092);
    match(CSSParser::T__2);
    setState(1093);
    ws();
    setState(1094);
    number();
    setState(1100);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 104, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1095);
        ws();
        setState(1096);
        number(); 
      }
      setState(1102);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 104, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentContext ------------------------------------------------------------------

CSSParser::IdentContext::IdentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CSSParser::IdentContext::Ident() {
  return getToken(CSSParser::Ident, 0);
}

tree::TerminalNode* CSSParser::IdentContext::MediaOnly() {
  return getToken(CSSParser::MediaOnly, 0);
}

tree::TerminalNode* CSSParser::IdentContext::Not() {
  return getToken(CSSParser::Not, 0);
}

tree::TerminalNode* CSSParser::IdentContext::And() {
  return getToken(CSSParser::And, 0);
}

tree::TerminalNode* CSSParser::IdentContext::Or() {
  return getToken(CSSParser::Or, 0);
}

tree::TerminalNode* CSSParser::IdentContext::From() {
  return getToken(CSSParser::From, 0);
}

tree::TerminalNode* CSSParser::IdentContext::To() {
  return getToken(CSSParser::To, 0);
}


size_t CSSParser::IdentContext::getRuleIndex() const {
  return CSSParser::RuleIdent;
}


CSSParser::IdentContext* CSSParser::ident() {
  IdentContext *_localctx = _tracker.createInstance<IdentContext>(_ctx, getState());
  enterRule(_localctx, 154, CSSParser::RuleIdent);
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
    setState(1103);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CSSParser::MediaOnly)
      | (1ULL << CSSParser::Not)
      | (1ULL << CSSParser::And)
      | (1ULL << CSSParser::Or)
      | (1ULL << CSSParser::From)
      | (1ULL << CSSParser::To)
      | (1ULL << CSSParser::Ident))) != 0))) {
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

//----------------- WsContext ------------------------------------------------------------------

CSSParser::WsContext::WsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CSSParser::WsContext::Comment() {
  return getTokens(CSSParser::Comment);
}

tree::TerminalNode* CSSParser::WsContext::Comment(size_t i) {
  return getToken(CSSParser::Comment, i);
}

std::vector<tree::TerminalNode *> CSSParser::WsContext::Space() {
  return getTokens(CSSParser::Space);
}

tree::TerminalNode* CSSParser::WsContext::Space(size_t i) {
  return getToken(CSSParser::Space, i);
}


size_t CSSParser::WsContext::getRuleIndex() const {
  return CSSParser::RuleWs;
}


CSSParser::WsContext* CSSParser::ws() {
  WsContext *_localctx = _tracker.createInstance<WsContext>(_ctx, getState());
  enterRule(_localctx, 156, CSSParser::RuleWs);
  size_t _la = 0;

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
    setState(1108);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 105, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1105);
        _la = _input->LA(1);
        if (!(_la == CSSParser::Comment

        || _la == CSSParser::Space)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        } 
      }
      setState(1110);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 105, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> CSSParser::_decisionToDFA;
atn::PredictionContextCache CSSParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN CSSParser::_atn;
std::vector<uint16_t> CSSParser::_serializedATN;

std::vector<std::string> CSSParser::_ruleNames = {
  "stylesheet", "charset", "imports", "namespace_", "namespacePrefix", "media", 
  "mediaQueryList", "mediaQuery", "mediaType", "mediaExpression", "mediaFeature", 
  "page", "pseudoPage", "selectorGroup", "selector", "combinator", "simpleSelectorSequence", 
  "typeSelector", "typeNamespacePrefix", "elementName", "universal", "className", 
  "attrib", "pseudo", "functionalPseudo", "expression", "negation", "negationArg", 
  "operator_", "property", "ruleset", "declarationList", "declaration", 
  "prio", "value", "expr", "term", "function_", "dxImageTransform", "hexcolor", 
  "number", "percentage", "dimension", "unknownDimension", "any", "atRule", 
  "atKeyword", "unused", "block", "statement", "groupRuleBody", "supportsRule", 
  "supportsCondition", "supportsConditionInParens", "supportsNegation", 
  "supportsConjunction", "supportsDisjunction", "supportsDeclarationCondition", 
  "generalEnclosed", "var_", "calc", "calcSum", "calcProduct", "calcValue", 
  "fontFaceRule", "fontFaceDeclaration", "keyframesRule", "keyframesBlocks", 
  "keyframeSelector", "viewport", "counterStyle", "fontFeatureValuesRule", 
  "fontFamilyNameList", "fontFamilyName", "featureValueBlock", "featureType", 
  "featureValueDefinition", "ident", "ws"
};

std::vector<std::string> CSSParser::_literalNames = {
  "", "';'", "'('", "':'", "')'", "'{'", "'}'", "'*'", "'|'", "'.'", "'['", 
  "'='", "']'", "'/'", "'_'", "'@'", "", "", "'<!--'", "'-->'", "'~='", 
  "'|='", "", "", "", "", "", "'@charset '", "", "", "", "", "", "", "", 
  "", "", "'+'", "'-'", "'>'", "','", "'~'", "", "", "", "'^='", "'$='", 
  "'*='", "", "", "", "", "", "", "'calc('", "", "", "", "", "", "'var('"
};

std::vector<std::string> CSSParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "Comment", 
  "Space", "Cdo", "Cdc", "Includes", "DashMatch", "Hash", "Import", "Page", 
  "Media", "Namespace", "Charset", "Important", "Percentage", "Uri", "UnicodeRange", 
  "MediaOnly", "Not", "And", "Dimension", "UnknownDimension", "Plus", "Minus", 
  "Greater", "Comma", "Tilde", "PseudoNot", "Number", "String", "PrefixMatch", 
  "SuffixMatch", "SubstringMatch", "FontFace", "Supports", "Or", "Keyframes", 
  "From", "To", "Calc", "Viewport", "CounterStyle", "FontFeatureValues", 
  "DxImageTransform", "Variable", "Var", "Ident", "Function"
};

dfa::Vocabulary CSSParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> CSSParser::_tokenNames;

CSSParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x40, 0x45a, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 
    0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 0x9, 0x3b, 0x4, 0x3c, 
    0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 0x9, 0x3e, 0x4, 0x3f, 0x9, 
    0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 
    0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 
    0x46, 0x9, 0x46, 0x4, 0x47, 0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 
    0x9, 0x49, 0x4, 0x4a, 0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 
    0x4c, 0x4, 0x4d, 0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 
    0x4, 0x50, 0x9, 0x50, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0xa4, 
    0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0xa7, 0xb, 0x2, 0x7, 0x2, 0xa9, 0xa, 0x2, 
    0xc, 0x2, 0xe, 0x2, 0xac, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0xb0, 
    0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0xb3, 0xb, 0x2, 0x7, 0x2, 0xb5, 0xa, 0x2, 
    0xc, 0x2, 0xe, 0x2, 0xb8, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0xbc, 
    0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0xbf, 0xb, 0x2, 0x7, 0x2, 0xc1, 0xa, 0x2, 
    0xc, 0x2, 0xe, 0x2, 0xc4, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0xc8, 
    0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0xcb, 0xb, 0x2, 0x7, 0x2, 0xcd, 0xa, 0x2, 
    0xc, 0x2, 0xe, 0x2, 0xd0, 0xb, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x5, 0x3, 0xde, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0xfa, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x101, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x5, 0x5, 0x10d, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 
    0x5, 0x112, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x7, 0x8, 0x121, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x124, 0xb, 
    0x8, 0x5, 0x8, 0x126, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x5, 0x9, 
    0x12b, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x7, 0x9, 0x134, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x137, 
    0xb, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 
    0x13e, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x141, 0xb, 0x9, 0x5, 0x9, 0x143, 
    0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x14e, 0xa, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x5, 0xd, 0x159, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 
    0x15e, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x163, 0xa, 
    0xd, 0x7, 0xd, 0x165, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x168, 0xb, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0x176, 0xa, 
    0xf, 0xc, 0xf, 0xe, 0xf, 0x179, 0xb, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0x181, 0xa, 0x10, 
    0xc, 0x10, 0xe, 0x10, 0x184, 0xb, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x18e, 
    0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x192, 0xa, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 0x199, 0xa, 0x12, 
    0xc, 0x12, 0xe, 0x12, 0x19c, 0xb, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x6, 0x12, 0x1a3, 0xa, 0x12, 0xd, 0x12, 0xe, 0x12, 
    0x1a4, 0x5, 0x12, 0x1a7, 0xa, 0x12, 0x3, 0x13, 0x5, 0x13, 0x1aa, 0xa, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x1b0, 
    0xa, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x5, 
    0x16, 0x1b7, 0xa, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x1c1, 0xa, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 
    0x18, 0x1c9, 0xa, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x1cd, 0xa, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x1d3, 
    0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x1d7, 0xa, 0x19, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 
    0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x1e5, 
    0xa, 0x1b, 0x3, 0x1b, 0x6, 0x1b, 0x1e8, 0xa, 0x1b, 0xd, 0x1b, 0xe, 0x1b, 
    0x1e9, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 
    0x1d, 0x1f8, 0xa, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x202, 0xa, 0x1e, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 
    0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x20d, 0xa, 0x1f, 0x3, 0x20, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x5, 0x20, 0x213, 0xa, 0x20, 0x3, 0x20, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x7, 0x20, 0x219, 0xa, 0x20, 0xc, 0x20, 
    0xe, 0x20, 0x21c, 0xb, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x5, 0x20, 
    0x221, 0xa, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x5, 0x20, 0x226, 
    0xa, 0x20, 0x3, 0x21, 0x3, 0x21, 0x7, 0x21, 0x22a, 0xa, 0x21, 0xc, 0x21, 
    0xe, 0x21, 0x22d, 0xb, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 
    0x3, 0x21, 0x5, 0x21, 0x234, 0xa, 0x21, 0x7, 0x21, 0x236, 0xa, 0x21, 
    0xc, 0x21, 0xe, 0x21, 0x239, 0xb, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
    0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x240, 0xa, 0x22, 0x3, 0x22, 0x3, 0x22, 
    0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x247, 0xa, 0x22, 0x3, 0x23, 
    0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 
    0x24, 0x6, 0x24, 0x251, 0xa, 0x24, 0xd, 0x24, 0xe, 0x24, 0x252, 0x3, 
    0x25, 0x3, 0x25, 0x5, 0x25, 0x257, 0xa, 0x25, 0x3, 0x25, 0x7, 0x25, 
    0x25a, 0xa, 0x25, 0xc, 0x25, 0xe, 0x25, 0x25d, 0xb, 0x25, 0x3, 0x26, 
    0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 
    0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 
    0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 
    0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x5, 0x26, 
    0x279, 0xa, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 
    0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 
    0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x2a, 0x5, 0x2a, 0x28b, 
    0xa, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2b, 0x5, 0x2b, 0x290, 0xa, 0x2b, 
    0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2c, 0x5, 0x2c, 0x295, 0xa, 0x2c, 0x3, 0x2c, 
    0x3, 0x2c, 0x3, 0x2d, 0x5, 0x2d, 0x29a, 0xa, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 
    0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
    0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 
    0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
    0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 
    0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
    0x2e, 0x7, 0x2e, 0x2bf, 0xa, 0x2e, 0xc, 0x2e, 0xe, 0x2e, 0x2c2, 0xb, 
    0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 
    0x3, 0x2e, 0x7, 0x2e, 0x2cb, 0xa, 0x2e, 0xc, 0x2e, 0xe, 0x2e, 0x2ce, 
    0xb, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
    0x2e, 0x3, 0x2e, 0x7, 0x2e, 0x2d7, 0xa, 0x2e, 0xc, 0x2e, 0xe, 0x2e, 
    0x2da, 0xb, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x5, 0x2e, 0x2df, 
    0xa, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x7, 0x2f, 0x2e4, 0xa, 0x2f, 
    0xc, 0x2f, 0xe, 0x2f, 0x2e7, 0xb, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 
    0x5, 0x2f, 0x2ec, 0xa, 0x2f, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x31, 
    0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 
    0x31, 0x3, 0x31, 0x3, 0x31, 0x5, 0x31, 0x2fb, 0xa, 0x31, 0x3, 0x32, 
    0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 
    0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x7, 0x32, 0x308, 0xa, 0x32, 
    0xc, 0x32, 0xe, 0x32, 0x30b, 0xb, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 
    0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 
    0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x5, 0x33, 0x31a, 0xa, 0x33, 
    0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x7, 0x34, 0x31f, 0xa, 0x34, 0xc, 0x34, 
    0xe, 0x34, 0x322, 0xb, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x35, 
    0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x36, 0x3, 
    0x36, 0x3, 0x36, 0x3, 0x36, 0x5, 0x36, 0x331, 0xa, 0x36, 0x3, 0x37, 
    0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 
    0x37, 0x5, 0x37, 0x33b, 0xa, 0x37, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 
    0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 
    0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 
    0x6, 0x39, 0x34d, 0xa, 0x39, 0xd, 0x39, 0xe, 0x39, 0x34e, 0x3, 0x3a, 
    0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
    0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x6, 0x3a, 0x35b, 0xa, 0x3a, 0xd, 0x3a, 
    0xe, 0x3a, 0x35c, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 
    0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x7, 0x3c, 0x367, 0xa, 0x3c, 0xc, 0x3c, 
    0xe, 0x3c, 0x36a, 0xb, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 
    0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3e, 0x3, 
    0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3f, 0x3, 0x3f, 
    0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 
    0x3f, 0x7, 0x3f, 0x384, 0xa, 0x3f, 0xc, 0x3f, 0xe, 0x3f, 0x387, 0xb, 
    0x3f, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 
    0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x7, 0x40, 0x393, 0xa, 0x40, 
    0xc, 0x40, 0xe, 0x40, 0x396, 0xb, 0x40, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 
    0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 
    0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 
    0x3, 0x41, 0x3, 0x41, 0x5, 0x41, 0x3aa, 0xa, 0x41, 0x3, 0x42, 0x3, 0x42, 
    0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x5, 0x42, 0x3b1, 0xa, 0x42, 0x3, 0x42, 
    0x3, 0x42, 0x3, 0x42, 0x5, 0x42, 0x3b6, 0xa, 0x42, 0x7, 0x42, 0x3b8, 
    0xa, 0x42, 0xc, 0x42, 0xe, 0x42, 0x3bb, 0xb, 0x42, 0x3, 0x42, 0x3, 0x42, 
    0x3, 0x42, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 
    0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x5, 0x43, 0x3ca, 
    0xa, 0x43, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 
    0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 
    0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x5, 0x45, 0x3dc, 0xa, 0x45, 
    0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x7, 0x45, 0x3e1, 0xa, 0x45, 0xc, 0x45, 
    0xe, 0x45, 0x3e4, 0xb, 0x45, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 
    0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x7, 0x46, 0x3ed, 0xa, 0x46, 0xc, 0x46, 
    0xe, 0x46, 0x3f0, 0xb, 0x46, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 
    0x3, 0x47, 0x5, 0x47, 0x3f7, 0xa, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 
    0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 
    0x48, 0x5, 0x48, 0x403, 0xa, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 
    0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 
    0x49, 0x7, 0x49, 0x40f, 0xa, 0x49, 0xc, 0x49, 0xe, 0x49, 0x412, 0xb, 
    0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 
    0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x7, 0x4a, 0x41d, 0xa, 0x4a, 0xc, 0x4a, 
    0xe, 0x4a, 0x420, 0xb, 0x4a, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 
    0x3, 0x4b, 0x7, 0x4b, 0x427, 0xa, 0x4b, 0xc, 0x4b, 0xe, 0x4b, 0x42a, 
    0xb, 0x4b, 0x5, 0x4b, 0x42c, 0xa, 0x4b, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 
    0x3, 0x4c, 0x3, 0x4c, 0x5, 0x4c, 0x433, 0xa, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 
    0x3, 0x4c, 0x3, 0x4c, 0x5, 0x4c, 0x439, 0xa, 0x4c, 0x7, 0x4c, 0x43b, 
    0xa, 0x4c, 0xc, 0x4c, 0xe, 0x4c, 0x43e, 0xb, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 
    0x3, 0x4c, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 
    0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x7, 0x4e, 0x44d, 
    0xa, 0x4e, 0xc, 0x4e, 0xe, 0x4e, 0x450, 0xb, 0x4e, 0x3, 0x4f, 0x3, 0x4f, 
    0x3, 0x50, 0x7, 0x50, 0x455, 0xa, 0x50, 0xc, 0x50, 0xe, 0x50, 0x458, 
    0xb, 0x50, 0x3, 0x50, 0x2, 0x2, 0x51, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 
    0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 
    0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 
    0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 
    0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 
    0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 
    0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 0x92, 0x94, 0x96, 0x98, 0x9a, 0x9c, 
    0x9e, 0x2, 0xb, 0x3, 0x2, 0x12, 0x15, 0x4, 0x2, 0x20, 0x20, 0x2e, 0x2e, 
    0x3, 0x2, 0x22, 0x23, 0x5, 0x2, 0xd, 0xd, 0x16, 0x17, 0x2f, 0x31, 0x3, 
    0x2, 0x27, 0x28, 0x4, 0x2, 0x4, 0x4, 0x40, 0x40, 0x4, 0x2, 0x1f, 0x1f, 
    0x36, 0x37, 0x6, 0x2, 0x22, 0x24, 0x34, 0x34, 0x36, 0x37, 0x3f, 0x3f, 
    0x3, 0x2, 0x12, 0x13, 0x2, 0x4ba, 0x2, 0xa0, 0x3, 0x2, 0x2, 0x2, 0x4, 
    0xdd, 0x3, 0x2, 0x2, 0x2, 0x6, 0xf9, 0x3, 0x2, 0x2, 0x2, 0x8, 0x111, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x113, 0x3, 0x2, 0x2, 0x2, 0xc, 0x115, 0x3, 
    0x2, 0x2, 0x2, 0xe, 0x125, 0x3, 0x2, 0x2, 0x2, 0x10, 0x142, 0x3, 0x2, 
    0x2, 0x2, 0x12, 0x144, 0x3, 0x2, 0x2, 0x2, 0x14, 0x146, 0x3, 0x2, 0x2, 
    0x2, 0x16, 0x152, 0x3, 0x2, 0x2, 0x2, 0x18, 0x155, 0x3, 0x2, 0x2, 0x2, 
    0x1a, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x170, 0x3, 0x2, 0x2, 0x2, 0x1e, 
    0x17a, 0x3, 0x2, 0x2, 0x2, 0x20, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x22, 0x1a6, 
    0x3, 0x2, 0x2, 0x2, 0x24, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x26, 0x1af, 0x3, 
    0x2, 0x2, 0x2, 0x28, 0x1b3, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x1b6, 0x3, 0x2, 
    0x2, 0x2, 0x2c, 0x1ba, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x1bd, 0x3, 0x2, 0x2, 
    0x2, 0x30, 0x1d0, 0x3, 0x2, 0x2, 0x2, 0x32, 0x1d8, 0x3, 0x2, 0x2, 0x2, 
    0x34, 0x1e7, 0x3, 0x2, 0x2, 0x2, 0x36, 0x1eb, 0x3, 0x2, 0x2, 0x2, 0x38, 
    0x1f7, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x201, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x20c, 
    0x3, 0x2, 0x2, 0x2, 0x3e, 0x225, 0x3, 0x2, 0x2, 0x2, 0x40, 0x22b, 0x3, 
    0x2, 0x2, 0x2, 0x42, 0x246, 0x3, 0x2, 0x2, 0x2, 0x44, 0x248, 0x3, 0x2, 
    0x2, 0x2, 0x46, 0x250, 0x3, 0x2, 0x2, 0x2, 0x48, 0x254, 0x3, 0x2, 0x2, 
    0x2, 0x4a, 0x278, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x27a, 0x3, 0x2, 0x2, 0x2, 
    0x4e, 0x280, 0x3, 0x2, 0x2, 0x2, 0x50, 0x286, 0x3, 0x2, 0x2, 0x2, 0x52, 
    0x28a, 0x3, 0x2, 0x2, 0x2, 0x54, 0x28f, 0x3, 0x2, 0x2, 0x2, 0x56, 0x294, 
    0x3, 0x2, 0x2, 0x2, 0x58, 0x299, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x2de, 0x3, 
    0x2, 0x2, 0x2, 0x5c, 0x2e0, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x2ed, 0x3, 0x2, 
    0x2, 0x2, 0x60, 0x2fa, 0x3, 0x2, 0x2, 0x2, 0x62, 0x2fc, 0x3, 0x2, 0x2, 
    0x2, 0x64, 0x319, 0x3, 0x2, 0x2, 0x2, 0x66, 0x31b, 0x3, 0x2, 0x2, 0x2, 
    0x68, 0x326, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x330, 0x3, 0x2, 0x2, 0x2, 0x6c, 
    0x33a, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x33c, 0x3, 0x2, 0x2, 0x2, 0x70, 0x342, 
    0x3, 0x2, 0x2, 0x2, 0x72, 0x350, 0x3, 0x2, 0x2, 0x2, 0x74, 0x35e, 0x3, 
    0x2, 0x2, 0x2, 0x76, 0x363, 0x3, 0x2, 0x2, 0x2, 0x78, 0x36d, 0x3, 0x2, 
    0x2, 0x2, 0x7a, 0x374, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x37a, 0x3, 0x2, 0x2, 
    0x2, 0x7e, 0x388, 0x3, 0x2, 0x2, 0x2, 0x80, 0x3a9, 0x3, 0x2, 0x2, 0x2, 
    0x82, 0x3ab, 0x3, 0x2, 0x2, 0x2, 0x84, 0x3c9, 0x3, 0x2, 0x2, 0x2, 0x86, 
    0x3cb, 0x3, 0x2, 0x2, 0x2, 0x88, 0x3e2, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x3e5, 
    0x3, 0x2, 0x2, 0x2, 0x8c, 0x3f1, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x3fb, 0x3, 
    0x2, 0x2, 0x2, 0x90, 0x407, 0x3, 0x2, 0x2, 0x2, 0x92, 0x416, 0x3, 0x2, 
    0x2, 0x2, 0x94, 0x42b, 0x3, 0x2, 0x2, 0x2, 0x96, 0x42d, 0x3, 0x2, 0x2, 
    0x2, 0x98, 0x442, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x444, 0x3, 0x2, 0x2, 0x2, 
    0x9c, 0x451, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x456, 0x3, 0x2, 0x2, 0x2, 0xa0, 
    0xaa, 0x5, 0x9e, 0x50, 0x2, 0xa1, 0xa5, 0x5, 0x4, 0x3, 0x2, 0xa2, 0xa4, 
    0x9, 0x2, 0x2, 0x2, 0xa3, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa7, 0x3, 
    0x2, 0x2, 0x2, 0xa5, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa6, 0x3, 0x2, 
    0x2, 0x2, 0xa6, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa5, 0x3, 0x2, 0x2, 
    0x2, 0xa8, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xac, 0x3, 0x2, 0x2, 0x2, 
    0xaa, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xab, 0x3, 0x2, 0x2, 0x2, 0xab, 
    0xb6, 0x3, 0x2, 0x2, 0x2, 0xac, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xad, 0xb1, 
    0x5, 0x6, 0x4, 0x2, 0xae, 0xb0, 0x9, 0x2, 0x2, 0x2, 0xaf, 0xae, 0x3, 
    0x2, 0x2, 0x2, 0xb0, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xaf, 0x3, 0x2, 
    0x2, 0x2, 0xb1, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb5, 0x3, 0x2, 0x2, 
    0x2, 0xb3, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xad, 0x3, 0x2, 0x2, 0x2, 
    0xb5, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb6, 
    0xb7, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb6, 
    0x3, 0x2, 0x2, 0x2, 0xb9, 0xbd, 0x5, 0x8, 0x5, 0x2, 0xba, 0xbc, 0x9, 
    0x2, 0x2, 0x2, 0xbb, 0xba, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbf, 0x3, 0x2, 
    0x2, 0x2, 0xbd, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbe, 0x3, 0x2, 0x2, 
    0x2, 0xbe, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xbd, 0x3, 0x2, 0x2, 0x2, 
    0xc0, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc2, 
    0xc0, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xce, 
    0x3, 0x2, 0x2, 0x2, 0xc4, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc9, 0x5, 
    0x64, 0x33, 0x2, 0xc6, 0xc8, 0x9, 0x2, 0x2, 0x2, 0xc7, 0xc6, 0x3, 0x2, 
    0x2, 0x2, 0xc8, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xc7, 0x3, 0x2, 0x2, 
    0x2, 0xc9, 0xca, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcd, 0x3, 0x2, 0x2, 0x2, 
    0xcb, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xcd, 
    0xd0, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 
    0x3, 0x2, 0x2, 0x2, 0xcf, 0x3, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xce, 0x3, 
    0x2, 0x2, 0x2, 0xd1, 0xd2, 0x7, 0x1d, 0x2, 0x2, 0xd2, 0xd3, 0x5, 0x9e, 
    0x50, 0x2, 0xd3, 0xd4, 0x7, 0x2e, 0x2, 0x2, 0xd4, 0xd5, 0x5, 0x9e, 0x50, 
    0x2, 0xd5, 0xd6, 0x7, 0x3, 0x2, 0x2, 0xd6, 0xd7, 0x5, 0x9e, 0x50, 0x2, 
    0xd7, 0xde, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 0x7, 0x1d, 0x2, 0x2, 0xd9, 
    0xda, 0x5, 0x9e, 0x50, 0x2, 0xda, 0xdb, 0x7, 0x2e, 0x2, 0x2, 0xdb, 0xdc, 
    0x5, 0x9e, 0x50, 0x2, 0xdc, 0xde, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xd1, 0x3, 
    0x2, 0x2, 0x2, 0xdd, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xde, 0x5, 0x3, 0x2, 
    0x2, 0x2, 0xdf, 0xe0, 0x7, 0x19, 0x2, 0x2, 0xe0, 0xe1, 0x5, 0x9e, 0x50, 
    0x2, 0xe1, 0xe2, 0x9, 0x3, 0x2, 0x2, 0xe2, 0xe3, 0x5, 0x9e, 0x50, 0x2, 
    0xe3, 0xe4, 0x5, 0xe, 0x8, 0x2, 0xe4, 0xe5, 0x7, 0x3, 0x2, 0x2, 0xe5, 
    0xe6, 0x5, 0x9e, 0x50, 0x2, 0xe6, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe8, 
    0x7, 0x19, 0x2, 0x2, 0xe8, 0xe9, 0x5, 0x9e, 0x50, 0x2, 0xe9, 0xea, 0x9, 
    0x3, 0x2, 0x2, 0xea, 0xeb, 0x5, 0x9e, 0x50, 0x2, 0xeb, 0xec, 0x7, 0x3, 
    0x2, 0x2, 0xec, 0xed, 0x5, 0x9e, 0x50, 0x2, 0xed, 0xfa, 0x3, 0x2, 0x2, 
    0x2, 0xee, 0xef, 0x7, 0x19, 0x2, 0x2, 0xef, 0xf0, 0x5, 0x9e, 0x50, 0x2, 
    0xf0, 0xf1, 0x9, 0x3, 0x2, 0x2, 0xf1, 0xf2, 0x5, 0x9e, 0x50, 0x2, 0xf2, 
    0xf3, 0x5, 0xe, 0x8, 0x2, 0xf3, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf5, 
    0x7, 0x19, 0x2, 0x2, 0xf5, 0xf6, 0x5, 0x9e, 0x50, 0x2, 0xf6, 0xf7, 0x9, 
    0x3, 0x2, 0x2, 0xf7, 0xf8, 0x5, 0x9e, 0x50, 0x2, 0xf8, 0xfa, 0x3, 0x2, 
    0x2, 0x2, 0xf9, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xe7, 0x3, 0x2, 0x2, 
    0x2, 0xf9, 0xee, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xf4, 0x3, 0x2, 0x2, 0x2, 
    0xfa, 0x7, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xfc, 0x7, 0x1c, 0x2, 0x2, 0xfc, 
    0x100, 0x5, 0x9e, 0x50, 0x2, 0xfd, 0xfe, 0x5, 0xa, 0x6, 0x2, 0xfe, 0xff, 
    0x5, 0x9e, 0x50, 0x2, 0xff, 0x101, 0x3, 0x2, 0x2, 0x2, 0x100, 0xfd, 
    0x3, 0x2, 0x2, 0x2, 0x100, 0x101, 0x3, 0x2, 0x2, 0x2, 0x101, 0x102, 
    0x3, 0x2, 0x2, 0x2, 0x102, 0x103, 0x9, 0x3, 0x2, 0x2, 0x103, 0x104, 
    0x5, 0x9e, 0x50, 0x2, 0x104, 0x105, 0x7, 0x3, 0x2, 0x2, 0x105, 0x106, 
    0x5, 0x9e, 0x50, 0x2, 0x106, 0x112, 0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 
    0x7, 0x1c, 0x2, 0x2, 0x108, 0x10c, 0x5, 0x9e, 0x50, 0x2, 0x109, 0x10a, 
    0x5, 0xa, 0x6, 0x2, 0x10a, 0x10b, 0x5, 0x9e, 0x50, 0x2, 0x10b, 0x10d, 
    0x3, 0x2, 0x2, 0x2, 0x10c, 0x109, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10d, 
    0x3, 0x2, 0x2, 0x2, 0x10d, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x10f, 
    0x9, 0x3, 0x2, 0x2, 0x10f, 0x110, 0x5, 0x9e, 0x50, 0x2, 0x110, 0x112, 
    0x3, 0x2, 0x2, 0x2, 0x111, 0xfb, 0x3, 0x2, 0x2, 0x2, 0x111, 0x107, 0x3, 
    0x2, 0x2, 0x2, 0x112, 0x9, 0x3, 0x2, 0x2, 0x2, 0x113, 0x114, 0x5, 0x9c, 
    0x4f, 0x2, 0x114, 0xb, 0x3, 0x2, 0x2, 0x2, 0x115, 0x116, 0x7, 0x1b, 
    0x2, 0x2, 0x116, 0x117, 0x5, 0x9e, 0x50, 0x2, 0x117, 0x118, 0x5, 0xe, 
    0x8, 0x2, 0x118, 0x119, 0x5, 0x66, 0x34, 0x2, 0x119, 0x11a, 0x5, 0x9e, 
    0x50, 0x2, 0x11a, 0xd, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x122, 0x5, 0x10, 
    0x9, 0x2, 0x11c, 0x11d, 0x7, 0x2a, 0x2, 0x2, 0x11d, 0x11e, 0x5, 0x9e, 
    0x50, 0x2, 0x11e, 0x11f, 0x5, 0x10, 0x9, 0x2, 0x11f, 0x121, 0x3, 0x2, 
    0x2, 0x2, 0x120, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x121, 0x124, 0x3, 0x2, 
    0x2, 0x2, 0x122, 0x120, 0x3, 0x2, 0x2, 0x2, 0x122, 0x123, 0x3, 0x2, 
    0x2, 0x2, 0x123, 0x126, 0x3, 0x2, 0x2, 0x2, 0x124, 0x122, 0x3, 0x2, 
    0x2, 0x2, 0x125, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x125, 0x126, 0x3, 0x2, 
    0x2, 0x2, 0x126, 0x127, 0x3, 0x2, 0x2, 0x2, 0x127, 0x128, 0x5, 0x9e, 
    0x50, 0x2, 0x128, 0xf, 0x3, 0x2, 0x2, 0x2, 0x129, 0x12b, 0x9, 0x4, 0x2, 
    0x2, 0x12a, 0x129, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x12b, 0x3, 0x2, 0x2, 
    0x2, 0x12b, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12d, 0x5, 0x9e, 0x50, 
    0x2, 0x12d, 0x12e, 0x5, 0x12, 0xa, 0x2, 0x12e, 0x135, 0x5, 0x9e, 0x50, 
    0x2, 0x12f, 0x130, 0x7, 0x24, 0x2, 0x2, 0x130, 0x131, 0x5, 0x9e, 0x50, 
    0x2, 0x131, 0x132, 0x5, 0x14, 0xb, 0x2, 0x132, 0x134, 0x3, 0x2, 0x2, 
    0x2, 0x133, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x134, 0x137, 0x3, 0x2, 0x2, 
    0x2, 0x135, 0x133, 0x3, 0x2, 0x2, 0x2, 0x135, 0x136, 0x3, 0x2, 0x2, 
    0x2, 0x136, 0x143, 0x3, 0x2, 0x2, 0x2, 0x137, 0x135, 0x3, 0x2, 0x2, 
    0x2, 0x138, 0x13f, 0x5, 0x14, 0xb, 0x2, 0x139, 0x13a, 0x7, 0x24, 0x2, 
    0x2, 0x13a, 0x13b, 0x5, 0x9e, 0x50, 0x2, 0x13b, 0x13c, 0x5, 0x14, 0xb, 
    0x2, 0x13c, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x139, 0x3, 0x2, 0x2, 
    0x2, 0x13e, 0x141, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x13d, 0x3, 0x2, 0x2, 
    0x2, 0x13f, 0x140, 0x3, 0x2, 0x2, 0x2, 0x140, 0x143, 0x3, 0x2, 0x2, 
    0x2, 0x141, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x142, 0x12a, 0x3, 0x2, 0x2, 
    0x2, 0x142, 0x138, 0x3, 0x2, 0x2, 0x2, 0x143, 0x11, 0x3, 0x2, 0x2, 0x2, 
    0x144, 0x145, 0x5, 0x9c, 0x4f, 0x2, 0x145, 0x13, 0x3, 0x2, 0x2, 0x2, 
    0x146, 0x147, 0x7, 0x4, 0x2, 0x2, 0x147, 0x148, 0x5, 0x9e, 0x50, 0x2, 
    0x148, 0x14d, 0x5, 0x16, 0xc, 0x2, 0x149, 0x14a, 0x7, 0x5, 0x2, 0x2, 
    0x14a, 0x14b, 0x5, 0x9e, 0x50, 0x2, 0x14b, 0x14c, 0x5, 0x48, 0x25, 0x2, 
    0x14c, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x149, 0x3, 0x2, 0x2, 0x2, 
    0x14d, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x14f, 0x3, 0x2, 0x2, 0x2, 
    0x14f, 0x150, 0x7, 0x6, 0x2, 0x2, 0x150, 0x151, 0x5, 0x9e, 0x50, 0x2, 
    0x151, 0x15, 0x3, 0x2, 0x2, 0x2, 0x152, 0x153, 0x5, 0x9c, 0x4f, 0x2, 
    0x153, 0x154, 0x5, 0x9e, 0x50, 0x2, 0x154, 0x17, 0x3, 0x2, 0x2, 0x2, 
    0x155, 0x156, 0x7, 0x1a, 0x2, 0x2, 0x156, 0x158, 0x5, 0x9e, 0x50, 0x2, 
    0x157, 0x159, 0x5, 0x1a, 0xe, 0x2, 0x158, 0x157, 0x3, 0x2, 0x2, 0x2, 
    0x158, 0x159, 0x3, 0x2, 0x2, 0x2, 0x159, 0x15a, 0x3, 0x2, 0x2, 0x2, 
    0x15a, 0x15b, 0x7, 0x7, 0x2, 0x2, 0x15b, 0x15d, 0x5, 0x9e, 0x50, 0x2, 
    0x15c, 0x15e, 0x5, 0x42, 0x22, 0x2, 0x15d, 0x15c, 0x3, 0x2, 0x2, 0x2, 
    0x15d, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x166, 0x3, 0x2, 0x2, 0x2, 
    0x15f, 0x160, 0x7, 0x3, 0x2, 0x2, 0x160, 0x162, 0x5, 0x9e, 0x50, 0x2, 
    0x161, 0x163, 0x5, 0x42, 0x22, 0x2, 0x162, 0x161, 0x3, 0x2, 0x2, 0x2, 
    0x162, 0x163, 0x3, 0x2, 0x2, 0x2, 0x163, 0x165, 0x3, 0x2, 0x2, 0x2, 
    0x164, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x165, 0x168, 0x3, 0x2, 0x2, 0x2, 
    0x166, 0x164, 0x3, 0x2, 0x2, 0x2, 0x166, 0x167, 0x3, 0x2, 0x2, 0x2, 
    0x167, 0x169, 0x3, 0x2, 0x2, 0x2, 0x168, 0x166, 0x3, 0x2, 0x2, 0x2, 
    0x169, 0x16a, 0x7, 0x8, 0x2, 0x2, 0x16a, 0x16b, 0x5, 0x9e, 0x50, 0x2, 
    0x16b, 0x19, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x16d, 0x7, 0x5, 0x2, 0x2, 0x16d, 
    0x16e, 0x5, 0x9c, 0x4f, 0x2, 0x16e, 0x16f, 0x5, 0x9e, 0x50, 0x2, 0x16f, 
    0x1b, 0x3, 0x2, 0x2, 0x2, 0x170, 0x177, 0x5, 0x1e, 0x10, 0x2, 0x171, 
    0x172, 0x7, 0x2a, 0x2, 0x2, 0x172, 0x173, 0x5, 0x9e, 0x50, 0x2, 0x173, 
    0x174, 0x5, 0x1e, 0x10, 0x2, 0x174, 0x176, 0x3, 0x2, 0x2, 0x2, 0x175, 
    0x171, 0x3, 0x2, 0x2, 0x2, 0x176, 0x179, 0x3, 0x2, 0x2, 0x2, 0x177, 
    0x175, 0x3, 0x2, 0x2, 0x2, 0x177, 0x178, 0x3, 0x2, 0x2, 0x2, 0x178, 
    0x1d, 0x3, 0x2, 0x2, 0x2, 0x179, 0x177, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x17b, 
    0x5, 0x22, 0x12, 0x2, 0x17b, 0x182, 0x5, 0x9e, 0x50, 0x2, 0x17c, 0x17d, 
    0x5, 0x20, 0x11, 0x2, 0x17d, 0x17e, 0x5, 0x22, 0x12, 0x2, 0x17e, 0x17f, 
    0x5, 0x9e, 0x50, 0x2, 0x17f, 0x181, 0x3, 0x2, 0x2, 0x2, 0x180, 0x17c, 
    0x3, 0x2, 0x2, 0x2, 0x181, 0x184, 0x3, 0x2, 0x2, 0x2, 0x182, 0x180, 
    0x3, 0x2, 0x2, 0x2, 0x182, 0x183, 0x3, 0x2, 0x2, 0x2, 0x183, 0x1f, 0x3, 
    0x2, 0x2, 0x2, 0x184, 0x182, 0x3, 0x2, 0x2, 0x2, 0x185, 0x186, 0x7, 
    0x27, 0x2, 0x2, 0x186, 0x18e, 0x5, 0x9e, 0x50, 0x2, 0x187, 0x188, 0x7, 
    0x29, 0x2, 0x2, 0x188, 0x18e, 0x5, 0x9e, 0x50, 0x2, 0x189, 0x18a, 0x7, 
    0x2b, 0x2, 0x2, 0x18a, 0x18e, 0x5, 0x9e, 0x50, 0x2, 0x18b, 0x18c, 0x7, 
    0x13, 0x2, 0x2, 0x18c, 0x18e, 0x5, 0x9e, 0x50, 0x2, 0x18d, 0x185, 0x3, 
    0x2, 0x2, 0x2, 0x18d, 0x187, 0x3, 0x2, 0x2, 0x2, 0x18d, 0x189, 0x3, 
    0x2, 0x2, 0x2, 0x18d, 0x18b, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x21, 0x3, 0x2, 
    0x2, 0x2, 0x18f, 0x192, 0x5, 0x24, 0x13, 0x2, 0x190, 0x192, 0x5, 0x2a, 
    0x16, 0x2, 0x191, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x191, 0x190, 0x3, 0x2, 
    0x2, 0x2, 0x192, 0x19a, 0x3, 0x2, 0x2, 0x2, 0x193, 0x199, 0x7, 0x18, 
    0x2, 0x2, 0x194, 0x199, 0x5, 0x2c, 0x17, 0x2, 0x195, 0x199, 0x5, 0x2e, 
    0x18, 0x2, 0x196, 0x199, 0x5, 0x30, 0x19, 0x2, 0x197, 0x199, 0x5, 0x36, 
    0x1c, 0x2, 0x198, 0x193, 0x3, 0x2, 0x2, 0x2, 0x198, 0x194, 0x3, 0x2, 
    0x2, 0x2, 0x198, 0x195, 0x3, 0x2, 0x2, 0x2, 0x198, 0x196, 0x3, 0x2, 
    0x2, 0x2, 0x198, 0x197, 0x3, 0x2, 0x2, 0x2, 0x199, 0x19c, 0x3, 0x2, 
    0x2, 0x2, 0x19a, 0x198, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x19b, 0x3, 0x2, 
    0x2, 0x2, 0x19b, 0x1a7, 0x3, 0x2, 0x2, 0x2, 0x19c, 0x19a, 0x3, 0x2, 
    0x2, 0x2, 0x19d, 0x1a3, 0x7, 0x18, 0x2, 0x2, 0x19e, 0x1a3, 0x5, 0x2c, 
    0x17, 0x2, 0x19f, 0x1a3, 0x5, 0x2e, 0x18, 0x2, 0x1a0, 0x1a3, 0x5, 0x30, 
    0x19, 0x2, 0x1a1, 0x1a3, 0x5, 0x36, 0x1c, 0x2, 0x1a2, 0x19d, 0x3, 0x2, 
    0x2, 0x2, 0x1a2, 0x19e, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x19f, 0x3, 0x2, 
    0x2, 0x2, 0x1a2, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x1a1, 0x3, 0x2, 
    0x2, 0x2, 0x1a3, 0x1a4, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x1a2, 0x3, 0x2, 
    0x2, 0x2, 0x1a4, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x1a7, 0x3, 0x2, 
    0x2, 0x2, 0x1a6, 0x191, 0x3, 0x2, 0x2, 0x2, 0x1a6, 0x1a2, 0x3, 0x2, 
    0x2, 0x2, 0x1a7, 0x23, 0x3, 0x2, 0x2, 0x2, 0x1a8, 0x1aa, 0x5, 0x26, 
    0x14, 0x2, 0x1a9, 0x1a8, 0x3, 0x2, 0x2, 0x2, 0x1a9, 0x1aa, 0x3, 0x2, 
    0x2, 0x2, 0x1aa, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1ac, 0x5, 0x28, 
    0x15, 0x2, 0x1ac, 0x25, 0x3, 0x2, 0x2, 0x2, 0x1ad, 0x1b0, 0x5, 0x9c, 
    0x4f, 0x2, 0x1ae, 0x1b0, 0x7, 0x9, 0x2, 0x2, 0x1af, 0x1ad, 0x3, 0x2, 
    0x2, 0x2, 0x1af, 0x1ae, 0x3, 0x2, 0x2, 0x2, 0x1af, 0x1b0, 0x3, 0x2, 
    0x2, 0x2, 0x1b0, 0x1b1, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1b2, 0x7, 0xa, 
    0x2, 0x2, 0x1b2, 0x27, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1b4, 0x5, 0x9c, 
    0x4f, 0x2, 0x1b4, 0x29, 0x3, 0x2, 0x2, 0x2, 0x1b5, 0x1b7, 0x5, 0x26, 
    0x14, 0x2, 0x1b6, 0x1b5, 0x3, 0x2, 0x2, 0x2, 0x1b6, 0x1b7, 0x3, 0x2, 
    0x2, 0x2, 0x1b7, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1b9, 0x7, 0x9, 
    0x2, 0x2, 0x1b9, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x1ba, 0x1bb, 0x7, 0xb, 0x2, 
    0x2, 0x1bb, 0x1bc, 0x5, 0x9c, 0x4f, 0x2, 0x1bc, 0x2d, 0x3, 0x2, 0x2, 
    0x2, 0x1bd, 0x1be, 0x7, 0xc, 0x2, 0x2, 0x1be, 0x1c0, 0x5, 0x9e, 0x50, 
    0x2, 0x1bf, 0x1c1, 0x5, 0x26, 0x14, 0x2, 0x1c0, 0x1bf, 0x3, 0x2, 0x2, 
    0x2, 0x1c0, 0x1c1, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1c2, 0x3, 0x2, 0x2, 
    0x2, 0x1c2, 0x1c3, 0x5, 0x9c, 0x4f, 0x2, 0x1c3, 0x1cc, 0x5, 0x9e, 0x50, 
    0x2, 0x1c4, 0x1c5, 0x9, 0x5, 0x2, 0x2, 0x1c5, 0x1c8, 0x5, 0x9e, 0x50, 
    0x2, 0x1c6, 0x1c9, 0x5, 0x9c, 0x4f, 0x2, 0x1c7, 0x1c9, 0x7, 0x2e, 0x2, 
    0x2, 0x1c8, 0x1c6, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x1c7, 0x3, 0x2, 0x2, 
    0x2, 0x1c9, 0x1ca, 0x3, 0x2, 0x2, 0x2, 0x1ca, 0x1cb, 0x5, 0x9e, 0x50, 
    0x2, 0x1cb, 0x1cd, 0x3, 0x2, 0x2, 0x2, 0x1cc, 0x1c4, 0x3, 0x2, 0x2, 
    0x2, 0x1cc, 0x1cd, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1ce, 0x3, 0x2, 0x2, 
    0x2, 0x1ce, 0x1cf, 0x7, 0xe, 0x2, 0x2, 0x1cf, 0x2f, 0x3, 0x2, 0x2, 0x2, 
    0x1d0, 0x1d2, 0x7, 0x5, 0x2, 0x2, 0x1d1, 0x1d3, 0x7, 0x5, 0x2, 0x2, 
    0x1d2, 0x1d1, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0x1d3, 0x3, 0x2, 0x2, 0x2, 
    0x1d3, 0x1d6, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1d7, 0x5, 0x9c, 0x4f, 0x2, 
    0x1d5, 0x1d7, 0x5, 0x32, 0x1a, 0x2, 0x1d6, 0x1d4, 0x3, 0x2, 0x2, 0x2, 
    0x1d6, 0x1d5, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x31, 0x3, 0x2, 0x2, 0x2, 0x1d8, 
    0x1d9, 0x7, 0x40, 0x2, 0x2, 0x1d9, 0x1da, 0x5, 0x9e, 0x50, 0x2, 0x1da, 
    0x1db, 0x5, 0x34, 0x1b, 0x2, 0x1db, 0x1dc, 0x7, 0x6, 0x2, 0x2, 0x1dc, 
    0x33, 0x3, 0x2, 0x2, 0x2, 0x1dd, 0x1e5, 0x7, 0x27, 0x2, 0x2, 0x1de, 
    0x1e5, 0x7, 0x28, 0x2, 0x2, 0x1df, 0x1e5, 0x7, 0x25, 0x2, 0x2, 0x1e0, 
    0x1e5, 0x7, 0x26, 0x2, 0x2, 0x1e1, 0x1e5, 0x7, 0x2d, 0x2, 0x2, 0x1e2, 
    0x1e5, 0x7, 0x2e, 0x2, 0x2, 0x1e3, 0x1e5, 0x5, 0x9c, 0x4f, 0x2, 0x1e4, 
    0x1dd, 0x3, 0x2, 0x2, 0x2, 0x1e4, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x1e4, 
    0x1df, 0x3, 0x2, 0x2, 0x2, 0x1e4, 0x1e0, 0x3, 0x2, 0x2, 0x2, 0x1e4, 
    0x1e1, 0x3, 0x2, 0x2, 0x2, 0x1e4, 0x1e2, 0x3, 0x2, 0x2, 0x2, 0x1e4, 
    0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1e5, 0x1e6, 0x3, 0x2, 0x2, 0x2, 0x1e6, 
    0x1e8, 0x5, 0x9e, 0x50, 0x2, 0x1e7, 0x1e4, 0x3, 0x2, 0x2, 0x2, 0x1e8, 
    0x1e9, 0x3, 0x2, 0x2, 0x2, 0x1e9, 0x1e7, 0x3, 0x2, 0x2, 0x2, 0x1e9, 
    0x1ea, 0x3, 0x2, 0x2, 0x2, 0x1ea, 0x35, 0x3, 0x2, 0x2, 0x2, 0x1eb, 0x1ec, 
    0x7, 0x2c, 0x2, 0x2, 0x1ec, 0x1ed, 0x5, 0x9e, 0x50, 0x2, 0x1ed, 0x1ee, 
    0x5, 0x38, 0x1d, 0x2, 0x1ee, 0x1ef, 0x5, 0x9e, 0x50, 0x2, 0x1ef, 0x1f0, 
    0x7, 0x6, 0x2, 0x2, 0x1f0, 0x37, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1f8, 0x5, 
    0x24, 0x13, 0x2, 0x1f2, 0x1f8, 0x5, 0x2a, 0x16, 0x2, 0x1f3, 0x1f8, 0x7, 
    0x18, 0x2, 0x2, 0x1f4, 0x1f8, 0x5, 0x2c, 0x17, 0x2, 0x1f5, 0x1f8, 0x5, 
    0x2e, 0x18, 0x2, 0x1f6, 0x1f8, 0x5, 0x30, 0x19, 0x2, 0x1f7, 0x1f1, 0x3, 
    0x2, 0x2, 0x2, 0x1f7, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1f3, 0x3, 
    0x2, 0x2, 0x2, 0x1f7, 0x1f4, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1f5, 0x3, 
    0x2, 0x2, 0x2, 0x1f7, 0x1f6, 0x3, 0x2, 0x2, 0x2, 0x1f8, 0x39, 0x3, 0x2, 
    0x2, 0x2, 0x1f9, 0x1fa, 0x7, 0xf, 0x2, 0x2, 0x1fa, 0x202, 0x5, 0x9e, 
    0x50, 0x2, 0x1fb, 0x1fc, 0x7, 0x2a, 0x2, 0x2, 0x1fc, 0x202, 0x5, 0x9e, 
    0x50, 0x2, 0x1fd, 0x1fe, 0x7, 0x13, 0x2, 0x2, 0x1fe, 0x202, 0x5, 0x9e, 
    0x50, 0x2, 0x1ff, 0x200, 0x7, 0xd, 0x2, 0x2, 0x200, 0x202, 0x5, 0x9e, 
    0x50, 0x2, 0x201, 0x1f9, 0x3, 0x2, 0x2, 0x2, 0x201, 0x1fb, 0x3, 0x2, 
    0x2, 0x2, 0x201, 0x1fd, 0x3, 0x2, 0x2, 0x2, 0x201, 0x1ff, 0x3, 0x2, 
    0x2, 0x2, 0x202, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x203, 0x204, 0x5, 0x9c, 
    0x4f, 0x2, 0x204, 0x205, 0x5, 0x9e, 0x50, 0x2, 0x205, 0x20d, 0x3, 0x2, 
    0x2, 0x2, 0x206, 0x207, 0x7, 0x3d, 0x2, 0x2, 0x207, 0x20d, 0x5, 0x9e, 
    0x50, 0x2, 0x208, 0x209, 0x7, 0x9, 0x2, 0x2, 0x209, 0x20d, 0x5, 0x9c, 
    0x4f, 0x2, 0x20a, 0x20b, 0x7, 0x10, 0x2, 0x2, 0x20b, 0x20d, 0x5, 0x9c, 
    0x4f, 0x2, 0x20c, 0x203, 0x3, 0x2, 0x2, 0x2, 0x20c, 0x206, 0x3, 0x2, 
    0x2, 0x2, 0x20c, 0x208, 0x3, 0x2, 0x2, 0x2, 0x20c, 0x20a, 0x3, 0x2, 
    0x2, 0x2, 0x20d, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x20e, 0x20f, 0x5, 0x1c, 
    0xf, 0x2, 0x20f, 0x210, 0x7, 0x7, 0x2, 0x2, 0x210, 0x212, 0x5, 0x9e, 
    0x50, 0x2, 0x211, 0x213, 0x5, 0x40, 0x21, 0x2, 0x212, 0x211, 0x3, 0x2, 
    0x2, 0x2, 0x212, 0x213, 0x3, 0x2, 0x2, 0x2, 0x213, 0x214, 0x3, 0x2, 
    0x2, 0x2, 0x214, 0x215, 0x7, 0x8, 0x2, 0x2, 0x215, 0x216, 0x5, 0x9e, 
    0x50, 0x2, 0x216, 0x226, 0x3, 0x2, 0x2, 0x2, 0x217, 0x219, 0x5, 0x5a, 
    0x2e, 0x2, 0x218, 0x217, 0x3, 0x2, 0x2, 0x2, 0x219, 0x21c, 0x3, 0x2, 
    0x2, 0x2, 0x21a, 0x218, 0x3, 0x2, 0x2, 0x2, 0x21a, 0x21b, 0x3, 0x2, 
    0x2, 0x2, 0x21b, 0x21d, 0x3, 0x2, 0x2, 0x2, 0x21c, 0x21a, 0x3, 0x2, 
    0x2, 0x2, 0x21d, 0x21e, 0x7, 0x7, 0x2, 0x2, 0x21e, 0x220, 0x5, 0x9e, 
    0x50, 0x2, 0x21f, 0x221, 0x5, 0x40, 0x21, 0x2, 0x220, 0x21f, 0x3, 0x2, 
    0x2, 0x2, 0x220, 0x221, 0x3, 0x2, 0x2, 0x2, 0x221, 0x222, 0x3, 0x2, 
    0x2, 0x2, 0x222, 0x223, 0x7, 0x8, 0x2, 0x2, 0x223, 0x224, 0x5, 0x9e, 
    0x50, 0x2, 0x224, 0x226, 0x3, 0x2, 0x2, 0x2, 0x225, 0x20e, 0x3, 0x2, 
    0x2, 0x2, 0x225, 0x21a, 0x3, 0x2, 0x2, 0x2, 0x226, 0x3f, 0x3, 0x2, 0x2, 
    0x2, 0x227, 0x228, 0x7, 0x3, 0x2, 0x2, 0x228, 0x22a, 0x5, 0x9e, 0x50, 
    0x2, 0x229, 0x227, 0x3, 0x2, 0x2, 0x2, 0x22a, 0x22d, 0x3, 0x2, 0x2, 
    0x2, 0x22b, 0x229, 0x3, 0x2, 0x2, 0x2, 0x22b, 0x22c, 0x3, 0x2, 0x2, 
    0x2, 0x22c, 0x22e, 0x3, 0x2, 0x2, 0x2, 0x22d, 0x22b, 0x3, 0x2, 0x2, 
    0x2, 0x22e, 0x22f, 0x5, 0x42, 0x22, 0x2, 0x22f, 0x237, 0x5, 0x9e, 0x50, 
    0x2, 0x230, 0x231, 0x7, 0x3, 0x2, 0x2, 0x231, 0x233, 0x5, 0x9e, 0x50, 
    0x2, 0x232, 0x234, 0x5, 0x42, 0x22, 0x2, 0x233, 0x232, 0x3, 0x2, 0x2, 
    0x2, 0x233, 0x234, 0x3, 0x2, 0x2, 0x2, 0x234, 0x236, 0x3, 0x2, 0x2, 
    0x2, 0x235, 0x230, 0x3, 0x2, 0x2, 0x2, 0x236, 0x239, 0x3, 0x2, 0x2, 
    0x2, 0x237, 0x235, 0x3, 0x2, 0x2, 0x2, 0x237, 0x238, 0x3, 0x2, 0x2, 
    0x2, 0x238, 0x41, 0x3, 0x2, 0x2, 0x2, 0x239, 0x237, 0x3, 0x2, 0x2, 0x2, 
    0x23a, 0x23b, 0x5, 0x3c, 0x1f, 0x2, 0x23b, 0x23c, 0x7, 0x5, 0x2, 0x2, 
    0x23c, 0x23d, 0x5, 0x9e, 0x50, 0x2, 0x23d, 0x23f, 0x5, 0x48, 0x25, 0x2, 
    0x23e, 0x240, 0x5, 0x44, 0x23, 0x2, 0x23f, 0x23e, 0x3, 0x2, 0x2, 0x2, 
    0x23f, 0x240, 0x3, 0x2, 0x2, 0x2, 0x240, 0x247, 0x3, 0x2, 0x2, 0x2, 
    0x241, 0x242, 0x5, 0x3c, 0x1f, 0x2, 0x242, 0x243, 0x7, 0x5, 0x2, 0x2, 
    0x243, 0x244, 0x5, 0x9e, 0x50, 0x2, 0x244, 0x245, 0x5, 0x46, 0x24, 0x2, 
    0x245, 0x247, 0x3, 0x2, 0x2, 0x2, 0x246, 0x23a, 0x3, 0x2, 0x2, 0x2, 
    0x246, 0x241, 0x3, 0x2, 0x2, 0x2, 0x247, 0x43, 0x3, 0x2, 0x2, 0x2, 0x248, 
    0x249, 0x7, 0x1e, 0x2, 0x2, 0x249, 0x24a, 0x5, 0x9e, 0x50, 0x2, 0x24a, 
    0x45, 0x3, 0x2, 0x2, 0x2, 0x24b, 0x251, 0x5, 0x5a, 0x2e, 0x2, 0x24c, 
    0x251, 0x5, 0x62, 0x32, 0x2, 0x24d, 0x24e, 0x5, 0x5e, 0x30, 0x2, 0x24e, 
    0x24f, 0x5, 0x9e, 0x50, 0x2, 0x24f, 0x251, 0x3, 0x2, 0x2, 0x2, 0x250, 
    0x24b, 0x3, 0x2, 0x2, 0x2, 0x250, 0x24c, 0x3, 0x2, 0x2, 0x2, 0x250, 
    0x24d, 0x3, 0x2, 0x2, 0x2, 0x251, 0x252, 0x3, 0x2, 0x2, 0x2, 0x252, 
    0x250, 0x3, 0x2, 0x2, 0x2, 0x252, 0x253, 0x3, 0x2, 0x2, 0x2, 0x253, 
    0x47, 0x3, 0x2, 0x2, 0x2, 0x254, 0x25b, 0x5, 0x4a, 0x26, 0x2, 0x255, 
    0x257, 0x5, 0x3a, 0x1e, 0x2, 0x256, 0x255, 0x3, 0x2, 0x2, 0x2, 0x256, 
    0x257, 0x3, 0x2, 0x2, 0x2, 0x257, 0x258, 0x3, 0x2, 0x2, 0x2, 0x258, 
    0x25a, 0x5, 0x4a, 0x26, 0x2, 0x259, 0x256, 0x3, 0x2, 0x2, 0x2, 0x25a, 
    0x25d, 0x3, 0x2, 0x2, 0x2, 0x25b, 0x259, 0x3, 0x2, 0x2, 0x2, 0x25b, 
    0x25c, 0x3, 0x2, 0x2, 0x2, 0x25c, 0x49, 0x3, 0x2, 0x2, 0x2, 0x25d, 0x25b, 
    0x3, 0x2, 0x2, 0x2, 0x25e, 0x25f, 0x5, 0x52, 0x2a, 0x2, 0x25f, 0x260, 
    0x5, 0x9e, 0x50, 0x2, 0x260, 0x279, 0x3, 0x2, 0x2, 0x2, 0x261, 0x262, 
    0x5, 0x54, 0x2b, 0x2, 0x262, 0x263, 0x5, 0x9e, 0x50, 0x2, 0x263, 0x279, 
    0x3, 0x2, 0x2, 0x2, 0x264, 0x265, 0x5, 0x56, 0x2c, 0x2, 0x265, 0x266, 
    0x5, 0x9e, 0x50, 0x2, 0x266, 0x279, 0x3, 0x2, 0x2, 0x2, 0x267, 0x268, 
    0x7, 0x2e, 0x2, 0x2, 0x268, 0x279, 0x5, 0x9e, 0x50, 0x2, 0x269, 0x26a, 
    0x7, 0x21, 0x2, 0x2, 0x26a, 0x279, 0x5, 0x9e, 0x50, 0x2, 0x26b, 0x26c, 
    0x5, 0x9c, 0x4f, 0x2, 0x26c, 0x26d, 0x5, 0x9e, 0x50, 0x2, 0x26d, 0x279, 
    0x3, 0x2, 0x2, 0x2, 0x26e, 0x279, 0x5, 0x78, 0x3d, 0x2, 0x26f, 0x270, 
    0x7, 0x20, 0x2, 0x2, 0x270, 0x279, 0x5, 0x9e, 0x50, 0x2, 0x271, 0x279, 
    0x5, 0x50, 0x29, 0x2, 0x272, 0x279, 0x5, 0x7a, 0x3e, 0x2, 0x273, 0x279, 
    0x5, 0x4c, 0x27, 0x2, 0x274, 0x275, 0x5, 0x58, 0x2d, 0x2, 0x275, 0x276, 
    0x5, 0x9e, 0x50, 0x2, 0x276, 0x279, 0x3, 0x2, 0x2, 0x2, 0x277, 0x279, 
    0x5, 0x4e, 0x28, 0x2, 0x278, 0x25e, 0x3, 0x2, 0x2, 0x2, 0x278, 0x261, 
    0x3, 0x2, 0x2, 0x2, 0x278, 0x264, 0x3, 0x2, 0x2, 0x2, 0x278, 0x267, 
    0x3, 0x2, 0x2, 0x2, 0x278, 0x269, 0x3, 0x2, 0x2, 0x2, 0x278, 0x26b, 
    0x3, 0x2, 0x2, 0x2, 0x278, 0x26e, 0x3, 0x2, 0x2, 0x2, 0x278, 0x26f, 
    0x3, 0x2, 0x2, 0x2, 0x278, 0x271, 0x3, 0x2, 0x2, 0x2, 0x278, 0x272, 
    0x3, 0x2, 0x2, 0x2, 0x278, 0x273, 0x3, 0x2, 0x2, 0x2, 0x278, 0x274, 
    0x3, 0x2, 0x2, 0x2, 0x278, 0x277, 0x3, 0x2, 0x2, 0x2, 0x279, 0x4b, 0x3, 
    0x2, 0x2, 0x2, 0x27a, 0x27b, 0x7, 0x40, 0x2, 0x2, 0x27b, 0x27c, 0x5, 
    0x9e, 0x50, 0x2, 0x27c, 0x27d, 0x5, 0x48, 0x25, 0x2, 0x27d, 0x27e, 0x7, 
    0x6, 0x2, 0x2, 0x27e, 0x27f, 0x5, 0x9e, 0x50, 0x2, 0x27f, 0x4d, 0x3, 
    0x2, 0x2, 0x2, 0x280, 0x281, 0x7, 0x3c, 0x2, 0x2, 0x281, 0x282, 0x5, 
    0x9e, 0x50, 0x2, 0x282, 0x283, 0x5, 0x48, 0x25, 0x2, 0x283, 0x284, 0x7, 
    0x6, 0x2, 0x2, 0x284, 0x285, 0x5, 0x9e, 0x50, 0x2, 0x285, 0x4f, 0x3, 
    0x2, 0x2, 0x2, 0x286, 0x287, 0x7, 0x18, 0x2, 0x2, 0x287, 0x288, 0x5, 
    0x9e, 0x50, 0x2, 0x288, 0x51, 0x3, 0x2, 0x2, 0x2, 0x289, 0x28b, 0x9, 
    0x6, 0x2, 0x2, 0x28a, 0x289, 0x3, 0x2, 0x2, 0x2, 0x28a, 0x28b, 0x3, 
    0x2, 0x2, 0x2, 0x28b, 0x28c, 0x3, 0x2, 0x2, 0x2, 0x28c, 0x28d, 0x7, 
    0x2d, 0x2, 0x2, 0x28d, 0x53, 0x3, 0x2, 0x2, 0x2, 0x28e, 0x290, 0x9, 
    0x6, 0x2, 0x2, 0x28f, 0x28e, 0x3, 0x2, 0x2, 0x2, 0x28f, 0x290, 0x3, 
    0x2, 0x2, 0x2, 0x290, 0x291, 0x3, 0x2, 0x2, 0x2, 0x291, 0x292, 0x7, 
    0x1f, 0x2, 0x2, 0x292, 0x55, 0x3, 0x2, 0x2, 0x2, 0x293, 0x295, 0x9, 
    0x6, 0x2, 0x2, 0x294, 0x293, 0x3, 0x2, 0x2, 0x2, 0x294, 0x295, 0x3, 
    0x2, 0x2, 0x2, 0x295, 0x296, 0x3, 0x2, 0x2, 0x2, 0x296, 0x297, 0x7, 
    0x25, 0x2, 0x2, 0x297, 0x57, 0x3, 0x2, 0x2, 0x2, 0x298, 0x29a, 0x9, 
    0x6, 0x2, 0x2, 0x299, 0x298, 0x3, 0x2, 0x2, 0x2, 0x299, 0x29a, 0x3, 
    0x2, 0x2, 0x2, 0x29a, 0x29b, 0x3, 0x2, 0x2, 0x2, 0x29b, 0x29c, 0x7, 
    0x26, 0x2, 0x2, 0x29c, 0x59, 0x3, 0x2, 0x2, 0x2, 0x29d, 0x29e, 0x5, 
    0x9c, 0x4f, 0x2, 0x29e, 0x29f, 0x5, 0x9e, 0x50, 0x2, 0x29f, 0x2df, 0x3, 
    0x2, 0x2, 0x2, 0x2a0, 0x2a1, 0x5, 0x52, 0x2a, 0x2, 0x2a1, 0x2a2, 0x5, 
    0x9e, 0x50, 0x2, 0x2a2, 0x2df, 0x3, 0x2, 0x2, 0x2, 0x2a3, 0x2a4, 0x5, 
    0x54, 0x2b, 0x2, 0x2a4, 0x2a5, 0x5, 0x9e, 0x50, 0x2, 0x2a5, 0x2df, 0x3, 
    0x2, 0x2, 0x2, 0x2a6, 0x2a7, 0x5, 0x56, 0x2c, 0x2, 0x2a7, 0x2a8, 0x5, 
    0x9e, 0x50, 0x2, 0x2a8, 0x2df, 0x3, 0x2, 0x2, 0x2, 0x2a9, 0x2aa, 0x5, 
    0x58, 0x2d, 0x2, 0x2aa, 0x2ab, 0x5, 0x9e, 0x50, 0x2, 0x2ab, 0x2df, 0x3, 
    0x2, 0x2, 0x2, 0x2ac, 0x2ad, 0x7, 0x2e, 0x2, 0x2, 0x2ad, 0x2df, 0x5, 
    0x9e, 0x50, 0x2, 0x2ae, 0x2af, 0x7, 0x20, 0x2, 0x2, 0x2af, 0x2df, 0x5, 
    0x9e, 0x50, 0x2, 0x2b0, 0x2b1, 0x7, 0x18, 0x2, 0x2, 0x2b1, 0x2df, 0x5, 
    0x9e, 0x50, 0x2, 0x2b2, 0x2b3, 0x7, 0x21, 0x2, 0x2, 0x2b3, 0x2df, 0x5, 
    0x9e, 0x50, 0x2, 0x2b4, 0x2b5, 0x7, 0x16, 0x2, 0x2, 0x2b5, 0x2df, 0x5, 
    0x9e, 0x50, 0x2, 0x2b6, 0x2b7, 0x7, 0x17, 0x2, 0x2, 0x2b7, 0x2df, 0x5, 
    0x9e, 0x50, 0x2, 0x2b8, 0x2b9, 0x7, 0x5, 0x2, 0x2, 0x2b9, 0x2df, 0x5, 
    0x9e, 0x50, 0x2, 0x2ba, 0x2bb, 0x7, 0x40, 0x2, 0x2, 0x2bb, 0x2c0, 0x5, 
    0x9e, 0x50, 0x2, 0x2bc, 0x2bf, 0x5, 0x5a, 0x2e, 0x2, 0x2bd, 0x2bf, 0x5, 
    0x60, 0x31, 0x2, 0x2be, 0x2bc, 0x3, 0x2, 0x2, 0x2, 0x2be, 0x2bd, 0x3, 
    0x2, 0x2, 0x2, 0x2bf, 0x2c2, 0x3, 0x2, 0x2, 0x2, 0x2c0, 0x2be, 0x3, 
    0x2, 0x2, 0x2, 0x2c0, 0x2c1, 0x3, 0x2, 0x2, 0x2, 0x2c1, 0x2c3, 0x3, 
    0x2, 0x2, 0x2, 0x2c2, 0x2c0, 0x3, 0x2, 0x2, 0x2, 0x2c3, 0x2c4, 0x7, 
    0x6, 0x2, 0x2, 0x2c4, 0x2c5, 0x5, 0x9e, 0x50, 0x2, 0x2c5, 0x2df, 0x3, 
    0x2, 0x2, 0x2, 0x2c6, 0x2c7, 0x7, 0x4, 0x2, 0x2, 0x2c7, 0x2cc, 0x5, 
    0x9e, 0x50, 0x2, 0x2c8, 0x2cb, 0x5, 0x5a, 0x2e, 0x2, 0x2c9, 0x2cb, 0x5, 
    0x60, 0x31, 0x2, 0x2ca, 0x2c8, 0x3, 0x2, 0x2, 0x2, 0x2ca, 0x2c9, 0x3, 
    0x2, 0x2, 0x2, 0x2cb, 0x2ce, 0x3, 0x2, 0x2, 0x2, 0x2cc, 0x2ca, 0x3, 
    0x2, 0x2, 0x2, 0x2cc, 0x2cd, 0x3, 0x2, 0x2, 0x2, 0x2cd, 0x2cf, 0x3, 
    0x2, 0x2, 0x2, 0x2ce, 0x2cc, 0x3, 0x2, 0x2, 0x2, 0x2cf, 0x2d0, 0x7, 
    0x6, 0x2, 0x2, 0x2d0, 0x2d1, 0x5, 0x9e, 0x50, 0x2, 0x2d1, 0x2df, 0x3, 
    0x2, 0x2, 0x2, 0x2d2, 0x2d3, 0x7, 0xc, 0x2, 0x2, 0x2d3, 0x2d8, 0x5, 
    0x9e, 0x50, 0x2, 0x2d4, 0x2d7, 0x5, 0x5a, 0x2e, 0x2, 0x2d5, 0x2d7, 0x5, 
    0x60, 0x31, 0x2, 0x2d6, 0x2d4, 0x3, 0x2, 0x2, 0x2, 0x2d6, 0x2d5, 0x3, 
    0x2, 0x2, 0x2, 0x2d7, 0x2da, 0x3, 0x2, 0x2, 0x2, 0x2d8, 0x2d6, 0x3, 
    0x2, 0x2, 0x2, 0x2d8, 0x2d9, 0x3, 0x2, 0x2, 0x2, 0x2d9, 0x2db, 0x3, 
    0x2, 0x2, 0x2, 0x2da, 0x2d8, 0x3, 0x2, 0x2, 0x2, 0x2db, 0x2dc, 0x7, 
    0xe, 0x2, 0x2, 0x2dc, 0x2dd, 0x5, 0x9e, 0x50, 0x2, 0x2dd, 0x2df, 0x3, 
    0x2, 0x2, 0x2, 0x2de, 0x29d, 0x3, 0x2, 0x2, 0x2, 0x2de, 0x2a0, 0x3, 
    0x2, 0x2, 0x2, 0x2de, 0x2a3, 0x3, 0x2, 0x2, 0x2, 0x2de, 0x2a6, 0x3, 
    0x2, 0x2, 0x2, 0x2de, 0x2a9, 0x3, 0x2, 0x2, 0x2, 0x2de, 0x2ac, 0x3, 
    0x2, 0x2, 0x2, 0x2de, 0x2ae, 0x3, 0x2, 0x2, 0x2, 0x2de, 0x2b0, 0x3, 
    0x2, 0x2, 0x2, 0x2de, 0x2b2, 0x3, 0x2, 0x2, 0x2, 0x2de, 0x2b4, 0x3, 
    0x2, 0x2, 0x2, 0x2de, 0x2b6, 0x3, 0x2, 0x2, 0x2, 0x2de, 0x2b8, 0x3, 
    0x2, 0x2, 0x2, 0x2de, 0x2ba, 0x3, 0x2, 0x2, 0x2, 0x2de, 0x2c6, 0x3, 
    0x2, 0x2, 0x2, 0x2de, 0x2d2, 0x3, 0x2, 0x2, 0x2, 0x2df, 0x5b, 0x3, 0x2, 
    0x2, 0x2, 0x2e0, 0x2e1, 0x5, 0x5e, 0x30, 0x2, 0x2e1, 0x2e5, 0x5, 0x9e, 
    0x50, 0x2, 0x2e2, 0x2e4, 0x5, 0x5a, 0x2e, 0x2, 0x2e3, 0x2e2, 0x3, 0x2, 
    0x2, 0x2, 0x2e4, 0x2e7, 0x3, 0x2, 0x2, 0x2, 0x2e5, 0x2e3, 0x3, 0x2, 
    0x2, 0x2, 0x2e5, 0x2e6, 0x3, 0x2, 0x2, 0x2, 0x2e6, 0x2eb, 0x3, 0x2, 
    0x2, 0x2, 0x2e7, 0x2e5, 0x3, 0x2, 0x2, 0x2, 0x2e8, 0x2ec, 0x5, 0x62, 
    0x32, 0x2, 0x2e9, 0x2ea, 0x7, 0x3, 0x2, 0x2, 0x2ea, 0x2ec, 0x5, 0x9e, 
    0x50, 0x2, 0x2eb, 0x2e8, 0x3, 0x2, 0x2, 0x2, 0x2eb, 0x2e9, 0x3, 0x2, 
    0x2, 0x2, 0x2ec, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x2ed, 0x2ee, 0x7, 0x11, 
    0x2, 0x2, 0x2ee, 0x2ef, 0x5, 0x9c, 0x4f, 0x2, 0x2ef, 0x5f, 0x3, 0x2, 
    0x2, 0x2, 0x2f0, 0x2fb, 0x5, 0x62, 0x32, 0x2, 0x2f1, 0x2f2, 0x5, 0x5e, 
    0x30, 0x2, 0x2f2, 0x2f3, 0x5, 0x9e, 0x50, 0x2, 0x2f3, 0x2fb, 0x3, 0x2, 
    0x2, 0x2, 0x2f4, 0x2f5, 0x7, 0x3, 0x2, 0x2, 0x2f5, 0x2fb, 0x5, 0x9e, 
    0x50, 0x2, 0x2f6, 0x2f7, 0x7, 0x14, 0x2, 0x2, 0x2f7, 0x2fb, 0x5, 0x9e, 
    0x50, 0x2, 0x2f8, 0x2f9, 0x7, 0x15, 0x2, 0x2, 0x2f9, 0x2fb, 0x5, 0x9e, 
    0x50, 0x2, 0x2fa, 0x2f0, 0x3, 0x2, 0x2, 0x2, 0x2fa, 0x2f1, 0x3, 0x2, 
    0x2, 0x2, 0x2fa, 0x2f4, 0x3, 0x2, 0x2, 0x2, 0x2fa, 0x2f6, 0x3, 0x2, 
    0x2, 0x2, 0x2fa, 0x2f8, 0x3, 0x2, 0x2, 0x2, 0x2fb, 0x61, 0x3, 0x2, 0x2, 
    0x2, 0x2fc, 0x2fd, 0x7, 0x7, 0x2, 0x2, 0x2fd, 0x309, 0x5, 0x9e, 0x50, 
    0x2, 0x2fe, 0x308, 0x5, 0x40, 0x21, 0x2, 0x2ff, 0x308, 0x5, 0x64, 0x33, 
    0x2, 0x300, 0x308, 0x5, 0x5a, 0x2e, 0x2, 0x301, 0x308, 0x5, 0x62, 0x32, 
    0x2, 0x302, 0x303, 0x5, 0x5e, 0x30, 0x2, 0x303, 0x304, 0x5, 0x9e, 0x50, 
    0x2, 0x304, 0x308, 0x3, 0x2, 0x2, 0x2, 0x305, 0x306, 0x7, 0x3, 0x2, 
    0x2, 0x306, 0x308, 0x5, 0x9e, 0x50, 0x2, 0x307, 0x2fe, 0x3, 0x2, 0x2, 
    0x2, 0x307, 0x2ff, 0x3, 0x2, 0x2, 0x2, 0x307, 0x300, 0x3, 0x2, 0x2, 
    0x2, 0x307, 0x301, 0x3, 0x2, 0x2, 0x2, 0x307, 0x302, 0x3, 0x2, 0x2, 
    0x2, 0x307, 0x305, 0x3, 0x2, 0x2, 0x2, 0x308, 0x30b, 0x3, 0x2, 0x2, 
    0x2, 0x309, 0x307, 0x3, 0x2, 0x2, 0x2, 0x309, 0x30a, 0x3, 0x2, 0x2, 
    0x2, 0x30a, 0x30c, 0x3, 0x2, 0x2, 0x2, 0x30b, 0x309, 0x3, 0x2, 0x2, 
    0x2, 0x30c, 0x30d, 0x7, 0x8, 0x2, 0x2, 0x30d, 0x30e, 0x5, 0x9e, 0x50, 
    0x2, 0x30e, 0x63, 0x3, 0x2, 0x2, 0x2, 0x30f, 0x31a, 0x5, 0x3e, 0x20, 
    0x2, 0x310, 0x31a, 0x5, 0xc, 0x7, 0x2, 0x311, 0x31a, 0x5, 0x18, 0xd, 
    0x2, 0x312, 0x31a, 0x5, 0x82, 0x42, 0x2, 0x313, 0x31a, 0x5, 0x86, 0x44, 
    0x2, 0x314, 0x31a, 0x5, 0x68, 0x35, 0x2, 0x315, 0x31a, 0x5, 0x8c, 0x47, 
    0x2, 0x316, 0x31a, 0x5, 0x8e, 0x48, 0x2, 0x317, 0x31a, 0x5, 0x90, 0x49, 
    0x2, 0x318, 0x31a, 0x5, 0x5c, 0x2f, 0x2, 0x319, 0x30f, 0x3, 0x2, 0x2, 
    0x2, 0x319, 0x310, 0x3, 0x2, 0x2, 0x2, 0x319, 0x311, 0x3, 0x2, 0x2, 
    0x2, 0x319, 0x312, 0x3, 0x2, 0x2, 0x2, 0x319, 0x313, 0x3, 0x2, 0x2, 
    0x2, 0x319, 0x314, 0x3, 0x2, 0x2, 0x2, 0x319, 0x315, 0x3, 0x2, 0x2, 
    0x2, 0x319, 0x316, 0x3, 0x2, 0x2, 0x2, 0x319, 0x317, 0x3, 0x2, 0x2, 
    0x2, 0x319, 0x318, 0x3, 0x2, 0x2, 0x2, 0x31a, 0x65, 0x3, 0x2, 0x2, 0x2, 
    0x31b, 0x31c, 0x7, 0x7, 0x2, 0x2, 0x31c, 0x320, 0x5, 0x9e, 0x50, 0x2, 
    0x31d, 0x31f, 0x5, 0x64, 0x33, 0x2, 0x31e, 0x31d, 0x3, 0x2, 0x2, 0x2, 
    0x31f, 0x322, 0x3, 0x2, 0x2, 0x2, 0x320, 0x31e, 0x3, 0x2, 0x2, 0x2, 
    0x320, 0x321, 0x3, 0x2, 0x2, 0x2, 0x321, 0x323, 0x3, 0x2, 0x2, 0x2, 
    0x322, 0x320, 0x3, 0x2, 0x2, 0x2, 0x323, 0x324, 0x7, 0x8, 0x2, 0x2, 
    0x324, 0x325, 0x5, 0x9e, 0x50, 0x2, 0x325, 0x67, 0x3, 0x2, 0x2, 0x2, 
    0x326, 0x327, 0x7, 0x33, 0x2, 0x2, 0x327, 0x328, 0x5, 0x9e, 0x50, 0x2, 
    0x328, 0x329, 0x5, 0x6a, 0x36, 0x2, 0x329, 0x32a, 0x5, 0x9e, 0x50, 0x2, 
    0x32a, 0x32b, 0x5, 0x66, 0x34, 0x2, 0x32b, 0x69, 0x3, 0x2, 0x2, 0x2, 
    0x32c, 0x331, 0x5, 0x6e, 0x38, 0x2, 0x32d, 0x331, 0x5, 0x70, 0x39, 0x2, 
    0x32e, 0x331, 0x5, 0x72, 0x3a, 0x2, 0x32f, 0x331, 0x5, 0x6c, 0x37, 0x2, 
    0x330, 0x32c, 0x3, 0x2, 0x2, 0x2, 0x330, 0x32d, 0x3, 0x2, 0x2, 0x2, 
    0x330, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x330, 0x32f, 0x3, 0x2, 0x2, 0x2, 
    0x331, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x332, 0x333, 0x7, 0x4, 0x2, 0x2, 0x333, 
    0x334, 0x5, 0x9e, 0x50, 0x2, 0x334, 0x335, 0x5, 0x6a, 0x36, 0x2, 0x335, 
    0x336, 0x5, 0x9e, 0x50, 0x2, 0x336, 0x337, 0x7, 0x6, 0x2, 0x2, 0x337, 
    0x33b, 0x3, 0x2, 0x2, 0x2, 0x338, 0x33b, 0x5, 0x74, 0x3b, 0x2, 0x339, 
    0x33b, 0x5, 0x76, 0x3c, 0x2, 0x33a, 0x332, 0x3, 0x2, 0x2, 0x2, 0x33a, 
    0x338, 0x3, 0x2, 0x2, 0x2, 0x33a, 0x339, 0x3, 0x2, 0x2, 0x2, 0x33b, 
    0x6d, 0x3, 0x2, 0x2, 0x2, 0x33c, 0x33d, 0x7, 0x23, 0x2, 0x2, 0x33d, 
    0x33e, 0x5, 0x9e, 0x50, 0x2, 0x33e, 0x33f, 0x7, 0x13, 0x2, 0x2, 0x33f, 
    0x340, 0x5, 0x9e, 0x50, 0x2, 0x340, 0x341, 0x5, 0x6c, 0x37, 0x2, 0x341, 
    0x6f, 0x3, 0x2, 0x2, 0x2, 0x342, 0x34c, 0x5, 0x6c, 0x37, 0x2, 0x343, 
    0x344, 0x5, 0x9e, 0x50, 0x2, 0x344, 0x345, 0x7, 0x13, 0x2, 0x2, 0x345, 
    0x346, 0x5, 0x9e, 0x50, 0x2, 0x346, 0x347, 0x7, 0x24, 0x2, 0x2, 0x347, 
    0x348, 0x5, 0x9e, 0x50, 0x2, 0x348, 0x349, 0x7, 0x13, 0x2, 0x2, 0x349, 
    0x34a, 0x5, 0x9e, 0x50, 0x2, 0x34a, 0x34b, 0x5, 0x6c, 0x37, 0x2, 0x34b, 
    0x34d, 0x3, 0x2, 0x2, 0x2, 0x34c, 0x343, 0x3, 0x2, 0x2, 0x2, 0x34d, 
    0x34e, 0x3, 0x2, 0x2, 0x2, 0x34e, 0x34c, 0x3, 0x2, 0x2, 0x2, 0x34e, 
    0x34f, 0x3, 0x2, 0x2, 0x2, 0x34f, 0x71, 0x3, 0x2, 0x2, 0x2, 0x350, 0x35a, 
    0x5, 0x6c, 0x37, 0x2, 0x351, 0x352, 0x5, 0x9e, 0x50, 0x2, 0x352, 0x353, 
    0x7, 0x13, 0x2, 0x2, 0x353, 0x354, 0x5, 0x9e, 0x50, 0x2, 0x354, 0x355, 
    0x7, 0x34, 0x2, 0x2, 0x355, 0x356, 0x5, 0x9e, 0x50, 0x2, 0x356, 0x357, 
    0x7, 0x13, 0x2, 0x2, 0x357, 0x358, 0x5, 0x9e, 0x50, 0x2, 0x358, 0x359, 
    0x5, 0x6c, 0x37, 0x2, 0x359, 0x35b, 0x3, 0x2, 0x2, 0x2, 0x35a, 0x351, 
    0x3, 0x2, 0x2, 0x2, 0x35b, 0x35c, 0x3, 0x2, 0x2, 0x2, 0x35c, 0x35a, 
    0x3, 0x2, 0x2, 0x2, 0x35c, 0x35d, 0x3, 0x2, 0x2, 0x2, 0x35d, 0x73, 0x3, 
    0x2, 0x2, 0x2, 0x35e, 0x35f, 0x7, 0x4, 0x2, 0x2, 0x35f, 0x360, 0x5, 
    0x9e, 0x50, 0x2, 0x360, 0x361, 0x5, 0x42, 0x22, 0x2, 0x361, 0x362, 0x7, 
    0x6, 0x2, 0x2, 0x362, 0x75, 0x3, 0x2, 0x2, 0x2, 0x363, 0x368, 0x9, 0x7, 
    0x2, 0x2, 0x364, 0x367, 0x5, 0x5a, 0x2e, 0x2, 0x365, 0x367, 0x5, 0x60, 
    0x31, 0x2, 0x366, 0x364, 0x3, 0x2, 0x2, 0x2, 0x366, 0x365, 0x3, 0x2, 
    0x2, 0x2, 0x367, 0x36a, 0x3, 0x2, 0x2, 0x2, 0x368, 0x366, 0x3, 0x2, 
    0x2, 0x2, 0x368, 0x369, 0x3, 0x2, 0x2, 0x2, 0x369, 0x36b, 0x3, 0x2, 
    0x2, 0x2, 0x36a, 0x368, 0x3, 0x2, 0x2, 0x2, 0x36b, 0x36c, 0x7, 0x6, 
    0x2, 0x2, 0x36c, 0x77, 0x3, 0x2, 0x2, 0x2, 0x36d, 0x36e, 0x7, 0x3e, 
    0x2, 0x2, 0x36e, 0x36f, 0x5, 0x9e, 0x50, 0x2, 0x36f, 0x370, 0x7, 0x3d, 
    0x2, 0x2, 0x370, 0x371, 0x5, 0x9e, 0x50, 0x2, 0x371, 0x372, 0x7, 0x6, 
    0x2, 0x2, 0x372, 0x373, 0x5, 0x9e, 0x50, 0x2, 0x373, 0x79, 0x3, 0x2, 
    0x2, 0x2, 0x374, 0x375, 0x7, 0x38, 0x2, 0x2, 0x375, 0x376, 0x5, 0x9e, 
    0x50, 0x2, 0x376, 0x377, 0x5, 0x7c, 0x3f, 0x2, 0x377, 0x378, 0x7, 0x6, 
    0x2, 0x2, 0x378, 0x379, 0x5, 0x9e, 0x50, 0x2, 0x379, 0x7b, 0x3, 0x2, 
    0x2, 0x2, 0x37a, 0x385, 0x5, 0x7e, 0x40, 0x2, 0x37b, 0x37c, 0x7, 0x13, 
    0x2, 0x2, 0x37c, 0x37d, 0x5, 0x9e, 0x50, 0x2, 0x37d, 0x37e, 0x9, 0x6, 
    0x2, 0x2, 0x37e, 0x37f, 0x5, 0x9e, 0x50, 0x2, 0x37f, 0x380, 0x7, 0x13, 
    0x2, 0x2, 0x380, 0x381, 0x5, 0x9e, 0x50, 0x2, 0x381, 0x382, 0x5, 0x7e, 
    0x40, 0x2, 0x382, 0x384, 0x3, 0x2, 0x2, 0x2, 0x383, 0x37b, 0x3, 0x2, 
    0x2, 0x2, 0x384, 0x387, 0x3, 0x2, 0x2, 0x2, 0x385, 0x383, 0x3, 0x2, 
    0x2, 0x2, 0x385, 0x386, 0x3, 0x2, 0x2, 0x2, 0x386, 0x7d, 0x3, 0x2, 0x2, 
    0x2, 0x387, 0x385, 0x3, 0x2, 0x2, 0x2, 0x388, 0x394, 0x5, 0x80, 0x41, 
    0x2, 0x389, 0x38a, 0x7, 0x9, 0x2, 0x2, 0x38a, 0x38b, 0x5, 0x9e, 0x50, 
    0x2, 0x38b, 0x38c, 0x5, 0x80, 0x41, 0x2, 0x38c, 0x393, 0x3, 0x2, 0x2, 
    0x2, 0x38d, 0x38e, 0x7, 0xf, 0x2, 0x2, 0x38e, 0x38f, 0x5, 0x9e, 0x50, 
    0x2, 0x38f, 0x390, 0x5, 0x52, 0x2a, 0x2, 0x390, 0x391, 0x5, 0x9e, 0x50, 
    0x2, 0x391, 0x393, 0x3, 0x2, 0x2, 0x2, 0x392, 0x389, 0x3, 0x2, 0x2, 
    0x2, 0x392, 0x38d, 0x3, 0x2, 0x2, 0x2, 0x393, 0x396, 0x3, 0x2, 0x2, 
    0x2, 0x394, 0x392, 0x3, 0x2, 0x2, 0x2, 0x394, 0x395, 0x3, 0x2, 0x2, 
    0x2, 0x395, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x396, 0x394, 0x3, 0x2, 0x2, 0x2, 
    0x397, 0x398, 0x5, 0x52, 0x2a, 0x2, 0x398, 0x399, 0x5, 0x9e, 0x50, 0x2, 
    0x399, 0x3aa, 0x3, 0x2, 0x2, 0x2, 0x39a, 0x39b, 0x5, 0x56, 0x2c, 0x2, 
    0x39b, 0x39c, 0x5, 0x9e, 0x50, 0x2, 0x39c, 0x3aa, 0x3, 0x2, 0x2, 0x2, 
    0x39d, 0x39e, 0x5, 0x58, 0x2d, 0x2, 0x39e, 0x39f, 0x5, 0x9e, 0x50, 0x2, 
    0x39f, 0x3aa, 0x3, 0x2, 0x2, 0x2, 0x3a0, 0x3a1, 0x5, 0x54, 0x2b, 0x2, 
    0x3a1, 0x3a2, 0x5, 0x9e, 0x50, 0x2, 0x3a2, 0x3aa, 0x3, 0x2, 0x2, 0x2, 
    0x3a3, 0x3a4, 0x7, 0x4, 0x2, 0x2, 0x3a4, 0x3a5, 0x5, 0x9e, 0x50, 0x2, 
    0x3a5, 0x3a6, 0x5, 0x7c, 0x3f, 0x2, 0x3a6, 0x3a7, 0x7, 0x6, 0x2, 0x2, 
    0x3a7, 0x3a8, 0x5, 0x9e, 0x50, 0x2, 0x3a8, 0x3aa, 0x3, 0x2, 0x2, 0x2, 
    0x3a9, 0x397, 0x3, 0x2, 0x2, 0x2, 0x3a9, 0x39a, 0x3, 0x2, 0x2, 0x2, 
    0x3a9, 0x39d, 0x3, 0x2, 0x2, 0x2, 0x3a9, 0x3a0, 0x3, 0x2, 0x2, 0x2, 
    0x3a9, 0x3a3, 0x3, 0x2, 0x2, 0x2, 0x3aa, 0x81, 0x3, 0x2, 0x2, 0x2, 0x3ab, 
    0x3ac, 0x7, 0x32, 0x2, 0x2, 0x3ac, 0x3ad, 0x5, 0x9e, 0x50, 0x2, 0x3ad, 
    0x3ae, 0x7, 0x7, 0x2, 0x2, 0x3ae, 0x3b0, 0x5, 0x9e, 0x50, 0x2, 0x3af, 
    0x3b1, 0x5, 0x84, 0x43, 0x2, 0x3b0, 0x3af, 0x3, 0x2, 0x2, 0x2, 0x3b0, 
    0x3b1, 0x3, 0x2, 0x2, 0x2, 0x3b1, 0x3b9, 0x3, 0x2, 0x2, 0x2, 0x3b2, 
    0x3b3, 0x7, 0x3, 0x2, 0x2, 0x3b3, 0x3b5, 0x5, 0x9e, 0x50, 0x2, 0x3b4, 
    0x3b6, 0x5, 0x84, 0x43, 0x2, 0x3b5, 0x3b4, 0x3, 0x2, 0x2, 0x2, 0x3b5, 
    0x3b6, 0x3, 0x2, 0x2, 0x2, 0x3b6, 0x3b8, 0x3, 0x2, 0x2, 0x2, 0x3b7, 
    0x3b2, 0x3, 0x2, 0x2, 0x2, 0x3b8, 0x3bb, 0x3, 0x2, 0x2, 0x2, 0x3b9, 
    0x3b7, 0x3, 0x2, 0x2, 0x2, 0x3b9, 0x3ba, 0x3, 0x2, 0x2, 0x2, 0x3ba, 
    0x3bc, 0x3, 0x2, 0x2, 0x2, 0x3bb, 0x3b9, 0x3, 0x2, 0x2, 0x2, 0x3bc, 
    0x3bd, 0x7, 0x8, 0x2, 0x2, 0x3bd, 0x3be, 0x5, 0x9e, 0x50, 0x2, 0x3be, 
    0x83, 0x3, 0x2, 0x2, 0x2, 0x3bf, 0x3c0, 0x5, 0x3c, 0x1f, 0x2, 0x3c0, 
    0x3c1, 0x7, 0x5, 0x2, 0x2, 0x3c1, 0x3c2, 0x5, 0x9e, 0x50, 0x2, 0x3c2, 
    0x3c3, 0x5, 0x48, 0x25, 0x2, 0x3c3, 0x3ca, 0x3, 0x2, 0x2, 0x2, 0x3c4, 
    0x3c5, 0x5, 0x3c, 0x1f, 0x2, 0x3c5, 0x3c6, 0x7, 0x5, 0x2, 0x2, 0x3c6, 
    0x3c7, 0x5, 0x9e, 0x50, 0x2, 0x3c7, 0x3c8, 0x5, 0x46, 0x24, 0x2, 0x3c8, 
    0x3ca, 0x3, 0x2, 0x2, 0x2, 0x3c9, 0x3bf, 0x3, 0x2, 0x2, 0x2, 0x3c9, 
    0x3c4, 0x3, 0x2, 0x2, 0x2, 0x3ca, 0x85, 0x3, 0x2, 0x2, 0x2, 0x3cb, 0x3cc, 
    0x7, 0x35, 0x2, 0x2, 0x3cc, 0x3cd, 0x5, 0x9e, 0x50, 0x2, 0x3cd, 0x3ce, 
    0x7, 0x13, 0x2, 0x2, 0x3ce, 0x3cf, 0x5, 0x9e, 0x50, 0x2, 0x3cf, 0x3d0, 
    0x5, 0x9c, 0x4f, 0x2, 0x3d0, 0x3d1, 0x5, 0x9e, 0x50, 0x2, 0x3d1, 0x3d2, 
    0x7, 0x7, 0x2, 0x2, 0x3d2, 0x3d3, 0x5, 0x9e, 0x50, 0x2, 0x3d3, 0x3d4, 
    0x5, 0x88, 0x45, 0x2, 0x3d4, 0x3d5, 0x7, 0x8, 0x2, 0x2, 0x3d5, 0x3d6, 
    0x5, 0x9e, 0x50, 0x2, 0x3d6, 0x87, 0x3, 0x2, 0x2, 0x2, 0x3d7, 0x3d8, 
    0x5, 0x8a, 0x46, 0x2, 0x3d8, 0x3d9, 0x7, 0x7, 0x2, 0x2, 0x3d9, 0x3db, 
    0x5, 0x9e, 0x50, 0x2, 0x3da, 0x3dc, 0x5, 0x40, 0x21, 0x2, 0x3db, 0x3da, 
    0x3, 0x2, 0x2, 0x2, 0x3db, 0x3dc, 0x3, 0x2, 0x2, 0x2, 0x3dc, 0x3dd, 
    0x3, 0x2, 0x2, 0x2, 0x3dd, 0x3de, 0x7, 0x8, 0x2, 0x2, 0x3de, 0x3df, 
    0x5, 0x9e, 0x50, 0x2, 0x3df, 0x3e1, 0x3, 0x2, 0x2, 0x2, 0x3e0, 0x3d7, 
    0x3, 0x2, 0x2, 0x2, 0x3e1, 0x3e4, 0x3, 0x2, 0x2, 0x2, 0x3e2, 0x3e0, 
    0x3, 0x2, 0x2, 0x2, 0x3e2, 0x3e3, 0x3, 0x2, 0x2, 0x2, 0x3e3, 0x89, 0x3, 
    0x2, 0x2, 0x2, 0x3e4, 0x3e2, 0x3, 0x2, 0x2, 0x2, 0x3e5, 0x3e6, 0x9, 
    0x8, 0x2, 0x2, 0x3e6, 0x3ee, 0x5, 0x9e, 0x50, 0x2, 0x3e7, 0x3e8, 0x7, 
    0x2a, 0x2, 0x2, 0x3e8, 0x3e9, 0x5, 0x9e, 0x50, 0x2, 0x3e9, 0x3ea, 0x9, 
    0x8, 0x2, 0x2, 0x3ea, 0x3eb, 0x5, 0x9e, 0x50, 0x2, 0x3eb, 0x3ed, 0x3, 
    0x2, 0x2, 0x2, 0x3ec, 0x3e7, 0x3, 0x2, 0x2, 0x2, 0x3ed, 0x3f0, 0x3, 
    0x2, 0x2, 0x2, 0x3ee, 0x3ec, 0x3, 0x2, 0x2, 0x2, 0x3ee, 0x3ef, 0x3, 
    0x2, 0x2, 0x2, 0x3ef, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x3f0, 0x3ee, 0x3, 0x2, 
    0x2, 0x2, 0x3f1, 0x3f2, 0x7, 0x39, 0x2, 0x2, 0x3f2, 0x3f3, 0x5, 0x9e, 
    0x50, 0x2, 0x3f3, 0x3f4, 0x7, 0x7, 0x2, 0x2, 0x3f4, 0x3f6, 0x5, 0x9e, 
    0x50, 0x2, 0x3f5, 0x3f7, 0x5, 0x40, 0x21, 0x2, 0x3f6, 0x3f5, 0x3, 0x2, 
    0x2, 0x2, 0x3f6, 0x3f7, 0x3, 0x2, 0x2, 0x2, 0x3f7, 0x3f8, 0x3, 0x2, 
    0x2, 0x2, 0x3f8, 0x3f9, 0x7, 0x8, 0x2, 0x2, 0x3f9, 0x3fa, 0x5, 0x9e, 
    0x50, 0x2, 0x3fa, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x3fb, 0x3fc, 0x7, 0x3a, 
    0x2, 0x2, 0x3fc, 0x3fd, 0x5, 0x9e, 0x50, 0x2, 0x3fd, 0x3fe, 0x5, 0x9c, 
    0x4f, 0x2, 0x3fe, 0x3ff, 0x5, 0x9e, 0x50, 0x2, 0x3ff, 0x400, 0x7, 0x7, 
    0x2, 0x2, 0x400, 0x402, 0x5, 0x9e, 0x50, 0x2, 0x401, 0x403, 0x5, 0x40, 
    0x21, 0x2, 0x402, 0x401, 0x3, 0x2, 0x2, 0x2, 0x402, 0x403, 0x3, 0x2, 
    0x2, 0x2, 0x403, 0x404, 0x3, 0x2, 0x2, 0x2, 0x404, 0x405, 0x7, 0x8, 
    0x2, 0x2, 0x405, 0x406, 0x5, 0x9e, 0x50, 0x2, 0x406, 0x8f, 0x3, 0x2, 
    0x2, 0x2, 0x407, 0x408, 0x7, 0x3b, 0x2, 0x2, 0x408, 0x409, 0x5, 0x9e, 
    0x50, 0x2, 0x409, 0x40a, 0x5, 0x92, 0x4a, 0x2, 0x40a, 0x40b, 0x5, 0x9e, 
    0x50, 0x2, 0x40b, 0x40c, 0x7, 0x7, 0x2, 0x2, 0x40c, 0x410, 0x5, 0x9e, 
    0x50, 0x2, 0x40d, 0x40f, 0x5, 0x96, 0x4c, 0x2, 0x40e, 0x40d, 0x3, 0x2, 
    0x2, 0x2, 0x40f, 0x412, 0x3, 0x2, 0x2, 0x2, 0x410, 0x40e, 0x3, 0x2, 
    0x2, 0x2, 0x410, 0x411, 0x3, 0x2, 0x2, 0x2, 0x411, 0x413, 0x3, 0x2, 
    0x2, 0x2, 0x412, 0x410, 0x3, 0x2, 0x2, 0x2, 0x413, 0x414, 0x7, 0x8, 
    0x2, 0x2, 0x414, 0x415, 0x5, 0x9e, 0x50, 0x2, 0x415, 0x91, 0x3, 0x2, 
    0x2, 0x2, 0x416, 0x41e, 0x5, 0x94, 0x4b, 0x2, 0x417, 0x418, 0x5, 0x9e, 
    0x50, 0x2, 0x418, 0x419, 0x7, 0x2a, 0x2, 0x2, 0x419, 0x41a, 0x5, 0x9e, 
    0x50, 0x2, 0x41a, 0x41b, 0x5, 0x94, 0x4b, 0x2, 0x41b, 0x41d, 0x3, 0x2, 
    0x2, 0x2, 0x41c, 0x417, 0x3, 0x2, 0x2, 0x2, 0x41d, 0x420, 0x3, 0x2, 
    0x2, 0x2, 0x41e, 0x41c, 0x3, 0x2, 0x2, 0x2, 0x41e, 0x41f, 0x3, 0x2, 
    0x2, 0x2, 0x41f, 0x93, 0x3, 0x2, 0x2, 0x2, 0x420, 0x41e, 0x3, 0x2, 0x2, 
    0x2, 0x421, 0x42c, 0x7, 0x2e, 0x2, 0x2, 0x422, 0x428, 0x5, 0x9c, 0x4f, 
    0x2, 0x423, 0x424, 0x5, 0x9e, 0x50, 0x2, 0x424, 0x425, 0x5, 0x9c, 0x4f, 
    0x2, 0x425, 0x427, 0x3, 0x2, 0x2, 0x2, 0x426, 0x423, 0x3, 0x2, 0x2, 
    0x2, 0x427, 0x42a, 0x3, 0x2, 0x2, 0x2, 0x428, 0x426, 0x3, 0x2, 0x2, 
    0x2, 0x428, 0x429, 0x3, 0x2, 0x2, 0x2, 0x429, 0x42c, 0x3, 0x2, 0x2, 
    0x2, 0x42a, 0x428, 0x3, 0x2, 0x2, 0x2, 0x42b, 0x421, 0x3, 0x2, 0x2, 
    0x2, 0x42b, 0x422, 0x3, 0x2, 0x2, 0x2, 0x42c, 0x95, 0x3, 0x2, 0x2, 0x2, 
    0x42d, 0x42e, 0x5, 0x98, 0x4d, 0x2, 0x42e, 0x42f, 0x5, 0x9e, 0x50, 0x2, 
    0x42f, 0x430, 0x7, 0x7, 0x2, 0x2, 0x430, 0x432, 0x5, 0x9e, 0x50, 0x2, 
    0x431, 0x433, 0x5, 0x9a, 0x4e, 0x2, 0x432, 0x431, 0x3, 0x2, 0x2, 0x2, 
    0x432, 0x433, 0x3, 0x2, 0x2, 0x2, 0x433, 0x43c, 0x3, 0x2, 0x2, 0x2, 
    0x434, 0x435, 0x5, 0x9e, 0x50, 0x2, 0x435, 0x436, 0x7, 0x3, 0x2, 0x2, 
    0x436, 0x438, 0x5, 0x9e, 0x50, 0x2, 0x437, 0x439, 0x5, 0x9a, 0x4e, 0x2, 
    0x438, 0x437, 0x3, 0x2, 0x2, 0x2, 0x438, 0x439, 0x3, 0x2, 0x2, 0x2, 
    0x439, 0x43b, 0x3, 0x2, 0x2, 0x2, 0x43a, 0x434, 0x3, 0x2, 0x2, 0x2, 
    0x43b, 0x43e, 0x3, 0x2, 0x2, 0x2, 0x43c, 0x43a, 0x3, 0x2, 0x2, 0x2, 
    0x43c, 0x43d, 0x3, 0x2, 0x2, 0x2, 0x43d, 0x43f, 0x3, 0x2, 0x2, 0x2, 
    0x43e, 0x43c, 0x3, 0x2, 0x2, 0x2, 0x43f, 0x440, 0x7, 0x8, 0x2, 0x2, 
    0x440, 0x441, 0x5, 0x9e, 0x50, 0x2, 0x441, 0x97, 0x3, 0x2, 0x2, 0x2, 
    0x442, 0x443, 0x5, 0x5e, 0x30, 0x2, 0x443, 0x99, 0x3, 0x2, 0x2, 0x2, 
    0x444, 0x445, 0x5, 0x9c, 0x4f, 0x2, 0x445, 0x446, 0x5, 0x9e, 0x50, 0x2, 
    0x446, 0x447, 0x7, 0x5, 0x2, 0x2, 0x447, 0x448, 0x5, 0x9e, 0x50, 0x2, 
    0x448, 0x44e, 0x5, 0x52, 0x2a, 0x2, 0x449, 0x44a, 0x5, 0x9e, 0x50, 0x2, 
    0x44a, 0x44b, 0x5, 0x52, 0x2a, 0x2, 0x44b, 0x44d, 0x3, 0x2, 0x2, 0x2, 
    0x44c, 0x449, 0x3, 0x2, 0x2, 0x2, 0x44d, 0x450, 0x3, 0x2, 0x2, 0x2, 
    0x44e, 0x44c, 0x3, 0x2, 0x2, 0x2, 0x44e, 0x44f, 0x3, 0x2, 0x2, 0x2, 
    0x44f, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x450, 0x44e, 0x3, 0x2, 0x2, 0x2, 0x451, 
    0x452, 0x9, 0x9, 0x2, 0x2, 0x452, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x453, 0x455, 
    0x9, 0xa, 0x2, 0x2, 0x454, 0x453, 0x3, 0x2, 0x2, 0x2, 0x455, 0x458, 
    0x3, 0x2, 0x2, 0x2, 0x456, 0x454, 0x3, 0x2, 0x2, 0x2, 0x456, 0x457, 
    0x3, 0x2, 0x2, 0x2, 0x457, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x458, 0x456, 0x3, 
    0x2, 0x2, 0x2, 0x6c, 0xa5, 0xaa, 0xb1, 0xb6, 0xbd, 0xc2, 0xc9, 0xce, 
    0xdd, 0xf9, 0x100, 0x10c, 0x111, 0x122, 0x125, 0x12a, 0x135, 0x13f, 
    0x142, 0x14d, 0x158, 0x15d, 0x162, 0x166, 0x177, 0x182, 0x18d, 0x191, 
    0x198, 0x19a, 0x1a2, 0x1a4, 0x1a6, 0x1a9, 0x1af, 0x1b6, 0x1c0, 0x1c8, 
    0x1cc, 0x1d2, 0x1d6, 0x1e4, 0x1e9, 0x1f7, 0x201, 0x20c, 0x212, 0x21a, 
    0x220, 0x225, 0x22b, 0x233, 0x237, 0x23f, 0x246, 0x250, 0x252, 0x256, 
    0x25b, 0x278, 0x28a, 0x28f, 0x294, 0x299, 0x2be, 0x2c0, 0x2ca, 0x2cc, 
    0x2d6, 0x2d8, 0x2de, 0x2e5, 0x2eb, 0x2fa, 0x307, 0x309, 0x319, 0x320, 
    0x330, 0x33a, 0x34e, 0x35c, 0x366, 0x368, 0x385, 0x392, 0x394, 0x3a9, 
    0x3b0, 0x3b5, 0x3b9, 0x3c9, 0x3db, 0x3e2, 0x3ee, 0x3f6, 0x402, 0x410, 
    0x41e, 0x428, 0x42b, 0x432, 0x438, 0x43c, 0x44e, 0x456, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

CSSParser::Initializer CSSParser::_init;
