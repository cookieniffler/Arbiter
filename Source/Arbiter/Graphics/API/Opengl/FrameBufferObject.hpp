#pragma once
#ifndef __FRAMEBUFFER_HPP__
#define __FRAMEBUFFER_HPP__

#include <Arbiter/Core/Common/Base.hpp>
#include <Arbiter/Core/Common/Platform.hpp>

ARBITER_NAMESPACE_BEGIN
OPENGL_NAMESPACE_BEGIN

class _Arbiter_Export FrameBuffer : public std::enable_shared_from_this<FrameBuffer>
{
private:
protected:
public:
	FrameBuffer();
	virtual ~FrameBuffer() = default;

};

OPENGL_NAMESPACE_END
ARBITER_NAMESPACE_END

#endif  // __FRAMEBUFFER_HPP__
