# cmake 最低版本需求
cmake_minimum_required(VERSION 3.10)

# 工程名称
project(CSSParser)

# 默认编译为Release
if(NOT CMAKE_BUILD_TYPE)
  message(WARNING "Build type not set, falling back to Release mode.
 To specify build type use:
 -DCMAKE_BUILD_TYPE=<mode> where <mode> is Debug or Release.")
  set(CMAKE_BUILD_TYPE "Release" CACHE STRING
       "Choose the type of build, options are: Debug Release."
       FORCE)
endif(NOT CMAKE_BUILD_TYPE)

# Initialize CXXFLAGS.
if(NOT DEFINED CMAKE_CXX_STANDARD)
  # only set CMAKE_CXX_STANDARD if not already set
  # this allows the standard to be set by the caller, for example with -DCMAKE_CXX_STANDARD:STRING=17
  set(CMAKE_CXX_STANDARD 11)
endif()
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory(Sources)
# add_subdirectory(demo)