set(CMAKE_CXX_STANDARD 17)
set(library_name ArbiterFramework)

arbiter_add_sources(
	SDLSetup.cpp
	Application.cpp
	Scene.cpp
	Framework.hpp
)
arbiter_add_library(${library_name} STATIC)
set_target_properties(${library_name} PROPERTIES LINKER_LANGUAGE CXX)