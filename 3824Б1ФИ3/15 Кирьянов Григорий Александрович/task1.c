// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN
#include <stdio.h>
#include <limits.h>

int sum_of_two_numbers(int a, int b) 
{ 
    long long sum = (long long)a + (long long)b; // Используем long long для предотвращения переполнения

    if (sum >= INT_MAX) {
        printf("Переполнение: сумма превышает INT_MAX\n");
    } else if (sum <= INT_MIN) {
        printf("Переполнение: сумма меньше INT_MIN\n");
    } else {
        printf("Результат: %d\n", (int)sum); 
    }

    return 0; // Возвращаем 0
}
