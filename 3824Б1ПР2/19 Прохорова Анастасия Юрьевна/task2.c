// Задача 2. Найти произведение натуральных чисел a и b
// Если a * b >= UINT_MAX, возвращать UINT_MAX
#include <limits.h>
unsigned int product_of_two_numbers(unsigned int a, unsigned int b)
{
  unsigned long long temp_result = (unsigned long long)a * b;
  if(temp_result >= UINT_MAX){
    return UINT_MAX;
  }
  return (unsigned int)temp_result
}
