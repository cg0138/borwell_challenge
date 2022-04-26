1. mkdir build

2. cd build

3. cmake -S .. -B . -G "MinGW Makefiles" // on Windows

   cmake -S .. -B . -G "Unix Makefiles"  // on Linux

4. make

5. .\main.exe (for program)

6. .\tests\tests_main.exe (for tests)

7. I wrote/built this code on Windows using VSCode, CMake and the Catch2 testing framework.
