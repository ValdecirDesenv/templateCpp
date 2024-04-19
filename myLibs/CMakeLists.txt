# If your library has multiple source files
# add them here.
add_library(
    myLibs
    Challenges_arrays.cpp 
    myCallendar.cpp
    recursionUtils.cpp
)

# Include directories
target_include_directories(myLibs PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})