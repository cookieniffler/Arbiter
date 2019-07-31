#pragma once
#ifndef __D3D12GRAPHICSAPI_HPP__
#define __D3D12GRAPHICSAPI_HPP__

#include <Arbiter/Core/Common/Base.hpp>
#include <Arbiter/Core/Common/StdHeaders.hpp>

ARBITER_NAMESPACE_BEGIN
D3D12_NAMESPACE_BEGIN

class D3D12GraphicsApi : std::enable_shared_from_this<D3D12GraphicsApi>
{
private:
protected:
public:
	D3D12GraphicsApi();
    virtual ~D3D12GraphicsApi() = default;

};

D3D12_NAMESPACE_END
ARBITER_NAMESPACE_END

#endif  // __D3D12GRAPHICSAPI_HPP__
