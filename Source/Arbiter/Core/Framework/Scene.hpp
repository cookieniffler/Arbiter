#pragma once
#ifndef __SCENE_HPP__
#define __SCENE_HPP__

#include <Arbiter/Core/Common/Base.hpp>
#include <Arbiter/Core/Common/StdHeaders.hpp>
#include <Arbiter/Core/Framework/SceneBuffer.hpp>
#include <Arbiter/Graphics/Engine/Light.hpp>

ARBITER_NAMESPACE_BEGIN

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

ARBITER_NAMESPACE_END

#endif  // __SCENE_HPP__
