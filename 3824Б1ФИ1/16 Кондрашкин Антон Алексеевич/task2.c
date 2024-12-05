// Задача 2. Найти произведение натуральных чисел a и b
// Если a * b >= UINT_MAX, возвращать UINT_MAX
unsigned int product_of_two_numbers(unsigned int a, unsigned int b) {
  if (b != 0 && a > UINT_MAX / b) {
        return UINT_MAX;
  else 
    return a * b;
}
