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

# 输出目录
set(LIB_OUTPUT_DIR "${CMAKE_HOME_DIRECTORY}/dist") 

# 创建 ${LIB_OUTPUT_DIR} 目录
add_custom_target(MKDIR_OUTPUT ALL
    COMMAND ${CMAKE_COMMAND} -E make_directory ${LIB_OUTPUT_DIR}
    )

# 依赖
add_dependencies(CSSParser_Share MKDIR_OUTPUT antlr4_static)
target_link_libraries(CSSParser_Share PUBLIC antlr4_static)

add_dependencies(CSSParser_Static MKDIR_OUTPUT antlr4_static)
target_link_libraries(CSSParser_Static PUBLIC antlr4_static)

set_target_properties(CSSParser_Share PROPERTIES
                                 OUTPUT_NAME CSSParser
                                 LIBRARY_OUTPUT_DIRECTORY ${LIB_OUTPUT_DIR}
                                 RUNTIME_OUTPUT_DIRECTORY ${LIB_OUTPUT_DIR}
                                 ARCHIVE_OUTPUT_DIRECTORY ${LIB_OUTPUT_DIR}
                                 COMPILE_FLAGS "${disabled_compile_warnings} ${extra_share_compile_flags}")

set_target_properties(CSSParser_Static PROPERTIES
                                 OUTPUT_NAME CSSParser
                                 ARCHIVE_OUTPUT_DIRECTORY ${LIB_OUTPUT_DIR}
                                 COMPILE_FLAGS "${disabled_compile_warnings} ${extra_static_compile_flags}")


