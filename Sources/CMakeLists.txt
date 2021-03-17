add_subdirectory(runtime)

include_directories(
  ${PROJECT_SOURCE_DIR}/Sources/parser
  ${PROJECT_SOURCE_DIR}/Sources/css
  ${PROJECT_SOURCE_DIR}/Sources/runtime/runtime/src
)

file(GLOB ParserSRC
  "${PROJECT_SOURCE_DIR}/Sources/parser/*.cpp"
  "${PROJECT_SOURCE_DIR}/Sources/css/*.cpp"
)

add_library(CSSParser_Share SHARED ${ParserSRC})
add_library(CSSParser_Static STATIC ${ParserSRC})

# 依赖
add_dependencies(CSSParser_Share antlr4_static)
target_link_libraries(CSSParser_Share PUBLIC antlr4_static)

add_dependencies(CSSParser_Static antlr4_static)
target_link_libraries(CSSParser_Static PUBLIC antlr4_static)

set_target_properties(CSSParser_Share PROPERTIES
                                 OUTPUT_NAME CSSParser
                                 COMPILE_FLAGS "${disabled_compile_warnings} ${extra_share_compile_flags}")

set_target_properties(CSSParser_Static PROPERTIES
                                 OUTPUT_NAME CSSParser
                                 COMPILE_FLAGS "${disabled_compile_warnings} ${extra_static_compile_flags}")


