cmake_minimum_required(VERSION 3.27)
project(lab2c)

set(CMAKE_CXX_STANDARD 17)

include_directories($ENV{HOME}/Programming/include)
link_directories($ENV{HOME}/Programming/lib)
link_libraries(dataStructures)

add_executable(lab2c main.cpp)
