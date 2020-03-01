cmake_minimum_required(VERSION 3.16)
project(gpaCalc)

set(CMAKE_CXX_STANDARD 20)

add_executable(gpaCalc main.cpp Student.cpp Student.h Class.cpp Class.h)