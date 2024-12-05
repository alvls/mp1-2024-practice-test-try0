// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN
#include <limits.h>

int sum(int a, int b) {
    if (a > 0 && b > INT_MAX - a) {
        return INT_MAX;
    } else if (a < 0 && b < INT_MIN - a) {
        return INT_MIN;
    }
    return a + b;
}
