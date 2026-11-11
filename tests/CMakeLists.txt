add_executable(celeritas-tests tests.cpp) 
target_link_libraries(celeritas-tests PRIVATE celeritas GTest::gtest_main)
include(GoogleTest)
gtest_discover_tests(celeritas-tests)