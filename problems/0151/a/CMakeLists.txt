cmake_minimum_required(VERSION 3.14)
project(my_project)

# GoogleTest requires at least C++11
set(CMAKE_CXX_STANDARD 11)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/8ded48c37be09d8cc3665af1b414c5d53c0862e7.zip
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)