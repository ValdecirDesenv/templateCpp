# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/vdc/dev/templateCpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/vdc/dev/templateCpp/build

# Include any dependencies generated for this target.
include src/CMakeFiles/my_test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/my_test.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/my_test.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/my_test.dir/flags.make

src/CMakeFiles/my_test.dir/my_test.cpp.o: src/CMakeFiles/my_test.dir/flags.make
src/CMakeFiles/my_test.dir/my_test.cpp.o: ../src/my_test.cpp
src/CMakeFiles/my_test.dir/my_test.cpp.o: src/CMakeFiles/my_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vdc/dev/templateCpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/my_test.dir/my_test.cpp.o"
	cd /home/vdc/dev/templateCpp/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/my_test.dir/my_test.cpp.o -MF CMakeFiles/my_test.dir/my_test.cpp.o.d -o CMakeFiles/my_test.dir/my_test.cpp.o -c /home/vdc/dev/templateCpp/src/my_test.cpp

src/CMakeFiles/my_test.dir/my_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/my_test.dir/my_test.cpp.i"
	cd /home/vdc/dev/templateCpp/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vdc/dev/templateCpp/src/my_test.cpp > CMakeFiles/my_test.dir/my_test.cpp.i

src/CMakeFiles/my_test.dir/my_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/my_test.dir/my_test.cpp.s"
	cd /home/vdc/dev/templateCpp/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vdc/dev/templateCpp/src/my_test.cpp -o CMakeFiles/my_test.dir/my_test.cpp.s

# Object files for target my_test
my_test_OBJECTS = \
"CMakeFiles/my_test.dir/my_test.cpp.o"

# External object files for target my_test
my_test_EXTERNAL_OBJECTS =

src/my_test: src/CMakeFiles/my_test.dir/my_test.cpp.o
src/my_test: src/CMakeFiles/my_test.dir/build.make
src/my_test: lib/libgtest_main.a
src/my_test: lib/libgtest.a
src/my_test: src/CMakeFiles/my_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/vdc/dev/templateCpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable my_test"
	cd /home/vdc/dev/templateCpp/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/my_test.dir/link.txt --verbose=$(VERBOSE)
	cd /home/vdc/dev/templateCpp/build/src && /usr/bin/cmake -D TEST_TARGET=my_test -D TEST_EXECUTABLE=/home/vdc/dev/templateCpp/build/src/my_test -D TEST_EXECUTOR= -D TEST_WORKING_DIR=/home/vdc/dev/templateCpp/build/src -D TEST_EXTRA_ARGS= -D TEST_PROPERTIES= -D TEST_PREFIX= -D TEST_SUFFIX= -D TEST_FILTER= -D NO_PRETTY_TYPES=FALSE -D NO_PRETTY_VALUES=FALSE -D TEST_LIST=my_test_TESTS -D CTEST_FILE=/home/vdc/dev/templateCpp/build/src/my_test[1]_tests.cmake -D TEST_DISCOVERY_TIMEOUT=5 -D TEST_XML_OUTPUT_DIR= -P /usr/share/cmake-3.22/Modules/GoogleTestAddTests.cmake

# Rule to build all files generated by this target.
src/CMakeFiles/my_test.dir/build: src/my_test
.PHONY : src/CMakeFiles/my_test.dir/build

src/CMakeFiles/my_test.dir/clean:
	cd /home/vdc/dev/templateCpp/build/src && $(CMAKE_COMMAND) -P CMakeFiles/my_test.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/my_test.dir/clean

src/CMakeFiles/my_test.dir/depend:
	cd /home/vdc/dev/templateCpp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vdc/dev/templateCpp /home/vdc/dev/templateCpp/src /home/vdc/dev/templateCpp/build /home/vdc/dev/templateCpp/build/src /home/vdc/dev/templateCpp/build/src/CMakeFiles/my_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/my_test.dir/depend

