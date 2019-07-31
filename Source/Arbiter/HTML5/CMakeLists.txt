set(CMAKE_CXX_STANDARD 17)
set(library_name ArbiterHTML5)

arbiter_add_sources(
    HTML5.hpp
)
arbiter_add_library(${library_name} STATIC)
set_target_properties(${library_name} PROPERTIES LINKER_LANGUAGE CXX)
