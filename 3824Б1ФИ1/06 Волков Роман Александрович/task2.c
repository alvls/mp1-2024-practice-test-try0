// Задача 2. Найти произведение натуральных чисел a и b
// Если a * b >= UINT_MAX, возвращать UINT_MAX
#include <limits.h>

unsigned int product_of_two_numbers(unsigned int a, unsigned int b)
{
  long long unsigned int res = (long long unsigned int)(a) * (long long unsigned int)(b);
  if (res >= UINT_MAX)
    return UINT_MAX;
  return a * b;
}
