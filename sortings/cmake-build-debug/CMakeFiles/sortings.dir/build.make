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
CMAKE_SOURCE_DIR = C:\Users\Brandon\CLionProjects\sortings

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Brandon\CLionProjects\sortings\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/sortings.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sortings.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sortings.dir/flags.make

CMakeFiles/sortings.dir/main.c.obj: CMakeFiles/sortings.dir/flags.make
CMakeFiles/sortings.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Brandon\CLionProjects\sortings\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/sortings.dir/main.c.obj"
	A:\C_compiler\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\sortings.dir\main.c.obj   -c C:\Users\Brandon\CLionProjects\sortings\main.c

CMakeFiles/sortings.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/sortings.dir/main.c.i"
	A:\C_compiler\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Brandon\CLionProjects\sortings\main.c > CMakeFiles\sortings.dir\main.c.i

CMakeFiles/sortings.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/sortings.dir/main.c.s"
	A:\C_compiler\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Brandon\CLionProjects\sortings\main.c -o CMakeFiles\sortings.dir\main.c.s

# Object files for target sortings
sortings_OBJECTS = \
"CMakeFiles/sortings.dir/main.c.obj"

# External object files for target sortings
sortings_EXTERNAL_OBJECTS =

sortings.exe: CMakeFiles/sortings.dir/main.c.obj
sortings.exe: CMakeFiles/sortings.dir/build.make
sortings.exe: CMakeFiles/sortings.dir/linklibs.rsp
sortings.exe: CMakeFiles/sortings.dir/objects1.rsp
sortings.exe: CMakeFiles/sortings.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Brandon\CLionProjects\sortings\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable sortings.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\sortings.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sortings.dir/build: sortings.exe

.PHONY : CMakeFiles/sortings.dir/build

CMakeFiles/sortings.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\sortings.dir\cmake_clean.cmake
.PHONY : CMakeFiles/sortings.dir/clean

CMakeFiles/sortings.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Brandon\CLionProjects\sortings C:\Users\Brandon\CLionProjects\sortings C:\Users\Brandon\CLionProjects\sortings\cmake-build-debug C:\Users\Brandon\CLionProjects\sortings\cmake-build-debug C:\Users\Brandon\CLionProjects\sortings\cmake-build-debug\CMakeFiles\sortings.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sortings.dir/depend

