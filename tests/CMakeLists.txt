# --------------------------------------------------
# Set up GoogleTest
# --------------------------------------------------

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

# --------------------------------------------------

set(THIS integer_to_roman)
include_directories(../src)

add_executable(${THIS}_test ${THIS}_test.cc)

target_link_libraries(
  ${THIS}_test
  ${THIS}
  GTest::gtest_main
)

# Enable CMake's test runner to discover the tests included in the binary
include(GoogleTest)
gtest_discover_tests(${THIS}_test)
