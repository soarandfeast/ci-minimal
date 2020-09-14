# Build gtests
enable_testing()
find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(stringutil_test stringutil_test.cc)
target_link_libraries(stringutil_test GTest::GTest GTest::Main common)
