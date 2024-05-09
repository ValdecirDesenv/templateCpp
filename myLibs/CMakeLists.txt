# If your library has multiple source files
# add them here.
add_library(
    myLibs
    challenges_arrays.cpp 
    myCallendar.cpp
)

# Include directories
target_include_directories(myLibs PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})