#pragma once
#ifndef __GLDEPTHBUFFEROBJECT_HPP__
#define __GLDEPTHBUFFEROBJECT_HPP__

#include <Arbiter/Core/Common/Base.hpp>
#include <Arbiter/Core/Common/StdHeaders.hpp>

ARBITER_NAMESPACE_BEGIN
OPENGL_NAMESPACE_BEGIN

class _Arbiter_Export GLDepthBufferObject : public std::enable_shared_from_this<GLDepthBufferObject>
{
private:
protected:
public:
    GLDepthBufferObject();
    virtual ~GLDepthBufferObject() = default;

};

OPENGL_NAMESPACE_END
ARBITER_NAMESPACE_END

#endif  // __GLDEPTHBUFFEROBJECT_HPP__
