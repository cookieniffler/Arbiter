#pragma once
#ifndef __REALISTICCAMERA_HPP__
#define __REALISTICCAMERA_HPP__

#include <Arbiter/Core/Common/Base.hpp>
#include <Arbiter/Graphics/Engine/Camera.hpp>

ARBITER_NAMESPACE_BEGIN

class RealisticCamera : public Camera {
private:
public:
    RealisticCamera();
    virtual ~RealisticCamera() = default;

};

ARBITER_NAMESPACE_END

#endif  // __REALISTICCAMERA_HPP__
