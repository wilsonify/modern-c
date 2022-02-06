
#include <stdlib.h>
#include <gtest/gtest.h>
#include "cognition_expo.h"

TEST(smoke, BasicAssertions)
{
  // is anything on fire?
  EXPECT_STRNE("hello", "world");
  EXPECT_EQ(7 * 6, 42);
}

TEST(smoke, circular_fput)
{
  size_t len = 10;
  fprintf(stderr, "starting with %zu elements in total\n", len);
  circular *c = circular_new(len);
  circular_fput(c, stderr);
  for (size_t i = 0; i < len - 1; ++i)
  {
    if (!circular_append(c, i))
      break;
  }
  circular_fput(c, stderr);
  for (size_t i = 0; i < len / 2; ++i)
  {
    if (!circular_append(c, circular_pop(c)))
      break;
  }
  circular_fput(c, stderr);
  circular_resize(c, 2 * len);
  circular_fput(c, stderr);
  circular_resize(c, len);
  circular_fput(c, stderr);
  circular_delete(c);
}