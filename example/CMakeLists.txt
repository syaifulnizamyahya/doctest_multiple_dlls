# CMakeList.txt : CMake project for example, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

add_library(testrunner SHARED testrunner.cpp testrunner.h)
#target_link_libraries(testrunner PUBLIC doctest)

add_library(dllA SHARED dllA.cpp dllA2.cpp)
target_link_libraries(dllA testrunner)

add_library(dllB SHARED dllB.cpp dllB2.cpp)
target_link_libraries(dllB testrunner)

add_executable(executable main.cpp)
target_link_libraries(executable dllA)
target_link_libraries(executable dllB)
target_link_libraries(executable testrunner)

# group them together in a single folder inside IDEs
set_target_properties(testrunner PROPERTIES FOLDER testrunner)
set_target_properties(dllA PROPERTIES FOLDER dllA)
set_target_properties(dllB PROPERTIES FOLDER dllB)
set_target_properties(executable PROPERTIES FOLDER executable)
