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
CMAKE_SOURCE_DIR = C:\Users\magda\Desktop\studia\jipp\lab9\StopExample

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\magda\Desktop\studia\jipp\lab9\StopExample\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\vectorExample.dir\depend.make
# Include the progress variables for this target.
include CMakeFiles\vectorExample.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\vectorExample.dir\flags.make

CMakeFiles\vectorExample.dir\Stop.cpp.obj: CMakeFiles\vectorExample.dir\flags.make
CMakeFiles\vectorExample.dir\Stop.cpp.obj: ..\Stop.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\magda\Desktop\studia\jipp\lab9\StopExample\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/vectorExample.dir/Stop.cpp.obj"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\vectorExample.dir\Stop.cpp.obj /FdCMakeFiles\vectorExample.dir\ /FS -c C:\Users\magda\Desktop\studia\jipp\lab9\StopExample\Stop.cpp
<<

CMakeFiles\vectorExample.dir\Stop.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vectorExample.dir/Stop.cpp.i"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe > CMakeFiles\vectorExample.dir\Stop.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\magda\Desktop\studia\jipp\lab9\StopExample\Stop.cpp
<<

CMakeFiles\vectorExample.dir\Stop.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vectorExample.dir/Stop.cpp.s"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\vectorExample.dir\Stop.cpp.s /c C:\Users\magda\Desktop\studia\jipp\lab9\StopExample\Stop.cpp
<<

CMakeFiles\vectorExample.dir\vExample.cpp.obj: CMakeFiles\vectorExample.dir\flags.make
CMakeFiles\vectorExample.dir\vExample.cpp.obj: ..\vExample.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\magda\Desktop\studia\jipp\lab9\StopExample\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/vectorExample.dir/vExample.cpp.obj"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\vectorExample.dir\vExample.cpp.obj /FdCMakeFiles\vectorExample.dir\ /FS -c C:\Users\magda\Desktop\studia\jipp\lab9\StopExample\vExample.cpp
<<

CMakeFiles\vectorExample.dir\vExample.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vectorExample.dir/vExample.cpp.i"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe > CMakeFiles\vectorExample.dir\vExample.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\magda\Desktop\studia\jipp\lab9\StopExample\vExample.cpp
<<

CMakeFiles\vectorExample.dir\vExample.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vectorExample.dir/vExample.cpp.s"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\vectorExample.dir\vExample.cpp.s /c C:\Users\magda\Desktop\studia\jipp\lab9\StopExample\vExample.cpp
<<

CMakeFiles\vectorExample.dir\Line.cpp.obj: CMakeFiles\vectorExample.dir\flags.make
CMakeFiles\vectorExample.dir\Line.cpp.obj: ..\Line.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\magda\Desktop\studia\jipp\lab9\StopExample\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/vectorExample.dir/Line.cpp.obj"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\vectorExample.dir\Line.cpp.obj /FdCMakeFiles\vectorExample.dir\ /FS -c C:\Users\magda\Desktop\studia\jipp\lab9\StopExample\Line.cpp
<<

CMakeFiles\vectorExample.dir\Line.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vectorExample.dir/Line.cpp.i"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe > CMakeFiles\vectorExample.dir\Line.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\magda\Desktop\studia\jipp\lab9\StopExample\Line.cpp
<<

CMakeFiles\vectorExample.dir\Line.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vectorExample.dir/Line.cpp.s"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\vectorExample.dir\Line.cpp.s /c C:\Users\magda\Desktop\studia\jipp\lab9\StopExample\Line.cpp
<<

# Object files for target vectorExample
vectorExample_OBJECTS = \
"CMakeFiles\vectorExample.dir\Stop.cpp.obj" \
"CMakeFiles\vectorExample.dir\vExample.cpp.obj" \
"CMakeFiles\vectorExample.dir\Line.cpp.obj"

# External object files for target vectorExample
vectorExample_EXTERNAL_OBJECTS =

vectorExample.exe: CMakeFiles\vectorExample.dir\Stop.cpp.obj
vectorExample.exe: CMakeFiles\vectorExample.dir\vExample.cpp.obj
vectorExample.exe: CMakeFiles\vectorExample.dir\Line.cpp.obj
vectorExample.exe: CMakeFiles\vectorExample.dir\build.make
vectorExample.exe: CMakeFiles\vectorExample.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\magda\Desktop\studia\jipp\lab9\StopExample\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable vectorExample.exe"
	"C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\vectorExample.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests -- C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\vectorExample.dir\objects1.rsp @<<
 /out:vectorExample.exe /implib:vectorExample.lib /pdb:C:\Users\magda\Desktop\studia\jipp\lab9\StopExample\cmake-build-debug\vectorExample.pdb /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\vectorExample.dir\build: vectorExample.exe
.PHONY : CMakeFiles\vectorExample.dir\build

CMakeFiles\vectorExample.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\vectorExample.dir\cmake_clean.cmake
.PHONY : CMakeFiles\vectorExample.dir\clean

CMakeFiles\vectorExample.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\magda\Desktop\studia\jipp\lab9\StopExample C:\Users\magda\Desktop\studia\jipp\lab9\StopExample C:\Users\magda\Desktop\studia\jipp\lab9\StopExample\cmake-build-debug C:\Users\magda\Desktop\studia\jipp\lab9\StopExample\cmake-build-debug C:\Users\magda\Desktop\studia\jipp\lab9\StopExample\cmake-build-debug\CMakeFiles\vectorExample.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\vectorExample.dir\depend
