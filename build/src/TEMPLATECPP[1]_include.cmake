if(EXISTS "/home/vdc/dev/templateCpp/build/src/TEMPLATECPP[1]_tests.cmake")
  include("/home/vdc/dev/templateCpp/build/src/TEMPLATECPP[1]_tests.cmake")
else()
  add_test(TEMPLATECPP_NOT_BUILT TEMPLATECPP_NOT_BUILT)
endif()
