cmake_minimum_required(VERSION 3.10 FATAL_ERROR)
project(Cubes VERSION 0.0.1 LANGUAGES CXX)

find_package(OpenGL REQUIRED)
add_executable(${PROJECT_NAME} main.cpp)
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/Source)
if (CMAKE_SYSTEM_NAME MATCHES "Windows")
	target_link_libraries(${PROJECT_NAME}
		${OPENGL_LIBRARY}
		optimized ${LIB_RELEASE}/SDL2.lib
		optimized ${LIB_RELEASE}/SDL2main.lib
		optimized ${LIB_RELEASE}/glew32.lib
		optimized ArbiterCore
		optimized ArbiterFramework
	)
elseif(CMAKE_SYSTEM_NAME MATCHES "Linux")
	target_link_libraries(${PROJECT_NAME}
		${OPENGL_LIBRARY}
		${SDL2_LIBRARIES}
		${GLEW_LIBRARIES}
		optimized ArbiterCore
		optimized ArbiterFramework
	)
endif()