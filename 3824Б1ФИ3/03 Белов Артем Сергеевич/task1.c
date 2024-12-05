// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN
unsigned int product_of_two_numbers(unsigned int a, unsigned int b)
{
  if (a * b >= UINT_MAX)
  {
    return UINT_MAX;
  }
  else
  {
    return a * b;
  }
}
