#ifndef __BASE_HPP__
#define __BASE_HPP__

#if defined(_WIN32)
#include "D3D12/GraphicsApi.hpp"
#elif defined(linux)
#include "Opengl/GraphicsApi.hpp"
#elif defined(__APPLE__)
#include "Metal/GraphicsApi.hpp"
#endif

namespace Arbiter {

} // Arbiter

#endif  // __BASE_HPP__
