# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\magda\Desktop\konstruktory\destruktory

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\magda\Desktop\konstruktory\destruktory\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\destruktory.dir\depend.make
# Include the progress variables for this target.
include CMakeFiles\destruktory.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\destruktory.dir\flags.make

CMakeFiles\destruktory.dir\main.cpp.obj: CMakeFiles\destruktory.dir\flags.make
CMakeFiles\destruktory.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\magda\Desktop\konstruktory\destruktory\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/destruktory.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\destruktory.dir\main.cpp.obj /FdCMakeFiles\destruktory.dir\ /FS -c C:\Users\magda\Desktop\konstruktory\destruktory\main.cpp
<<

CMakeFiles\destruktory.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/destruktory.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe > CMakeFiles\destruktory.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\magda\Desktop\konstruktory\destruktory\main.cpp
<<

CMakeFiles\destruktory.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/destruktory.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\destruktory.dir\main.cpp.s /c C:\Users\magda\Desktop\konstruktory\destruktory\main.cpp
<<

# Object files for target destruktory
destruktory_OBJECTS = \
"CMakeFiles\destruktory.dir\main.cpp.obj"

# External object files for target destruktory
destruktory_EXTERNAL_OBJECTS =

destruktory.exe: CMakeFiles\destruktory.dir\main.cpp.obj
destruktory.exe: CMakeFiles\destruktory.dir\build.make
destruktory.exe: CMakeFiles\destruktory.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\magda\Desktop\konstruktory\destruktory\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable destruktory.exe"
	"C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\destruktory.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests -- C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\destruktory.dir\objects1.rsp @<<
 /out:destruktory.exe /implib:destruktory.lib /pdb:C:\Users\magda\Desktop\konstruktory\destruktory\cmake-build-debug\destruktory.pdb /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\destruktory.dir\build: destruktory.exe
.PHONY : CMakeFiles\destruktory.dir\build

CMakeFiles\destruktory.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\destruktory.dir\cmake_clean.cmake
.PHONY : CMakeFiles\destruktory.dir\clean

CMakeFiles\destruktory.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\magda\Desktop\konstruktory\destruktory C:\Users\magda\Desktop\konstruktory\destruktory C:\Users\magda\Desktop\konstruktory\destruktory\cmake-build-debug C:\Users\magda\Desktop\konstruktory\destruktory\cmake-build-debug C:\Users\magda\Desktop\konstruktory\destruktory\cmake-build-debug\CMakeFiles\destruktory.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\destruktory.dir\depend

