project(common_test VERSION 0.1.0)

# Build gtests
enable_testing()
find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(${PROJECT_NAME} common_test.cc)
target_link_libraries(${PROJECT_NAME} GTest::GTest GTest::Main common)
