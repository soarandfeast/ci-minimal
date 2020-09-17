project(matlab VERSION 0.1.0)

# Add library
set(HDR include/matlab/matlab.h)
set(SRC matlab.cc)
add_library(${PROJECT_NAME} ${HDR} ${SRC})
target_include_directories(${PROJECT_NAME} PUBLIC include)
