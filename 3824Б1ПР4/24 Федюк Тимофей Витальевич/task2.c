// Задача 2. Найти произведение натуральных чисел a и b
// Если a * b >= UINT_MAX, возвращать UINT_MAX
#include <stdio.h>
unsigned int product_of_two_numbers(unsigned int a, unsigned int b){
   if (a * b >= UINT_MAX) {
    return UINT_MAX;
  } else {
    return a * b;
  }
}
int main()
{
  unsigned int a, b;
  printf("two_numbers: ");
  scanf("%d %d", &a, &b);
  unsigned int product = product_of_two_numbers(a, b);
  printf("product: %d\n", product);
  return 0;
}
