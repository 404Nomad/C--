# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/cd2groupea/Documents/C++/cmakeProject

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cd2groupea/Documents/C++/cmakeProject/build

# Include any dependencies generated for this target.
include CMakeFiles/MyCppProject.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/MyCppProject.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/MyCppProject.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MyCppProject.dir/flags.make

CMakeFiles/MyCppProject.dir/src/main.cpp.o: CMakeFiles/MyCppProject.dir/flags.make
CMakeFiles/MyCppProject.dir/src/main.cpp.o: ../src/main.cpp
CMakeFiles/MyCppProject.dir/src/main.cpp.o: CMakeFiles/MyCppProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cd2groupea/Documents/C++/cmakeProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MyCppProject.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MyCppProject.dir/src/main.cpp.o -MF CMakeFiles/MyCppProject.dir/src/main.cpp.o.d -o CMakeFiles/MyCppProject.dir/src/main.cpp.o -c /home/cd2groupea/Documents/C++/cmakeProject/src/main.cpp

CMakeFiles/MyCppProject.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyCppProject.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cd2groupea/Documents/C++/cmakeProject/src/main.cpp > CMakeFiles/MyCppProject.dir/src/main.cpp.i

CMakeFiles/MyCppProject.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyCppProject.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cd2groupea/Documents/C++/cmakeProject/src/main.cpp -o CMakeFiles/MyCppProject.dir/src/main.cpp.s

# Object files for target MyCppProject
MyCppProject_OBJECTS = \
"CMakeFiles/MyCppProject.dir/src/main.cpp.o"

# External object files for target MyCppProject
MyCppProject_EXTERNAL_OBJECTS =

MyCppProject: CMakeFiles/MyCppProject.dir/src/main.cpp.o
MyCppProject: CMakeFiles/MyCppProject.dir/build.make
MyCppProject: CMakeFiles/MyCppProject.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/cd2groupea/Documents/C++/cmakeProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable MyCppProject"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MyCppProject.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MyCppProject.dir/build: MyCppProject
.PHONY : CMakeFiles/MyCppProject.dir/build

CMakeFiles/MyCppProject.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MyCppProject.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MyCppProject.dir/clean

CMakeFiles/MyCppProject.dir/depend:
	cd /home/cd2groupea/Documents/C++/cmakeProject/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cd2groupea/Documents/C++/cmakeProject /home/cd2groupea/Documents/C++/cmakeProject /home/cd2groupea/Documents/C++/cmakeProject/build /home/cd2groupea/Documents/C++/cmakeProject/build /home/cd2groupea/Documents/C++/cmakeProject/build/CMakeFiles/MyCppProject.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MyCppProject.dir/depend

