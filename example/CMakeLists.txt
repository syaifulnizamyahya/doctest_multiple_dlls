cmake_minimum_required (VERSION 3.8)

add_library(testrunner SHARED testrunner.cpp testrunner.h)

add_library(dllA SHARED dllA.cpp dllA2.cpp)
target_link_libraries(dllA testrunner)

add_library(dllB SHARED dllB.cpp dllB2.cpp)
target_link_libraries(dllB testrunner)

add_executable(executable main.cpp)
target_link_libraries(executable dllA)
target_link_libraries(executable dllB)
target_link_libraries(executable testrunner)

set_target_properties(testrunner PROPERTIES FOLDER testrunner)
set_target_properties(dllA PROPERTIES FOLDER dllA)
set_target_properties(dllB PROPERTIES FOLDER dllB)
set_target_properties(executable PROPERTIES FOLDER executable)
