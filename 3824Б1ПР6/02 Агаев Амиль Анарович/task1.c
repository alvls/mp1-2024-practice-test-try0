#include <stdio.h>
#include <limits.h>
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
    int a, b;

    // Ввод чисел
    printf("Введите два целых числа: ");
    scanf("%d %d", &a, &b);

    // Вычисление суммы
    int result = sum_of_two_numbers(a, b);

    // Вывод результата
    printf("Результат: %d\n", result);

    return 0;
}
  return 0;
}
