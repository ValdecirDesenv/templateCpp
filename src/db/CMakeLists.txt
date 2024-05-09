# If your library has multiple source files
# add them here.
add_library(
    db
    recursionUtils.cpp
)

# Include directories
target_include_directories(db PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})