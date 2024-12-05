// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN
#include <stdio.h>
#include <limits.h>

int sum_of_two_numbers(int a, int b)
{
  long sum = (long)a + long(b);
  printf(" % ld\n", (long)a+(long)b);
  if (sum >= INT_MAX)
    return INT_MAX;
  else
  {
    if (sum >= INT_MIN&&(a<0||b<0))
      return INT_MIN;
    else
      return(a + b);
  }
}
