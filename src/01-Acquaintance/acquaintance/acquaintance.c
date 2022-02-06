#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

size_t fib(size_t n)
{
    if (n < 3)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}

void fib2rec(size_t n, size_t buf[2])
{
    if (n > 2)
    {
        size_t res = buf[0] + buf[1];
        buf[1] = buf[0];
        buf[0] = res;
        fib2rec(n - 1, buf);
    }
}

size_t fib2(size_t n)
{
    size_t res[2] = {
        1,
        1,
    };
    fib2rec(n, res);
    return res[0];
}

void fib3rec(size_t n, size_t buf[2])
{
    if (n)
    {
        size_t res = buf[0] + buf[1];
        buf[1] = buf[0];
        buf[0] = res;
        fib3rec(n - 1, buf);
    }
}

size_t fib3(size_t n)
{
    size_t res[2] = {
        1,
        1,
    };
    if (n > 2)
        fib3rec(n - 2, res);
    return res[0];
}

void fib4rec(size_t n, size_t buf[2])
{
    if (n)
    {
        buf[n % 2] += buf[!(n % 2)];
        fib4rec(n - 1, buf);
    }
}

size_t fib4(size_t n)
{
    /**
     ** Rewrite the recursive Fibonacci such that it alternates the use of
     ** the buffers.
     **/
    size_t res[2] = {
        1,
        1,
    };
    if (n > 2)
        fib4rec(n - 2, res);
    return res[1];
}

void fib5rec(size_t n, size_t buf[2])
{
    if (n > 1)
    {
        buf[0] += buf[1];
        buf[1] += buf[0];
        fib5rec(n - 2, buf);
    }
}

size_t fib5(size_t n)
{
    /**
     ** Rewrite the recursive Fibonacci such that it unrolls two
     ** successive recursive calls.
     **/
    size_t res[2] = {
        1,
        1,
    };
    if (n > 2)
        fib5rec(n - 1, res);
    return res[!(n % 2)];
}

size_t fib6(size_t n)
{
    /**
    ** Rewrite Fibonacci iteratively such that is proceeds in pairs of
    ** values and hopefully doesn't spill any of the variables to memory.
    **/
    register size_t x1 = 1;             // F(x1)   for x1 = (n+1)%2 + 1
    register size_t x2 = n % 2 ? 1 : 2; // F(x1+1)
    for (register size_t i = (n - 1) / 2; i; --i)
    {
        x1 += x2;
        x2 += x1;
    }
    return x1; // F(y) with y = x1 + 2*((n-1)/2)
               //             = x1 + ((n-1)-((n+1)%2))
               //             = ((n+1)%2 + 1)+((n-1)-((n+1)%2))
               //             = n
}


size_t gcd2(size_t a, size_t b) {
  assert(a <= b);                 /*@\label{gcd2-precondition}*/
  if (!a) return b;               /*@\label{gcd2-bottom}*/
  size_t rem = b % a;             /*@\label{gcd2-remainder}*/
  return gcd2(rem, a);            /*@\label{gcd2-recurse}*/
}

size_t gcd(size_t a, size_t b) {
  assert(a);
  assert(b);
  if (a < b)
    return gcd2(a, b);
  else
    return gcd2(b, a);
}