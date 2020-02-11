cmake_minimum_required(VERSION 3.15)
project(unit-tests)

set(CMAKE_CXX_STANDARD 17)
enable_testing()

add_library(book src/Book.cpp src/Book.h)

add_executable(book-test tst/BookTest.cpp tst/catch.hpp)
target_include_directories(book-test PRIVATE src)
add_test(NAME book-test COMMAND book-test)
