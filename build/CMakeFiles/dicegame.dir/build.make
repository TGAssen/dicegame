# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Timo\Desktop\dicegametool

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Timo\Desktop\dicegametool\build

# Include any dependencies generated for this target.
include CMakeFiles/dicegame.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/dicegame.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/dicegame.dir/flags.make

CMakeFiles/dicegame.dir/main.cpp.obj: CMakeFiles/dicegame.dir/flags.make
CMakeFiles/dicegame.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Timo\Desktop\dicegametool\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/dicegame.dir/main.cpp.obj"
	C:\TDM-GCC-64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\dicegame.dir\main.cpp.obj -c C:\Users\Timo\Desktop\dicegametool\main.cpp

CMakeFiles/dicegame.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dicegame.dir/main.cpp.i"
	C:\TDM-GCC-64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Timo\Desktop\dicegametool\main.cpp > CMakeFiles\dicegame.dir\main.cpp.i

CMakeFiles/dicegame.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dicegame.dir/main.cpp.s"
	C:\TDM-GCC-64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Timo\Desktop\dicegametool\main.cpp -o CMakeFiles\dicegame.dir\main.cpp.s

# Object files for target dicegame
dicegame_OBJECTS = \
"CMakeFiles/dicegame.dir/main.cpp.obj"

# External object files for target dicegame
dicegame_EXTERNAL_OBJECTS =

dicegame.exe: CMakeFiles/dicegame.dir/main.cpp.obj
dicegame.exe: CMakeFiles/dicegame.dir/build.make
dicegame.exe: CMakeFiles/dicegame.dir/linklibs.rsp
dicegame.exe: CMakeFiles/dicegame.dir/objects1.rsp
dicegame.exe: CMakeFiles/dicegame.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Timo\Desktop\dicegametool\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable dicegame.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\dicegame.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/dicegame.dir/build: dicegame.exe

.PHONY : CMakeFiles/dicegame.dir/build

CMakeFiles/dicegame.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\dicegame.dir\cmake_clean.cmake
.PHONY : CMakeFiles/dicegame.dir/clean

CMakeFiles/dicegame.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Timo\Desktop\dicegametool C:\Users\Timo\Desktop\dicegametool C:\Users\Timo\Desktop\dicegametool\build C:\Users\Timo\Desktop\dicegametool\build C:\Users\Timo\Desktop\dicegametool\build\CMakeFiles\dicegame.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/dicegame.dir/depend

