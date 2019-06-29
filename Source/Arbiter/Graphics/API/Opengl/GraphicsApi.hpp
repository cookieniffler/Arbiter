#ifndef __GRAPHICSAPI_HPP__
#define __GRAPHICSAPI_HPP__

#include <memory>

namespace Arbiter {
namespace Opengl {

class GraphicsApi : public std::enable_shared_from_this<GraphicsApi> {
private:
public:
    GraphicsApi();
    virtual ~GraphicsApi() = default;

};

} // Opengl
} // Arbiter

#endif  // __GRAPHICSAPI_HPP__
