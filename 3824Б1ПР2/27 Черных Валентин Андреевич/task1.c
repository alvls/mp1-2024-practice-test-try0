// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN
#include <limits.h>

int sum_of_two_numbers(int a, int b)
{
    if (a > 0 && b > 0 && a + b <= 0)
        return INT_MAX;

    if (a < 0 && b < 0 && a + b >= 0)
        return(INT_MIN);

    int sum = a + b;

    return sum;
}
