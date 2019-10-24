cmake_minimum_required (VERSION 3.8)

project ("mul_dlls")

set (CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

add_subdirectory ("doctest")
add_subdirectory ("testrunner")
add_subdirectory ("testsA")
add_subdirectory ("testsB")
add_subdirectory ("testexecutable")
