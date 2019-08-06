#pragma once
#ifndef __SDL2SETUP_HPP__
#define __SDL2SETUP_HPP__

#include <SDL.h>
#include <Arbiter/Core/Common/Base.hpp>

ARBITER_NAMESPACE_BEGIN

struct SDL_Window;
typedef union SDL_Event SDL_Event;

class ApplicationContextSDL {
private:
protected:
public:
    static bool InitOpenGL(SDL_Window* window, void* sdl_gl_context);
    static bool InitVulkan(SDL_Window* window);
    static void Shutdown();
    static void NewFrame(SDL_Window* window);
    static bool ProcessEvent(const SDL_Event* event);

};

ARBITER_NAMESPACE_END

#endif  // __APPLICATIONCONTEXTSDL_HPP__
