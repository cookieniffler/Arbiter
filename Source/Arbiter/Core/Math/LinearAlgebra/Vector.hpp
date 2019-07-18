#pragma once
#ifndef __VECTOR_HPP__
#define __VECTOR_HPP__

#include <ostream>
#include <Arbiter/Core/Common/Base.hpp>

ARBITER_NAMESPACE_BEGIN

template <typename A, typename B>
class Vec2
{
private:
	A v[2];

public:
	explicit Vec2(A t = 0.0f) {}
	Vec2(A x, A y) {}
	explicit Vec2(const Vec2& v) {}
	virtual ~Vec2() = default {}

	inline A x() const {}
	inline A y() const {}

	inline A operator[](int i) {}
	inline Vec2 operator+(const Vec2 &v) {}
	inline Vec2 operator-(const Vec2 &v) {}
	inline Vec2 operator*(const Vec2 &v) {}
	inline Vec2 operator/(const Vec2 &v) {}
	inline Vec2 operator+=(const Vec2 &v) {}
	inline Vec2 operator-=(const Vec2 &v) {}
	inline Vec2 operator*=(const Vec2 &v) {}
	inline Vec2 operator/=(const Vec2 &v) {}
	inline Vec2 operator+(const B b) {}
	inline Vec2 operator-(const B b) {}
	inline Vec2 operator*(const B b) {}
	inline Vec2 operator/(const B b) {}
	inline Vec2 operator+=(const B b) {}
	inline Vec2 operator-=(const B b) {}
	inline Vec2 operator*=(const B b) {}
	inline Vec2 operator/=(const B b) {}
	std::ostream& operator<< (std::ostream& os, const Vec2& v) {}

	inline double dot(const Vec2& u, const Vec2& v) {}
	inline Vec2 cross(const Vec2& u, const Vec2& v) {}
	inline double norm(void) const {}
	inline double norm2(void) const {}
	inline Vec2 unit(void) const {}
	inline void normalize(void) {}
	inline Vec2 abs(void) const {}

};

template <typename A, typename B = A>
class Vec3
{
private:
	A v[3];

public:
	explicit Vec3(A a = 0.0f);
	Vec3(A x, A y, A z);
	explicit Vec3(const Vec3& v);
	virtual ~Vec3() = default;

	inline A x() const;
	inline A y() const;
	inline A z() const;
	inline A r() const;
	inline A g() const;
	inline A b() const;

	inline A operator[](int i);
	inline Vec3 operator+(const Vec3 &v);
	inline Vec3 operator-(const Vec3 &v);
	inline Vec3 operator*(const Vec3 &v);
	inline Vec3 operator/(const Vec3 &v);
	inline Vec3 operator+=(const Vec3 &v);
	inline Vec3 operator-=(const Vec3 &v);
	inline Vec3 operator*=(const Vec3 &v);
	inline Vec3 operator/=(const Vec3 &v);
	inline Vec3 operator+(const B b);
	inline Vec3 operator-(const B b);
	inline Vec3 operator*(const B b);
	inline Vec3 operator/(const B b);
	inline Vec3 operator+=(const B b);
	inline Vec3 operator-=(const B b);
	inline Vec3 operator*=(const B b);
	inline Vec3 operator/=(const B b);
	std::ostream& operator<< (std::ostream& os, const Vec3& v);

	inline double dot(const Vec3& u, const Vec3& v);
	inline Vec3 cross(const Vec3& u, const Vec3& v);
	inline double norm(void) const;
	inline double norm2(void) const;
	inline Vec3 unit(void) const;
	inline void normalize(void);
	inline Vec3 abs(void) const;

};

template <typename A, typename B = A>
class Vec4
{
private:
	A v[4];

public:
	explicit Vec4(A t = 0.0f);
	Vec4(A x, A y, A z, A w);
	explicit Vec4(const Vec4& v);
	virtual ~Vec4() = default;

	inline A x() const;
	inline A y() const;
	inline A z() const;
	inline A w() const;
	inline A r() const;
	inline A g() const;
	inline A b() const;
	inline A a() const;

	inline A operator[](int i);
	inline Vec4 operator+(const Vec4 &v);
	inline Vec4 operator-(const Vec4 &v);
	inline Vec4 operator*(const Vec4 &v);
	inline Vec4 operator/(const Vec4 &v);
	inline Vec4 operator+=(const Vec4 &v);
	inline Vec4 operator-=(const Vec4 &v);
	inline Vec4 operator*=(const Vec4 &v);
	inline Vec4 operator/=(const Vec4 &v);
	inline Vec4 operator+(const B b);
	inline Vec4 operator-(const B b);
	inline Vec4 operator*(const B b);
	inline Vec4 operator/(const B b);
	inline Vec4 operator+=(const B b);
	inline Vec4 operator-=(const B b);
	inline Vec4 operator*=(const B b);
	inline Vec4 operator/=(const B b);
	std::ostream& operator<< (std::ostream& os, const Vec4& v);

	inline double dot(const Vec4& u, const Vec4& v);
	inline Vec4 cross(const Vec4& u, const Vec4& v);
	inline double norm(void) const;
	inline double norm2(void) const;
	inline Vec4 unit(void) const;
	inline void normalize(void);
	inline Vec4 abs(void) const;

};

using Vec2d = Vec2<double>;
using Vec2f = Vec2<float>;
using Vec2i = Vec2<int32_t>;
using Vec2u = Vec2<uint32_t>;
using Vec2b = Vec2<bool>;

using Vec3d = Vec3<double>;
using Vec3f = Vec3<float>;
using Vec3i = Vec3<int32_t>;
using Vec3u = Vec3<uint32_t>;
using Vec3b = Vec3<bool>;

using Vec4d = Vec4<double>;
using Vec4f = Vec4<float>;
using Vec4i = Vec4<int32_t>;
using Vec4u = Vec4<uint32_t>;
using Vec4b = Vec4<bool>;

ARBITER_NAMESPACE_END

#endif  // __VECTOR_HPP__
