#pragma once
#ifndef __ALIGNEDMEMORYALLOCATOR_HPP__
#define __ALIGNEDMEMORYALLOCATOR_HPP__

#include <Arbiter/Core/Common/Base.hpp>

ARBITER_NAMESPACE_BEGIN

template<typename T, size_t Alignment>
class AlignedMemoryAllocator : public std::allocator<T>
{
private:
protected:
public:
	AlignedMemoryAllocator();
	virtual ~AlignedMemoryAllocator() = default;

}

ARBITER_NAMESPACE_END

#endif  // __ALIGNEDMEMORYALLOCATOR_HPP__
