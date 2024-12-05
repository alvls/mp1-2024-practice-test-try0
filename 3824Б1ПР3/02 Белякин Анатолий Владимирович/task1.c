// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN
#include <stdio.h>
#include <limits.h>
#include <clocale>
int sum_of_two_numbers(int a, int b)
{
    if (a > 0 && b > 0 && a > INT_MAX - b) {
        return INT_MAX; 
    }
    if (a < 0 && b < 0 && a < INT_MIN - b) {
        return INT_MIN; 
    }
    return a + b;
}
int main()
{
    setlocale(LC_ALL, "RUS");
    int a, b;
    printf("Введите два целых числа: ");
    scanf_s("%d %d", &a, &b);
    int result = sum_of_two_numbers(a, b);
    printf("Сумма чисел %d и %d равна %d\n", a, b, result);
    return 0;
}
