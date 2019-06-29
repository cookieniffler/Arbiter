#ifndef __FRAMEBUFFER_HPP__
#define __FRAMEBUFFER_HPP__

#include <memory>

namespace Arbiter {
namespace Opengl {

class FrameBuffer : public std::enable_shared_from_this<FrameBuffer> {
private:
public:
	FrameBuffer();
	virtual ~FrameBuffer() = default;
	
};

} // Opengl
} // Arbiter

#endif  // __FRAMEBUFFER_HPP__