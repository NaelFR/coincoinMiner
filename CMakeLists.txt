cmake_minimum_required(VERSION 3.8)
project(coincoin_miner)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES libs/args.hxx libs/sha1.cpp libs/sha1.h main.cpp source/Token.cpp headers/Token.h source/Miner.cpp headers/Miner.h source/Coin.cpp headers/Coin.h)
add_executable(coincoin_miner ${SOURCE_FILES})