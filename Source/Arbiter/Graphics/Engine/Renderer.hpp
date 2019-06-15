#ifndef __RENDERER_HPP__
#define __RENDERER_HPP__

namespace Arbiter {

class Renderer : std::enable_shared_from_this<Renderer> {
private:
public:
	Renderer();
	virtual ~Renderer() = default;

};

} // Arbiter

#endif  // __RENDERER_HPP__