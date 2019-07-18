#pramge once
#ifndef __QUATERNION_HPP__
#define __QUATERNION_HPP__

#include <Arbiter/Core/Common/Base.hpp>

ARBITER_NAMESPACE_BEGIN

template <typename A, typename B>
class Quaternion
{
private:
	A q[4];

public:
	explicit Quaternion(A a) {}
	Quaternion(A w, A x, A y, A z) {}
	explicit Quaternion(const Quaternion& q) {}
	virtual ~Quaternion() = default {}

	inline A w() const {}
	inline A x() const {}
	inline A y() const {}
	inline A z() const {}

	inline A operator[](int i) {}
	inline Quaternion operator+(const Quaternion &q) {}
	inline Quaternion operator-(const Quaternion &q) {}
	inline Quaternion operator*(const Quaternion &q) {}
	inline Quaternion operator/(const Quaternion &q) {}
	inline Quaternion operator+=(const Quaternion &q) {}
	inline Quaternion operator-=(const Quaternion &q) {}
	inline Quaternion operator*=(const Quaternion &q) {}
	inline Quaternion operator/=(const Quaternion &q) {}
	inline Quaternion operator+(const B b) {}
	inline Quaternion operator-(const B b) {}
	inline Quaternion operator*(const B b) {}
	inline Quaternion operator/(const B b) {}
	inline Quaternion operator+=(const B b) {}
	inline Quaternion operator-=(const B b) {}
	inline Quaternion operator*=(const B b) {}
	inline Quaternion operator/=(const B b) {}
	std::ostream& operator<< (std::ostream& os, const Quaternion& q) {}

};

ARBITER_NAMESPACE_END

#endif  // __QUATERNION_HPP__
