#pragma once
#ifndef __SINGLETON_HPP__
#define __SINGLETON_HPP__

#include <Arbiter/Core/Common/Base.hpp>

ARBITER_NAMESPACE_BEGIN

template<typename T>
class Singleton {
private:
	Singleton(const Singleton<T>&);
	Singleton& operator=(const Singleton<T>&);

protected:
	static T* p_singleton;

public:

};

ARBITER_NAMESPACE_END

#endif  // __SINGLETON_HPP__
