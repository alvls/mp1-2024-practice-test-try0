// Задача 2. Найти произведение натуральных чисел a и b
// Если a * b >= UINT_MAX, возвращать UINT_MAX
#include <stdlib.h>
#include <stdio.h>
unsigned int product_of_two_numbers(unsigned int a, unsigned int b)
{ 
  if ((a >= UINT_MAX/b) && b != 0  || (b >= (UINT_MAX/a) && a != 0) )
    return UINT_MAX;
  return a*b;
}
