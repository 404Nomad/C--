# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

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
CMAKE_COMMAND = /snap/cmake/1435/bin/cmake

# The command to remove a file.
RM = /snap/cmake/1435/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/cd2groupea/Documents/C++/Exercice4Animal

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cd2groupea/Documents/C++/Exercice4Animal/build

# Include any dependencies generated for this target.
include CMakeFiles/animal.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/animal.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/animal.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/animal.dir/flags.make

CMakeFiles/animal.dir/codegen:
.PHONY : CMakeFiles/animal.dir/codegen

CMakeFiles/animal.dir/src/animal.cpp.o: CMakeFiles/animal.dir/flags.make
CMakeFiles/animal.dir/src/animal.cpp.o: /home/cd2groupea/Documents/C++/Exercice4Animal/src/animal.cpp
CMakeFiles/animal.dir/src/animal.cpp.o: CMakeFiles/animal.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/cd2groupea/Documents/C++/Exercice4Animal/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/animal.dir/src/animal.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/animal.dir/src/animal.cpp.o -MF CMakeFiles/animal.dir/src/animal.cpp.o.d -o CMakeFiles/animal.dir/src/animal.cpp.o -c /home/cd2groupea/Documents/C++/Exercice4Animal/src/animal.cpp

CMakeFiles/animal.dir/src/animal.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/animal.dir/src/animal.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cd2groupea/Documents/C++/Exercice4Animal/src/animal.cpp > CMakeFiles/animal.dir/src/animal.cpp.i

CMakeFiles/animal.dir/src/animal.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/animal.dir/src/animal.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cd2groupea/Documents/C++/Exercice4Animal/src/animal.cpp -o CMakeFiles/animal.dir/src/animal.cpp.s

CMakeFiles/animal.dir/src/chat.cpp.o: CMakeFiles/animal.dir/flags.make
CMakeFiles/animal.dir/src/chat.cpp.o: /home/cd2groupea/Documents/C++/Exercice4Animal/src/chat.cpp
CMakeFiles/animal.dir/src/chat.cpp.o: CMakeFiles/animal.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/cd2groupea/Documents/C++/Exercice4Animal/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/animal.dir/src/chat.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/animal.dir/src/chat.cpp.o -MF CMakeFiles/animal.dir/src/chat.cpp.o.d -o CMakeFiles/animal.dir/src/chat.cpp.o -c /home/cd2groupea/Documents/C++/Exercice4Animal/src/chat.cpp

CMakeFiles/animal.dir/src/chat.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/animal.dir/src/chat.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cd2groupea/Documents/C++/Exercice4Animal/src/chat.cpp > CMakeFiles/animal.dir/src/chat.cpp.i

CMakeFiles/animal.dir/src/chat.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/animal.dir/src/chat.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cd2groupea/Documents/C++/Exercice4Animal/src/chat.cpp -o CMakeFiles/animal.dir/src/chat.cpp.s

CMakeFiles/animal.dir/src/chien.cpp.o: CMakeFiles/animal.dir/flags.make
CMakeFiles/animal.dir/src/chien.cpp.o: /home/cd2groupea/Documents/C++/Exercice4Animal/src/chien.cpp
CMakeFiles/animal.dir/src/chien.cpp.o: CMakeFiles/animal.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/cd2groupea/Documents/C++/Exercice4Animal/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/animal.dir/src/chien.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/animal.dir/src/chien.cpp.o -MF CMakeFiles/animal.dir/src/chien.cpp.o.d -o CMakeFiles/animal.dir/src/chien.cpp.o -c /home/cd2groupea/Documents/C++/Exercice4Animal/src/chien.cpp

CMakeFiles/animal.dir/src/chien.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/animal.dir/src/chien.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cd2groupea/Documents/C++/Exercice4Animal/src/chien.cpp > CMakeFiles/animal.dir/src/chien.cpp.i

CMakeFiles/animal.dir/src/chien.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/animal.dir/src/chien.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cd2groupea/Documents/C++/Exercice4Animal/src/chien.cpp -o CMakeFiles/animal.dir/src/chien.cpp.s

CMakeFiles/animal.dir/src/main.cpp.o: CMakeFiles/animal.dir/flags.make
CMakeFiles/animal.dir/src/main.cpp.o: /home/cd2groupea/Documents/C++/Exercice4Animal/src/main.cpp
CMakeFiles/animal.dir/src/main.cpp.o: CMakeFiles/animal.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/cd2groupea/Documents/C++/Exercice4Animal/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/animal.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/animal.dir/src/main.cpp.o -MF CMakeFiles/animal.dir/src/main.cpp.o.d -o CMakeFiles/animal.dir/src/main.cpp.o -c /home/cd2groupea/Documents/C++/Exercice4Animal/src/main.cpp

CMakeFiles/animal.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/animal.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cd2groupea/Documents/C++/Exercice4Animal/src/main.cpp > CMakeFiles/animal.dir/src/main.cpp.i

CMakeFiles/animal.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/animal.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cd2groupea/Documents/C++/Exercice4Animal/src/main.cpp -o CMakeFiles/animal.dir/src/main.cpp.s

# Object files for target animal
animal_OBJECTS = \
"CMakeFiles/animal.dir/src/animal.cpp.o" \
"CMakeFiles/animal.dir/src/chat.cpp.o" \
"CMakeFiles/animal.dir/src/chien.cpp.o" \
"CMakeFiles/animal.dir/src/main.cpp.o"

# External object files for target animal
animal_EXTERNAL_OBJECTS =

animal: CMakeFiles/animal.dir/src/animal.cpp.o
animal: CMakeFiles/animal.dir/src/chat.cpp.o
animal: CMakeFiles/animal.dir/src/chien.cpp.o
animal: CMakeFiles/animal.dir/src/main.cpp.o
animal: CMakeFiles/animal.dir/build.make
animal: CMakeFiles/animal.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/cd2groupea/Documents/C++/Exercice4Animal/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable animal"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/animal.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/animal.dir/build: animal
.PHONY : CMakeFiles/animal.dir/build

CMakeFiles/animal.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/animal.dir/cmake_clean.cmake
.PHONY : CMakeFiles/animal.dir/clean

CMakeFiles/animal.dir/depend:
	cd /home/cd2groupea/Documents/C++/Exercice4Animal/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cd2groupea/Documents/C++/Exercice4Animal /home/cd2groupea/Documents/C++/Exercice4Animal /home/cd2groupea/Documents/C++/Exercice4Animal/build /home/cd2groupea/Documents/C++/Exercice4Animal/build /home/cd2groupea/Documents/C++/Exercice4Animal/build/CMakeFiles/animal.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/animal.dir/depend

