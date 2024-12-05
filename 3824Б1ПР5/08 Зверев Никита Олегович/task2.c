// Задача 2. Найти произведение натуральных чисел a и b
// Если a * b >= UINT_MAX, возвращать UINT_MAX
#include <stdio.h>
#include <limits.h>
#include <locale.h>

unsigned int product_of_two_numbers(unsigned int a, unsigned int b) {
    if (a > 0 && b > UINT_MAX / a) return UINT_MAX;
    return a * b;
}

int main() {
    setlocale(LC_ALL, "Russian");
    unsigned int a, b;
    printf("Введите два натуральных числа (a и b): ");
    scanf_s("%u %u", &a, &b);
    unsigned int result = product_of_two_numbers(a, b);
    printf("Произведение: %u\n", result);
    return 0;
}
