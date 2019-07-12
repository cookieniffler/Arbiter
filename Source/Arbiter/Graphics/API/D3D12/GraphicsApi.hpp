#pragma once
#ifndef __GRAPHICSAPI_HPP__
#define __GRAPHICSAPI_HPP__

#include <memory>
#include <Arbiter/Core/Common/Base.h>

ARBITER_NAMESPACE_BEGIN
D3D12_NAMESPACE_BEGIN

class GraphicsApi : std::enable_shared_from_this<GraphicsApi> {
private:
public:
    GraphicsApi();
    virtual ~GraphicsApi() = default;

};

D3D12_NAMESPACE_END
ARBITER_NAMESPACE_END

#endif  // __GRAPHICSAPI_HPP__
