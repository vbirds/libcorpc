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
include corpc_mysql/CMakeFiles/libcorpc_mysql_shared.dir/depend.make

# Include the progress variables for this target.
include corpc_mysql/CMakeFiles/libcorpc_mysql_shared.dir/progress.make

# Include the compile flags for this target's objects.
include corpc_mysql/CMakeFiles/libcorpc_mysql_shared.dir/flags.make

corpc_mysql/CMakeFiles/libcorpc_mysql_shared.dir/src/corpc_mysql.cpp.o: corpc_mysql/CMakeFiles/libcorpc_mysql_shared.dir/flags.make
corpc_mysql/CMakeFiles/libcorpc_mysql_shared.dir/src/corpc_mysql.cpp.o: ../corpc_mysql/src/corpc_mysql.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/xianke.liu/refer_prjs/libcorpc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object corpc_mysql/CMakeFiles/libcorpc_mysql_shared.dir/src/corpc_mysql.cpp.o"
	cd /Users/xianke.liu/refer_prjs/libcorpc/build/corpc_mysql && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/libcorpc_mysql_shared.dir/src/corpc_mysql.cpp.o -c /Users/xianke.liu/refer_prjs/libcorpc/corpc_mysql/src/corpc_mysql.cpp

corpc_mysql/CMakeFiles/libcorpc_mysql_shared.dir/src/corpc_mysql.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libcorpc_mysql_shared.dir/src/corpc_mysql.cpp.i"
	cd /Users/xianke.liu/refer_prjs/libcorpc/build/corpc_mysql && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/xianke.liu/refer_prjs/libcorpc/corpc_mysql/src/corpc_mysql.cpp > CMakeFiles/libcorpc_mysql_shared.dir/src/corpc_mysql.cpp.i

corpc_mysql/CMakeFiles/libcorpc_mysql_shared.dir/src/corpc_mysql.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libcorpc_mysql_shared.dir/src/corpc_mysql.cpp.s"
	cd /Users/xianke.liu/refer_prjs/libcorpc/build/corpc_mysql && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/xianke.liu/refer_prjs/libcorpc/corpc_mysql/src/corpc_mysql.cpp -o CMakeFiles/libcorpc_mysql_shared.dir/src/corpc_mysql.cpp.s

# Object files for target libcorpc_mysql_shared
libcorpc_mysql_shared_OBJECTS = \
"CMakeFiles/libcorpc_mysql_shared.dir/src/corpc_mysql.cpp.o"

# External object files for target libcorpc_mysql_shared
libcorpc_mysql_shared_EXTERNAL_OBJECTS =

corpc_mysql/libcorpc_mysql.0.5.dylib: corpc_mysql/CMakeFiles/libcorpc_mysql_shared.dir/src/corpc_mysql.cpp.o
corpc_mysql/libcorpc_mysql.0.5.dylib: corpc_mysql/CMakeFiles/libcorpc_mysql_shared.dir/build.make
corpc_mysql/libcorpc_mysql.0.5.dylib: corpc_mysql/CMakeFiles/libcorpc_mysql_shared.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/xianke.liu/refer_prjs/libcorpc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libcorpc_mysql.dylib"
	cd /Users/xianke.liu/refer_prjs/libcorpc/build/corpc_mysql && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/libcorpc_mysql_shared.dir/link.txt --verbose=$(VERBOSE)
	cd /Users/xianke.liu/refer_prjs/libcorpc/build/corpc_mysql && $(CMAKE_COMMAND) -E cmake_symlink_library libcorpc_mysql.0.5.dylib libcorpc_mysql.0.5.dylib libcorpc_mysql.dylib

corpc_mysql/libcorpc_mysql.dylib: corpc_mysql/libcorpc_mysql.0.5.dylib
	@$(CMAKE_COMMAND) -E touch_nocreate corpc_mysql/libcorpc_mysql.dylib

# Rule to build all files generated by this target.
corpc_mysql/CMakeFiles/libcorpc_mysql_shared.dir/build: corpc_mysql/libcorpc_mysql.dylib

.PHONY : corpc_mysql/CMakeFiles/libcorpc_mysql_shared.dir/build

corpc_mysql/CMakeFiles/libcorpc_mysql_shared.dir/clean:
	cd /Users/xianke.liu/refer_prjs/libcorpc/build/corpc_mysql && $(CMAKE_COMMAND) -P CMakeFiles/libcorpc_mysql_shared.dir/cmake_clean.cmake
.PHONY : corpc_mysql/CMakeFiles/libcorpc_mysql_shared.dir/clean

corpc_mysql/CMakeFiles/libcorpc_mysql_shared.dir/depend:
	cd /Users/xianke.liu/refer_prjs/libcorpc/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/xianke.liu/refer_prjs/libcorpc /Users/xianke.liu/refer_prjs/libcorpc/corpc_mysql /Users/xianke.liu/refer_prjs/libcorpc/build /Users/xianke.liu/refer_prjs/libcorpc/build/corpc_mysql /Users/xianke.liu/refer_prjs/libcorpc/build/corpc_mysql/CMakeFiles/libcorpc_mysql_shared.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : corpc_mysql/CMakeFiles/libcorpc_mysql_shared.dir/depend

