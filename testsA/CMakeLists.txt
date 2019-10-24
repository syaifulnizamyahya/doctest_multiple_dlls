cmake_minimum_required (VERSION 3.8)

add_library(dllA SHARED dllA.cpp dllA2.cpp)

target_link_libraries(dllA testrunner)

target_include_directories(dllA PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../doctest>
  $<INSTALL_INTERFACE:/doctest>  
)

set_target_properties(dllA PROPERTIES FOLDER dllA)
