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
include CMakeFiles/commonlib.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/commonlib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/commonlib.dir/flags.make

CMakeFiles/commonlib.dir/src/common/Thread.cpp.o: CMakeFiles/commonlib.dir/flags.make
CMakeFiles/commonlib.dir/src/common/Thread.cpp.o: ../src/common/Thread.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/edlinux/Escritorio/taller/TPs/TP_final/Cliente/Worms-TallerI/client/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/commonlib.dir/src/common/Thread.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/commonlib.dir/src/common/Thread.cpp.o -c /home/edlinux/Escritorio/taller/TPs/TP_final/Cliente/Worms-TallerI/client/src/common/Thread.cpp

CMakeFiles/commonlib.dir/src/common/Thread.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/commonlib.dir/src/common/Thread.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/edlinux/Escritorio/taller/TPs/TP_final/Cliente/Worms-TallerI/client/src/common/Thread.cpp > CMakeFiles/commonlib.dir/src/common/Thread.cpp.i

CMakeFiles/commonlib.dir/src/common/Thread.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/commonlib.dir/src/common/Thread.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/edlinux/Escritorio/taller/TPs/TP_final/Cliente/Worms-TallerI/client/src/common/Thread.cpp -o CMakeFiles/commonlib.dir/src/common/Thread.cpp.s

CMakeFiles/commonlib.dir/src/common/Thread.cpp.o.requires:

.PHONY : CMakeFiles/commonlib.dir/src/common/Thread.cpp.o.requires

CMakeFiles/commonlib.dir/src/common/Thread.cpp.o.provides: CMakeFiles/commonlib.dir/src/common/Thread.cpp.o.requires
	$(MAKE) -f CMakeFiles/commonlib.dir/build.make CMakeFiles/commonlib.dir/src/common/Thread.cpp.o.provides.build
.PHONY : CMakeFiles/commonlib.dir/src/common/Thread.cpp.o.provides

CMakeFiles/commonlib.dir/src/common/Thread.cpp.o.provides.build: CMakeFiles/commonlib.dir/src/common/Thread.cpp.o


CMakeFiles/commonlib.dir/src/common/Queue.cpp.o: CMakeFiles/commonlib.dir/flags.make
CMakeFiles/commonlib.dir/src/common/Queue.cpp.o: ../src/common/Queue.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/edlinux/Escritorio/taller/TPs/TP_final/Cliente/Worms-TallerI/client/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/commonlib.dir/src/common/Queue.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/commonlib.dir/src/common/Queue.cpp.o -c /home/edlinux/Escritorio/taller/TPs/TP_final/Cliente/Worms-TallerI/client/src/common/Queue.cpp

CMakeFiles/commonlib.dir/src/common/Queue.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/commonlib.dir/src/common/Queue.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/edlinux/Escritorio/taller/TPs/TP_final/Cliente/Worms-TallerI/client/src/common/Queue.cpp > CMakeFiles/commonlib.dir/src/common/Queue.cpp.i

CMakeFiles/commonlib.dir/src/common/Queue.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/commonlib.dir/src/common/Queue.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/edlinux/Escritorio/taller/TPs/TP_final/Cliente/Worms-TallerI/client/src/common/Queue.cpp -o CMakeFiles/commonlib.dir/src/common/Queue.cpp.s

CMakeFiles/commonlib.dir/src/common/Queue.cpp.o.requires:

.PHONY : CMakeFiles/commonlib.dir/src/common/Queue.cpp.o.requires

CMakeFiles/commonlib.dir/src/common/Queue.cpp.o.provides: CMakeFiles/commonlib.dir/src/common/Queue.cpp.o.requires
	$(MAKE) -f CMakeFiles/commonlib.dir/build.make CMakeFiles/commonlib.dir/src/common/Queue.cpp.o.provides.build
.PHONY : CMakeFiles/commonlib.dir/src/common/Queue.cpp.o.provides

CMakeFiles/commonlib.dir/src/common/Queue.cpp.o.provides.build: CMakeFiles/commonlib.dir/src/common/Queue.cpp.o


# Object files for target commonlib
commonlib_OBJECTS = \
"CMakeFiles/commonlib.dir/src/common/Thread.cpp.o" \
"CMakeFiles/commonlib.dir/src/common/Queue.cpp.o"

# External object files for target commonlib
commonlib_EXTERNAL_OBJECTS =

libcommonlib.a: CMakeFiles/commonlib.dir/src/common/Thread.cpp.o
libcommonlib.a: CMakeFiles/commonlib.dir/src/common/Queue.cpp.o
libcommonlib.a: CMakeFiles/commonlib.dir/build.make
libcommonlib.a: CMakeFiles/commonlib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/edlinux/Escritorio/taller/TPs/TP_final/Cliente/Worms-TallerI/client/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libcommonlib.a"
	$(CMAKE_COMMAND) -P CMakeFiles/commonlib.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/commonlib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/commonlib.dir/build: libcommonlib.a

.PHONY : CMakeFiles/commonlib.dir/build

CMakeFiles/commonlib.dir/requires: CMakeFiles/commonlib.dir/src/common/Thread.cpp.o.requires
CMakeFiles/commonlib.dir/requires: CMakeFiles/commonlib.dir/src/common/Queue.cpp.o.requires

.PHONY : CMakeFiles/commonlib.dir/requires

CMakeFiles/commonlib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/commonlib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/commonlib.dir/clean

CMakeFiles/commonlib.dir/depend:
	cd /home/edlinux/Escritorio/taller/TPs/TP_final/Cliente/Worms-TallerI/client/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/edlinux/Escritorio/taller/TPs/TP_final/Cliente/Worms-TallerI/client /home/edlinux/Escritorio/taller/TPs/TP_final/Cliente/Worms-TallerI/client /home/edlinux/Escritorio/taller/TPs/TP_final/Cliente/Worms-TallerI/client/build /home/edlinux/Escritorio/taller/TPs/TP_final/Cliente/Worms-TallerI/client/build /home/edlinux/Escritorio/taller/TPs/TP_final/Cliente/Worms-TallerI/client/build/CMakeFiles/commonlib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/commonlib.dir/depend
