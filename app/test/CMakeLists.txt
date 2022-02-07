enable_testing()
find_package(GTest)
add_executable(conan_project_tests main.cpp)
target_include_directories(conan_project_tests PRIVATE ${app_SOURCE_DIR}/include)
target_link_libraries(conan_project_tests GTest::gtest_main)
add_test(NAME conan_project_tests
        COMMAND conan_project_tests)