
#include <gtest/gtest.h>
#include "starter_expo.h"

TEST(smoke, BasicAssertions)
{
  // is anything on fire?
  EXPECT_STRNE("hello", "world");
  EXPECT_EQ(7 * 6, 42);
}

TEST(smoke, square)
{
  double result;
  result = square(7.0);
  EXPECT_EQ(result, 49.0);
}

TEST(smoke, runTheMain)
{
  double result;
  result = mainly();
  EXPECT_EQ(result, 0);
}

TEST(smoke, read_a_number)
{
  double input = 7.0;
  read_number(input);
}

TEST(smoke, is_four)
{
  double input = 7.0;
  bool result;
  result = is4(input);
  EXPECT_EQ(result, false);
}
TEST(smoke, is_five)
{
  double input = 5.0;
  bool result;
  result = is5(input);
  EXPECT_EQ(result, true);
}
