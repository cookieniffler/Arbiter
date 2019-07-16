#pragma once
#ifndef __APPLICATION_HPP__
#define __APPLICATION_HPP__

#include <Arbiter/Core/Common/Base.hpp>
#include <Arbiter/Core/Common/Singleton.hpp>
#include <Arbiter/Core/Framework/Scene.hpp>
#include <Arbiter/Core/Framework/RenderEngine.hpp>

ARBITER_NAMESPACE_BEGIN

class Application : public Singleton<Application> {
private:
protected:
public:
	Application();
	virtual ~Application() = default;

};

ARBITER_NAMESPACE_END

#endif  // __APPLICATION_HPP__
