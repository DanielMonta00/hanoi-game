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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/vdani/hanoi-game

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/vdani/hanoi-game/build

# Include any dependencies generated for this target.
include CMakeFiles/HanoiGame.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/HanoiGame.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/HanoiGame.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HanoiGame.dir/flags.make

CMakeFiles/HanoiGame.dir/src/Cursor.cpp.o: CMakeFiles/HanoiGame.dir/flags.make
CMakeFiles/HanoiGame.dir/src/Cursor.cpp.o: /home/vdani/hanoi-game/src/Cursor.cpp
CMakeFiles/HanoiGame.dir/src/Cursor.cpp.o: CMakeFiles/HanoiGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/vdani/hanoi-game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/HanoiGame.dir/src/Cursor.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/HanoiGame.dir/src/Cursor.cpp.o -MF CMakeFiles/HanoiGame.dir/src/Cursor.cpp.o.d -o CMakeFiles/HanoiGame.dir/src/Cursor.cpp.o -c /home/vdani/hanoi-game/src/Cursor.cpp

CMakeFiles/HanoiGame.dir/src/Cursor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/HanoiGame.dir/src/Cursor.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vdani/hanoi-game/src/Cursor.cpp > CMakeFiles/HanoiGame.dir/src/Cursor.cpp.i

CMakeFiles/HanoiGame.dir/src/Cursor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/HanoiGame.dir/src/Cursor.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vdani/hanoi-game/src/Cursor.cpp -o CMakeFiles/HanoiGame.dir/src/Cursor.cpp.s

CMakeFiles/HanoiGame.dir/src/Game.cpp.o: CMakeFiles/HanoiGame.dir/flags.make
CMakeFiles/HanoiGame.dir/src/Game.cpp.o: /home/vdani/hanoi-game/src/Game.cpp
CMakeFiles/HanoiGame.dir/src/Game.cpp.o: CMakeFiles/HanoiGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/vdani/hanoi-game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/HanoiGame.dir/src/Game.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/HanoiGame.dir/src/Game.cpp.o -MF CMakeFiles/HanoiGame.dir/src/Game.cpp.o.d -o CMakeFiles/HanoiGame.dir/src/Game.cpp.o -c /home/vdani/hanoi-game/src/Game.cpp

CMakeFiles/HanoiGame.dir/src/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/HanoiGame.dir/src/Game.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vdani/hanoi-game/src/Game.cpp > CMakeFiles/HanoiGame.dir/src/Game.cpp.i

CMakeFiles/HanoiGame.dir/src/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/HanoiGame.dir/src/Game.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vdani/hanoi-game/src/Game.cpp -o CMakeFiles/HanoiGame.dir/src/Game.cpp.s

CMakeFiles/HanoiGame.dir/src/Peg.cpp.o: CMakeFiles/HanoiGame.dir/flags.make
CMakeFiles/HanoiGame.dir/src/Peg.cpp.o: /home/vdani/hanoi-game/src/Peg.cpp
CMakeFiles/HanoiGame.dir/src/Peg.cpp.o: CMakeFiles/HanoiGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/vdani/hanoi-game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/HanoiGame.dir/src/Peg.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/HanoiGame.dir/src/Peg.cpp.o -MF CMakeFiles/HanoiGame.dir/src/Peg.cpp.o.d -o CMakeFiles/HanoiGame.dir/src/Peg.cpp.o -c /home/vdani/hanoi-game/src/Peg.cpp

CMakeFiles/HanoiGame.dir/src/Peg.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/HanoiGame.dir/src/Peg.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vdani/hanoi-game/src/Peg.cpp > CMakeFiles/HanoiGame.dir/src/Peg.cpp.i

CMakeFiles/HanoiGame.dir/src/Peg.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/HanoiGame.dir/src/Peg.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vdani/hanoi-game/src/Peg.cpp -o CMakeFiles/HanoiGame.dir/src/Peg.cpp.s

CMakeFiles/HanoiGame.dir/src/Tower.cpp.o: CMakeFiles/HanoiGame.dir/flags.make
CMakeFiles/HanoiGame.dir/src/Tower.cpp.o: /home/vdani/hanoi-game/src/Tower.cpp
CMakeFiles/HanoiGame.dir/src/Tower.cpp.o: CMakeFiles/HanoiGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/vdani/hanoi-game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/HanoiGame.dir/src/Tower.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/HanoiGame.dir/src/Tower.cpp.o -MF CMakeFiles/HanoiGame.dir/src/Tower.cpp.o.d -o CMakeFiles/HanoiGame.dir/src/Tower.cpp.o -c /home/vdani/hanoi-game/src/Tower.cpp

CMakeFiles/HanoiGame.dir/src/Tower.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/HanoiGame.dir/src/Tower.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vdani/hanoi-game/src/Tower.cpp > CMakeFiles/HanoiGame.dir/src/Tower.cpp.i

CMakeFiles/HanoiGame.dir/src/Tower.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/HanoiGame.dir/src/Tower.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vdani/hanoi-game/src/Tower.cpp -o CMakeFiles/HanoiGame.dir/src/Tower.cpp.s

CMakeFiles/HanoiGame.dir/src/main.cpp.o: CMakeFiles/HanoiGame.dir/flags.make
CMakeFiles/HanoiGame.dir/src/main.cpp.o: /home/vdani/hanoi-game/src/main.cpp
CMakeFiles/HanoiGame.dir/src/main.cpp.o: CMakeFiles/HanoiGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/vdani/hanoi-game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/HanoiGame.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/HanoiGame.dir/src/main.cpp.o -MF CMakeFiles/HanoiGame.dir/src/main.cpp.o.d -o CMakeFiles/HanoiGame.dir/src/main.cpp.o -c /home/vdani/hanoi-game/src/main.cpp

CMakeFiles/HanoiGame.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/HanoiGame.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vdani/hanoi-game/src/main.cpp > CMakeFiles/HanoiGame.dir/src/main.cpp.i

CMakeFiles/HanoiGame.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/HanoiGame.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vdani/hanoi-game/src/main.cpp -o CMakeFiles/HanoiGame.dir/src/main.cpp.s

# Object files for target HanoiGame
HanoiGame_OBJECTS = \
"CMakeFiles/HanoiGame.dir/src/Cursor.cpp.o" \
"CMakeFiles/HanoiGame.dir/src/Game.cpp.o" \
"CMakeFiles/HanoiGame.dir/src/Peg.cpp.o" \
"CMakeFiles/HanoiGame.dir/src/Tower.cpp.o" \
"CMakeFiles/HanoiGame.dir/src/main.cpp.o"

# External object files for target HanoiGame
HanoiGame_EXTERNAL_OBJECTS =

bin/HanoiGame: CMakeFiles/HanoiGame.dir/src/Cursor.cpp.o
bin/HanoiGame: CMakeFiles/HanoiGame.dir/src/Game.cpp.o
bin/HanoiGame: CMakeFiles/HanoiGame.dir/src/Peg.cpp.o
bin/HanoiGame: CMakeFiles/HanoiGame.dir/src/Tower.cpp.o
bin/HanoiGame: CMakeFiles/HanoiGame.dir/src/main.cpp.o
bin/HanoiGame: CMakeFiles/HanoiGame.dir/build.make
bin/HanoiGame: /usr/lib/x86_64-linux-gnu/libsfml-graphics.so.2.6.1
bin/HanoiGame: /usr/lib/x86_64-linux-gnu/libsfml-window.so.2.6.1
bin/HanoiGame: /usr/lib/x86_64-linux-gnu/libsfml-system.so.2.6.1
bin/HanoiGame: CMakeFiles/HanoiGame.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/vdani/hanoi-game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable bin/HanoiGame"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/HanoiGame.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HanoiGame.dir/build: bin/HanoiGame
.PHONY : CMakeFiles/HanoiGame.dir/build

CMakeFiles/HanoiGame.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/HanoiGame.dir/cmake_clean.cmake
.PHONY : CMakeFiles/HanoiGame.dir/clean

CMakeFiles/HanoiGame.dir/depend:
	cd /home/vdani/hanoi-game/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vdani/hanoi-game /home/vdani/hanoi-game /home/vdani/hanoi-game/build /home/vdani/hanoi-game/build /home/vdani/hanoi-game/build/CMakeFiles/HanoiGame.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/HanoiGame.dir/depend

