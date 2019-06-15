#ifndef __APPLICATION_HPP__
#define __APPLICATION_HPP__

#include <memory>
#include <Arbiter/Framework/Scene.hpp>
#include <Arbiter/Graphics/Engine/Renderer.hpp>
#include <Arbiter/Graphics/Engine/Camera.hpp>

namespace Arbiter {

class Application {
private:
	virtual void SetupScene();
	virtual void SetupCamera();

protected:
	bool is_running;
	std::shared_ptr<class Scene> scene;
	std::shared_ptr<class Camera> camera;

public:
    Application();
    virtual ~Application() = default;
    
	virtual void Initialize();
	static std::unique_ptr<Application> CreateApplication(std::shared_ptr<Scene> scene, 
		std::shared_ptr<Camera> camera);
	static std::shared_ptr<Scene> CreateScene();
	static std::shared_ptr<Camera> CreateCamera();
	virtual std::unique_ptr<Renderer> CreateRenderer();
	virtual bool IsFinished() const;
	virtual void RequestExit();
	virtual void Tick(double deltaTime);

};

} // Arbiter

#endif  // __APPLICATION_HPP__