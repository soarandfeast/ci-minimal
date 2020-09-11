set(HDR include/stringutil.h)
set(SRC stringutil.cc)
add_library(stringutil ${HDR} ${SRC})
target_include_directories(stringutil PUBLIC include)
