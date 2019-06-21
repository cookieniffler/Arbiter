#ifndef __GRAPHICSAPI_HPP__
#define __GRAPHICSAPI_HPP__

#include <memory>

namespace Arbiter {
namespace Metal {

class GraphicsApi : std::enable_shared_from_this<GraphicsApi> {
private:
public:
    GraphicsApi();
    virtual ~GraphicsApi() = default;

};

} // Metal
} // Arbiter

#endif  // __GRAPHICSAPI_HPP__
