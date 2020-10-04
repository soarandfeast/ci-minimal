project(common_test VERSION 0.1.0)

add_executable(${PROJECT_NAME} common_test.cc)
target_link_libraries(${PROJECT_NAME} gtest gtest_main common)

enable_testing()
include(GoogleTest)  # Cmake module that enables gtest_discover_tests()
gtest_discover_tests(${PROJECT_NAME})
