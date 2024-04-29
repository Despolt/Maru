cmake_minimum_required(VERSION 3.28)
project(MaruCoreLib)

set(CMAKE_CXX_STANDARD 20)

set(MARU_CORE_HEADER
        Include/MaruMemMacro.h
        Include/MaruBase.h)

set(MARU_CORE_SOURCE
        Source/MaruBase.cpp)

add_library(MaruCore ${MARU_CORE_SOURCE} ${MARU_CORE_HEADER})

target_include_directories(MaruCore PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/Include/)