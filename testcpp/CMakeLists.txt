cmake_minimum_required(VERSION 3.14)
project(testcpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(testcpp main.cpp year.cpp year.h bin_reader.h)