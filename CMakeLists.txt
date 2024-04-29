cmake_minimum_required(VERSION 3.28)
project(Maru)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(Server)

add_executable(Maru main.cpp)

target_link_libraries(Maru MaruCore)