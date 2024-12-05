// Задача 2. Найти произведение натуральных чисел a и b
// Если a * b >= UINT_MAX, возвращать UINT_MAX
unsigned int product_of_two_numbers(unsigned int a, unsigned int b)
{
  unsigned long long product = (unsigned long long)a  b;
  return product >= UINT_MAX ? UINT_MAX : (unsigned int)product;
}
