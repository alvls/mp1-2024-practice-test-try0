// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN
#include <stdio.h>
#include <limits.h> 
#include <locale.h>

int sum_of_two_numbers(int a, int b) {
    // переполнение
    if (b > 0 && a > INT_MAX - b) {
        return INT_MAX;
    }
    if (b < 0 && a < INT_MIN - b) {
        return INT_MIN; 
    }
    return a + b;
}
int main() {
    int a, b;
    setlocale(LC_ALL, "Rus");

    printf("введите два целых числа:\n");
    scanf_s("%d %d", &a, &b);

    int result = sum_of_two_numbers(a, b);
    printf("сумма чисел: %d\n", result);

    return 0;
}
