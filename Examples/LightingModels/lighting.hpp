#ifndef __LIGHTING_HPP__
#define __LIGHTING_HPP__

#include <Arbiter/Core/Arbiter.hpp>
#include <Arbiter/Framework/Scene.hpp>
#include <Arbiter/Graphics/Engine/Camera.hpp>
#include <Arbiter/Framework/Application.hpp>
#include <Arbiter/Graphics/Engine/ForwardRenderer.hpp>
#include <Arbiter/Graphics/Engine/DeferredRenderer.hpp>

class Lighting : public Arbiter::Application {
private:
	virtual void SetupScene() {}
	virtual void SetupCamera() {}

protected:

public:
	Lighting(std::shared_ptr<Arbiter::Scene> scene, std::shared_ptr<Arbiter::Camera> camera) {}
	static std::unique_ptr<Arbiter::Application> CreateApplication(std::shared_ptr<Arbiter::Scene> scene,
		std::shared_ptr<Arbiter::Camera> camera) { return std::unique_ptr<Arbiter::Application>(); }

};

#endif // __LIGHTING_HPP__