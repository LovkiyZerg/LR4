cmake_minimum_required(VERSION 3.5.0)
project(Task1 VERSION 0.1.0 LANGUAGES CXX)

add_subdirectory(modules)

add_executable(Task1 Task_1.cpp)
add_executable(Task1Tests Tests.cpp)

target_link_libraries(Task1 functions1)
target_link_libraries(Task1Tests gtest_main gtest functions1)
gtest_discover_tests(Task1Tests)