#include <GL/glew.h>
#define SDL_MAIN_HANDLED
#include <Arbiter/Core/Framework/ApplicationContextSDL.hpp>
#include <Arbiter/Core/Logger/Logger.hpp>
#include <stdio.h>

#define WINDOW_WIDTH 640
#define WINDOW_HEIGHT 480

int main(int argc, char const *argv[])
{
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        fprintf(stderr, "Failed to initialize SDL video\n");
        return 0;
    }
	SDL_Window* m_window = SDL_CreateWindow(
		"NodeEditor",
		SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED,
		WINDOW_WIDTH, WINDOW_HEIGHT,
		SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE);
	if (m_window == NULL) {
		fprintf(stderr, "Failed to create main window\n");
		SDL_Quit();
		return 0;
	}

	SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 4);
	SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 5);
	SDL_GL_SetAttribute(
		SDL_GL_CONTEXT_PROFILE_MASK,
		SDL_GL_CONTEXT_PROFILE_CORE);
	SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
	SDL_GL_SetAttribute(SDL_GL_RED_SIZE, 5);
	SDL_GL_SetAttribute(SDL_GL_GREEN_SIZE, 5);
	SDL_GL_SetAttribute(SDL_GL_BLUE_SIZE, 5);
	SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 16);

	SDL_GLContext m_context = SDL_GL_CreateContext(m_window);
	if (m_context == NULL) {
		fprintf(stderr, "Failed to create GL context\n");
		SDL_DestroyWindow(m_window);
		SDL_Quit();
		return 1;
	}

	glewExperimental = GL_TRUE;
	glewInit();
	const GLubyte *gl_renderer = glGetString(GL_RENDERER);
	const GLubyte *gl_version = glGetString(GL_VERSION);
	printf("Renderer: %s\n", gl_renderer);
	printf("OpenGL version supported %s\n", gl_version);

	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LESS);
	glEnableClientState(GL_VERTEX_ARRAY);
	glDisableClientState(GL_COLOR_ARRAY);

	bool done = false;
	while (!done) {
        SDL_Event event;
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT)
                done = true;
            if (event.type == SDL_WINDOWEVENT && event.window.event == SDL_WINDOWEVENT_CLOSE && event.window.windowID == SDL_GetWindowID(m_window))
                done = true;
            if (event.type == SDL_KEYDOWN && event.key.keysym.sym == SDLK_ESCAPE)
                done = true;
        }

        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        glClearColor(0.95f, 0.95f, 0.95f, 1.0f);
        SDL_GL_SwapWindow(m_window);
	}

	return 0;
}
