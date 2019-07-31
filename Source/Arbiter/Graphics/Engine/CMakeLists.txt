set(CMAKE_CXX_STANDARD 17)
set(library_name ArbiterGraphicsEngine)

arbiter_add_sources(
    AugmentedReality/AugmentedReality.hpp
    Camera.hpp
    Camera.cpp
    DeferredRenderer.hpp
    DeferredRenderer.cpp
    ForwardRenderer.hpp
    ForwardRenderer.cpp
    Light.hpp
    Light.cpp
    OrthographicCamera.hpp
    OrthographicCamera.cpp
    PersepectiveCamera.hpp
    PersepectiveCamera.cpp
    RaytracerRenderer.hpp
    RaytracerRenderer.cpp
    RealisticCamera.hpp
    RealisticCamera.cpp
    RealtimeRaytracerRenderer.hpp
    RealtimeRaytracerRenderer.cpp
    Renderer.hpp
    Renderer.cpp
    RendererBuffer.hpp
    RendererBuffer.cpp
    VirtualReality/VirtualReality.hpp
)
arbiter_add_library(${library_name} STATIC)
set_target_properties(${library_name} PROPERTIES LINKER_LANGUAGE CXX)
