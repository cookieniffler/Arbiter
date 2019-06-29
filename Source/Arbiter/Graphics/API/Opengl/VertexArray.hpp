#ifndef __VERTEXARRAY_HPP__
#define __VERTEXARRAY_HPP__

#include <memory>

namespace Arbiter {
namespace Opengl {

class VertexArray : public std::enable_shared_from_this<VertexArray> {
private:
public:
	VertexArray();
	virtual ~VertexArray() = default;
	
};

} // Opengl
} // Arbiter

#endif  // __VERTEXARRAY_HPP__