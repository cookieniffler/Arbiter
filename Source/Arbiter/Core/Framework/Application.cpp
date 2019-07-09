#include "Application.hpp"

namespace Arbiter {

Application::Application() {}
Application::Application(std::shared_ptr<Scene> scene, std::shared_ptr<Camera> camera) {}
void Application::Initialize() {}
std::unique_ptr<Application> Application::CreateApplication(std::shared_ptr<Scene> scene,
	std::shared_ptr<Camera> camera) { return std::unique_ptr<Application>(); }
std::shared_ptr<Scene> Application::CreateScene() { return std::shared_ptr<Scene>(); }
std::shared_ptr<Camera> Application::CreateCamera() { return std::shared_ptr<Camera>(); }
std::unique_ptr<Renderer> Application::CreateRenderer() { return std::unique_ptr<Renderer>(); }
bool Application::IsFinished() const { return true; }
void Application::RequestExit() {}
void Application::Tick(double deltaTime) {}
void Application::SetupScene() {}
void Application::SetupCamera() {}

} // Arbiter