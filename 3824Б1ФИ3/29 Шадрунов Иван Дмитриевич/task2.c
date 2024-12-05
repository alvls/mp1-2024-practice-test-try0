// Задача 2. Найти произведение натуральных чисел a и b
// Если a * b >= UINT_MAX, возвращать UINT_MAX
#include <stdio.h>
#include <limits.h>

unsigned int product_of_two_numbers(unsigned int a, unsigned int b)
{
if (a == 0 || b == 0) {
return 0;
} else if (UINT_MAX / a < b) {
return UINT_MAX;
} else {
return a * b;
}
}

int main()
{
unsigned int a, b;

printf("Введите два натуральных числа a и b: ");
scanf("%u %u", &a, &b);

unsigned int result = product_of_two_numbers(a, b);

printf("Произведение чисел a и b: %u\n", result);

return 0;
}
