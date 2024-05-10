# CMake generated Testfile for 
# Source directory: /home/vdc/dev/templateCpp/src
# Build directory: /home/vdc/dev/templateCpp/build/src
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
include("/home/vdc/dev/templateCpp/build/src/TEMPLATECPP[1]_include.cmake")
add_test(GoogleTestDemo.cpp "TEMPLATECPP")
set_tests_properties(GoogleTestDemo.cpp PROPERTIES  _BACKTRACE_TRIPLES "/home/vdc/dev/templateCpp/src/CMakeLists.txt;8;add_test;/home/vdc/dev/templateCpp/src/CMakeLists.txt;0;")
add_test(recursionUtils.cpp "TEMPLATECPP")
set_tests_properties(recursionUtils.cpp PROPERTIES  _BACKTRACE_TRIPLES "/home/vdc/dev/templateCpp/src/CMakeLists.txt;9;add_test;/home/vdc/dev/templateCpp/src/CMakeLists.txt;0;")
