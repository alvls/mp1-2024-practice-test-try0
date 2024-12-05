// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN
#include <stdlib.h>
#include <stdio.h>
int sum_of_two_numbers(int a, int b)
{
    if (a - INT_MAX >= -b || b - INT_MAX >= -a)
        return INT_MAX;
    if (a - INT_MIN <= -b || b - INT_MIN <= -a)
        return INT_MIN;
    return a + b;
}

unsigned int product_of_two_numbers(unsigned int a, unsigned int b)
{
    if ((a > (UINT_MAX / b) && b != 0) || (b > (UINT_MAX / a) && a != 0))
        return UINT_MAX;
    return a * b;
}

double max_of_two_numbers(double a, double b)
{
    return a > b ? a : b;
}
