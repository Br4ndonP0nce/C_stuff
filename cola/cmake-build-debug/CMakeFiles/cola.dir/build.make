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
CMAKE_SOURCE_DIR = C:\Users\Brandon\CLionProjects\cola

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Brandon\CLionProjects\cola\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cola.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cola.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cola.dir/flags.make

CMakeFiles/cola.dir/main.cpp.obj: CMakeFiles/cola.dir/flags.make
CMakeFiles/cola.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Brandon\CLionProjects\cola\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cola.dir/main.cpp.obj"
	A:\C_compiler\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\cola.dir\main.cpp.obj -c C:\Users\Brandon\CLionProjects\cola\main.cpp

CMakeFiles/cola.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cola.dir/main.cpp.i"
	A:\C_compiler\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Brandon\CLionProjects\cola\main.cpp > CMakeFiles\cola.dir\main.cpp.i

CMakeFiles/cola.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cola.dir/main.cpp.s"
	A:\C_compiler\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Brandon\CLionProjects\cola\main.cpp -o CMakeFiles\cola.dir\main.cpp.s

CMakeFiles/cola.dir/cola.cpp.obj: CMakeFiles/cola.dir/flags.make
CMakeFiles/cola.dir/cola.cpp.obj: ../cola.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Brandon\CLionProjects\cola\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/cola.dir/cola.cpp.obj"
	A:\C_compiler\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\cola.dir\cola.cpp.obj -c C:\Users\Brandon\CLionProjects\cola\cola.cpp

CMakeFiles/cola.dir/cola.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cola.dir/cola.cpp.i"
	A:\C_compiler\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Brandon\CLionProjects\cola\cola.cpp > CMakeFiles\cola.dir\cola.cpp.i

CMakeFiles/cola.dir/cola.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cola.dir/cola.cpp.s"
	A:\C_compiler\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Brandon\CLionProjects\cola\cola.cpp -o CMakeFiles\cola.dir\cola.cpp.s

# Object files for target cola
cola_OBJECTS = \
"CMakeFiles/cola.dir/main.cpp.obj" \
"CMakeFiles/cola.dir/cola.cpp.obj"

# External object files for target cola
cola_EXTERNAL_OBJECTS =

cola.exe: CMakeFiles/cola.dir/main.cpp.obj
cola.exe: CMakeFiles/cola.dir/cola.cpp.obj
cola.exe: CMakeFiles/cola.dir/build.make
cola.exe: CMakeFiles/cola.dir/linklibs.rsp
cola.exe: CMakeFiles/cola.dir/objects1.rsp
cola.exe: CMakeFiles/cola.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Brandon\CLionProjects\cola\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable cola.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\cola.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cola.dir/build: cola.exe

.PHONY : CMakeFiles/cola.dir/build

CMakeFiles/cola.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\cola.dir\cmake_clean.cmake
.PHONY : CMakeFiles/cola.dir/clean

CMakeFiles/cola.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Brandon\CLionProjects\cola C:\Users\Brandon\CLionProjects\cola C:\Users\Brandon\CLionProjects\cola\cmake-build-debug C:\Users\Brandon\CLionProjects\cola\cmake-build-debug C:\Users\Brandon\CLionProjects\cola\cmake-build-debug\CMakeFiles\cola.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cola.dir/depend

