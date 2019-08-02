#pragma once
#ifndef __PERSEPECTIVECAMERA_HPP__
#define __PERSEPECTIVECAMERA_HPP__

#include <Arbiter/Core/Common/Base.hpp>
#include <Arbiter/Graphics/Engine/Camera.hpp>

ARBITER_NAMESPACE_BEGIN

class PersepectiveCamera : public Camera {
private:
protected:
public:
    PersepectiveCamera();
    virtual ~PersepectiveCamera() = default;

};

ARBITER_NAMESPACE_END

#endif  // __PERSEPECTIVECAMERA_HPP__
