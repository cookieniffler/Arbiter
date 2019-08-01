set(CMAKE_CXX_STANDARD 17)
set(library_name ArbiterCore)

arbiter_add_sources(
    Common/Base.hpp
    Common/Platform.hpp
    Common/Singleton.hpp
    Common/StdHeaders.hpp
    Common/Type.hpp
    Containers/Containers.hpp
    Diagnostics/Diagnostics.hpp
    Exception/Exception.hpp
    Framework/Application.hpp
    Framework/Application.cpp
    Framework/ApplicationContextSDL.hpp
    Framework/ApplicationContextSDL.cpp
    Framework/Scene.hpp
    Framework/Scene.cpp
    Framework/SceneBuffer.hpp
    Framework/SceneBuffer.cpp
    Framework/SceneManager.hpp
    Framework/SceneManager.cpp
    Graph/ComputationalGraph.hpp
    Graph/ComputationalGraph.cpp
    Logger/Logger.hpp
    Memory/AlignedMemory.hpp
    Parser/Parser.hpp
    Threading/Threading.hpp
)
arbiter_add_library(${library_name} STATIC)
set_target_properties(${library_name} PROPERTIES LINKER_LANGUAGE CXX)
