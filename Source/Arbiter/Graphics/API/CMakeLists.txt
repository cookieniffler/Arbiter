set(CMAKE_CXX_STANDARD 17)
set(library_name ArbiterGraphicsAPI)

arbiter_add_sources(
	D3D12/GraphicsApi.hpp
	D3D12/GraphicsApi.cpp
	Metal/GraphicsApi.hpp
	Metal/GraphicsApi.cpp
	Opengl/DepthBufferObject.hpp
	Opengl/DepthBufferObject.cpp
	Opengl/FrameBufferObject.hpp
	Opengl/GraphicsApi.hpp
	Opengl/GraphicsApi.cpp
	Opengl/IndexBufferObject.hpp
	Opengl/IndexBufferObject.cpp
	Opengl/Texture.hpp
	Opengl/TextureManager.hpp
	Opengl/VertexArrayObject.hpp
	Opengl/VertexArrayObject.cpp
	Opengl/VertexBufferObject.hpp
	Opengl/VertexBufferObject.cpp
)
arbiter_add_library(${library_name} STATIC)
set_target_properties(${library_name} PROPERTIES LINKER_LANGUAGE CXX)
