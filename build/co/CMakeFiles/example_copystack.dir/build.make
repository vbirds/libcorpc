# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.11

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Produce verbose output by default.
VERBOSE = 1

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/xianke.liu/refer_prjs/libcorpc

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/xianke.liu/refer_prjs/libcorpc/build

# Include any dependencies generated for this target.
include co/CMakeFiles/example_copystack.dir/depend.make

# Include the progress variables for this target.
include co/CMakeFiles/example_copystack.dir/progress.make

# Include the compile flags for this target's objects.
include co/CMakeFiles/example_copystack.dir/flags.make

co/CMakeFiles/example_copystack.dir/src/example_copystack.cpp.o: co/CMakeFiles/example_copystack.dir/flags.make
co/CMakeFiles/example_copystack.dir/src/example_copystack.cpp.o: ../co/src/example_copystack.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/xianke.liu/refer_prjs/libcorpc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object co/CMakeFiles/example_copystack.dir/src/example_copystack.cpp.o"
	cd /Users/xianke.liu/refer_prjs/libcorpc/build/co && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/example_copystack.dir/src/example_copystack.cpp.o -c /Users/xianke.liu/refer_prjs/libcorpc/co/src/example_copystack.cpp

co/CMakeFiles/example_copystack.dir/src/example_copystack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/example_copystack.dir/src/example_copystack.cpp.i"
	cd /Users/xianke.liu/refer_prjs/libcorpc/build/co && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/xianke.liu/refer_prjs/libcorpc/co/src/example_copystack.cpp > CMakeFiles/example_copystack.dir/src/example_copystack.cpp.i

co/CMakeFiles/example_copystack.dir/src/example_copystack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/example_copystack.dir/src/example_copystack.cpp.s"
	cd /Users/xianke.liu/refer_prjs/libcorpc/build/co && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/xianke.liu/refer_prjs/libcorpc/co/src/example_copystack.cpp -o CMakeFiles/example_copystack.dir/src/example_copystack.cpp.s

# Object files for target example_copystack
example_copystack_OBJECTS = \
"CMakeFiles/example_copystack.dir/src/example_copystack.cpp.o"

# External object files for target example_copystack
example_copystack_EXTERNAL_OBJECTS =

co/example_copystack: co/CMakeFiles/example_copystack.dir/src/example_copystack.cpp.o
co/example_copystack: co/CMakeFiles/example_copystack.dir/build.make
co/example_copystack: co/libco.a
co/example_copystack: co/CMakeFiles/example_copystack.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/xianke.liu/refer_prjs/libcorpc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable example_copystack"
	cd /Users/xianke.liu/refer_prjs/libcorpc/build/co && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/example_copystack.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
co/CMakeFiles/example_copystack.dir/build: co/example_copystack

.PHONY : co/CMakeFiles/example_copystack.dir/build

co/CMakeFiles/example_copystack.dir/clean:
	cd /Users/xianke.liu/refer_prjs/libcorpc/build/co && $(CMAKE_COMMAND) -P CMakeFiles/example_copystack.dir/cmake_clean.cmake
.PHONY : co/CMakeFiles/example_copystack.dir/clean

co/CMakeFiles/example_copystack.dir/depend:
	cd /Users/xianke.liu/refer_prjs/libcorpc/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/xianke.liu/refer_prjs/libcorpc /Users/xianke.liu/refer_prjs/libcorpc/co /Users/xianke.liu/refer_prjs/libcorpc/build /Users/xianke.liu/refer_prjs/libcorpc/build/co /Users/xianke.liu/refer_prjs/libcorpc/build/co/CMakeFiles/example_copystack.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : co/CMakeFiles/example_copystack.dir/depend

