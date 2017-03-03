
project(SingleToneTest)
cmake_minimum_required(VERSION 2.8)

add_executable(SingleToneTest main.cpp)
add_library(testA STATIC A.cpp)
add_library(testB STATIC B.cpp)
add_library(testC SHARED C.cpp)
target_link_libraries(testB testA )
target_link_libraries(testC testA )
target_link_libraries(SingleToneTest testA testB testC)
