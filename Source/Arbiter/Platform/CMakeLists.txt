set(CMAKE_CXX_STANDARD 17)
set(library_name ArbiterPlatform)

arbiter_add_sources(
    Common/Common.hpp
)
if (TARGET_PLATFORM_WINDOWS)
    arbiter_add_sources(
        # Windows/
    )
elseif (TARGET_PLATFORM_LINUX)
    arbiter_add_sources(
        # Linux/
    )
elseif (TARGET_PLATFORM_XBONE)
    arbiter_add_sources(
        # Apple/
    )
elseif (TARGET_PLATFORM_ANDROID)
    arbiter_add_sources(
        # Android/
    )
endif()
arbiter_add_library(${library_name} STATIC)
set_target_properties(${library_name} PROPERTIES LINKER_LANGUAGE CXX)
