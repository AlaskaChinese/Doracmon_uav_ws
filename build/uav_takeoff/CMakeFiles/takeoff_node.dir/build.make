# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/alaska/basic_dev/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alaska/basic_dev/build

# Include any dependencies generated for this target.
include uav_takeoff/CMakeFiles/takeoff_node.dir/depend.make

# Include the progress variables for this target.
include uav_takeoff/CMakeFiles/takeoff_node.dir/progress.make

# Include the compile flags for this target's objects.
include uav_takeoff/CMakeFiles/takeoff_node.dir/flags.make

uav_takeoff/CMakeFiles/takeoff_node.dir/src/takeoff_node.cpp.o: uav_takeoff/CMakeFiles/takeoff_node.dir/flags.make
uav_takeoff/CMakeFiles/takeoff_node.dir/src/takeoff_node.cpp.o: /home/alaska/basic_dev/src/uav_takeoff/src/takeoff_node.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alaska/basic_dev/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object uav_takeoff/CMakeFiles/takeoff_node.dir/src/takeoff_node.cpp.o"
	cd /home/alaska/basic_dev/build/uav_takeoff && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/takeoff_node.dir/src/takeoff_node.cpp.o -c /home/alaska/basic_dev/src/uav_takeoff/src/takeoff_node.cpp

uav_takeoff/CMakeFiles/takeoff_node.dir/src/takeoff_node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/takeoff_node.dir/src/takeoff_node.cpp.i"
	cd /home/alaska/basic_dev/build/uav_takeoff && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alaska/basic_dev/src/uav_takeoff/src/takeoff_node.cpp > CMakeFiles/takeoff_node.dir/src/takeoff_node.cpp.i

uav_takeoff/CMakeFiles/takeoff_node.dir/src/takeoff_node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/takeoff_node.dir/src/takeoff_node.cpp.s"
	cd /home/alaska/basic_dev/build/uav_takeoff && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alaska/basic_dev/src/uav_takeoff/src/takeoff_node.cpp -o CMakeFiles/takeoff_node.dir/src/takeoff_node.cpp.s

# Object files for target takeoff_node
takeoff_node_OBJECTS = \
"CMakeFiles/takeoff_node.dir/src/takeoff_node.cpp.o"

# External object files for target takeoff_node
takeoff_node_EXTERNAL_OBJECTS =

/home/alaska/basic_dev/devel/lib/uav_takeoff/takeoff_node: uav_takeoff/CMakeFiles/takeoff_node.dir/src/takeoff_node.cpp.o
/home/alaska/basic_dev/devel/lib/uav_takeoff/takeoff_node: uav_takeoff/CMakeFiles/takeoff_node.dir/build.make
/home/alaska/basic_dev/devel/lib/uav_takeoff/takeoff_node: /opt/ros/noetic/lib/libroscpp.so
/home/alaska/basic_dev/devel/lib/uav_takeoff/takeoff_node: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/alaska/basic_dev/devel/lib/uav_takeoff/takeoff_node: /usr/lib/x86_64-linux-gnu/libboost_chrono.so.1.71.0
/home/alaska/basic_dev/devel/lib/uav_takeoff/takeoff_node: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so.1.71.0
/home/alaska/basic_dev/devel/lib/uav_takeoff/takeoff_node: /opt/ros/noetic/lib/librosconsole.so
/home/alaska/basic_dev/devel/lib/uav_takeoff/takeoff_node: /opt/ros/noetic/lib/librosconsole_log4cxx.so
/home/alaska/basic_dev/devel/lib/uav_takeoff/takeoff_node: /opt/ros/noetic/lib/librosconsole_backend_interface.so
/home/alaska/basic_dev/devel/lib/uav_takeoff/takeoff_node: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
/home/alaska/basic_dev/devel/lib/uav_takeoff/takeoff_node: /usr/lib/x86_64-linux-gnu/libboost_regex.so.1.71.0
/home/alaska/basic_dev/devel/lib/uav_takeoff/takeoff_node: /opt/ros/noetic/lib/libxmlrpcpp.so
/home/alaska/basic_dev/devel/lib/uav_takeoff/takeoff_node: /opt/ros/noetic/lib/libroscpp_serialization.so
/home/alaska/basic_dev/devel/lib/uav_takeoff/takeoff_node: /opt/ros/noetic/lib/librostime.so
/home/alaska/basic_dev/devel/lib/uav_takeoff/takeoff_node: /usr/lib/x86_64-linux-gnu/libboost_date_time.so.1.71.0
/home/alaska/basic_dev/devel/lib/uav_takeoff/takeoff_node: /opt/ros/noetic/lib/libcpp_common.so
/home/alaska/basic_dev/devel/lib/uav_takeoff/takeoff_node: /usr/lib/x86_64-linux-gnu/libboost_system.so.1.71.0
/home/alaska/basic_dev/devel/lib/uav_takeoff/takeoff_node: /usr/lib/x86_64-linux-gnu/libboost_thread.so.1.71.0
/home/alaska/basic_dev/devel/lib/uav_takeoff/takeoff_node: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so.0.4
/home/alaska/basic_dev/devel/lib/uav_takeoff/takeoff_node: uav_takeoff/CMakeFiles/takeoff_node.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alaska/basic_dev/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/alaska/basic_dev/devel/lib/uav_takeoff/takeoff_node"
	cd /home/alaska/basic_dev/build/uav_takeoff && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/takeoff_node.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
uav_takeoff/CMakeFiles/takeoff_node.dir/build: /home/alaska/basic_dev/devel/lib/uav_takeoff/takeoff_node

.PHONY : uav_takeoff/CMakeFiles/takeoff_node.dir/build

uav_takeoff/CMakeFiles/takeoff_node.dir/clean:
	cd /home/alaska/basic_dev/build/uav_takeoff && $(CMAKE_COMMAND) -P CMakeFiles/takeoff_node.dir/cmake_clean.cmake
.PHONY : uav_takeoff/CMakeFiles/takeoff_node.dir/clean

uav_takeoff/CMakeFiles/takeoff_node.dir/depend:
	cd /home/alaska/basic_dev/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alaska/basic_dev/src /home/alaska/basic_dev/src/uav_takeoff /home/alaska/basic_dev/build /home/alaska/basic_dev/build/uav_takeoff /home/alaska/basic_dev/build/uav_takeoff/CMakeFiles/takeoff_node.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : uav_takeoff/CMakeFiles/takeoff_node.dir/depend

