cmake_minimum_required(VERSION 3.14)
project(LSLechauri)

set(CMAKE_CXX_STANDARD 14)

add_executable(LSLechauri main.cpp lsl.h Elementos.cpp Elementos.h TablaPeriodica.cpp TablaPeriodica.h)