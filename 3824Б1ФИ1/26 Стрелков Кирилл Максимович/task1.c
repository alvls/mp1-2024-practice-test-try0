// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN
int sum_of_two_numbers(int a, int b)
{
  if ((INT_MAX - a <= b) && (a >= 0))  return INT_MAX;
  if ((INT_MIN + a >= b) && (a >= 0)) return INT_MIN;
  if ((INT_MAX + a <= b) && (a < 0))  return INT_MAX;
  if ((INT_MIN - a >= b) && (a < 0)) return INT_MIN;
  return (a+b);
}
