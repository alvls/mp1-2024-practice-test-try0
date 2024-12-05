// Задача 2. Найти произведение натуральных чисел a и b
// Если a * b >= UINT_MAX, возвращать UINT_MAX

#include <stdio.h>
#include <limits.h>

unsigned int product(unsigned int a, unsigned int b) {
  if (a == 0 || b == 0) return 0; 
  if (a > UINT_MAX / b) { 
    return UINT_MAX;
  }
  return a * b;
}

int main() {
  printf("Product of 10 and 20: %u\n", product(10, 20));
  printf("Product of 10 and 429496729: %u\n", product(10, 429496729));
  printf("Product of UINT_MAX and 2: %u\n", product(UINT_MAX, 2)); 
  printf("Product of 0 and 5: %u\n", product(0, 5));
  return 0;
}
