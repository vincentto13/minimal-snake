cmake_minimum_required (VERSION 3.1)
project (MINIMAL_SNAKE)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})

if (NOT CMAKE_BUILD_TYPE)
    message(STATUS "No build type selected, default to Release")
    set(CMAKE_BUILD_TYPE "Release")
endif()
 
SET(CMAKE_CXX_FLAGS_RELEASE "-s -Os -fno-rtti")
SET(CMAKE_CXX_FLAGS_DEBUG  "-O0 -g")

add_executable(mini-snake snake.571.min.cpp)
target_link_libraries(mini-snake ${CURSES_LIBRARIES})
