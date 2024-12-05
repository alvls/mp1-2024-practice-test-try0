#include <limits.h>
#include <stdio.h>
#include <locale.h>

int sum_of_two_numbers(int a, int b)
{
    if (b > 0 && a > INT_MAX - b) // Проверка переполнения сверху
        return INT_MAX;
    if (b < 0 && a < INT_MIN - b) // Проверка переполнения снизу
        return INT_MIN;
    return a + b; // Безопасное сложение
}
int main()
{
    setlocale( LC_ALL,"Russian" );
    int a, b;

    printf("Введите два целых числа:\n");
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);

    int result = sumaa(a, b);

    printf("Сумма: %d\n", result);

    return 0;
}
