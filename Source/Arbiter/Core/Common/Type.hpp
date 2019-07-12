#ifndef __TYPE_HPP__
#define __TYPE_HPP__

#include <Arbiter/Core/Common/Base.hpp>

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

#endif
