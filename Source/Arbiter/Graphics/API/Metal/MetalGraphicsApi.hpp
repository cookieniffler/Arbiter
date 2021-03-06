#pragma once
#ifndef __GRAPHICSAPI_HPP__
#define __GRAPHICSAPI_HPP__

#include <Arbiter/Core/Common/Base.hpp>

ARBITER_NAMESPACE_BEGIN
METAL_NAMESPACE_BEGIN

class GraphicsApi : std::enable_shared_from_this<GraphicsApi> {
private:
protected:
public:
    GraphicsApi();
    virtual ~GraphicsApi() = default;

};

METAL_NAMESPACE_END
ARBITER_NAMESPACE_END

#endif  // __GRAPHICSAPI_HPP__
