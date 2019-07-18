#pragma once
#ifndef __BASE_HPP__
#define __BASE_HPP__

#ifdef _MSC_VER
#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif
#ifndef _CRT_SECURE_NO_DEPRECATE
#define _CRT_SECURE_NO_DEPRECATE
#endif
#ifndef NOMINMAX
#define NOMINMAX
#endif
#endif

#define ARBITER_NAMESPACE_BEGIN namespace Arbiter {
#define ARBITER_NAMESPACE_END   }

// Renderer namespace
#define D3D12_NAMESPACE_BEGIN 	namespace D3D12 {
#define D3D12_NAMESPACE_END	  	}
#define METAL_NAMESPACE_BEGIN 	namespace Metal {
#define METAL_NAMESPACE_END	  	}
#define OPENGL_NAMESPACE_BEGIN 	namespace Opengl {
#define OPENGL_NAMESPACE_END	 	}

#include <Arbiter/Core/Common/StandardHeaders.hpp>
#include <Arbiter/Core/Common/Type.hpp>

#endif  // __BASE_HPP__
