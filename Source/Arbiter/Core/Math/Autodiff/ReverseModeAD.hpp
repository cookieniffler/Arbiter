#pragma once
#ifndef __REVERSEMODEAD_HPP__
#define __REVERSEMODEAD_HPP__

#include <Arbiter/Core/Common/Base.hpp>
#include <Arbiter/Core/Math/AutomaticDifferentiation.hpp>

ARBITER_NAMESPACE_BEGIN

class ReverseModeAD : public AutomaticDifferentiation {
private:
	/* data */

public:
	ReverseModeAD (arguments);
	virtual ~ReverseModeAD ();
};

ARBITER_NAMESPACE_END

#endif  __REVERSEMODEAD_HPP__
