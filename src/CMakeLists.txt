# BUILD_TESTING variable is created by include(CTest)
# It is set to ON by default
if (BUILD_TESTING)

    add_executable(${PROJECT_NAME} 
        main.cpp
    )
    add_test(GoogleTestDemo.cpp ${PROJECT_NAME}) 
    add_test(recursionUtils.cpp ${PROJECT_NAME}) 
    target_link_libraries(${PROJECT_NAME} PRIVATE GTest::gtest_main)

    
    include(GoogleTest)
    # Finds all the Google tests associated with the executable
    gtest_discover_tests(${PROJECT_NAME})

endif()


target_link_libraries(${PROJECT_NAME} PRIVATE myLibs)
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/myLibs)

target_link_libraries(${PROJECT_NAME} PRIVATE db)
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/db)

target_link_libraries(${PROJECT_NAME} PRIVATE engine)
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/engine)