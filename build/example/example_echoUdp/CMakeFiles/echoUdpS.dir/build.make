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
include example/example_echoUdp/CMakeFiles/echoUdpS.dir/depend.make

# Include the progress variables for this target.
include example/example_echoUdp/CMakeFiles/echoUdpS.dir/progress.make

# Include the compile flags for this target's objects.
include example/example_echoUdp/CMakeFiles/echoUdpS.dir/flags.make

example/example_echoUdp/CMakeFiles/echoUdpS.dir/__/proto/echo.pb.cc.o: example/example_echoUdp/CMakeFiles/echoUdpS.dir/flags.make
example/example_echoUdp/CMakeFiles/echoUdpS.dir/__/proto/echo.pb.cc.o: ../example/proto/echo.pb.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/xianke.liu/refer_prjs/libcorpc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object example/example_echoUdp/CMakeFiles/echoUdpS.dir/__/proto/echo.pb.cc.o"
	cd /Users/xianke.liu/refer_prjs/libcorpc/build/example/example_echoUdp && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/echoUdpS.dir/__/proto/echo.pb.cc.o -c /Users/xianke.liu/refer_prjs/libcorpc/example/proto/echo.pb.cc

example/example_echoUdp/CMakeFiles/echoUdpS.dir/__/proto/echo.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/echoUdpS.dir/__/proto/echo.pb.cc.i"
	cd /Users/xianke.liu/refer_prjs/libcorpc/build/example/example_echoUdp && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/xianke.liu/refer_prjs/libcorpc/example/proto/echo.pb.cc > CMakeFiles/echoUdpS.dir/__/proto/echo.pb.cc.i

example/example_echoUdp/CMakeFiles/echoUdpS.dir/__/proto/echo.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/echoUdpS.dir/__/proto/echo.pb.cc.s"
	cd /Users/xianke.liu/refer_prjs/libcorpc/build/example/example_echoUdp && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/xianke.liu/refer_prjs/libcorpc/example/proto/echo.pb.cc -o CMakeFiles/echoUdpS.dir/__/proto/echo.pb.cc.s

example/example_echoUdp/CMakeFiles/echoUdpS.dir/src/server.cpp.o: example/example_echoUdp/CMakeFiles/echoUdpS.dir/flags.make
example/example_echoUdp/CMakeFiles/echoUdpS.dir/src/server.cpp.o: ../example/example_echoUdp/src/server.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/xianke.liu/refer_prjs/libcorpc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object example/example_echoUdp/CMakeFiles/echoUdpS.dir/src/server.cpp.o"
	cd /Users/xianke.liu/refer_prjs/libcorpc/build/example/example_echoUdp && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/echoUdpS.dir/src/server.cpp.o -c /Users/xianke.liu/refer_prjs/libcorpc/example/example_echoUdp/src/server.cpp

example/example_echoUdp/CMakeFiles/echoUdpS.dir/src/server.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/echoUdpS.dir/src/server.cpp.i"
	cd /Users/xianke.liu/refer_prjs/libcorpc/build/example/example_echoUdp && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/xianke.liu/refer_prjs/libcorpc/example/example_echoUdp/src/server.cpp > CMakeFiles/echoUdpS.dir/src/server.cpp.i

example/example_echoUdp/CMakeFiles/echoUdpS.dir/src/server.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/echoUdpS.dir/src/server.cpp.s"
	cd /Users/xianke.liu/refer_prjs/libcorpc/build/example/example_echoUdp && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/xianke.liu/refer_prjs/libcorpc/example/example_echoUdp/src/server.cpp -o CMakeFiles/echoUdpS.dir/src/server.cpp.s

# Object files for target echoUdpS
echoUdpS_OBJECTS = \
"CMakeFiles/echoUdpS.dir/__/proto/echo.pb.cc.o" \
"CMakeFiles/echoUdpS.dir/src/server.cpp.o"

# External object files for target echoUdpS
echoUdpS_EXTERNAL_OBJECTS =

example/example_echoUdp/echoUdpS: example/example_echoUdp/CMakeFiles/echoUdpS.dir/__/proto/echo.pb.cc.o
example/example_echoUdp/echoUdpS: example/example_echoUdp/CMakeFiles/echoUdpS.dir/src/server.cpp.o
example/example_echoUdp/echoUdpS: example/example_echoUdp/CMakeFiles/echoUdpS.dir/build.make
example/example_echoUdp/echoUdpS: example/example_echoUdp/CMakeFiles/echoUdpS.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/xianke.liu/refer_prjs/libcorpc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable echoUdpS"
	cd /Users/xianke.liu/refer_prjs/libcorpc/build/example/example_echoUdp && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/echoUdpS.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
example/example_echoUdp/CMakeFiles/echoUdpS.dir/build: example/example_echoUdp/echoUdpS

.PHONY : example/example_echoUdp/CMakeFiles/echoUdpS.dir/build

example/example_echoUdp/CMakeFiles/echoUdpS.dir/clean:
	cd /Users/xianke.liu/refer_prjs/libcorpc/build/example/example_echoUdp && $(CMAKE_COMMAND) -P CMakeFiles/echoUdpS.dir/cmake_clean.cmake
.PHONY : example/example_echoUdp/CMakeFiles/echoUdpS.dir/clean

example/example_echoUdp/CMakeFiles/echoUdpS.dir/depend:
	cd /Users/xianke.liu/refer_prjs/libcorpc/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/xianke.liu/refer_prjs/libcorpc /Users/xianke.liu/refer_prjs/libcorpc/example/example_echoUdp /Users/xianke.liu/refer_prjs/libcorpc/build /Users/xianke.liu/refer_prjs/libcorpc/build/example/example_echoUdp /Users/xianke.liu/refer_prjs/libcorpc/build/example/example_echoUdp/CMakeFiles/echoUdpS.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : example/example_echoUdp/CMakeFiles/echoUdpS.dir/depend

