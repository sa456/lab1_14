cmake_minimum_required(VERSION 3.8)
project(lab1_14)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Rational.cpp Rational.h)
add_executable(lab1_14 ${SOURCE_FILES} Rational.cpp Rational.h)