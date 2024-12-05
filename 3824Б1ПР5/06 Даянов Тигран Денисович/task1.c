// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN

#include <limits.h>

int sum_safe(int a, int b) {
    long long sum = a + b;
    if ((long long)INT_MAX < sum) {
        return INT_MAX;
    } else if ((long long)INT_MIN > sum) {
        return INT_MIN;
    } else {
        return (int)sum;
    }
}
