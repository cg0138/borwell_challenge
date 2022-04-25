Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.0.0-preview3
)

FetchContent_MakeAvailable(Catch2)

file (GLOB_RECURSE TEST_SOURCES tests/*.cpp)
add_executable(test_main test_main.cpp ${TEST_SOURCES})
target_link_libraries(test_main PRIVATE Paint_Calculator)
target_include_directories(test_main PRIVATE ${CMAKE_SOURCE_DIR}/Paint_Calculator)
target_link_libraries(test_main PRIVATE Catch2::Catch2WithMain)