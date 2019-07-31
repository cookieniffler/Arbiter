#pragma once
#ifndef __VERTEXARRAY_HPP__
#define __VERTEXARRAY_HPP__

#include <Arbiter/Core/Common/Base.hpp>
#include <Arbiter/Core/Common/StdHeaders.hpp>

ARBITER_NAMESPACE_BEGIN
OPENGL_NAMESPACE_BEGIN

class VertexArray : public std::enable_shared_from_this<VertexArray>
{
private:
protected:
public:
	VertexArray();
	virtual ~VertexArray() = default;

};

OPENGL_NAMESPACE_END
ARBITER_NAMESPACE_END

#endif  // __VERTEXARRAY_HPP__
