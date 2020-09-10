cmake_minimum_required(VERSION 3.6)

project(ci-minimal VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(${PROJECT_NAME} main.cc)

# stringutil
add_subdirectory(stringutil)
