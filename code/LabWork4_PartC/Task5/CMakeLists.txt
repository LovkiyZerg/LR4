cmake_minimum_required(VERSION 3.5.0)
project(Task5 VERSION 0.1.0 LANGUAGES C)

add_executable(Task5 Task_5.c )
add_executable(Task5Tests Tests.cpp )
target_link_libraries(Task5Tests gtest_main gtest)
gtest_discover_tests(Task5Tests)


