# Add library
set(HDR include/matlab/matlab.h)
set(SRC matlab.cc)
add_library(matlab ${HDR} ${SRC})
target_include_directories(matlab PUBLIC include)
