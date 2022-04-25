cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(paint_calculator VERSION 1.0)

add_library( Paint_Calculator STATIC Paint_Calculator/Paint_Calculator.cpp)
target_include_directories(Paint_Calculator PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/Paint_Calculator/include)
add_executable(main main.cpp)
target_link_libraries(main PUBLIC Paint_Calculator)

add_subdirectory(tests) 
enable_testing()

