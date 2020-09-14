cmake_minimum_required(VERSION 3.6)

project(ci-minimal VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# stringutil
add_subdirectory(include)
add_subdirectory(tests)

# Expose include files
# include_directories(include)

add_executable(${PROJECT_NAME} main.cc)
target_link_libraries(${PROJECT_NAME} matlab common)
