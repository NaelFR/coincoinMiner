cmake_minimum_required(VERSION 3.8)
project(coincoin_miner)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp source/Token.cpp headers/Token.h)
add_executable(coincoin_miner ${SOURCE_FILES})