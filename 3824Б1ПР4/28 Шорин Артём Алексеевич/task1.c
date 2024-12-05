// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN

#include <stdio.h>
#include <limits.h>

int sum(int a, int b) {
  if (a > 0 && b > INT_MAX - a) {
    return INT_MAX;
  }
  if (a < 0 && b < INT_MIN - a) {
    return INT_MIN;
  }
  return a + b;
}

int main() {
  printf("Sum of 2147483640 and 10: %d\n", sum(2147483640, 10));
  printf("Sum of 2147483640 and 100: %d\n", sum(2147483640, 100));
  printf("Sum of -2147483640 and -100: %d\n", sum(-2147483640, -100));
  return 0;
}
