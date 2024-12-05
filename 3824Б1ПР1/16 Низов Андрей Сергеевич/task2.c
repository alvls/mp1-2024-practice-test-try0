// Задача 2. Найти произведение натуральных чисел a и b
// Если a * b >= UINT_MAX, возвращать UINT_MAX
#include <limits>
#include<stdio.h>
unsigned int product_of_two_numbers(unsigned int a, unsigned int b) {
  if (a*b > UINT_MAX) {
    return UINT_MAX;
  }
  return a * b;
}
