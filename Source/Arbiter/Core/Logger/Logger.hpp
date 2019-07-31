#ifndef __LOGGER_HPP__
#define __LOGGER_HPP__

#include <json.hpp>

namespace Arbiter {

enum class LOG_LEVEL {
    DEBUG,
    INFO,
    WARNING,
    ERROR,
    CRITICAL
};

} // Arbiter

#endif  // __LOGGER_HPP__
