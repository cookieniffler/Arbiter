#ifndef __PLATFORM_HPP__
#define __PLATFORM_HPP__

#ifndef ARBITER_VERSION
#define ARBITER_VERSION "1.0.0"

#if defined(_WIN64)
#define ARBITER_PLATFORM_WINDOWS
#endif

#if defined(__linux__)
#define ARBITER_PLATFORM_LINUX
#endif

#if defined(__APPLE__)
#define ARBITER_PLATFORM_OSX
#endif

#if defined(_MSC_VER)
#define ARBITER_COMPILER_MSVC
#endif

#if defined(__MINGW64__)
#define ARBITER_COMPILER_MINGW
#endif

#if defined(__GNUC__)
#define ARBITER_COMPILER__GCC
#endif

#if defined(__clang__)
#define ARBITER_COMPILER_CLANG
#endif

#if defined(ARBITER_COMPILER_MSVC)
#define ARBITER_ALIGNED(x) __declspec(align(x))
#else
#define ARBITER_ALIGNED(x) __attribute__((aligned(x)))
#endif

#if __cplusplus >= 201703L
#define ARBITER_CPP17
#else
#if defined(ARBITER_COMPILER_CLANG)
static_assert(false, "For clang compilers, use -std=c++17");
#endif
static_assert(__cplusplus >= 201402L, "C++14 required.");
#define ARBITER_CPP14
#endif

#ifdef NDEBUG
#undef NDEBUG
#endif

#ifdef _WIN64
#define __FILENAME__ \
  (strrchr(__FILE__, '\\') ? strrchr(__FILE__, '\\') + 1 : __FILE__)
#pragma warning(push)
#pragma warning(disable : 4005)
#include <windows.h>
#pragma warning(pop)
#include <intrin.h>
#define ARBITER_EXPORT __declspec(dllexport)
#else
#define __FILENAME__ \
  (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)
#define ARBITER_EXPORT
#endif

#ifdef _WIN64
#define TC_FORCE_INLINE __forceinline
#else
#define TC_FORCE_INLINE inline __attribute__((always_inline))
#endif

#endif  // __PLATFORM_HPP__
