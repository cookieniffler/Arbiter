#include "SDLSetup.hpp"

namespace Arbiter {

bool InitOpenGL(SDL_Window* window, void* sdl_gl_context) { return true; }
bool InitVulkan(SDL_Window* window) { return true; }
void Shutdown() {}
void NewFrame(SDL_Window* window) {}
bool ProcessEvent(const SDL_Event* event) { return true; }

} // Arbiter