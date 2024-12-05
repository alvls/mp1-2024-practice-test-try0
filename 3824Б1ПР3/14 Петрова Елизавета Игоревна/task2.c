// Задача 2. Найти произведение натуральных чисел a и b
// Если a * b >= UINT_MAX, возвращать UINT_MAX
// Задача 3. Найти максимум из вешественных чисел a и b
#include <limits.h>
#include <math.h>

unsigned int product_of_two_numbers(unsigned int a, unsigned int b) {
  if ((unsigned long long)a * b > UINT_MAX) {
    return UINT_MAX;
  } else {
    return a * b;
  }
}

double max_of_two_numbers(double a, double b) {
  return fmax(a, b);
}
