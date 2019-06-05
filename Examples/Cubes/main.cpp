#include <iostream>
#include <memory>
#include <GL/glew.h>
#define SDL_MAIN_HANDLED
#include <Arbiter/Framework/Framework.hpp>
#include <Arbiter/Framework/Application.hpp>
#include <Arbiter/Graphics/Renderer.hpp>
#include "cubes.hpp"

#define WINDOW_WIDTH 640
#define WINDOW_HEIGHT 480

int main(int argc, char const *argv[])
{
	std::unique_ptr<Arbiter::Application> app = 
		Cubes::CreateApplication(Cubes::CreateScene(), Cubes::CreateCamera());
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