cmake_minimum_required(VERSION 3.5.0)
project(Task4 VERSION 0.1.0 LANGUAGES C)

add_subdirectory(modules)

add_executable(Task4 Task_4.c)
add_executable(Task4Tests Tests.cpp)

target_link_libraries(Task4 functions4)
target_link_libraries(Task4Tests gtest_main gtest functions4)
gtest_discover_tests(Task4Tests)