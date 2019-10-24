cmake_minimum_required (VERSION 3.8)

add_library(dllB SHARED dllB.cpp dllB2.cpp)

target_link_libraries(dllB testrunner)

target_include_directories(dllB PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../doctest>
  $<INSTALL_INTERFACE:/doctest>  
)

set_target_properties(dllB PROPERTIES FOLDER dllB)
