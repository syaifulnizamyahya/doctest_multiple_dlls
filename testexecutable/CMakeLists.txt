cmake_minimum_required (VERSION 3.8)

add_executable(testexecutable main.cpp)

target_link_libraries(testexecutable dllA)
target_link_libraries(testexecutable dllB)
target_link_libraries(testexecutable testrunner)

target_include_directories(testexecutable PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../doctest>
  $<INSTALL_INTERFACE:/doctest>  
)


set_target_properties(testexecutable PROPERTIES FOLDER testexecutable)
