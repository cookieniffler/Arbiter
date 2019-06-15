#ifndef __RENDERERBUFFER_HPP__
#define __RENDERERBUFFER_HPP__

#include <memory>

namespace Arbiter {

class RendererBuffer : std::enable_shared_from_this<RendererBuffer>
{
private:
public:
	RendererBuffer();
	virtual ~RendererBuffer() = default;

};

}

#endif // __RENDERERBUFFER_HPP__
