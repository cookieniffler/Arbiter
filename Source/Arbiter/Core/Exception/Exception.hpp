#ifndef __EXCEPTION_HPP__
#define __EXCEPTION_HPP__

#include <Arbiter/Core/Common/Base.hpp>

ARBITER_NAMESPACE_BEGIN

class Exception : public std::exception {
private:
protected:
public:
    Exception();
    virtual ~Exception() = default;

};

ARBITER_NAMESPACE_END

#endif  // __EXCEPTION_HPP__
