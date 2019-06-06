#ifndef __MATRIX_HPP__
#define __MATRIX_HPP__

#include <cstdint>

namespace Arbiter {

template <typename M>
class mat3x3
{
private:
	M m[9];

public:
	mat3x3();
	virtual ~mat3x3() = default; 
	
};

template <typename M>
class mat4x4
{
private:
	M m[16];

public:
	mat4x4();
	virtual ~mat4x4() = default; 
	
};

using mat3d = mat3x3<double>;
using mat3f = mat3x3<float>;
using mat3i = mat3x3<int32_t>;
using mat3u = mat3x3<uint32_t>;
using mat3b = mat3x3<bool>;

using mat4d = mat4x4<double>;
using mat4f = mat4x4<float>;
using mat4i = mat4x4<int32_t>;
using mat4u = mat4x4<uint32_t>;
using mat4b = mat4x4<bool>;

} // Arbiter

#endif  // __MATRIX_HPP__