#pragma once
#ifndef __MATRIX_HPP__
#define __MATRIX_HPP__

#include <Arbiter/Core/Common/Base.hpp>

ARBITER_NAMESPACE_BEGIN

template <typename M>
class Mat3x3
{
private:
    M m[9];

public:
    explicit Mat3x3();
    virtual ~Mat3x3() = default;

};

template <typename M>
class Mat4x4
{
private:
    M m[16];

public:
    explicit Mat4x4();
    virtual ~Mat4x4() = default;

};

using Mat3d = Mat3x3<double>;
using Mat3f = Mat3x3<float>;
using Mat3i = Mat3x3<int32_t>;
using Mat3u = Mat3x3<uint32_t>;
using Mat3b = Mat3x3<bool>;

using Mat4d = Mat4x4<double>;
using Mat4f = Mat4x4<float>;
using Mat4i = Mat4x4<int32_t>;
using Mat4u = Mat4x4<uint32_t>;
using Mat4b = Mat4x4<bool>;

ARBITER_NAMESPACE_END

#endif  // __MATRIX_HPP__
