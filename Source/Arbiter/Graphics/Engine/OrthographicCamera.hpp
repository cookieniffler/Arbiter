#pragma once
#ifndef __ORTHOGRAPHICCAMERA_HPP__
#define __ORTHOGRAPHICCAMERA_HPP__

#include <Arbiter/Core/Common/Base.hpp>

ARBITER_NAMESPACE_BEGIN

class OrthographicCamera : public Camera {
private:
public:
  OrthographicCamera();
  virtual ~OrthographicCamera() = default;

};

ARBITER_NAMESPACE_END

#endif  // __ORTHOGRAPHICCAMERA_HPP__
