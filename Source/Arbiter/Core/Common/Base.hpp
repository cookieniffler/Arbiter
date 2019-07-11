#pragma once
#ifndef __BASE_HPP__
#define __BASE_HPP__

#ifdef _MSC_VER
#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif
#ifndef _CRT_SECURE_NO_DEPRECATE
#define _CRT_SECURE_NO_DEPRECATE
#endif
#ifndef NOMINMAX
#define NOMINMAX
#endif
#endif

#define ARBITER_NAMESPACE_BEGIN namespace Arbiter {
#define ARBITER_NAMESPACE_END   }

// Renderer namespace
#define D3D12_NAMESPACE_BEGIN 	namespace D3D12 {
#define D3D12_NAMESPACE_END	  	}
#define METAL_NAMESPACE_BEGIN 	namespace Metal {
#define METAL_NAMESPACE_END	  	}
#define OPENGL_NAMESPACE_BEGIN 	namespace Opengl {
#define OPENGL_NAMESPACE_END	 	}

#include <cstring>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstddef>
#include <cstdint>
#include <utility>
#include <type_traits>
#include <cstdint>
#include <algorithm>
#include <memory>
#include <csignal>
#include <vector>

using uchar = unsigned char;
using int8 = int8_t;
using uint8 = uint8_t;
using int16 = int16_t;
using uint16 = uint16_t;
using int32 = int32_t;
using uint32 = uint32_t;
using uint = unsigned int;
using int64 = int64_t;
using uint64 = uint64_t;
using float32 = float;
using float64 = double;

#ifdef TC_USE_DOUBLE
using real = float64;
#else
using real = float32;
#endif

// custom literals
real 		constexpr operator"" _f(long double v) 					{ return real(v); }
real 		constexpr operator"" _f(unsigned long long v) 	{ return real(v); }
float32 constexpr operator"" _f32(long double v) 				{ return float32(v); }
float32 constexpr operator"" _f32(unsigned long long v) { return float32(v); }
float64 constexpr operator"" _f64(long double v) 				{ return float64(v); }
float64 constexpr operator"" _f64(unsigned long long v) { return float64(v); }

#endif  // __BASE_HPP__
