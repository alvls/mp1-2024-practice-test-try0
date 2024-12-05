// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN
int sum_of_two_numbers(int a, int b)
{
  if (a + b >= INT_MAX)
  {
    return INT_MAX;
  }
  elif (a + b <= INT_MIN)
  {
    return INT_MIN;
  }
  else
  {
    return a + b;
  }
}
