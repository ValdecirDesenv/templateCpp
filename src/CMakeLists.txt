# BUILD_TESTING variable is created by include(CTest)
# It is set to ON by default
if (BUILD_TESTING)

    add_executable(${PROJECT_NAME} 
        GoogleTestDemo.cpp
    )
    add_test(my_test.cpp ${PROJECT_NAME}) 
    add_test(recursionUtils.cpp ${PROJECT_NAME}) 
    
    target_link_libraries(${PROJECT_NAME} GTest::gtest_main)

    include(GoogleTest)
    # Finds all the Google tests associated with the executable
    gtest_discover_tests(${PROJECT_NAME})
endif()

