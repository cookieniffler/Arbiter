#ifndef __DEFERRED_RENDERER_HPP__
#define __DEFERRED_RENDERER_HPP__

namespace Arbiter {

class DeferredRenderer : public Renderer
{
public:
	DeferredRenderer();
	virtual ~DeferredRenderer() = default;
	
};

} // Arbiter

#endif  // __DEFERRED_RENDERER_HPP__