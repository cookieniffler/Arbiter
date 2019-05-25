#include "Quaternion.hpp"

namespace Arbiter {

quaternion::quaternion(A a) {}
quaternion::quaternion(A w, A x, A y, A z) {}
quaternion::quaternion(const quaternion& q) {}

inline A quaternion::w() const {}
inline A quaternion::x() const {}
inline A quaternion::y() const {}
inline A quaternion::z() const {}

inline A quaternion::operator[](int i) {}
inline quaternion quaternion::operator+(const quaternion &q) {}
inline quaternion quaternion::operator-(const quaternion &q) {}
inline quaternion quaternion::operator*(const quaternion &q) {}
inline quaternion quaternion::operator/(const quaternion &q) {}
inline quaternion quaternion::operator+=(const quaternion &q) {}
inline quaternion quaternion::operator-=(const quaternion &q) {}
inline quaternion quaternion::operator*=(const quaternion &q) {}
inline quaternion quaternion::operator/=(const quaternion &q) {}
inline quaternion quaternion::operator+(const B b) {}
inline quaternion quaternion::operator-(const B b) {}
inline quaternion quaternion::operator*(const B b) {}
inline quaternion quaternion::operator/(const B b) {}
inline quaternion quaternion::operator+=(const B b) {}
inline quaternion quaternion::operator-=(const B b) {}
inline quaternion quaternion::operator*=(const B b) {}
inline quaternion quaternion::operator/=(const B b) {}
std::ostream& quaternion::operator<< (std::ostream& os, const quaternion& q) {}

} // Arbiter