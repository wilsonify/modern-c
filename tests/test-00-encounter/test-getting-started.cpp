
#include <gtest/gtest.h>
//#include "starter_expo.h"

TEST(smoke, BasicAssertions)
{
  // is anything on fire?
  EXPECT_STRNE("hello", "world");
  EXPECT_EQ(7 * 6, 42);
}

TEST(smoke, runTheMain)
{
  double result;
  result = 7.0*7.0;
  EXPECT_EQ(result, 49.0);
}
