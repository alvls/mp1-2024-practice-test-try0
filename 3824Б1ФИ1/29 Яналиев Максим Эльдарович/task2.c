// Задача 2. Найти произведение натуральных чисел a и b
// Если a * b >= UINT_MAX, возвращать UINT_MAX
unsigned int product_of_two_numbers(unsigned int a, unsigned int b)
{
  unsigned long c = (unsigned long)a * (unsigned long)b;
  if (c>=UINT_MAX)
    return UINT_MAX;
  return (unsigned int)c;
}
