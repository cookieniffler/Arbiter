#pragma once
#ifndef __FORWARDMODEAD_HPP__
#define __FORWARDMODEAD_HPP__

#include <Arbiter/Core/Common/Base.h>
#include <Arbiter/Core/Math/AutomaticDifferentiation.hpp>

class ForwardModeAD : public AutomaticDifferentiation {
private:
protected:
public:
    ForwardModeAD();
    virtual ~ForwardModeAD() = default;

};

#endif  __FORWARDMODEAD_HPP__
