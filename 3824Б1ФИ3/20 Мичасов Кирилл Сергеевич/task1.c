// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN
int sum_of_two_numbers(int a, int b)
{
  int res = a + b;
  if (res >= INT_MAX)
    res = INT_MAX;
  else if (res <= INT_MIN)
    res = INT_MIN;
  return res;
}
