#include <GL/glew.h>
#define SDL_MAIN_HANDLED
#include <Arbiter/Framework/Framework.hpp>
#include <Arbiter/Core/Logger/Logger.hpp>
#include <iostream>
#include <stdio.h>
#include "smoke_simulator.hpp"

#define WINDOW_WIDTH 640
#define WINDOW_HEIGHT 480

int main(int argc, char const *argv[])
{
	SmokeSimulator sims(std::shared_ptr<Arbiter::Scene>(), std::shared_ptr<Arbiter::Camera>());
	std::cout << "[+] Smoke Simulator!" << std::endl;
	for(;;) {}
}