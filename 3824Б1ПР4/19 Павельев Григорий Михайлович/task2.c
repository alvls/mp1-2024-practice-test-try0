// Задача 2. Найти произведение натуральных чисел a и b
// Если a * b >= UINT_MAX, возвращать UINT_MAX
unsigned int product_of_two_numbers(unsigned int a, unsigned int b)
{
  int pr = a * b;
  unsigned int max = 0;
  if(a>b) max = a;
  else max = b;
  if(pr >= max) return max;
  return 0;
}
