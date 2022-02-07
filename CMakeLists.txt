cmake_minimum_required(VERSION 3.22)
project(conan_project)

set(CMAKE_CXX_STANDARD 20)

include(cmake/conan.cmake)

option(RUN_TESTS "Build the tests" ON)
if(RUN_TESTS)
    enable_testing()
    find_package(GTest)
endif()

add_subdirectory(app)