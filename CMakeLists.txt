cmake_minimum_required(VERSION 3.9)
project(demo_classes)

set(CMAKE_CXX_STANDARD 11)

add_executable(demo_classes main.cpp point.cpp point.h interval.cpp interval.h)