cmake_minimum_required(VERSION 3.28)
project(Maru)

set(CMAKE_CXX_STANDARD 20)

set(MARU_CORE_HEADER
    Server/Include/MaruMemMacro.h
    Server/Include/MaruBase.h)

set(MARU_CORE_SOURCE
    Server/Source/MaruBase.cpp)

add_library(MaruCore ${MARU_CORE_SOURCE} ${MARU_CORE_HEADER})

add_executable(Maru main.cpp)
target_link_libraries(Maru MaruCore)