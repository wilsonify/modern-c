
#include <gtest/gtest.h>
#include "acquaintance_expo.h"

TEST(smoke, BasicAssertions)
{
  // is anything on fire?
  EXPECT_STRNE("hello", "world");
  EXPECT_EQ(7 * 6, 42);
}

TEST(fibonnaci, fib1)
{
  size_t result;
  result = fib(10);
  EXPECT_EQ(result, 55);
}

TEST(fibonnaci, fib2)
{
  size_t result;
  result = fib2(10);
  EXPECT_EQ(result, 55);
}

TEST(fibonnaci, fib3)
{
  size_t result;
  result = fib3(10);
  EXPECT_EQ(result, 55);
}

TEST(fibonnaci, fib4)
{
  size_t result;
  result = fib4(10);
  EXPECT_EQ(result, 55);
}

TEST(euclid, gcd)
{
  size_t result;
  result = gcd(42, 56);
  EXPECT_EQ(result, 14);
}

TEST(euclid, gcd2)
{
  size_t result;
  result = gcd2(42, 56);
  EXPECT_EQ(result, 14);
}

TEST(euclid, gcd_large)
{
  size_t result;
  result = gcd(24826148, 45296490);
  EXPECT_EQ(result, 526);
}

TEST(euclid, gcd2_large)
{
  size_t result;
  result = gcd2(24826148, 45296490);
  EXPECT_EQ(result, 526);
}