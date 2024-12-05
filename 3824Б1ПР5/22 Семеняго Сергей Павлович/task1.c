// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN
#include <limits.h>
int sum_of_two_numbers(int a, int b)
{ int ans=a+b;
 if ((ans)>=INT_MAX) ans=INT_MAX;
 else if ((ans)<=INT_MIN) ans=INT_MIN;
  return ans;
}
