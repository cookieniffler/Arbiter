#include "Complex.hpp"

namespace Arbiter {

complex::complex(A a) {}
complex::complex(A real, A imag) {}
complex::complex(const complex& c) {}

inline A complex::r() const {}
inline A complex::i() const {}

inline complex complex::operator+(const complex &v) {}
inline complex complex::operator-(const complex &v) {}
inline complex complex::operator*(const complex &v) {}
inline complex complex::operator/(const complex &v) {}
inline complex complex::operator+=(const complex &v) {}
inline complex complex::operator-=(const complex &v) {}
inline complex complex::operator*=(const complex &v) {}
inline complex complex::operator/=(const complex &v) {}
inline complex complex::operator+(const B b) {}
inline complex complex::operator-(const B b) {}
inline complex complex::operator*(const B b) {}
inline complex complex::operator/(const B b) {}
inline complex complex::operator+=(const B b) {}
inline complex complex::operator-=(const B b) {}
inline complex complex::operator*=(const B b) {}
inline complex complex::operator/=(const B b) {}
std::ostream& complex::operator<< (std::ostream& os, const complex& o) {}

inline double complex::norm(void) const {}
inline double complex::norm2(void) const {}
inline complex complex::unit(void) const {}
inline complex complex::abs(void) const {} 
inline complex complex::exponential(void) const {}

} // namespace Arbiter