add_test( PlayerTest.PlayerLevelStartZero /home/vdc/dev/templateCpp/build/src/TEMPLATECPP [==[--gtest_filter=PlayerTest.PlayerLevelStartZero]==] --gtest_also_run_disabled_tests)
set_tests_properties( PlayerTest.PlayerLevelStartZero PROPERTIES WORKING_DIRECTORY /home/vdc/dev/templateCpp/build/src SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set( TEMPLATECPP_TESTS PlayerTest.PlayerLevelStartZero)
