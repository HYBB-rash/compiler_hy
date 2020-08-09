cmake_minimum_required(VERSION 3.10.2)
project(compiler_hy)

set(CMAKE_CXX_STANDARD 14)

add_executable(compiler_hy main.cpp
        include/tokens.h include/utils.h src/utils.cpp
        src/tokens.cpp include/lex.h src/lex.yy.cpp)
