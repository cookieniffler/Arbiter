#pragma once
#ifndef __RENDERERBUFFER_HPP__
#define __RENDERERBUFFER_HPP__

#include <Arbiter/Core/Common/Base.hpp>

ARBITER_NAMESPACE_BEGIN

class RendererBuffer : std::enable_shared_from_this<RendererBuffer>
{
private:
public:
    RendererBuffer();
    virtual ~RendererBuffer() = default;

};

ARBITER_NAMESPACE_END

#endif // __RENDERERBUFFER_HPP__
