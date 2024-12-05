// Задача 2. Найти произведение натуральных чисел a и b
// Если a*b >= UNIT_MAX, возвращать UNIT_MAX
#include <limits.h>
#include <stdio.h>

unsigned int product_of_two_numbers(unsigned int a, unsigned int b)
{
    unsigned long long product = (unsigned long long)a * b;
    if (product > UINT_MAX) {
        return UINT_MAX;
    }

    return (unsigned int)product;
}
