// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN
#include <limits.h> 
#include <stdio.h>
int sum_of_two_numbers(int a, int b)
{
  long long s = long long(a) + long long(b);
  if (s>=INT_MAX) return INT_MAX;
  if else (s <= INT_MIN) return INT_MIN;
  return 0;
}
