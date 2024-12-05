#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN
int sum_of_two_numbers(int a, int b){
  int sum = a + b;

  if ((a >= INT_MAX - b && b > 0)) {
      return INT_MAX;
  }

  if (a <= INT_MIN - b && b < 0) {
      return INT_MIN;
  }
  return sum;
}
