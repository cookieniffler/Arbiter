#ifndef __SMOKESIMULATOR_HPP__
#define __SMOKESIMULATOR_HPP__

#include <Arbiter/Core/Arbiter.hpp>
#include <Arbiter/Framework/Scene.hpp>
#include <Arbiter/Graphics/Camera.hpp>
#include <Arbiter/Framework/Application.hpp>
#include <Arbiter/Graphics/RaytracerRenderer.hpp>

class SmokeSimulator : public Arbiter::Application {
private:
	virtual void SetupScene() {}
	virtual void SetupCamera() {}

protected:

public:
	SmokeSimulator(std::shared_ptr<Arbiter::Scene> scene, std::shared_ptr<Arbiter::Camera> camera) {}
	static std::unique_ptr<Arbiter::Application> CreateApplication(std::shared_ptr<Arbiter::Scene> scene,
		std::shared_ptr<Arbiter::Camera> camera) {}
	
};

#endif  // __SMOKESIMULATOR_HPP__ 