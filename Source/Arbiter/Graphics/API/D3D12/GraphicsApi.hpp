#ifndef __GRAPHICSAPI_HPP__
#define __GRAPHICSAPI_HPP__

#include <memory>

namespace Arbiter {
namespace D3D12 {

class GraphicsApi : std::enable_shared_from_this<GraphicsApi> {
private:
public:
    GraphicsApi();
    virtual ~GraphicsApi() = default;

};

} // D3D12
} // Arbiter
#endif  // __GRAPHICSAPI_HPP__
