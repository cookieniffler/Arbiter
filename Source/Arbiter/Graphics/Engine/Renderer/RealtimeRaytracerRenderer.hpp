#pragma once
#ifndef __REALTIMERAYTRACERRENDERER_HPP__
#define __REALTIMERAYTRACERRENDERER_HPP__

#include <Arbiter/Core/Common/Base.hpp>
#include <Arbiter/Graphics/Engine/Renderer.hpp>

ARBITER_NAMESPACE_BEGIN

class RealtimeRaytracerRenderer : public Renderer {
private:
public:
    RealtimeRaytracerRenderer();
    virtual ~RealtimeRaytracerRenderer() = default;

};

ARBITER_NAMESPACE_END

#endif  // __REALTIMERAYTRACERRENDERER_HPP__
