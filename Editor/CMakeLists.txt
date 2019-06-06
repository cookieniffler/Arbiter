cmake_minimum_required(VERSION 3.10 FATAL_ERROR)
project(NodeEditor VERSION 0.01 LANGUAGES CXX)

find_package(OpenGL REQUIRED)
add_executable(${PROJECT_NAME} main.cpp)
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/Source)
target_link_libraries(${PROJECT_NAME}
	${OPENGL_LIBRARY}
	optimized ${LIB_RELEASE}/SDL2.lib
	optimized ${LIB_RELEASE}/SDL2main.lib
	optimized ${LIB_RELEASE}/glew32.lib
	optimized ArbiterCore
	optimized ArbiterFramework
)