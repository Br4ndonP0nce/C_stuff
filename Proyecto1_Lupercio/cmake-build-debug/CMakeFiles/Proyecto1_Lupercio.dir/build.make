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
CMAKE_SOURCE_DIR = C:\Users\Brandon\CLionProjects\Proyecto1_Lupercio

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Brandon\CLionProjects\Proyecto1_Lupercio\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Proyecto1_Lupercio.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Proyecto1_Lupercio.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Proyecto1_Lupercio.dir/flags.make

CMakeFiles/Proyecto1_Lupercio.dir/main.cpp.obj: CMakeFiles/Proyecto1_Lupercio.dir/flags.make
CMakeFiles/Proyecto1_Lupercio.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Brandon\CLionProjects\Proyecto1_Lupercio\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Proyecto1_Lupercio.dir/main.cpp.obj"
	A:\C_compiler\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Proyecto1_Lupercio.dir\main.cpp.obj -c C:\Users\Brandon\CLionProjects\Proyecto1_Lupercio\main.cpp

CMakeFiles/Proyecto1_Lupercio.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Proyecto1_Lupercio.dir/main.cpp.i"
	A:\C_compiler\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Brandon\CLionProjects\Proyecto1_Lupercio\main.cpp > CMakeFiles\Proyecto1_Lupercio.dir\main.cpp.i

CMakeFiles/Proyecto1_Lupercio.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Proyecto1_Lupercio.dir/main.cpp.s"
	A:\C_compiler\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Brandon\CLionProjects\Proyecto1_Lupercio\main.cpp -o CMakeFiles\Proyecto1_Lupercio.dir\main.cpp.s

# Object files for target Proyecto1_Lupercio
Proyecto1_Lupercio_OBJECTS = \
"CMakeFiles/Proyecto1_Lupercio.dir/main.cpp.obj"

# External object files for target Proyecto1_Lupercio
Proyecto1_Lupercio_EXTERNAL_OBJECTS =

Proyecto1_Lupercio.exe: CMakeFiles/Proyecto1_Lupercio.dir/main.cpp.obj
Proyecto1_Lupercio.exe: CMakeFiles/Proyecto1_Lupercio.dir/build.make
Proyecto1_Lupercio.exe: CMakeFiles/Proyecto1_Lupercio.dir/linklibs.rsp
Proyecto1_Lupercio.exe: CMakeFiles/Proyecto1_Lupercio.dir/objects1.rsp
Proyecto1_Lupercio.exe: CMakeFiles/Proyecto1_Lupercio.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Brandon\CLionProjects\Proyecto1_Lupercio\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Proyecto1_Lupercio.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Proyecto1_Lupercio.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Proyecto1_Lupercio.dir/build: Proyecto1_Lupercio.exe

.PHONY : CMakeFiles/Proyecto1_Lupercio.dir/build

CMakeFiles/Proyecto1_Lupercio.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Proyecto1_Lupercio.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Proyecto1_Lupercio.dir/clean

CMakeFiles/Proyecto1_Lupercio.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Brandon\CLionProjects\Proyecto1_Lupercio C:\Users\Brandon\CLionProjects\Proyecto1_Lupercio C:\Users\Brandon\CLionProjects\Proyecto1_Lupercio\cmake-build-debug C:\Users\Brandon\CLionProjects\Proyecto1_Lupercio\cmake-build-debug C:\Users\Brandon\CLionProjects\Proyecto1_Lupercio\cmake-build-debug\CMakeFiles\Proyecto1_Lupercio.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Proyecto1_Lupercio.dir/depend

