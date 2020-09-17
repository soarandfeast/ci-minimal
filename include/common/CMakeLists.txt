project(common VERSION 0.1.0)

# Add Library
set(HDR include/common/algorithm.h)
set(SRC algorithm.cc)
add_library(${PROJECT_NAME} ${HDR} ${SRC})
target_include_directories(${PROJECT_NAME} PUBLIC include)
