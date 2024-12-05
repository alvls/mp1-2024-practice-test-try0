#include <stdio.h>
#include <limits.h>

int sum_of_two_numbers(int a, int b) {
    if (b > 0 && a > INT_MAX - b) {
        return INT_MAX;  
    }
    if (b < 0 && a < INT_MIN - b) {
        return INT_MIN;  
    }
    return a + b;
}

int main() {
    int a, b;

    printf("Введите первое число (a): ");
    scanf("%d", &a);
    printf("Введите второе число (b): ");
    scanf("%d", &b);

    int result = sum_of_two_numbers(a, b);

    printf("Результат суммы: %d\n", result);

    return 0;
}
