set(CMAKE_CXX_STANDARD 17)
set(library_name ArbiterGraphicsAPI)

if (D3D12_SUPPORTED)
    arbiter_add_sources(
    	D3D12/D3D12GraphicsApi.hpp
    	D3D12/D3D12GraphicsApi.cpp
    )
endif()
if (METAL_SUPPORTED)
    arbiter_add_sources(
    	Metal/MetalGraphicsApi.hpp
    	Metal/MetalGraphicsApi.cpp
    )
endif()
if (GL_SUPPORTED)
    arbiter_add_sources(
    	Opengl/GLContext.hpp
    	Opengl/GLDepthBufferObject.hpp
    	Opengl/GLDepthBufferObject.cpp
    	Opengl/GLFBORenderTexture.hpp
    	Opengl/GLFBORenderTexture.cpp
    	Opengl/GLFrameBufferObject.hpp
    	Opengl/GLFrameBufferObject.cpp
    	Opengl/GLGraphicsApi.hpp
    	Opengl/GLIndexBufferObject.hpp
    	Opengl/GLIndexBufferObject.cpp
    	Opengl/GLTexture.hpp
    	Opengl/GLTextureManager.hpp
    	Opengl/GLVAOManager.hpp
    	Opengl/GLVertexArrayObject.hpp
    	Opengl/GLVertexArrayObject.cpp
    	Opengl/GLVertexBufferObject.hpp
    	Opengl/GLVertexBufferObject.cpp
    )
endif()
arbiter_add_library(${library_name} STATIC)
set_target_properties(${library_name} PROPERTIES LINKER_LANGUAGE CXX)
