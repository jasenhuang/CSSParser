
add_subdirectory(../Sources ../runtime)

include_directories(
  ${PROJECT_SOURCE_DIR}/Sources/parser
  ${PROJECT_SOURCE_DIR}/Sources/runtime/runtime/src
)

file(GLOB ParserSRC
  "${PROJECT_SOURCE_DIR}/demo/*.cpp"
)
add_executable(demo ${ParserSRC})

# 依赖
add_dependencies(demo CSSParser_Static)
target_link_libraries(demo CSSParser_Static)