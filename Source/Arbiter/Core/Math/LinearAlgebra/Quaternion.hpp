#pramge once
#ifndef __QUATERNION_HPP__
#define __QUATERNION_HPP__

#include <Arbiter/Core/Common/Base.hpp>

ARBITER_NAMESPACE_BEGIN

template <typename A, typename B>
class quaternion
{
private:
	A q[4];

public:
	explicit quaternion(A a) {}
	quaternion(A w, A x, A y, A z) {}
	explicit quaternion(const quaternion& q) {}
	virtual ~quaternion() = default {}

	inline A w() const {}
	inline A x() const {}
	inline A y() const {}
	inline A z() const {}

	inline A operator[](int i) {}
	inline quaternion operator+(const quaternion &q) {}
	inline quaternion operator-(const quaternion &q) {}
	inline quaternion operator*(const quaternion &q) {}
	inline quaternion operator/(const quaternion &q) {}
	inline quaternion operator+=(const quaternion &q) {}
	inline quaternion operator-=(const quaternion &q) {}
	inline quaternion operator*=(const quaternion &q) {}
	inline quaternion operator/=(const quaternion &q) {}
	inline quaternion operator+(const B b) {}
	inline quaternion operator-(const B b) {}
	inline quaternion operator*(const B b) {}
	inline quaternion operator/(const B b) {}
	inline quaternion operator+=(const B b) {}
	inline quaternion operator-=(const B b) {}
	inline quaternion operator*=(const B b) {}
	inline quaternion operator/=(const B b) {}
	std::ostream& operator<< (std::ostream& os, const quaternion& q) {}

};

ARBITER_NAMESPACE_END

#endif  // __QUATERNION_HPP__