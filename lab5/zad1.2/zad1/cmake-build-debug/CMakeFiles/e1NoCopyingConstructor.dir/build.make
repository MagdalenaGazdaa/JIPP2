# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /opt/clion-2018.2.5/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2018.2.5/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/student/CLionProjects/untitled1/lab5/zad1.2/zad1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/student/CLionProjects/untitled1/lab5/zad1.2/zad1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/e1NoCopyingConstructor.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/e1NoCopyingConstructor.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/e1NoCopyingConstructor.dir/flags.make

CMakeFiles/e1NoCopyingConstructor.dir/src/main.cpp.o: CMakeFiles/e1NoCopyingConstructor.dir/flags.make
CMakeFiles/e1NoCopyingConstructor.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/CLionProjects/untitled1/lab5/zad1.2/zad1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/e1NoCopyingConstructor.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/e1NoCopyingConstructor.dir/src/main.cpp.o -c /home/student/CLionProjects/untitled1/lab5/zad1.2/zad1/src/main.cpp

CMakeFiles/e1NoCopyingConstructor.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/e1NoCopyingConstructor.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/student/CLionProjects/untitled1/lab5/zad1.2/zad1/src/main.cpp > CMakeFiles/e1NoCopyingConstructor.dir/src/main.cpp.i

CMakeFiles/e1NoCopyingConstructor.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/e1NoCopyingConstructor.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/student/CLionProjects/untitled1/lab5/zad1.2/zad1/src/main.cpp -o CMakeFiles/e1NoCopyingConstructor.dir/src/main.cpp.s

CMakeFiles/e1NoCopyingConstructor.dir/src/Point.cpp.o: CMakeFiles/e1NoCopyingConstructor.dir/flags.make
CMakeFiles/e1NoCopyingConstructor.dir/src/Point.cpp.o: ../src/Point.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/CLionProjects/untitled1/lab5/zad1.2/zad1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/e1NoCopyingConstructor.dir/src/Point.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/e1NoCopyingConstructor.dir/src/Point.cpp.o -c /home/student/CLionProjects/untitled1/lab5/zad1.2/zad1/src/Point.cpp

CMakeFiles/e1NoCopyingConstructor.dir/src/Point.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/e1NoCopyingConstructor.dir/src/Point.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/student/CLionProjects/untitled1/lab5/zad1.2/zad1/src/Point.cpp > CMakeFiles/e1NoCopyingConstructor.dir/src/Point.cpp.i

CMakeFiles/e1NoCopyingConstructor.dir/src/Point.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/e1NoCopyingConstructor.dir/src/Point.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/student/CLionProjects/untitled1/lab5/zad1.2/zad1/src/Point.cpp -o CMakeFiles/e1NoCopyingConstructor.dir/src/Point.cpp.s

# Object files for target e1NoCopyingConstructor
e1NoCopyingConstructor_OBJECTS = \
"CMakeFiles/e1NoCopyingConstructor.dir/src/main.cpp.o" \
"CMakeFiles/e1NoCopyingConstructor.dir/src/Point.cpp.o"

# External object files for target e1NoCopyingConstructor
e1NoCopyingConstructor_EXTERNAL_OBJECTS =

e1NoCopyingConstructor: CMakeFiles/e1NoCopyingConstructor.dir/src/main.cpp.o
e1NoCopyingConstructor: CMakeFiles/e1NoCopyingConstructor.dir/src/Point.cpp.o
e1NoCopyingConstructor: CMakeFiles/e1NoCopyingConstructor.dir/build.make
e1NoCopyingConstructor: CMakeFiles/e1NoCopyingConstructor.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/student/CLionProjects/untitled1/lab5/zad1.2/zad1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable e1NoCopyingConstructor"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/e1NoCopyingConstructor.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/e1NoCopyingConstructor.dir/build: e1NoCopyingConstructor

.PHONY : CMakeFiles/e1NoCopyingConstructor.dir/build

CMakeFiles/e1NoCopyingConstructor.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/e1NoCopyingConstructor.dir/cmake_clean.cmake
.PHONY : CMakeFiles/e1NoCopyingConstructor.dir/clean

CMakeFiles/e1NoCopyingConstructor.dir/depend:
	cd /home/student/CLionProjects/untitled1/lab5/zad1.2/zad1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/student/CLionProjects/untitled1/lab5/zad1.2/zad1 /home/student/CLionProjects/untitled1/lab5/zad1.2/zad1 /home/student/CLionProjects/untitled1/lab5/zad1.2/zad1/cmake-build-debug /home/student/CLionProjects/untitled1/lab5/zad1.2/zad1/cmake-build-debug /home/student/CLionProjects/untitled1/lab5/zad1.2/zad1/cmake-build-debug/CMakeFiles/e1NoCopyingConstructor.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/e1NoCopyingConstructor.dir/depend

