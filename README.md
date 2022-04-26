1. mkdir build

2. cd build

3. cmake -S .. -B . -G "MinGW Makefiles" // on windows

   cmake -S .. -B . -G "Unix Makefiles"  // on Linux

4. make

5. .\main.exe (for program)

6. .\tests\tests_main.exe (for tests)
