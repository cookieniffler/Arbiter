#pragma once
#ifndef __GLFRAMEBUFFEROBJECT_HPP__
#define __GLFRAMEBUFFEROBJECT_HPP__

#include <Arbiter/Core/Common/Base.hpp>
#include <Arbiter/Core/Common/StdHeaders.hpp>

ARBITER_NAMESPACE_BEGIN
OPENGL_NAMESPACE_BEGIN

class _Arbiter_Export GLFrameBufferObject : public std::enable_shared_from_this<GLFrameBufferObject> {
private:
protected:
public:
	GLFrameBufferObject();
	virtual ~GLFrameBufferObject() = default;

};

OPENGL_NAMESPACE_END
ARBITER_NAMESPACE_END

#endif  // __GLFRAMEBUFFEROBJECT_HPP__
