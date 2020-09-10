# set(PUBLIC_HEADER include/stringutil.h)
# set(HDR ${PUBLIC_HEADER})
set(SRC stringutil.cc)

include_directories(include)

add_library(stringutil SHARED ${SRC})

# build gtest
enable_testing()
find_package(GTest REQUIRED)
include(GoogleTest)
add_executable(string_util_test stringutiltest.cc)
target_link_libraries(string_util_test GTest::GTest GTest::Main stringutil)