# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.25.1/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.25.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/blue/Desktop/task_manager

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/blue/Desktop/task_manager/build

# Include any dependencies generated for this target.
include CMakeFiles/task_manager.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/task_manager.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/task_manager.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/task_manager.dir/flags.make

CMakeFiles/task_manager.dir/src/task_manager.c.o: CMakeFiles/task_manager.dir/flags.make
CMakeFiles/task_manager.dir/src/task_manager.c.o: /Users/blue/Desktop/task_manager/src/task_manager.c
CMakeFiles/task_manager.dir/src/task_manager.c.o: CMakeFiles/task_manager.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/blue/Desktop/task_manager/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/task_manager.dir/src/task_manager.c.o"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/task_manager.dir/src/task_manager.c.o -MF CMakeFiles/task_manager.dir/src/task_manager.c.o.d -o CMakeFiles/task_manager.dir/src/task_manager.c.o -c /Users/blue/Desktop/task_manager/src/task_manager.c

CMakeFiles/task_manager.dir/src/task_manager.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/task_manager.dir/src/task_manager.c.i"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/blue/Desktop/task_manager/src/task_manager.c > CMakeFiles/task_manager.dir/src/task_manager.c.i

CMakeFiles/task_manager.dir/src/task_manager.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/task_manager.dir/src/task_manager.c.s"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/blue/Desktop/task_manager/src/task_manager.c -o CMakeFiles/task_manager.dir/src/task_manager.c.s

CMakeFiles/task_manager.dir/test.c.o: CMakeFiles/task_manager.dir/flags.make
CMakeFiles/task_manager.dir/test.c.o: /Users/blue/Desktop/task_manager/test.c
CMakeFiles/task_manager.dir/test.c.o: CMakeFiles/task_manager.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/blue/Desktop/task_manager/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/task_manager.dir/test.c.o"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/task_manager.dir/test.c.o -MF CMakeFiles/task_manager.dir/test.c.o.d -o CMakeFiles/task_manager.dir/test.c.o -c /Users/blue/Desktop/task_manager/test.c

CMakeFiles/task_manager.dir/test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/task_manager.dir/test.c.i"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/blue/Desktop/task_manager/test.c > CMakeFiles/task_manager.dir/test.c.i

CMakeFiles/task_manager.dir/test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/task_manager.dir/test.c.s"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/blue/Desktop/task_manager/test.c -o CMakeFiles/task_manager.dir/test.c.s

# Object files for target task_manager
task_manager_OBJECTS = \
"CMakeFiles/task_manager.dir/src/task_manager.c.o" \
"CMakeFiles/task_manager.dir/test.c.o"

# External object files for target task_manager
task_manager_EXTERNAL_OBJECTS =

task_manager: CMakeFiles/task_manager.dir/src/task_manager.c.o
task_manager: CMakeFiles/task_manager.dir/test.c.o
task_manager: CMakeFiles/task_manager.dir/build.make
task_manager: CMakeFiles/task_manager.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/blue/Desktop/task_manager/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable task_manager"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/task_manager.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/task_manager.dir/build: task_manager
.PHONY : CMakeFiles/task_manager.dir/build

CMakeFiles/task_manager.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/task_manager.dir/cmake_clean.cmake
.PHONY : CMakeFiles/task_manager.dir/clean

CMakeFiles/task_manager.dir/depend:
	cd /Users/blue/Desktop/task_manager/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/blue/Desktop/task_manager /Users/blue/Desktop/task_manager /Users/blue/Desktop/task_manager/build /Users/blue/Desktop/task_manager/build /Users/blue/Desktop/task_manager/build/CMakeFiles/task_manager.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/task_manager.dir/depend
