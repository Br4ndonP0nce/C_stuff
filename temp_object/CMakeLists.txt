cmake_minimum_required(VERSION 3.14)
project(temp_object)

set(CMAKE_CXX_STANDARD 14)

add_executable(temp_object main.cpp celsius.cpp celsius.h farenheit.cpp farenheit.h kelvin.cpp kelvin.h)