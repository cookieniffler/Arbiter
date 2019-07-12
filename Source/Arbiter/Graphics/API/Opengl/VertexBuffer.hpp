#pragma once
#ifndef __VERTEXBUFFER_HPP__
#define __VERTEXBUFFER_HPP__

#include <memory>
#include <Arbiter/Core/Common/Base.hpp>

ARBITER_NAMESPACE_BEGIN
OPENGL_NAMESPACE_BEGIN

class VertexBuffer : public std::enable_shared_from_this<VertexBuffer> {
private:
public:
	VertexBuffer();
	virtual ~VertexBuffer() = default;

};

OPENGL_NAMESPACE_END
ARBITER_NAMESPACE_END

#endif  // __VERTEXBUFFER_HPP__
