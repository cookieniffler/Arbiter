#ifndef __VECTOR_HPP__
#define __VECTOR_HPP__

namespace Arbiter {

template <typename A, typename B>
class vec2
{
private:
	A v[2];

public:
	vec2(A t);
	vec2(A x, A y);
	vec2(const vec2& v);
	virtual ~vec2() = default;

	inline A x() const;
	inline A y() const;

	inline A operator[](int i);
	inline vec2 operator+(const vec2 &v);
	inline vec2 operator-(const vec2 &v);
	inline vec2 operator*(const vec2 &v);
	inline vec2 operator/(const vec2 &v);
	inline vec2 operator+=(const vec2 &v);
	inline vec2 operator-=(const vec2 &v);
	inline vec2 operator*=(const vec2 &v);
	inline vec2 operator/=(const vec2 &v);
	inline vec2 operator+(const B b);
	inline vec2 operator-(const B b);
	inline vec2 operator*(const B b);
	inline vec2 operator/(const B b);
	inline vec2 operator+=(const B b);
	inline vec2 operator-=(const B b);
	inline vec2 operator*=(const B b);
	inline vec2 operator/=(const B b);
	std::ostream& operator<< (std::ostream& os, const vec2& v);

	inline double dot(const vec2& u, const vec2& v);
	inline vec2 cross(const vec2& u, const vec2& v);
	inline double norm(void) const;
	inline double norm2(void) const;
	inline vec2 unit(void) const;
	inline void normalize(void);
	inline vec2 abs(void) const; 
	
};

template <typename A, typename B>
class vec3
{
private:
	A v[3];

public:
	vec3(A a);
	vec3(A x, A y, A z);
	vec3(const vec3& v);
	virtual ~vec3() = default;

	inline A x() const;
	inline A y() const;
	inline A z() const;
	inline A r() const;
	inline A g() const;
	inline A b() const;

	inline A operator[](int i);
	inline vec3 operator+(const vec3 &v);
	inline vec3 operator-(const vec3 &v);
	inline vec3 operator*(const vec3 &v);
	inline vec3 operator/(const vec3 &v);
	inline vec3 operator+=(const vec3 &v);
	inline vec3 operator-=(const vec3 &v);
	inline vec3 operator*=(const vec3 &v);
	inline vec3 operator/=(const vec3 &v);
	inline vec3 operator+(const B b);
	inline vec3 operator-(const B b);
	inline vec3 operator*(const B b);
	inline vec3 operator/(const B b);
	inline vec3 operator+=(const B b);
	inline vec3 operator-=(const B b);
	inline vec3 operator*=(const B b);
	inline vec3 operator/=(const B b);
	std::ostream& operator<< (std::ostream& os, const vec3& v);

	inline double dot(const vec3& u, const vec3& v);
	inline vec3 cross(const vec3& u, const vec3& v);
	inline double norm(void) const;
	inline double norm2(void) const;
	inline vec3 unit(void) const;
	inline void normalize(void);
	inline vec3 abs(void) const;

};

template <typename A, typename B>
class vec4
{
private:
	A v[4];

public:
	vec4(A t);
	vec4(A x, A y, A z, A w);
	vec4(const vec4& v);
	virtual ~vec4() = default;

	inline A x() const;
	inline A y() const;
	inline A z() const;
	inline A w() const;
	inline A r() const;
	inline A g() const;
	inline A b() const;
	inline A a() const;

	inline A operator[](int i);
	inline vec4 operator+(const vec4 &v);
	inline vec4 operator-(const vec4 &v);
	inline vec4 operator*(const vec4 &v);
	inline vec4 operator/(const vec4 &v);
	inline vec4 operator+=(const vec4 &v);
	inline vec4 operator-=(const vec4 &v);
	inline vec4 operator*=(const vec4 &v);
	inline vec4 operator/=(const vec4 &v);
	inline vec4 operator+(const B b);
	inline vec4 operator-(const B b);
	inline vec4 operator*(const B b);
	inline vec4 operator/(const B b);
	inline vec4 operator+=(const B b);
	inline vec4 operator-=(const B b);
	inline vec4 operator*=(const B b);
	inline vec4 operator/=(const B b);
	std::ostream& operator<< (std::ostream& os, const vec4& v);

	inline double dot(const vec4& u, const vec4& v);
	inline vec4 cross(const vec4& u, const vec4& v);
	inline double norm(void) const;
	inline double norm2(void) const;
	inline vec4 unit(void) const;
	inline void normalize(void);
	inline vec4 abs(void) const;
	
};

using vec2d = vec2<double>;
using vec2f = vec2<float>;
using vec2i = vec2<int32_t>;
using vec2u = vec2<uint32_t>;
using vec2b = vec2<bool>;

using vec3d = vec3<double>;
using vec3f = vec3<float>;
using vec3i = vec3<int32_t>;
using vec3u = vec3<uint32_t>;
using vec3b = vec3<bool>;

using vec4d = vec4<double>;
using vec4f = vec4<float>;
using vec4i = vec4<int32_t>;
using vec4u = vec4<uint32_t>;
using vec4b = vec4<bool>;

} // Arbiter

#endif  // __VECTOR_HPP__