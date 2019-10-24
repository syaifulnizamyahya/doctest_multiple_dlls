cmake_minimum_required (VERSION 3.8)

add_library(testrunner SHARED testrunner.cpp testrunner.h)

target_include_directories(testrunner PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../doctest>
  $<INSTALL_INTERFACE:/doctest>  
)

set_target_properties(testrunner PROPERTIES FOLDER testrunner)
