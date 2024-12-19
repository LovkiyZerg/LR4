cmake_minimum_required(VERSION 3.5.0)



enable_testing()
add_subdirectory(googletest)
include(GoogleTest)

add_subdirectory(code/Task1)
add_subdirectory(code/Task2)
add_subdirectory(code/Task3)

add_subdirectory(code/LabWork4_PartC/Task4)
add_subdirectory(code/LabWork4_PartC/Task5)
add_subdirectory(code/LabWork4_PartC/Task6)
