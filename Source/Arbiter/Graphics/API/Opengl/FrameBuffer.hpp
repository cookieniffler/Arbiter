#pragma once
#ifndef __FRAMEBUFFER_HPP__
#define __FRAMEBUFFER_HPP__

#include <memory>
#include <Arbiter/Core/Common/Base.hpp>

ARBITER_NAMESPACE_BEGIN
OPENGL_NAMESPACE_BEGIN

class FrameBuffer : public std::enable_shared_from_this<FrameBuffer> {
private:
public:
	FrameBuffer();
	virtual ~FrameBuffer() = default;

};

OPENGL_NAMESPACE_END
ARBITER_NAMESPACE_END

#endif  // __FRAMEBUFFER_HPP__
