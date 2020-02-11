cmake_minimum_required(VERSION 3.15)
project(unit-tests)

set(CMAKE_CXX_STANDARD 17)
enable_testing()

add_library(book OBJECT src/Book.cpp src/Book.h)

add_library(library OBJECT src/Library.cpp src/Library.h)

add_executable(unit-tests tst/run_tests.cpp tst/catch.hpp)
target_include_directories(unit-tests PRIVATE src)
target_link_libraries(unit-tests PRIVATE book library)
add_test(NAME unit-tests COMMAND unit-tests)
