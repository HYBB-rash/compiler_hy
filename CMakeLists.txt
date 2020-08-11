cmake_minimum_required(VERSION 3.10.2)
project(compiler_hy)

set(CMAKE_CXX_STANDARD 14)

add_executable(compiler_hy main.cpp
        lex/include/tokens.h lex/include/utils.h lex/include/lex.h
        lex/src/tokens.cpp lex/src/utils.cpp lex/src/lex.yy.cpp)
