#ifndef __INDEXBUFFER_HPP__
#define __INDEXBUFFER_HPP__

#include <memory>

namespace Arbiter {
namespace Opengl {

class IndexBuffer : public std::enable_shared_from_this<IndexBuffer> {
private:
public:
	IndexBuffer();
	virtual ~IndexBuffer() = default;
	
};

} // Opengl	
} // Arbiter

#endif  // __INDEXBUFFER_HPP__