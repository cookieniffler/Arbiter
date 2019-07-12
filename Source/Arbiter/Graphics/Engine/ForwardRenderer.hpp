#pragma once
#ifndef __FORWARDRENDERER_HPP__
#define __FORWARDRENDERER_HPP__

#include <Arbiter/Core/Common/Base.hpp>
#include <Arbiter/Graphics/Engine/Renderer.hpp>

ARBITER_NAMESPACE_BEGIN

class ForwardRenderer : public Renderer {
private:
public:
    ForwardRenderer();
    virtual ~ForwardRenderer() = default;

};

ARBITER_NAMESPACE_END

#endif  // __FORWARDRENDERER_HPP__
