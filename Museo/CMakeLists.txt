cmake_minimum_required(VERSION 3.14)
project(Museo)

set(CMAKE_CXX_STANDARD 14)

add_executable(Museo main.cpp ObraArte.cpp ObraArte.h Escultura.cpp Escultura.h Pintura.cpp Pintura.h manager.cpp manager.h)