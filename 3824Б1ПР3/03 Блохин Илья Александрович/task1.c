// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN
#include <limits.h>
int sum_of_two_numbers(int a, int b)
{
int sum = a + b;
    if (sum > INT_MAX) {
        return INT_MAX;
    } else if (sum < INT_MIN) {
        return INT_MIN;
    } else {
        return sum;
    }
}
