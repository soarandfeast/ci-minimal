# Add library
set(HDR include/common/algorithm.h)
set(SRC algorithm.cc)
add_library(common ${HDR} ${SRC})
target_include_directories(common PUBLIC include)
