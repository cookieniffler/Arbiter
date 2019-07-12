#ifndef __SMOKESIMULATOR_HPP__
#define __SMOKESIMULATOR_HPP__

#include <Arbiter/Core/Framework/Scene.hpp>
#include <Arbiter/Core/Framework/Application.hpp>
#include <Arbiter/Graphics/Engine/Camera.hpp>
#include <Arbiter/Graphics/Engine/RaytracerRenderer.hpp>
#include <Arbiter/Graphics/API/Opengl/GraphicsApi.hpp>

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