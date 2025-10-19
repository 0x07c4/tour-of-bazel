#include "lib/hello_lib.hpp"
#include <gtest/gtest.h>

TEST(HelloLibTest, BasicGreeting) {
  std::string s = GetGreeting("Bazel");
  EXPECT_EQ(s, "Hello, Bazel!");
}
