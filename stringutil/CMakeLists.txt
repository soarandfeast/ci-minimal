# set(PUBLIC_HEADER include/stringutil.h)
set(SRC stringutil.cc)
# set(HDR ${PUBLIC_HEADER})

add_library(stringutil SHARED ${SRC})

# build gtest
enable_testing()
find_package(GTest REQUIRED)
include(GoogleTest)
add_executable(string_util_test stringutiltest.cc)
target_link_libraries(string_util_test GTest::GTest GTest::Main stringutil)