cmake_minimum_required(VERSION 3.14)
project(my_project)

# GoogleTest requires at least C++11
set(CMAKE_CXX_STANDARD 11)

# See https://stackoverflow.com/questions/63925255/googletest-compile-with-mt-staticrelease-errors
set(gtest_force_shared_crt on)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/8ded48c37be09d8cc3665af1b414c5d53c0862e7.zip
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
  test_soft_drinking
  tests/test_soft_drinking.cpp
)
target_link_libraries(
  test_soft_drinking
  gtest_main
)

include(GoogleTest)
gtest_discover_tests(test_soft_drinking)