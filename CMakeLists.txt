cmake_minimum_required(VERSION 3.6)

project(ci-minimal VERSION 0.2.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(include)  # internal dependencies
add_subdirectory(tests)

add_executable(${PROJECT_NAME} main.cc)  # ${PROJECT_NAME} = ci-minimal
target_link_libraries(${PROJECT_NAME} common matlab)
