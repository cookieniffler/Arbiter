#pragma once
#ifndef __DEPTHBUFFEROBJECT_HPP__
#define __DEPTHBUFFEROBJECT_HPP__

#include <Arbiter/Core/Common/Base.hpp>

ARBITER_NAMESPACE_BEGIN
OPENGL_NAMESPACE_BEGIN

class _Arbiter_Export DepthBufferObject : public std::enable_shared_from_this<DepthBufferObject>
{
private:
protected:
public:
    DepthBufferObject();
    virtual ~DepthBufferObject() = default;

};

OPENGL_NAMESPACE_END
ARBITER_NAMESPACE_END

#endif  // __DEPTHBUFFEROBJECT_HPP__
