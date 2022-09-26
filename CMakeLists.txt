cmake_minimum_required(VERSION 3.8)

project(integer_to_roman CXX)

set(CMAKE_CXX_STANDARD 11)

# Include GoogleTest
include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.12.1
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
  integer_to_roman
  main.cc
  integer_to_roman.cc
  integer_to_roman.h
)

add_executable(
  integer_to_roman_test
  integer_to_roman_test.cc
  integer_to_roman.cc
  integer_to_roman.h
)

target_link_libraries(
  integer_to_roman_test
  GTest::gtest_main
)

# Enable CMake's test runner to discover the tests included in the binary
include(GoogleTest)
gtest_discover_tests(integer_to_roman_test)