#ifndef __SDL2SETUP_HPP__
#define __SDL2SETUP_HPP__

#include <Arbiter/Core/Arbiter.hpp>
#include <SDL.h>

namespace Arbiter {

struct SDL_Window;
typedef union SDL_Event SDL_Event;

bool InitOpenGL(SDL_Window* window, void* sdl_gl_context);
bool InitVulkan(SDL_Window* window);
void Shutdown();
void NewFrame(SDL_Window* window);
bool ProcessEvent(const SDL_Event* event);

} // Arbiter

#endif  // __SDL2SETUP_HPP__