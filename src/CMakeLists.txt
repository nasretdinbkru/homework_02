cmake_minimum_required(VERSION 3.28)

project(02_homework)

set(CMAKE_CXX_STANDARD 17)

add_executable(
        hello_world main.cpp
        includes/separate.cpp
)
target_include_directories(hello_world PUBLIC includes)
