// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN
int sum_of_two_numbers(int a, int b)
{
  int sum = a + b;
  int min = 0;
  int max = 0;
  if(a>b) max = a;
  else max = b;
  if(a<b) min = a;
  else min = b;
  if(sum >= max) return max;
  if(sum <= min) return min;
  return 0;
}
