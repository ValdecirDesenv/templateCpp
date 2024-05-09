# If your library has multiple source files
# add them here.
add_library(
    engine
    regularLoops.cpp
    MyClass.cpp
)

# Include directories
target_include_directories(engine PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})