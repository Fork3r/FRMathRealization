cmake_minimum_required(VERSION 3.13)
project(FRMathRealization)

set(CMAKE_CXX_STANDARD 17)

#include_directories(${CMAKE_CURRENT_SOURCE_DIR})
#include_directories(..)

set(header
        ${FRMATH_REALIZATION_PATH}/vector2.h
        ${FRMATH_REALIZATION_PATH}/vector3.h
        ${FRMATH_REALIZATION_PATH}/vector4.h
        ${FRMATH_REALIZATION_PATH}/matrix4x4.h
        )