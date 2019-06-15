#ifndef __LIGHT_HPP__
#define __LIGHT_HPP__

#include <memory>

namespace Arbiter {

class Light : std::enable_shared_from_this<Light> {
private:

public:
	Light();
	virtual ~Light() = default;

};

}

#endif // __LIGHT_HPP__
