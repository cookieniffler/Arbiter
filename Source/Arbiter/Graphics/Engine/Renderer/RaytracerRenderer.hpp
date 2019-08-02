#pragma once
#ifndef __RAYTRACERRENDERER_HPP__
#define __RAYTRACERRENDERER_HPP__

#include <Arbiter/Core/Common/Base.hpp>
#include <Arbiter/Graphics/Engine/Renderer.hpp>

ARBITER_NAMESPACE_BEGIN

class RaytracerRenderer : public Renderer {
private:
protected:
public:
    RaytracerRenderer();
    virtual ~RaytracerRenderer() = default;

};

ARBITER_NAMESPACE_END

#endif  // __RAYTRACERRENDERER_HPP__
