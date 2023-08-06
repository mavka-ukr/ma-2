cmake_minimum_required(VERSION 3.25)
project(maska_parser)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(parser)

add_executable(mavka main.cpp)

target_link_libraries(mavka mavka_parser)