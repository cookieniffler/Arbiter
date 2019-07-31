#pragma once
#ifndef __LIGHT_HPP__
#define __LIGHT_HPP__

#include <Arbiter/Core/Common/Base.hpp>

ARBITER_NAMESPACE_BEGIN

class Light : std::enable_shared_from_this<Light> {
private:
protected:
public:
    Light();
    virtual ~Light() = default;

};

ARBITER_NAMESPACE_END

#endif // __LIGHT_HPP__
