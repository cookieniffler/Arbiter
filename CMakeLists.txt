cmake_minimum_required(VERSION 3.10 FATAL_ERROR)
project(Arbiter VERSION 1.0.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CONFIGURATION_TYPES Debug RelWithDebInfo CACHE STRING "")
set(DEBUG_CONFIGURATIONS Debug)

include(CMake/Arbiter.cmake)
include(CMake/Platform.cmake)
include(CMake/Paths.cmake)
include(CMake/Runtime.cmake)
include(CMake/Libraries.cmake)

arbiter_init()

add_subdirectory(Source)
add_subdirectory(Editor)
add_subdirectory(Examples)
