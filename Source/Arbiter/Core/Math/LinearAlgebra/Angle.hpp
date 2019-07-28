#pragma once
#ifndef __ANGLE_HPP__
#define __ANGLE_HPP__

#include <Arbiter/Core/Common/Base.hpp>

ARBITER_NAMESPACE_BEGIN

class Degree : public std::enable_shared_from_this<Degree>
{
private:
	Real _degree;
protected:
public:
	Degree();
	virtual ~Degree() = default;

};

class Radian : public std::enable_shared_from_this<Radian>
{
private:
	Real _radian;
protected:
public:
	Radian();
	virtual ~Radian() = default;

};

class Angle : public std::enable_shared_from_this<Angle>
{
private:
protected:
public:
	Angle();
	virtual ~Angle() = default;

};

ARBITER_NAMESPACE_END

#endif  // __ANGLE_HPP__
