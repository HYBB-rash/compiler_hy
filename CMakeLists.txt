cmake_minimum_required(VERSION 3.10.2)
project(complier_hy)

set(CMAKE_CXX_STANDARD 20)

add_executable(complier_hy main.cpp include/tokens.h include/utils.h src/token.cpp)