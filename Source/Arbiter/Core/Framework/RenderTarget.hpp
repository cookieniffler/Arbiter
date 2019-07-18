#pragma once
#ifndef __RENDERTARGET_HPP__
#define __RENDERTARGET_HPP__

#include <Arbiter/Core/Common/Base.hpp>

ARBITER_NAMESPACE_BEGIN

class _Arbiter_Export RenderTarget
{
private:
protected:
public:
	struct FrameStats {
    float last_fps;
    float avg_fps;
    float best_fps;
    float worst_fps;
    unsigned long best_frame_time;
    unsigned long worst_frame_time;
    // number of triangles rendered in the last update() call.
    size_t triangle_count;
    // number of batches rendered in the last update() call.
    size_t batch_count;
    // int vBlankMissCount; // -1 means that the value is not applicable
	};

	RenderTarget();
	virtual ~RenderTarget() = default;

	virtual const 
};

ARBITER_NAMESPACE_END

#endif
