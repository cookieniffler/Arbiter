#ifndef __OPENGLSETUP_HPP__
#define __OPENGLSETUP_HPP__

#ifndef USE_OPENGL
#define USE_OPENGL 1
#endif

namespace Arbiter {

	bool     OpenglInit(const char* glsl_version = nullptr);
	void     OpenglShutdown();
	void     OpenglNewFrame();
	void     OpenglRenderDrawData(/*ImDrawData* draw_data*/);

} // Arbiter

#endif  // __OPENGLSETUP_HPP__