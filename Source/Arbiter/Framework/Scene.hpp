#ifndef __SCENE_HPP__
#define __SCENE_HPP__

#include <memory>
#include <vector>
#include <Arbiter/Framework/SceneBuffer.hpp>
#include <Arbiter/Graphics/Light.hpp>

namespace Arbiter {

class Scene : public std::enable_shared_from_this<Scene> {
private:
	std::vector< std::shared_ptr<SceneBuffer> > scene_objects;
	std::vector< std::shared_ptr<Light> > scene_lights;

public:
    Scene();
    virtual ~Scene() = default;
    
	size_t GetObjectsCount() const;
	size_t GetLightsCount() const;
	template<typename T, typename std::enable_if<std::is_integral<T>::value>::type* = nullptr>
		const SceneBuffer& GetSceneBuffer(T index) const;
	template<typename T, typename std::enable_if<std::is_integral<T>::value>::type* = nullptr>
		const Light* GetLightObject(T index) const;
	void AddSceneBuffer(std::shared_ptr<SceneBuffer> object);
	void AddLight(std::shared_ptr<Light> light);
	void ClearScene();
      
};

} // Arbiter

#endif  // __SCENE_HPP__