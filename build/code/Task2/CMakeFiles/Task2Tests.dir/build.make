# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/lovkiy/Документы/453501/ОАиП/LR4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lovkiy/Документы/453501/ОАиП/LR4/build

# Include any dependencies generated for this target.
include code/Task2/CMakeFiles/Task2Tests.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include code/Task2/CMakeFiles/Task2Tests.dir/compiler_depend.make

# Include the progress variables for this target.
include code/Task2/CMakeFiles/Task2Tests.dir/progress.make

# Include the compile flags for this target's objects.
include code/Task2/CMakeFiles/Task2Tests.dir/flags.make

code/Task2/CMakeFiles/Task2Tests.dir/Tests.cpp.o: code/Task2/CMakeFiles/Task2Tests.dir/flags.make
code/Task2/CMakeFiles/Task2Tests.dir/Tests.cpp.o: /home/lovkiy/Документы/453501/ОАиП/LR4/code/Task2/Tests.cpp
code/Task2/CMakeFiles/Task2Tests.dir/Tests.cpp.o: code/Task2/CMakeFiles/Task2Tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/lovkiy/Документы/453501/ОАиП/LR4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object code/Task2/CMakeFiles/Task2Tests.dir/Tests.cpp.o"
	cd /home/lovkiy/Документы/453501/ОАиП/LR4/build/code/Task2 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT code/Task2/CMakeFiles/Task2Tests.dir/Tests.cpp.o -MF CMakeFiles/Task2Tests.dir/Tests.cpp.o.d -o CMakeFiles/Task2Tests.dir/Tests.cpp.o -c /home/lovkiy/Документы/453501/ОАиП/LR4/code/Task2/Tests.cpp

code/Task2/CMakeFiles/Task2Tests.dir/Tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Task2Tests.dir/Tests.cpp.i"
	cd /home/lovkiy/Документы/453501/ОАиП/LR4/build/code/Task2 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lovkiy/Документы/453501/ОАиП/LR4/code/Task2/Tests.cpp > CMakeFiles/Task2Tests.dir/Tests.cpp.i

code/Task2/CMakeFiles/Task2Tests.dir/Tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Task2Tests.dir/Tests.cpp.s"
	cd /home/lovkiy/Документы/453501/ОАиП/LR4/build/code/Task2 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lovkiy/Документы/453501/ОАиП/LR4/code/Task2/Tests.cpp -o CMakeFiles/Task2Tests.dir/Tests.cpp.s

# Object files for target Task2Tests
Task2Tests_OBJECTS = \
"CMakeFiles/Task2Tests.dir/Tests.cpp.o"

# External object files for target Task2Tests
Task2Tests_EXTERNAL_OBJECTS =

code/Task2/Task2Tests: code/Task2/CMakeFiles/Task2Tests.dir/Tests.cpp.o
code/Task2/Task2Tests: code/Task2/CMakeFiles/Task2Tests.dir/build.make
code/Task2/Task2Tests: lib/libgtest_main.a
code/Task2/Task2Tests: lib/libgtest.a
code/Task2/Task2Tests: code/Task2/modules/libfunctions2.a
code/Task2/Task2Tests: code/Task2/CMakeFiles/Task2Tests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/lovkiy/Документы/453501/ОАиП/LR4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Task2Tests"
	cd /home/lovkiy/Документы/453501/ОАиП/LR4/build/code/Task2 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Task2Tests.dir/link.txt --verbose=$(VERBOSE)
	cd /home/lovkiy/Документы/453501/ОАиП/LR4/build/code/Task2 && /usr/bin/cmake -D TEST_TARGET=Task2Tests -D TEST_EXECUTABLE=/home/lovkiy/Документы/453501/ОАиП/LR4/build/code/Task2/Task2Tests -D TEST_EXECUTOR= -D TEST_WORKING_DIR=/home/lovkiy/Документы/453501/ОАиП/LR4/build/code/Task2 -D TEST_EXTRA_ARGS= -D TEST_PROPERTIES= -D TEST_PREFIX= -D TEST_SUFFIX= -D TEST_FILTER= -D NO_PRETTY_TYPES=FALSE -D NO_PRETTY_VALUES=FALSE -D TEST_LIST=Task2Tests_TESTS -D CTEST_FILE=/home/lovkiy/Документы/453501/ОАиП/LR4/build/code/Task2/Task2Tests[1]_tests.cmake -D TEST_DISCOVERY_TIMEOUT=5 -D TEST_XML_OUTPUT_DIR= -P /usr/share/cmake-3.28/Modules/GoogleTestAddTests.cmake

# Rule to build all files generated by this target.
code/Task2/CMakeFiles/Task2Tests.dir/build: code/Task2/Task2Tests
.PHONY : code/Task2/CMakeFiles/Task2Tests.dir/build

code/Task2/CMakeFiles/Task2Tests.dir/clean:
	cd /home/lovkiy/Документы/453501/ОАиП/LR4/build/code/Task2 && $(CMAKE_COMMAND) -P CMakeFiles/Task2Tests.dir/cmake_clean.cmake
.PHONY : code/Task2/CMakeFiles/Task2Tests.dir/clean

code/Task2/CMakeFiles/Task2Tests.dir/depend:
	cd /home/lovkiy/Документы/453501/ОАиП/LR4/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lovkiy/Документы/453501/ОАиП/LR4 /home/lovkiy/Документы/453501/ОАиП/LR4/code/Task2 /home/lovkiy/Документы/453501/ОАиП/LR4/build /home/lovkiy/Документы/453501/ОАиП/LR4/build/code/Task2 /home/lovkiy/Документы/453501/ОАиП/LR4/build/code/Task2/CMakeFiles/Task2Tests.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : code/Task2/CMakeFiles/Task2Tests.dir/depend

