# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = /home/bob/.local/share/JetBrains/Toolbox/apps/clion/bin/cmake/linux/x64/bin/cmake

# The command to remove a file.
RM = /home/bob/.local/share/JetBrains/Toolbox/apps/clion/bin/cmake/linux/x64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/bob/Documents/3700-p/Project4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/bob/Documents/3700-p/Project4/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Solution.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Solution.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Solution.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Solution.dir/flags.make

CMakeFiles/Solution.dir/main.cpp.o: CMakeFiles/Solution.dir/flags.make
CMakeFiles/Solution.dir/main.cpp.o: /home/bob/Documents/3700-p/Project4/main.cpp
CMakeFiles/Solution.dir/main.cpp.o: CMakeFiles/Solution.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/bob/Documents/3700-p/Project4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Solution.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Solution.dir/main.cpp.o -MF CMakeFiles/Solution.dir/main.cpp.o.d -o CMakeFiles/Solution.dir/main.cpp.o -c /home/bob/Documents/3700-p/Project4/main.cpp

CMakeFiles/Solution.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Solution.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bob/Documents/3700-p/Project4/main.cpp > CMakeFiles/Solution.dir/main.cpp.i

CMakeFiles/Solution.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Solution.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bob/Documents/3700-p/Project4/main.cpp -o CMakeFiles/Solution.dir/main.cpp.s

CMakeFiles/Solution.dir/sampler.cpp.o: CMakeFiles/Solution.dir/flags.make
CMakeFiles/Solution.dir/sampler.cpp.o: /home/bob/Documents/3700-p/Project4/sampler.cpp
CMakeFiles/Solution.dir/sampler.cpp.o: CMakeFiles/Solution.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/bob/Documents/3700-p/Project4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Solution.dir/sampler.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Solution.dir/sampler.cpp.o -MF CMakeFiles/Solution.dir/sampler.cpp.o.d -o CMakeFiles/Solution.dir/sampler.cpp.o -c /home/bob/Documents/3700-p/Project4/sampler.cpp

CMakeFiles/Solution.dir/sampler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Solution.dir/sampler.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bob/Documents/3700-p/Project4/sampler.cpp > CMakeFiles/Solution.dir/sampler.cpp.i

CMakeFiles/Solution.dir/sampler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Solution.dir/sampler.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bob/Documents/3700-p/Project4/sampler.cpp -o CMakeFiles/Solution.dir/sampler.cpp.s

# Object files for target Solution
Solution_OBJECTS = \
"CMakeFiles/Solution.dir/main.cpp.o" \
"CMakeFiles/Solution.dir/sampler.cpp.o"

# External object files for target Solution
Solution_EXTERNAL_OBJECTS =

Solution: CMakeFiles/Solution.dir/main.cpp.o
Solution: CMakeFiles/Solution.dir/sampler.cpp.o
Solution: CMakeFiles/Solution.dir/build.make
Solution: CMakeFiles/Solution.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/bob/Documents/3700-p/Project4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Solution"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Solution.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Solution.dir/build: Solution
.PHONY : CMakeFiles/Solution.dir/build

CMakeFiles/Solution.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Solution.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Solution.dir/clean

CMakeFiles/Solution.dir/depend:
	cd /home/bob/Documents/3700-p/Project4/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bob/Documents/3700-p/Project4 /home/bob/Documents/3700-p/Project4 /home/bob/Documents/3700-p/Project4/cmake-build-debug /home/bob/Documents/3700-p/Project4/cmake-build-debug /home/bob/Documents/3700-p/Project4/cmake-build-debug/CMakeFiles/Solution.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Solution.dir/depend

