
#include <gtest/gtest.h>

TEST(smoke, BasicAssertions)
{
  // is anything on fire?
  EXPECT_STRNE("hello", "world");
  EXPECT_EQ(7 * 6, 42);
}