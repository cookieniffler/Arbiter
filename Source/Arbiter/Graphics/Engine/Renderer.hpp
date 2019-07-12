#pragma once
#ifndef __RENDERER_HPP__
#define __RENDERER_HPP__

#include <Arbiter/Core/Common/Base.hpp>

ARBITER_NAMESPACE_BEGIN

class Renderer : std::enable_shared_from_this<Renderer> {
private:
public:
	Renderer();
	virtual ~Renderer() = default;

};

ARBITER_NAMESPACE_END

#endif  // __RENDERER_HPP__
