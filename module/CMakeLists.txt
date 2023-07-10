cmake_minimum_required(VERSION 3.26)
project(module CXX)

set(CMAKE_EXPERIMENTAL_CXX_MODULE_CMAKE_API "2182bf5c-ef0d-489a-91da-49dbc3090d2a")
set(CMAKE_EXPERIMENTAL_CXX_MODULE_DYNDEP 1)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_MAKE_PROGRAM /opt/homebrew/bin/ninja CACHE FILEPATH "" FORCE)
set(CMAKE_OSX_ARCHITECTURES "arm64" CACHE STRING "Apple Silicon Only" FORCE)
set(CMAKE_CXX_STANDARD 20)

add_library(calc)
target_sources(calc
        PUBLIC
        FILE_SET cxx_modules TYPE CXX_MODULES FILES
        calc.ixx)

add_executable(main main.cxx)
target_link_libraries(main PRIVATE calc)
