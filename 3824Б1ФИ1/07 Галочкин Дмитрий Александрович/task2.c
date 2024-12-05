// Задача 2. Найти произведение натуральных чисел a и b
// Если a * b >= UINT_MAX, возвращать UINT_MAX
#include <limits.h>
unsigned int product_of_two_numbers(unsigned int a, unsigned int b)
{
  unsigned long long int mul = (unsigned long long int) a * (unsigned long long int) b;
  if (mul >= UINT_MAX)
    return UINT_MAX;
  return (unsigned int) mul;
}
