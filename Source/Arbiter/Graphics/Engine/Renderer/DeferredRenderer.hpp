#pragma once
#ifndef __DEFERRED_RENDERER_HPP__
#define __DEFERRED_RENDERER_HPP__

#include <Arbiter/Core/Common/Base.hpp>
#include <Arbiter/Graphics/Engine/Renderer.hpp>

ARBITER_NAMESPACE_BEGIN

class DeferredRenderer : public Renderer
{
public:
	DeferredRenderer();
	virtual ~DeferredRenderer() = default;

};

ARBITER_NAMESPACE_END

#endif  // __DEFERRED_RENDERER_HPP__
