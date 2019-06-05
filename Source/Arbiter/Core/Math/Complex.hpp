#ifndef __COMPLEX_HPP__
#define __COMPLEX_HPP__

namespace Arbiter {

template <typename A, typename B>
class complex
{
private:
	A re;
	A im;

public:
	complex(A a);
	complex(A real, A imag);
	complex(const complex& c);
	virtual ~complex() = default;

	inline A r() const;
	inline A i() const;

	inline complex operator+(const complex &v);
	inline complex operator-(const complex &v);
	inline complex operator*(const complex &v);
	inline complex operator/(const complex &v);
	inline complex operator+=(const complex &v);
	inline complex operator-=(const complex &v);
	inline complex operator*=(const complex &v);
	inline complex operator/=(const complex &v);
	inline complex operator+(const B b);
	inline complex operator-(const B b);
	inline complex operator*(const B b);
	inline complex operator/(const B b);
	inline complex operator+=(const B b);
	inline complex operator-=(const B b);
	inline complex operator*=(const B b);
	inline complex operator/=(const B b);
	std::ostream& operator<< (std::ostream& os, const complex& o);

	inline double norm(void) const;
	inline double norm2(void) const;
	inline complex unit(void) const;
	inline complex abs(void) const; 
	inline complex exponential(void) const;
	
};

} // Arbiter

#endif  // __COMPLEX_HPP__