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
CMAKE_SOURCE_DIR = C:\Users\Brandon\CLionProjects\sueldo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Brandon\CLionProjects\sueldo\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/sueldo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sueldo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sueldo.dir/flags.make

CMakeFiles/sueldo.dir/main.c.obj: CMakeFiles/sueldo.dir/flags.make
CMakeFiles/sueldo.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Brandon\CLionProjects\sueldo\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/sueldo.dir/main.c.obj"
	A:\C_compiler\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\sueldo.dir\main.c.obj   -c C:\Users\Brandon\CLionProjects\sueldo\main.c

CMakeFiles/sueldo.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/sueldo.dir/main.c.i"
	A:\C_compiler\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Brandon\CLionProjects\sueldo\main.c > CMakeFiles\sueldo.dir\main.c.i

CMakeFiles/sueldo.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/sueldo.dir/main.c.s"
	A:\C_compiler\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Brandon\CLionProjects\sueldo\main.c -o CMakeFiles\sueldo.dir\main.c.s

# Object files for target sueldo
sueldo_OBJECTS = \
"CMakeFiles/sueldo.dir/main.c.obj"

# External object files for target sueldo
sueldo_EXTERNAL_OBJECTS =

sueldo.exe: CMakeFiles/sueldo.dir/main.c.obj
sueldo.exe: CMakeFiles/sueldo.dir/build.make
sueldo.exe: CMakeFiles/sueldo.dir/linklibs.rsp
sueldo.exe: CMakeFiles/sueldo.dir/objects1.rsp
sueldo.exe: CMakeFiles/sueldo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Brandon\CLionProjects\sueldo\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable sueldo.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\sueldo.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sueldo.dir/build: sueldo.exe

.PHONY : CMakeFiles/sueldo.dir/build

CMakeFiles/sueldo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\sueldo.dir\cmake_clean.cmake
.PHONY : CMakeFiles/sueldo.dir/clean

CMakeFiles/sueldo.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Brandon\CLionProjects\sueldo C:\Users\Brandon\CLionProjects\sueldo C:\Users\Brandon\CLionProjects\sueldo\cmake-build-debug C:\Users\Brandon\CLionProjects\sueldo\cmake-build-debug C:\Users\Brandon\CLionProjects\sueldo\cmake-build-debug\CMakeFiles\sueldo.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sueldo.dir/depend

