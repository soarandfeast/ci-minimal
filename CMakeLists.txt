cmake_minimum_required(VERSION 3.6)

project(ci-minimal VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(${PROJECT_NAME} main.cc)

## Google Test ##
enable_testing()
find_package(GTest REQUIRED)
include(GoogleTest)
target_link_libraries(${PROJECT_NAME} GTest::GTest GTest::Main) # Link GTest
## target_link_libraries(${PROJECT_NAME} ${GTEST_LIBRARIES})


## stringutil ##
add_subdirectory(stringutil)
add_executable(stringutiltests stringutil/stringutiltest.cc)

target_link_libraries(stringutiltests GTest::GTest GTest::Main stringutil)
gtest_discover_tests(stringutiltests)
