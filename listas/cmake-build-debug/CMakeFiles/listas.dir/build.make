# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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
CMAKE_SOURCE_DIR = C:\Users\Brandon\CLionProjects\listas

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Brandon\CLionProjects\listas\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/listas.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/listas.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/listas.dir/flags.make

CMakeFiles/listas.dir/main.cpp.obj: CMakeFiles/listas.dir/flags.make
CMakeFiles/listas.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Brandon\CLionProjects\listas\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/listas.dir/main.cpp.obj"
	A:\C_compiler\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\listas.dir\main.cpp.obj -c C:\Users\Brandon\CLionProjects\listas\main.cpp

CMakeFiles/listas.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/listas.dir/main.cpp.i"
	A:\C_compiler\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Brandon\CLionProjects\listas\main.cpp > CMakeFiles\listas.dir\main.cpp.i

CMakeFiles/listas.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/listas.dir/main.cpp.s"
	A:\C_compiler\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Brandon\CLionProjects\listas\main.cpp -o CMakeFiles\listas.dir\main.cpp.s

# Object files for target listas
listas_OBJECTS = \
"CMakeFiles/listas.dir/main.cpp.obj"

# External object files for target listas
listas_EXTERNAL_OBJECTS =

listas.exe: CMakeFiles/listas.dir/main.cpp.obj
listas.exe: CMakeFiles/listas.dir/build.make
listas.exe: CMakeFiles/listas.dir/linklibs.rsp
listas.exe: CMakeFiles/listas.dir/objects1.rsp
listas.exe: CMakeFiles/listas.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Brandon\CLionProjects\listas\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable listas.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\listas.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/listas.dir/build: listas.exe

.PHONY : CMakeFiles/listas.dir/build

CMakeFiles/listas.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\listas.dir\cmake_clean.cmake
.PHONY : CMakeFiles/listas.dir/clean

CMakeFiles/listas.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Brandon\CLionProjects\listas C:\Users\Brandon\CLionProjects\listas C:\Users\Brandon\CLionProjects\listas\cmake-build-debug C:\Users\Brandon\CLionProjects\listas\cmake-build-debug C:\Users\Brandon\CLionProjects\listas\cmake-build-debug\CMakeFiles\listas.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/listas.dir/depend

