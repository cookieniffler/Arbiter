set(CMAKE_CXX_STANDARD 17)
set(library_name ArbiterAnimation)

arbiter_add_sources(
    Animation.hpp
)
arbiter_add_library(${library_name} STATIC)
set_target_properties(${library_name} PROPERTIES LINKER_LANGUAGE CXX)
