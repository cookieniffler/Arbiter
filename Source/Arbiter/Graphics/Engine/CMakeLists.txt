set(CMAKE_CXX_STANDARD 17)
set(library_name ArbiterGraphicsEngine)

arbiter_add_sources(
    AugmentedReality/AugmentedReality.hpp

    Camera/Camera.hpp
    Camera/Camera.cpp
    Camera/OrthographicCamera.hpp
    Camera/OrthographicCamera.cpp
    Camera/PersepectiveCamera.hpp
    Camera/PersepectiveCamera.cpp
    Camera/RealisticCamera.hpp
    Camera/RealisticCamera.cpp

    Light/Light.hpp

    Renderer/DeferredRenderer.hpp
    Renderer/DeferredRenderer.cpp
    Renderer/ForwardRenderer.hpp
    Renderer/ForwardRenderer.cpp
    Renderer/RaytracerRenderer.hpp
    Renderer/RaytracerRenderer.cpp
    Renderer/RealtimeRaytracerRenderer.hpp
    Renderer/RealtimeRaytracerRenderer.cpp
    Renderer/Renderer.hpp
    Renderer/Renderer.cpp
    Renderer/RendererBuffer.hpp
    Renderer/RendererBuffer.cpp

    Shader/Shader.hpp
    Shader/Shader.cpp

    VirtualReality/VirtualReality.hpp
)
arbiter_add_library(${library_name} STATIC)
set_target_properties(${library_name} PROPERTIES LINKER_LANGUAGE CXX)
