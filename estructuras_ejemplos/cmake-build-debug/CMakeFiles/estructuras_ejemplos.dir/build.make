# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.3.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.3.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Brandon\CLionProjects\estructuras_ejemplos

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Brandon\CLionProjects\estructuras_ejemplos\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/estructuras_ejemplos.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/estructuras_ejemplos.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/estructuras_ejemplos.dir/flags.make

CMakeFiles/estructuras_ejemplos.dir/main.cpp.obj: CMakeFiles/estructuras_ejemplos.dir/flags.make
CMakeFiles/estructuras_ejemplos.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Brandon\CLionProjects\estructuras_ejemplos\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/estructuras_ejemplos.dir/main.cpp.obj"
	A:\C_compiler\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\estructuras_ejemplos.dir\main.cpp.obj -c C:\Users\Brandon\CLionProjects\estructuras_ejemplos\main.cpp

CMakeFiles/estructuras_ejemplos.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/estructuras_ejemplos.dir/main.cpp.i"
	A:\C_compiler\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Brandon\CLionProjects\estructuras_ejemplos\main.cpp > CMakeFiles\estructuras_ejemplos.dir\main.cpp.i

CMakeFiles/estructuras_ejemplos.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/estructuras_ejemplos.dir/main.cpp.s"
	A:\C_compiler\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Brandon\CLionProjects\estructuras_ejemplos\main.cpp -o CMakeFiles\estructuras_ejemplos.dir\main.cpp.s

# Object files for target estructuras_ejemplos
estructuras_ejemplos_OBJECTS = \
"CMakeFiles/estructuras_ejemplos.dir/main.cpp.obj"

# External object files for target estructuras_ejemplos
estructuras_ejemplos_EXTERNAL_OBJECTS =

estructuras_ejemplos.exe: CMakeFiles/estructuras_ejemplos.dir/main.cpp.obj
estructuras_ejemplos.exe: CMakeFiles/estructuras_ejemplos.dir/build.make
estructuras_ejemplos.exe: CMakeFiles/estructuras_ejemplos.dir/linklibs.rsp
estructuras_ejemplos.exe: CMakeFiles/estructuras_ejemplos.dir/objects1.rsp
estructuras_ejemplos.exe: CMakeFiles/estructuras_ejemplos.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Brandon\CLionProjects\estructuras_ejemplos\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable estructuras_ejemplos.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\estructuras_ejemplos.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/estructuras_ejemplos.dir/build: estructuras_ejemplos.exe

.PHONY : CMakeFiles/estructuras_ejemplos.dir/build

CMakeFiles/estructuras_ejemplos.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\estructuras_ejemplos.dir\cmake_clean.cmake
.PHONY : CMakeFiles/estructuras_ejemplos.dir/clean

CMakeFiles/estructuras_ejemplos.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Brandon\CLionProjects\estructuras_ejemplos C:\Users\Brandon\CLionProjects\estructuras_ejemplos C:\Users\Brandon\CLionProjects\estructuras_ejemplos\cmake-build-debug C:\Users\Brandon\CLionProjects\estructuras_ejemplos\cmake-build-debug C:\Users\Brandon\CLionProjects\estructuras_ejemplos\cmake-build-debug\CMakeFiles\estructuras_ejemplos.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/estructuras_ejemplos.dir/depend

