// Задача 2. Найти произведение натуральных чисел a и b
// Если a * b >= UINT_MAX, возвращать UINT_MAX
#include <stdio.h>
#include <limits.h> 
#include <locale.h>

unsigned int product_of_two_numbers(unsigned int a, unsigned int b) {    
    if (b != 0 && a > UINT_MAX / b) {
        return UINT_MAX; 
    }
    //переполнение
    return a * b;
}
int main() {
    unsigned int a, b;
    setlocale(LC_ALL, "Rus");

    printf("введите два натуральных числа: ");
    scanf_s("%u %u", &a, &b);

    unsigned int result = product_of_two_numbers(a, b);
    printf("произведение: %u\n", result);

    return 0;
}
