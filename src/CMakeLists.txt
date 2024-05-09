# BUILD_TESTING variable is created by include(CTest)
# It is set to ON by default
if (BUILD_TESTING)

    add_executable(${PROJECT_NAME} 
        my_test.cpp
    )
    add_test(GoogleTestDemo.cpp ${PROJECT_NAME}) 
    add_test(recursionUtils.cpp ${PROJECT_NAME}) 
    
    target_link_libraries(${PROJECT_NAME} GTest::gtest_main)
    target_link_libraries(${PROJECT_NAME} myLibs)
    include(GoogleTest)
    # Finds all the Google tests associated with the executable
    gtest_discover_tests(${PROJECT_NAME})

endif()

