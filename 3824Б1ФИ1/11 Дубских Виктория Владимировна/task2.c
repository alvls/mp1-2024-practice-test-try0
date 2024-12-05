// Задача 2. Найти произведение натуральных чисел a и b
// Если a * b >= UINT_MAX, возвращать UINT_MAX

#include <stdio.h>
#include <limits.h> // for  UINT_NAX
unsigned int product_of_two_numbers(unsigned int a, unsigned int b)
{
  // chek a and b > uint_max
if (a > 0 && b > UINT_MAX / a) {
    return UINT_MAX; 
}
return a * b;
}
