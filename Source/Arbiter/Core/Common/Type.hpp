#pragma once
#ifndef __TYPE_HPP__
#define __TYPE_HPP__

#include <Arbiter/Core/Common/Base.hpp>
#include <Arbiter/Core/Common/StandardHeaders.hpp>

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

#ifdef ARBITER_DOUBLE_PRECISION == 1
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
class Application;
class ApplicationContextSDL;
class AutomaticDifferentiation;
class AxisAlignedBox;
class BoundingVolume;
class CholeskyDecomposition;
class Complex;
class ComputationalGraph;
class ConvexBody;
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

#endif
