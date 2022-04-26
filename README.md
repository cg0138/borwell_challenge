1. mkdir build

2. cd build

3. cmake -S .. -B . -G "MinGW Makefiles" // on Windows

   cmake -S .. -B . -G "Unix Makefiles"  // on Linux

4. make

5. .\main.exe (for program)

6. .\tests\tests_main.exe (for tests)

7. I wrote/built this code on Windows using VSCode, CMake and the Catch2 testing framework.


I took a little longer than the suggested 4 hours (around 6).




If I had more time to work on this, I would add:

--> add exception handling so that incorrect input is dealt with correctly
--> an option to specify how many coats of paint are needed
--> price of paint / size of tin / coverage of tin for the total price
--> include/exclude walls
--> estimated time
--> search for local diy stores
--> search online for prices


