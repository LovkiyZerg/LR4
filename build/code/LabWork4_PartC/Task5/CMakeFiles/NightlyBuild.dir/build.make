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

# Utility rule file for NightlyBuild.

# Include any custom commands dependencies for this target.
include code/LabWork4_PartC/Task5/CMakeFiles/NightlyBuild.dir/compiler_depend.make

# Include the progress variables for this target.
include code/LabWork4_PartC/Task5/CMakeFiles/NightlyBuild.dir/progress.make

code/LabWork4_PartC/Task5/CMakeFiles/NightlyBuild:
	cd /home/lovkiy/Документы/453501/ОАиП/LR4/build/code/LabWork4_PartC/Task5 && /usr/bin/ctest -D NightlyBuild

NightlyBuild: code/LabWork4_PartC/Task5/CMakeFiles/NightlyBuild
NightlyBuild: code/LabWork4_PartC/Task5/CMakeFiles/NightlyBuild.dir/build.make
.PHONY : NightlyBuild

# Rule to build all files generated by this target.
code/LabWork4_PartC/Task5/CMakeFiles/NightlyBuild.dir/build: NightlyBuild
.PHONY : code/LabWork4_PartC/Task5/CMakeFiles/NightlyBuild.dir/build

code/LabWork4_PartC/Task5/CMakeFiles/NightlyBuild.dir/clean:
	cd /home/lovkiy/Документы/453501/ОАиП/LR4/build/code/LabWork4_PartC/Task5 && $(CMAKE_COMMAND) -P CMakeFiles/NightlyBuild.dir/cmake_clean.cmake
.PHONY : code/LabWork4_PartC/Task5/CMakeFiles/NightlyBuild.dir/clean

code/LabWork4_PartC/Task5/CMakeFiles/NightlyBuild.dir/depend:
	cd /home/lovkiy/Документы/453501/ОАиП/LR4/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lovkiy/Документы/453501/ОАиП/LR4 /home/lovkiy/Документы/453501/ОАиП/LR4/code/LabWork4_PartC/Task5 /home/lovkiy/Документы/453501/ОАиП/LR4/build /home/lovkiy/Документы/453501/ОАиП/LR4/build/code/LabWork4_PartC/Task5 /home/lovkiy/Документы/453501/ОАиП/LR4/build/code/LabWork4_PartC/Task5/CMakeFiles/NightlyBuild.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : code/LabWork4_PartC/Task5/CMakeFiles/NightlyBuild.dir/depend
