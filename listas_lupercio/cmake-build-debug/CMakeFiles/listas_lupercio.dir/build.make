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
CMAKE_SOURCE_DIR = C:\Users\Brandon\CLionProjects\listas_lupercio

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Brandon\CLionProjects\listas_lupercio\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/listas_lupercio.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/listas_lupercio.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/listas_lupercio.dir/flags.make

CMakeFiles/listas_lupercio.dir/main.cpp.obj: CMakeFiles/listas_lupercio.dir/flags.make
CMakeFiles/listas_lupercio.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Brandon\CLionProjects\listas_lupercio\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/listas_lupercio.dir/main.cpp.obj"
	A:\C_compiler\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\listas_lupercio.dir\main.cpp.obj -c C:\Users\Brandon\CLionProjects\listas_lupercio\main.cpp

CMakeFiles/listas_lupercio.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/listas_lupercio.dir/main.cpp.i"
	A:\C_compiler\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Brandon\CLionProjects\listas_lupercio\main.cpp > CMakeFiles\listas_lupercio.dir\main.cpp.i

CMakeFiles/listas_lupercio.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/listas_lupercio.dir/main.cpp.s"
	A:\C_compiler\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Brandon\CLionProjects\listas_lupercio\main.cpp -o CMakeFiles\listas_lupercio.dir\main.cpp.s

# Object files for target listas_lupercio
listas_lupercio_OBJECTS = \
"CMakeFiles/listas_lupercio.dir/main.cpp.obj"

# External object files for target listas_lupercio
listas_lupercio_EXTERNAL_OBJECTS =

listas_lupercio.exe: CMakeFiles/listas_lupercio.dir/main.cpp.obj
listas_lupercio.exe: CMakeFiles/listas_lupercio.dir/build.make
listas_lupercio.exe: CMakeFiles/listas_lupercio.dir/linklibs.rsp
listas_lupercio.exe: CMakeFiles/listas_lupercio.dir/objects1.rsp
listas_lupercio.exe: CMakeFiles/listas_lupercio.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Brandon\CLionProjects\listas_lupercio\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable listas_lupercio.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\listas_lupercio.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/listas_lupercio.dir/build: listas_lupercio.exe

.PHONY : CMakeFiles/listas_lupercio.dir/build

CMakeFiles/listas_lupercio.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\listas_lupercio.dir\cmake_clean.cmake
.PHONY : CMakeFiles/listas_lupercio.dir/clean

CMakeFiles/listas_lupercio.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Brandon\CLionProjects\listas_lupercio C:\Users\Brandon\CLionProjects\listas_lupercio C:\Users\Brandon\CLionProjects\listas_lupercio\cmake-build-debug C:\Users\Brandon\CLionProjects\listas_lupercio\cmake-build-debug C:\Users\Brandon\CLionProjects\listas_lupercio\cmake-build-debug\CMakeFiles\listas_lupercio.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/listas_lupercio.dir/depend

