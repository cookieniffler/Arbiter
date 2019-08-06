#include <Arbiter/Core/Common/Base.hpp>
#include <Arbiter/Core/Framework/Scene.hpp>

ARBITER_NAMESPACE_BEGIN

Scene::Scene() {}
size_t Scene::GetObjectsCount() const { return scene_objects.size(); }
size_t Scene::GetLightsCount() const { return scene_lights.size(); }
template<typename T, typename std::enable_if<std::is_integral<T>::value>::type*>
    const SceneBuffer& Scene::GetSceneBuffer(T index) const {}
template<typename T, typename std::enable_if<std::is_integral<T>::value>::type*>
    const Light* Scene::GetLightObject(T index) const {}
void Scene::AddSceneBuffer(std::shared_ptr<SceneBuffer> object) {}
void Scene::AddLight(std::shared_ptr<Light> light) {}
void Scene::ClearScene() {}

ARBITER_NAMESPACE_END
