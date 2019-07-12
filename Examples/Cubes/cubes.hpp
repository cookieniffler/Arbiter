#ifndef __CUBES_HPP__
#define __CUBES_HPP__

#include <Arbiter/Core/Framework/Scene.hpp>
#include <Arbiter/Core/Framework/Application.hpp>
#include <Arbiter/Graphics/Engine/Camera.hpp>
#include <Arbiter/Graphics/Engine/ForwardRenderer.hpp>
#include <Arbiter/Graphics/Engine/DeferredRenderer.hpp>

class Cubes : public Arbiter::Application {
private:
	virtual void SetupScene() {}
	virtual void SetupCamera() {}

protected:

public:
	Cubes(std::shared_ptr<Arbiter::Scene> scene, std::shared_ptr<Arbiter::Camera> camera) {}
	static std::unique_ptr<Arbiter::Application> CreateApplication(std::shared_ptr<Arbiter::Scene> scene,
		std::shared_ptr<Arbiter::Camera> camera) { return std::make_unique<Arbiter::Application>(scene, camera); }
	std::unique_ptr<Arbiter::Renderer> CreateRenderer() { return std::make_unique<Arbiter::DeferredRenderer>(); }
};

#endif // __CUBES_HPP__
