cmake_minimum_required(VERSION 3.10 FATAL_ERROR)
project(Arbiter VERSION 0.0.1 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CONFIGURATION_TYPES Debug RelWithDebInfo CACHE STRING "")
set(DEBUG_CONFIGURATIONS Debug)

include(CMake/Arbiter.cmake)
include(CMake/Platform.cmake)
include(CMake/Paths.cmake)
include(CMake/Runtime.cmake)

arbiter_init()

add_subdirectory(Source)
add_subdirectory(Editor)
add_subdirectory(Examples)