// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN
#define INT_MAX 2147483647
#define INT_MIN -2147483648

int sum_of_two_numbers(int a, int b) {
    if (a > 0 && b > 0 && a > INT_MAX - b) {
        return INT_MAX;
    }
    if (a < 0 && b < 0 && a < INT_MIN - b) {
        return INT_MIN;
    }
    return a + b;
}
