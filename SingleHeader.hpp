#pragma once
#ifndef __SINGLEHEADER_HPP__
#define __SINGLEHEADER_HPP__

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
#define OPENGL_NAMESPACE_END		}

#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cstdarg>
#include <cmath>

#include <vector>
#include <map>
#include <string>
#include <set>
#include <list>
#include <deque>
#include <queue>
#include <bitset>
#include <unordered_map>
#include <unordered_set>

#include <algorithm>
#include <functional>
#include <limits>

#include <fstream>
#include <iosfwd>
#include <sstream>

#include <atomic>
#include <memory>

extern "C" {
	#include <sys/types.h>
	#include <sys/stat.h>
}

#ifndef ARBITER_VERSION
#	define ARBITER_VERSION "1.0.0"
#endif

#define ARBITER_PLATFORM_WINDOWS     1
#define ARBITER_PLATFORM_LINUX       2
#define ARBITER_PLATFORM_APPLE       3
#define ARBITER_PLATFORM_APPLE_IOS   4
#define ARBITER_PLATFORM_ANDROID     5
#define ARBITER_PLATFORM_EMSCRIPTEN  6

#define ARBITER_COMPILER_MSVC 		   1
#define ARBITER_COMPILER_GNUC 		   2
#define ARBITER_COMPILER_BORL 	   	 3
#define ARBITER_COMPILER_WINSCW 	   4
#define ARBITER_COMPILER_GCCE 		   5
#define ARBITER_COMPILER_CLANG 		   6

#define ARBITER_ENDIAN_LITTLE 	     1
#define ARBITER_ENDIAN_BIG           2
#define ARBITER_ARCHITECTURE_32      1
#define ARBITER_ARCHITECTURE_64      2

#if defined(_WIN64)
#	define ARBITER_PLATFORM ARBITER_PLATFORM_WINDOWS
#endif

#if defined(__linux__)
#	define ARBITER_PLATFORM ARBITER_PLATFORM_LINUX
#endif

#if defined(__APPLE__)
#	define ARBITER_PLATFORM ARBITER_PLATFORM_OSX
#endif

#if defined(_MSC_VER)
#	define ARBITER_COMPILER ARBITER_COMPILER_MSVC
#endif

#if defined(__MINGW64__)
#	define ARBITER_COMPILER ARBITER_COMPILER_MINGW
#endif

#if defined(__GNUC__)
#	define ARBITER_COMPILER ARBITER_COMPILER__GCC
#endif

#if defined(__clang__)
#	define ARBITER_COMPILER ARBITER_COMPILER_CLANG
#endif

#if defined(ARBITER_COMPILER_MSVC)
#	define ARBITER_ALIGNED(x) __declspec(align(x))
#else
#	define ARBITER_ALIGNED(x) __attribute__((aligned(x)))
#endif

#ifndef __cplusplus
#	error C++ is required!
#elif __cplusplus >= 201703L
#	define ARBITER_CPP17
#elif (ARBITER_COMPILER == ARBITER_COMPILER_CLANG)
	static_assert(false, "For clang compilers, use -std=c++17");
#endif
//static_assert(__cplusplus >= 201402L, "C++14 Support Required");
//#define ARBITER_CPP14

#if defined(__x86_64__) || defined(_M_X64) || defined(_M_AMD64) || defined(_M_ARM64) || defined(__powerpc64__) || defined(__alpha__) || defined(__ia64__) || defined(__s390__) || defined(__s390x__) || defined(__arm64__) || defined(__aarch64__) || defined(__mips64) || defined(__mips64_)
#   define ARBITER_ARCH_TYPE ARBITER_ARCHITECTURE_64
#else
#   define ARBITER_ARCH_TYPE ARBITER_ARCHITECTURE_32
#endif

#ifdef ARBITER_CONFIG_BIG_ENDIAN
#    define ARBITER_ENDIAN ARBITER_ENDIAN_BIG
#else
#    define ARBITER_ENDIAN ARBITER_ENDIAN_LITTLE
#endif

// Find perfect alignment (should supports SIMD alignment if SIMD available)
#define ARBITER_SIMD_ALIGNMENT 16
// Declare variable aligned to SIMD alignment.
#define ARBITER_SIMD_ALIGNED_DECL(type, var)   OGRE_ALIGNED_DECL(type, var, OGRE_SIMD_ALIGNMENT)

#ifdef NDEBUG
#	undef NDEBUG
#endif

#ifdef ARBITER_STATIC_DEFINE
#	define _Arbiter_Export
#	define _Arbiter_Private
#else
#ifndef _Arbiter_Export
#ifdef ARBITER_EXPORTS
#		define _Arbiter_Export __declspec(dllexport)
#	else
#		define _Arbiter_Export __declspec(dllimport)
#	endif
#	endif
#	ifndef _Arbiter_Private
#		define _Arbiter_Private
#	endif
#endif

#ifndef ARBITER_DEPRECATED
#  define ARBITER_DEPRECATED __declspec(deprecated)
#endif

#ifndef ARBITER_DEPRECATED_EXPORT
#  define ARBITER_DEPRECATED_EXPORT _Arbiter_Export ARBITER_DEPRECATED
#endif

#ifndef ARBITER_DEPRECATED_NO_EXPORT
#  define ARBITER_DEPRECATED_NO_EXPORT _Arbiter_Private ARBITER_DEPRECATED
#endif

#ifdef _WIN64
#define TC_FORCE_INLINE __forceinline
#else
#define TC_FORCE_INLINE inline __attribute__((always_inline))
#endif

using Uchar = unsigned char;
using Int8 = int8_t;
using Uint8 = uint8_t;
using Int16 = int16_t;
using Uint16 = uint16_t;
using Int32 = int32_t;
using Uint32 = uint32_t;
using Uint = unsigned int;
using Int64 = int64_t;
using Uint64 = uint64_t;
using Float32 = float;
using Float64 = double;

#if (ARBITER_DOUBLE_PRECISION == 1)
using Real = Float64;
#else
using Real = Float32;
#endif

// custom literals
Real		constexpr operator"" _f(long double v) 					{ return Real(v); }
Real		constexpr operator"" _f(unsigned long long v) 	{ return Real(v); }
Float32 constexpr operator"" _f32(long double v) 				{ return Float32(v); }
Float32 constexpr operator"" _f32(unsigned long long v) { return Float32(v); }
Float64 constexpr operator"" _f64(long double v) 				{ return Float64(v); }
Float64 constexpr operator"" _f64(unsigned long long v) { return Float64(v); }

using String = std::string;
using StringStream = std::basic_stringstream<char,std::char_traits<char>,std::allocator<char> >;

// Forward Declaration of Classes
class Angle;
class Application;
class ApplicationContextSDL;
class AutomaticDifferentiation;
class AxisAlignedBox;
class BoundingVolume;
class CholeskyDecomposition;
class Complex;
class ComputationalGraph;
class ConvexBody;
class Degree;
class DenseMatrix;
class Graph;
class ForwardModeAD;
class Frustum;
class Manifold;
class Mat3x3;
class Mat4x4;
class Mesh;
class NaiveGaussianElimination;
class Node;
class NodeEnum;
class NodeJson;
class NodeType;
class Plane;
class PlaneBoundedVolume;
class Polygon;
class Quaternion;
class Radian;
class Ray;
class RenderTarget;
class ReverseModeAD;
class Singleton;
class Scene;
class SceneBuffer;
class SceneManager;
class SparseMatrix;
class Sphere;
class TangentSpaceBasis;
class Triangulation;
class Vec2;
class Vec3;
class Vec4;using Uchar = unsigned char;
using Int8 = int8_t;
using Uint8 = uint8_t;
using Int16 = int16_t;
using Uint16 = uint16_t;
using Int32 = int32_t;
using Uint32 = uint32_t;
using Uint = unsigned int;
using Int64 = int64_t;
using Uint64 = uint64_t;
using Float32 = float;
using Float64 = double;

#if (ARBITER_DOUBLE_PRECISION == 1)
using Real = Float64;
#else
using Real = Float32;
#endif

// custom literals
Real		constexpr operator"" _f(long double v) 					{ return Real(v); }
Real		constexpr operator"" _f(unsigned long long v) 	{ return Real(v); }
Float32 constexpr operator"" _f32(long double v) 				{ return Float32(v); }
Float32 constexpr operator"" _f32(unsigned long long v) { return Float32(v); }
Float64 constexpr operator"" _f64(long double v) 				{ return Float64(v); }
Float64 constexpr operator"" _f64(unsigned long long v) { return Float64(v); }

using String = std::string;
using StringStream = std::basic_stringstream<char,std::char_traits<char>,std::allocator<char> >;

// Forward Declaration of Classes
class Angle;
class Application;
class ApplicationContextSDL;
class AutomaticDifferentiation;
class AxisAlignedBox;
class BoundingVolume;
class CholeskyDecomposition;
class Complex;
class ComputationalGraph;
class ConvexBody;
class Degree;
class DenseMatrix;
class Graph;
class ForwardModeAD;
class Frustum;
class Manifold;
class Mat3x3;
class Mat4x4;
class Mesh;
class NaiveGaussianElimination;
class Node;
class NodeEnum;
class NodeJson;
class NodeType;
class Plane;
class PlaneBoundedVolume;
class Polygon;
class Quaternion;
class Radian;
class Ray;
class RenderTarget;
class ReverseModeAD;
class Singleton;
class Scene;
class SceneBuffer;
class SceneManager;
class SparseMatrix;
class Sphere;
class TangentSpaceBasis;
class Triangulation;
class Vec2;
class Vec3;
class Vec4;

#if ARBITER_PLATFORM == ARBITER_PLATFORM_WINDOWS
#  undef min
#  undef max
#  if defined( __MINGW32__ )
#    include <unistd.h>
#  endif
#endif

#if ARBITER_PLATFORM == ARBITER_PLATFORM_LINUX || ARBITER_PLATFORM == ARBITER_PLATFORM_ANDROID || ARBITER_PLATFORM == ARBITER_PLATFORM_EMSCRIPTEN
extern "C" {
	#include <unistd.h>
	#include <dlfcn.h>
}
#endif

#if ARBITER_PLATFORM == ARBITER_PLATFORM_APPLE || ARBITER_PLATFORM == ARBITER_PLATFORM_APPLE_IOS
extern "C" {
	#include <unistd.h>
	#include <sys/param.h>
	#include <CoreFoundation/CoreFoundation.h>
}
#endif

#if ARBITER_PLATFORM == ARBITER_PLATFORM_EMSCRIPTEN
	#include <emscripten/emscripten.h>
#endif

#endif  // __SINGLEHEADER_HPP__
