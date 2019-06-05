#include "Vector.hpp"

namespace Arbiter {

//=========================================================
// Vec2
//=========================================================

vec2::vec2(A t) {}
vec2::vec2(A x, A y) {}
vec2::vec2(const vec2& v) {}

inline A vec2::x() const {}
inline A vec2::y() const {}

inline A vec2::operator[](int i) {}
inline vec2 vec2::operator+(const vec2 &v) {}
inline vec2 vec2::operator-(const vec2 &v) {}
inline vec2 vec2::operator*(const vec2 &v) {}
inline vec2 vec2::operator/(const vec2 &v) {}
inline vec2 vec2::operator+=(const vec2 &v) {}
inline vec2 vec2::operator-=(const vec2 &v) {}
inline vec2 vec2::operator*=(const vec2 &v) {}
inline vec2 vec2::operator/=(const vec2 &v) {}
inline vec2 vec2::operator+(const B b) {}
inline vec2 vec2::operator-(const B b) {}
inline vec2 vec2::operator*(const B b) {}
inline vec2 vec2::operator/(const B b) {}
inline vec2 vec2::operator+=(const B b) {}
inline vec2 vec2::operator-=(const B b) {}
inline vec2 vec2::operator*=(const B b) {}
inline vec2 vec2::operator/=(const B b) {}
std::ostream& vec2::operator<< (std::ostream& os, const vec2& v) {}

inline double vec2::dot(const vec2& u, const vec2& v) {}
inline vec2 vec2::cross(const vec2& u, const vec2& v) {}
inline double vec2::norm(void) const {}
inline double vec2::norm2(void) const {}
inline vec2 vec2::unit(void) const {}
inline void vec2::normalize(void) {}
inline vec2 vec2::abs(void) const {} 


//=========================================================
// Vec3
//=========================================================

vec3::vec3(A a) {}
vec3::vec3(A x, A y, A z) {}
vec3::vec3(const vec3& v) {}

inline A vec3::x() const {}
inline A vec3::y() const {}
inline A vec3::z() const {}
inline A vec3::r() const {}
inline A vec3::g() const {}
inline A vec3::b() const {}

inline A vec3::operator[](int i) {}
inline vec3 vec3::operator+(const vec3 &v) {}
inline vec3 vec3::operator-(const vec3 &v) {}
inline vec3 vec3::operator*(const vec3 &v) {}
inline vec3 vec3::operator/(const vec3 &v) {}
inline vec3 vec3::operator+=(const vec3 &v) {}
inline vec3 vec3::operator-=(const vec3 &v) {}
inline vec3 vec3::operator*=(const vec3 &v) {}
inline vec3 vec3::operator/=(const vec3 &v) {}
inline vec3 vec3::operator+(const B b) {}
inline vec3 vec3::operator-(const B b) {}
inline vec3 vec3::operator*(const B b) {}
inline vec3 vec3::operator/(const B b) {}
inline vec3 vec3::operator+=(const B b) {}
inline vec3 vec3::operator-=(const B b) {}
inline vec3 vec3::operator*=(const B b) {}
inline vec3 vec3::operator/=(const B b) {}
std::ostream& vec3::operator<< (std::ostream& os, const vec3& v) {}

inline double vec3::dot(const vec3& u, const vec3& v) {}
inline vec3 vec3::cross(const vec3& u, const vec3& v) {}
inline double vec3::norm(void) const {}
inline double vec3::norm2(void) const {}
inline vec3 vec3::unit(void) const {}
inline void vec3::normalize(void) {}
inline vec3 vec3::abs(void) const {}


//=========================================================
// Vec4
//=========================================================

vec4::vec4(A t);
vec4::vec4(A x, A y, A z, A w);
vec4::vec4(const vec4& v);

inline A vec4::x() const;
inline A vec4::y() const;
inline A vec4::z() const;
inline A vec4::w() const;
inline A vec4::r() const;
inline A vec4::g() const;
inline A vec4::b() const;
inline A vec4::a() const;

inline A vec4::operator[](int i);
inline vec4 vec4::operator+(const vec4 &v);
inline vec4 vec4::operator-(const vec4 &v);
inline vec4 vec4::operator*(const vec4 &v);
inline vec4 vec4::operator/(const vec4 &v);
inline vec4 vec4::operator+=(const vec4 &v);
inline vec4 vec4::operator-=(const vec4 &v);
inline vec4 vec4::operator*=(const vec4 &v);
inline vec4 vec4::operator/=(const vec4 &v);
inline vec4 vec4::operator+(const B b);
inline vec4 vec4::operator-(const B b);
inline vec4 vec4::operator*(const B b);
inline vec4 vec4::operator/(const B b);
inline vec4 vec4::operator+=(const B b);
inline vec4 vec4::operator-=(const B b);
inline vec4 vec4::operator*=(const B b);
inline vec4 vec4::operator/=(const B b);
std::ostream& vec4::operator<< (std::ostream& os, const vec4& v);

inline double vec4::dot(const vec4& u, const vec4& v);
inline vec4 vec4::cross(const vec4& u, const vec4& v);
inline double vec4::norm(void) const;
inline double vec4::norm2(void) const;
inline vec4 vec4::unit(void) const;
inline void vec4::normalize(void);
inline vec4 vec4::abs(void) const;


} // Arbiter