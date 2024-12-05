#include <stdio.h>
#include <limits.h>

unsigned int product_of_two_numbers(unsigned int a, unsigned int b)
{
    if (a > 0 && b > UINT_MAX / a) {
        return UINT_MAX; // Произведение превышает UINT_MAX
    }

    return a * b; // Возвращаем произведение, если переполнения нет
}

int main() {
    unsigned int a = 40000;
    unsigned int b = 70000;

    unsigned int result = product_of_two_numbers(a, b);
    printf("Результат: %u\n", result); // Ожидаем UINT_MAX, так как 40000 * 70000 > UINT_MAX

    a = 1000;
    b = 2000;

    result = product_of_two_numbers(a, b);
    printf("Результат: %u\n", result); // Ожидаем 2000000

    return 0;
}
