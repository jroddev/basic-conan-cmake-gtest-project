add_executable(conan_project src/main.cpp)

find_package(spdlog)
target_include_directories(conan_project PRIVATE
        include
        ${spdlog_INCLUDE_DIR}
        )
target_link_libraries(conan_project spdlog::spdlog)
set(app_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR})

if(RUN_TESTS)
    add_subdirectory(test)
endif()