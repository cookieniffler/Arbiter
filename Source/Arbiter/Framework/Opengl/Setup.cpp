#include "Setup.hpp"

namespace Arbiter {

bool OpenglInit(const char* glsl_version) { return true; }
void OpenglShutdown() {}
void OpenglNewFrame() {}
void OpenglRenderDrawData(/*ImDrawData* draw_data*/) {}

} // Arbiter