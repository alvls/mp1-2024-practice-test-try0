// Задача 2. Найти произведение натуральных чисел a и b
// Если a * b >= UINT_MAX, возвращать UINT_MAX
#include <limits.h>
unsigned int product_of_two_numbers(unsigned int a, unsigned int b)
{ unsigned int ans=a*b;
 if ((ans)>=UINT_MAX) ans=UINT_MAX;
  return ans;
}
