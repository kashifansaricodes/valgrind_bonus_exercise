# Valgrind Exercise

-------------------------------------------------------------------

Q1) What happens when the executable is linked statically? 

Ans: When the executable is linked statically, all the libraries and dependencies are embedded directly into the executable file itself, rather than being loaded dynamically at runtime. This makes the executable larger, but it no longer depends on external shared libraries (.so files in Linux) at runtime.

Q2) Does Valgrind still detect the same bugs?

Ans: Yes, Valgrind will still detect the same memory-related bugs (like memory leaks, uninitialized variables, etc.) when the executable is linked statically. This is because Valgrind operates at the binary level, monitoring and analyzing how memory is allocated, used, and freed during execution. Whether the binary is statically or dynamically linked, the actual program's logic and memory management behaviors remain unchanged, and Valgrind will still detect the same issues.


Q3) Why or why not?

Ans: Whether your program is linked statically or dynamically doesn't change how the program's logic works or how memory is managed. The functions that handle memory—like allocation and deallocation—will behave the same way either way.

Valgrind’s Memcheck tool works by analyzing the machine code that the compiler generates, keeping track of memory usage (allocations, reads, writes, and deallocations). Since it's focused on the actual execution of the program, it can still detect memory issues no matter how the libraries are linked.

----------------------------------------------------------------------


## Standard install via command-line
```bash
# Configure the project and generate a native build system:
  # Must re-run this command whenever any CMakeLists.txt file has been changed.
  cmake -S ./ -B build/
# To build with debugging information, do:
  cmake -S ./ -B build/ -D CMAKE_BUILD_TYPE=Debug
# Compile and build the project:
  # rebuild only files that are modified since the last build
  cmake --build build/
  # or rebuild everything from scracth
  cmake --build build/ --clean-first
  # to see verbose output, do:
  cmake --build build/ --verbose
# Run program:
  ./build/app/shell-app
# Clean
  cmake --build build/ --target clean
# Clean and start over:
  rm -rf build/
```

