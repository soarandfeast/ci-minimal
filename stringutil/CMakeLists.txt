set(HDR include/stringutil.h)
set(SRC stringutil.cc)
add_library(stringutil ${HDR} ${SRC})
target_include_directories(stringutil PUBLIC include)

# Build gtests
enable_testing()
find_package(GTest REQUIRED)
include(GoogleTest)
add_executable(string_util_test stringutiltest.cc)
target_link_libraries(string_util_test GTest::GTest GTest::Main stringutil)