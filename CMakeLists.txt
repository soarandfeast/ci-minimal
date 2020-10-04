cmake_minimum_required(VERSION 3.6)

project(ci-minimal VERSION 0.3.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

function(download_and_unpack_googletest)
    # Download and unpack googletest at configure time
    set(DOWNLOAD_PROJECT_ROOT "${CMAKE_BINARY_DIR}/download")
    set(GOOGLETEST_DOWNLOAD_DIR "${DOWNLOAD_PROJECT_ROOT}/download/googletest")
    set(GOOGLETEST_SRC_DIR "${DOWNLOAD_PROJECT_ROOT}/src/googletest")
    set(GOOGLETEST_BUILD_DIR "${DOWNLOAD_PROJECT_ROOT}/build/googletest")

    configure_file(cmake/DownloadGoogleTest.CMakeLists.txt.in ${GOOGLETEST_DOWNLOAD_DIR}/CMakeLists.txt)
    execute_process(COMMAND "${CMAKE_COMMAND}" -G "${CMAKE_GENERATOR}" .
        WORKING_DIRECTORY ${GOOGLETEST_DOWNLOAD_DIR}
    )
    execute_process(COMMAND "${CMAKE_COMMAND}" --build .
        WORKING_DIRECTORY ${GOOGLETEST_DOWNLOAD_DIR}
    )

    # Prevent GoogleTest from overriding our compiler/linker options
    # when building with Visual Studio
    set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

    # Add googletest directly to our build. This adds the following targets:
    # gtest, gtest_main, gmock and gmock_main
    add_subdirectory(${GOOGLETEST_SRC_DIR}
                     ${GOOGLETEST_BUILD_DIR}
    )

    # The gtest/gmock targets carry header search path dependencies
    # automatically when using CMake 2.8.11 or later. Otherwise we
    # have to add them here ourselves.
    if(CMAKE_VERSION VERSION_LESS 2.8.11)
        include_directories("${gtest_SOURCE_DIR}/include"
                            "${gmock_SOURCE_DIR}/include"
        )
    endif()

    # Now simply link your own targets against gtest, gmock,
    # etc. as appropriate
endfunction()
download_and_unpack_googletest()

add_subdirectory(include)  # internal dependencies
add_subdirectory(tests)

add_executable(${PROJECT_NAME} main.cc)  # ${PROJECT_NAME} = ci-minimal
target_link_libraries(${PROJECT_NAME} common matlab)
