# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/edlinux/Escritorio/taller/TPs/TP_final/Cliente/Worms-TallerI/client

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/edlinux/Escritorio/taller/TPs/TP_final/Cliente/Worms-TallerI/client/build

# Include any dependencies generated for this target.
include CMakeFiles/modellib.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/modellib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/modellib.dir/flags.make

CMakeFiles/modellib.dir/src/model/ClientCommand.cpp.o: CMakeFiles/modellib.dir/flags.make
CMakeFiles/modellib.dir/src/model/ClientCommand.cpp.o: ../src/model/ClientCommand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/edlinux/Escritorio/taller/TPs/TP_final/Cliente/Worms-TallerI/client/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/modellib.dir/src/model/ClientCommand.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/modellib.dir/src/model/ClientCommand.cpp.o -c /home/edlinux/Escritorio/taller/TPs/TP_final/Cliente/Worms-TallerI/client/src/model/ClientCommand.cpp

CMakeFiles/modellib.dir/src/model/ClientCommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/modellib.dir/src/model/ClientCommand.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/edlinux/Escritorio/taller/TPs/TP_final/Cliente/Worms-TallerI/client/src/model/ClientCommand.cpp > CMakeFiles/modellib.dir/src/model/ClientCommand.cpp.i

CMakeFiles/modellib.dir/src/model/ClientCommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/modellib.dir/src/model/ClientCommand.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/edlinux/Escritorio/taller/TPs/TP_final/Cliente/Worms-TallerI/client/src/model/ClientCommand.cpp -o CMakeFiles/modellib.dir/src/model/ClientCommand.cpp.s

CMakeFiles/modellib.dir/src/model/ClientCommand.cpp.o.requires:

.PHONY : CMakeFiles/modellib.dir/src/model/ClientCommand.cpp.o.requires

CMakeFiles/modellib.dir/src/model/ClientCommand.cpp.o.provides: CMakeFiles/modellib.dir/src/model/ClientCommand.cpp.o.requires
	$(MAKE) -f CMakeFiles/modellib.dir/build.make CMakeFiles/modellib.dir/src/model/ClientCommand.cpp.o.provides.build
.PHONY : CMakeFiles/modellib.dir/src/model/ClientCommand.cpp.o.provides

CMakeFiles/modellib.dir/src/model/ClientCommand.cpp.o.provides.build: CMakeFiles/modellib.dir/src/model/ClientCommand.cpp.o


# Object files for target modellib
modellib_OBJECTS = \
"CMakeFiles/modellib.dir/src/model/ClientCommand.cpp.o"

# External object files for target modellib
modellib_EXTERNAL_OBJECTS =

libmodellib.a: CMakeFiles/modellib.dir/src/model/ClientCommand.cpp.o
libmodellib.a: CMakeFiles/modellib.dir/build.make
libmodellib.a: CMakeFiles/modellib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/edlinux/Escritorio/taller/TPs/TP_final/Cliente/Worms-TallerI/client/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libmodellib.a"
	$(CMAKE_COMMAND) -P CMakeFiles/modellib.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/modellib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/modellib.dir/build: libmodellib.a

.PHONY : CMakeFiles/modellib.dir/build

CMakeFiles/modellib.dir/requires: CMakeFiles/modellib.dir/src/model/ClientCommand.cpp.o.requires

.PHONY : CMakeFiles/modellib.dir/requires

CMakeFiles/modellib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/modellib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/modellib.dir/clean

CMakeFiles/modellib.dir/depend:
	cd /home/edlinux/Escritorio/taller/TPs/TP_final/Cliente/Worms-TallerI/client/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/edlinux/Escritorio/taller/TPs/TP_final/Cliente/Worms-TallerI/client /home/edlinux/Escritorio/taller/TPs/TP_final/Cliente/Worms-TallerI/client /home/edlinux/Escritorio/taller/TPs/TP_final/Cliente/Worms-TallerI/client/build /home/edlinux/Escritorio/taller/TPs/TP_final/Cliente/Worms-TallerI/client/build /home/edlinux/Escritorio/taller/TPs/TP_final/Cliente/Worms-TallerI/client/build/CMakeFiles/modellib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/modellib.dir/depend

