#include "ApplicationContextSDL.hpp"

namespace Arbiter {

bool ApplicationContextSDL::InitOpenGL(SDL_Window* window, void* sdl_gl_context) { return true; }
bool ApplicationContextSDL::InitVulkan(SDL_Window* window) { return true; }
void ApplicationContextSDL::Shutdown() { return; }
void ApplicationContextSDL::NewFrame(SDL_Window* window) { return; }
bool ApplicationContextSDL::ProcessEvent(const SDL_Event* event) { return true; }

} // Arbiter
