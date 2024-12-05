#include <stdio.h>
#include <limits.h>

unsigned int product_of_two_numbers(unsigned int a, unsigned int b)
{
    // Проверка переполнения
    if (a != 0 && b > UINT_MAX / a)
        return UINT_MAX;

    // Безопасное умножение
    return a * b;
}

int main()
{
    unsigned int a, b;

    printf("Введите два натуральных числа:\n");
    printf("a: ");
    scanf("%u", &a);
    printf("b: ");
    scanf("%u", &b);

    unsigned int result = product_of_two_numbers(a, b);

    if (result == UINT_MAX)
        printf("Результат: UINT_MAX (%u)\n", UINT_MAX);
    else
        printf("Произведение: %u\n", result);

    return 0;
}
