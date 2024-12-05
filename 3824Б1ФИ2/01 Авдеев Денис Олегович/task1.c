// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN
#include <limits.h>
int sum_of_two_numbers(int a, int b)
{
  int c = a+b;
  if (INT_MAX - c >= 0){
    return INT_MAX;
  }
  else if (INT_MIN - c <= 0){
    return INT_MIN;
  }
  else {
    return c;
  }
}
