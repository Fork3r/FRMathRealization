cmake_minimum_required(VERSION 3.13)
project(FRMathRealization)

set(CMAKE_CXX_STANDARD 17)

#include_directories(${CMAKE_CURRENT_SOURCE_DIR})
#include_directories(..)

set(header
        ${FRMATH_REALIZATION_PATH}/frvector2d.h
        )

set(src
        ${FRMATH_REALIZATION_PATH}/frvector2d.cpp
        )