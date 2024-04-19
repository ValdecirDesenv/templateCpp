# ${CMAKE_CURRENT_SOURCE_DIR} == GTTTESTS
cmake_minimum_required(VERSION 3.16..3.22)
project(
    TEMPLATECPP
    VERSION 0.0.1
    DESCRIPTION "Trying google test"
    LANGUAGES C CXX
    )
include(cmake/UpdateSubmodules.cmake)
include(CTest)

# Include directories
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/myLibs)

# Add subdirectories
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/src)  # Main Directoryls

# GoogleTest
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/external/googletest) # GTTESTS > external

