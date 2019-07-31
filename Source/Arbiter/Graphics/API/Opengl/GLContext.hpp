#pragma once
#ifndef __GLCONTEXT_HPP__
#define __GLCONTEXT_HPP__

#include <Arbiter/Core/Common/Base.hpp>

ARBITER_NAMESPACE_BEGIN
OPENGL_NAMESPACE_BEGIN

class GLContext
{
private:
protected:
public:
    GLContext();
    virtual ~GLContext() = default;

};

OPENGL_NAMESPACE_END
ARBITER_NAMESPACE_END

#endif  // __GLCONTEXT_HPP__
