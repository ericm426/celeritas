#include "placeholder.hpp"
#include <gtest/gtest.h>
#include <string> 

TEST(Placeholder, simpletest) {
    EXPECT_EQ(placeholder(), "Version: 0.1.0");
}