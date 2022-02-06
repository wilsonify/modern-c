
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

extern "C" size_t fib(size_t n);

extern "C" void fib2rec(size_t n, size_t buf[2]);

extern "C" size_t fib2(size_t n);

extern "C" void fib3rec(size_t n, size_t buf[2]);

extern "C" size_t fib3(size_t n);

extern "C" void fib4rec(size_t n, size_t buf[2]);

extern "C" size_t fib4(size_t n);

extern "C" void fib5rec(size_t n, size_t buf[2]);

extern "C" size_t fib5(size_t n);

extern "C" size_t fib6(size_t n);

extern "C" size_t gcd2(size_t a, size_t b);

extern "C" size_t gcd(size_t a, size_t b);