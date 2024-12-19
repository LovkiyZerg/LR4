cmake_minimum_required(VERSION 3.5.0)
project(Task4 VERSION 0.1.0 LANGUAGES CXX)

add_subdirectory(modules)

add_executable(Task3 Task_3.cpp)
add_executable(Task3Tests Tests.cpp)

target_link_libraries(Task3 functions3)
target_link_libraries(Task3Tests gtest_main gtest functions3)
gtest_discover_tests(Task3Tests)