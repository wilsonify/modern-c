#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

size_t fib(size_t n);

void fib2rec(size_t n, size_t buf[2]);

size_t fib2(size_t n);

void fib3rec(size_t n, size_t buf[2]);

size_t fib3(size_t n);

void fib4rec(size_t n, size_t buf[2]);

size_t fib4(size_t n);

void fib5rec(size_t n, size_t buf[2]);

size_t fib5(size_t n);

size_t fib6(size_t n);

size_t gcd2(size_t a, size_t b);

size_t gcd(size_t a, size_t b);