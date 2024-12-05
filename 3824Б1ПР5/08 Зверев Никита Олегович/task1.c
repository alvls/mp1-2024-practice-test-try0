// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN
#include <stdio.h>
#include <limits.h>
#include <locale.h>

int sum_of_two_numbers(int a, int b) {
    if (a > 0 && b > INT_MAX - a) {
        return INT_MAX;
    }
    if (a < 0 && b < INT_MIN - a) {
        return INT_MIN;
    }
    return a + b;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int a, b;
    printf("Введите значение a: ");
    scanf("%d", &a);
    printf("Введите значение b: ");
    scanf("%d", &b);

    int result = sum_of_two_numbers(a, b);
    printf("Результат: %d\n", result);

    return 0;
}
