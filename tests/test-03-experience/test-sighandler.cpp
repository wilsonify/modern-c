
#include <gtest/gtest.h>
//#include "experience_expo.h"

TEST(smoke, BasicAssertions)
{
  // is anything on fire?
  EXPECT_STRNE("hello", "world");
  EXPECT_EQ(7 * 6, 42);
}

TEST(smoke, BasicAssertions2)
{
  EXPECT_EQ(7 * 6, 42);
  /*
  atexit(signal_atexit);
  at_quick_exit(signal_at_quick_exit);
  for (unsigned i = 1; i < SIGNALS; ++i)
    sh_enable(i, signal_handler);
  SH_PRINT(stderr, SIGNALS-1, "highest known signal number");

  size_t const Gi = (1ull<<30);
  for(size_t step = 0; step < 10*Gi; ++step) {
    if (!(step%Gi)) printf("step %zu\n", step);
    switch (received) {
    case SIGINT:
      fprintf(stderr, "\ryou called?\n");
      received = 0;
    case 0:
      continue;
    }
    SH_PRINT(stderr, received, "is somebody trying to kill us?");
    raise(received);
    break;
  }
  SH_PRINT(stderr, received, "we survived");
  return EXIT_SUCCESS;
  */
}
