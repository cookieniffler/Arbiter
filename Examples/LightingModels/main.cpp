#include <iostream>
#include <memory>
#include <GL/glew.h>
#define SDL_MAIN_HANDLED
#include <SDL.h>
#include <Arbiter/Core/Framework/Application.hpp>
#include <Arbiter/Graphics/Engine/Renderer.hpp>
#include "lighting.hpp"

#define WINDOW_WIDTH 640
#define WINDOW_HEIGHT 480

int main(int argc, char const *argv[])
{
	std::unique_ptr<Arbiter::Application> app = 
		Lighting::CreateApplication(Lighting::CreateScene(), Lighting::CreateCamera());
	if (!app) {
		std::cerr << "ERROR: Created application is not valid." << std::endl;
		return 1;
	}

	std::unique_ptr<Arbiter::Renderer> renderer = app->CreateRenderer();
	if (!renderer) {
		std::cerr << "ERROR: Created renderer is not valid." << std::endl;
		return 1;
	}


	return 0;
}