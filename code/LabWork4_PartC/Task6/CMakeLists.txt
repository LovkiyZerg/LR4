cmake_minimum_required(VERSION 3.5.0)
project(Task6 VERSION 0.1.0 LANGUAGES C)

add_subdirectory(modules)

add_executable(Task6 Task6.c)   
add_executable(Task6Tests Tests6.cpp)

target_link_libraries(Task6 functions6)

target_link_libraries(Task6Tests gtest_main gtest functions6)
gtest_discover_tests(Task6Tests)

