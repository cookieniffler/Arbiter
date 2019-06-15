#ifndef __GRAPHICSAPI_HPP__
#define __GRAPHICSAPI_HPP__

#include <memory>

namespace Arbiter {

class GraphicsApi : std::enable_shared_from_this<GraphicsApi> {
private:
public:
    GraphicsApi();
    virtual ~GraphicsApi() = default;

};

}
#endif  // __GRAPHICSAPI_HPP__
