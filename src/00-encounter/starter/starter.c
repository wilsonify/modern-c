#include "starter.h"

double square(double x)
{
  return x * x;
}

int mainly(void)
{
  // Declarations
  double A[5] = {
      [0] = 9.0,
      [1] = 2.9,
      [4] = 3.E+25,
      [3] = .00007,
  };

  // Doing some work
  for (size_t i = 0; i < 5; ++i)
  {
    printf(
        "element %zu is %g, \tits square is %g\n",
        i,
        A[i],
        square(A[i]));
  }

  return EXIT_SUCCESS;
}
