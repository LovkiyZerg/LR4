cmake_minimum_required(VERSION 3.5.0)
project(Task4 VERSION 0.1.0 LANGUAGES CXX)

add_subdirectory(modules)

add_executable(Task2 Task_2.cpp)
add_executable(Task2Tests Tests.cpp)

target_link_libraries(Task2 functions2)
target_link_libraries(Task2Tests gtest_main gtest functions2)
gtest_discover_tests(Task2Tests)