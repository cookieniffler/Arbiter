#pragma once
#ifndef __COMPLEX_HPP__
#define __COMPLEX_HPP__

#include <Arbiter/Core/Common/Base.hpp>

ARBITER_NAMESPACE_BEGIN

template <typename A, typename B>
class Complex
{
private:
    A re;
    A im;

public:
    explicit Complex(A a) {}
    Complex(A real, A imag) {}
    explicit Complex(const Complex& c) {}
    virtual ~Complex() = default {}

    inline A r() const {}
    inline A i() const {}

    inline Complex operator+(const Complex &v) {}
    inline Complex operator-(const Complex &v) {}
    inline Complex operator*(const Complex &v) {}
    inline Complex operator/(const Complex &v) {}
    inline Complex operator+=(const Complex &v) {}
    inline Complex operator-=(const Complex &v) {}
    inline Complex operator*=(const Complex &v) {}
    inline Complex operator/=(const Complex &v) {}
    inline Complex operator+(const B b) {}
    inline Complex operator-(const B b) {}
    inline Complex operator*(const B b) {}
    inline Complex operator/(const B b) {}
    inline Complex operator+=(const B b) {}
    inline Complex operator-=(const B b) {}
    inline Complex operator*=(const B b) {}
    inline Complex operator/=(const B b) {}
    std::ostream& operator<< (std::ostream& os, const Complex& o) {}

    inline double norm(void) const {}
    inline double norm2(void) const {}
    inline Complex unit(void) const {}
    inline Complex abs(void) const {}
    inline Complex exponential(void) const {}

};

ARBITER_NAMESPACE_END

#endif  // __COMPLEX_HPP__
