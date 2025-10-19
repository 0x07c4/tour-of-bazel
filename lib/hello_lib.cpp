#include "lib/hello_lib.hpp"
#include <fmt/core.h>

std::string GetGreeting(const std::string& name) {
    return fmt::format("Hello, {}!", name);
}
