cmake_minimum_required(VERSION 3.22)
project(conan_project)

set(CMAKE_CXX_STANDARD 20)

include(cmake/conan.cmake)

add_subdirectory(app)