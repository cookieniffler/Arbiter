#pragma once
#ifndef __INDEXBUFFER_HPP__
#define __INDEXBUFFER_HPP__

#include <memory>
#include <Arbiter/Core/Common/Base.hpp>

ARBITER_NAMESPACE_BEGIN
OPENGL_NAMESPACE_BEGIN

class IndexBuffer : public std::enable_shared_from_this<IndexBuffer> {
private:
public:
	IndexBuffer();
	virtual ~IndexBuffer() = default;

};

OPENGL_NAMESPACE_END
ARBITER_NAMESPACE_END

#endif  // __INDEXBUFFER_HPP__
