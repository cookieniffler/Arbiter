#pragma once
#ifndef __SCENEBUFFER_HPP__
#define __SCENEBUFFER_HPP__

#include <Arbiter/Core/Common/Base.hpp>

ARBITER_NAMESPACE_BEGIN

class SceneBuffer : std::enable_shared_from_this<SceneBuffer> {
private:
protected:
public:
	SceneBuffer();
	virtual SceneBuffer() = default;

};

ARBITER_NAMESPACE_END

#endif  // __SCENEBUFFER_HPP__
