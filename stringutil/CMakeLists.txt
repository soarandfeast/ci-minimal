# build gtest
# include_directories(include)
# add_executable(string_util_test stringutiltest.cc)

# set(PUBLIC_HEADER include/stringutil.h)
set(SRC stringutil.cc)

# set(HDR ${PUBLIC_HEADER})
add_library(stringutil SHARED ${SRC} )
