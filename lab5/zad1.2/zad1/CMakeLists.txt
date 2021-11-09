cmake_minimum_required(VERSION 3.12.3)

project(e1NoCopyingConstructor)
include_directories(include)

add_executable(e1NoCopyingConstructor src/main.cpp src/Point.cpp)
