#pragma once
#ifndef __STDMEMORYALLOCATOR_HPP__
#define __STDMEMORYALLOCATOR_HPP__

#include <Arbiter/Core/Common/Base.hpp>
#include <Arbiter/Core/Memory/AlignedMemoryAllocator.hpp>

ARBITER_NAMESPACE_BEGIN

class StdMemoryAllocator : public AlignedMemoryAllocator {
private:
protected:
public:
    StdMemoryAllocator();
    virtual ~StdMemoryAllocator() = default;
    
}

ARBITER_NAMESPACE_END

#endif  // __STDMEMORYALLOCATOR_HPP__
