// Задача 2. Найти произведение натуральных чисел a и b
// Если a * b >= UINT_MAX, возвращать UINT_MAX
#include <limits.h>
unsigned int product_of_two_numbers(unsigned int a, unsigned int b)
{
  unsigned int c = a * b;
  if (UINT_MAX - c <= 0) {
    return UINT_MAX;
  } else {
    return c;
  }
  return 0;
}
