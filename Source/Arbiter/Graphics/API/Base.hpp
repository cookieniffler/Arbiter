#pragma once
#ifndef __BASE_HPP__
#define __BASE_HPP__

#include <Arbiter/Core/Common/Base.hpp>
#if defined(_WIN32)
#include <Arbiter/Graphics/API/D3D12/GraphicsApi.hpp>
#elif defined(linux)
#include <Arbiter/Graphics/API/Opengl/GraphicsApi.hpp>
#elif defined(__APPLE__)
#include <Arbiter/Graphics/API/Metal/GraphicsApi.hpp>
#endif

ARBITER_NAMESPACE_BEGIN

ARBITER_NAMESPACE_END

#endif  // __BASE_HPP__
