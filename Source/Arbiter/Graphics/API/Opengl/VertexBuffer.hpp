#ifndef __VERTEXBUFFER_HPP__
#define __VERTEXBUFFER_HPP__

#include <memory>

namespace Arbiter {
namespace Opengl {

class VertexBuffer : public std::enable_shared_from_this<VertexBuffer> {
private:
public:
	VertexBuffer();
	virtual ~VertexBuffer() = default;
	
};

} // Opengl
} // Arbiter

#endif  // __VERTEXBUFFER_HPP__