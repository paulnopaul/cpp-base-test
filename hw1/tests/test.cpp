#include <gtest/gtest.h>

#include "allocator.h"

TEST(MyClassTest, SayHello) {
  EXPECT_EQ(allocate(1), 1);
}
