#include <stdio.h>
#include <limits.h>

unsigned int product_of_two_numbers(unsigned int a, unsigned int b) {
    if (a > 0 && b > 0 && a > UINT_MAX / b) {
        return UINT_MAX;  
    }
    return a * b; 
}

int main() {
    unsigned int a, b;

    printf("Введите первое натуральное число (a): ");
    scanf("%u", &a);
    printf("Введите второе натуральное число (b): ");
    scanf("%u", &b);

    unsigned int result = product_of_two_numbers(a, b);

    printf("Произведение: %u\n", result);

    return 0;
}
