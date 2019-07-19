#pragma once
#ifndef __STANDARDHEADERS_HPP__
#define __STANDARDHEADERS_HPP__

#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cstdarg>
#include <cmath>

#include <vector>
#include <map>
#include <string>
#include <set>
#include <list>
#include <deque>
#include <queue>
#include <bitset>
#include <unordered_map>
#include <unordered_set>

#include <algorithm>
#include <functional>
#include <limits>

#include <fstream>
#include <iosfwd>
#include <sstream>

#include <atomic>
#include <memory>

extern "C" {
	#include <sys/types.h>
	#include <sys/stat.h>
}

#include <Arbiter/Core/Common/Platform.hpp>
#include <Arbiter/Core/Common/Type.hpp>

#if ARBITER_PLATFORM == ARBITER_PLATFORM_WINDOWS
#  undef min
#  undef max
#  if defined( __MINGW32__ )
#    include <unistd.h>
#  endif
#endif

#if ARBITER_PLATFORM == ARBITER_PLATFORM_LINUX || ARBITER_PLATFORM == ARBITER_PLATFORM_ANDROID || ARBITER_PLATFORM == ARBITER_PLATFORM_EMSCRIPTEN
extern "C" {
	#include <unistd.h>
	#include <dlfcn.h>
}
#endif

#if ARBITER_PLATFORM == ARBITER_PLATFORM_APPLE || ARBITER_PLATFORM == ARBITER_PLATFORM_APPLE_IOS
extern "C" {
	#include <unistd.h>
	#include <sys/param.h>
	#include <CoreFoundation/CoreFoundation.h>
}
#endif

#if ARBITER_PLATFORM == ARBITER_PLATFORM_EMSCRIPTEN
	#include <emscripten/emscripten.h>
#endif

#endif  // __STANDARDHEADERS_HPP__
