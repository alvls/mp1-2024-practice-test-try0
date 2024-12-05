#include <stdio.h>

double max_of_two_numbers(double a, double b)
{
    return (a > b) ? a : b; // Возвращаем большее из двух чисел
}

int main() {
    double num1 = 5.5;
    double num2 = 3.8;

    double result = max_of_two_numbers(num1, num2);
    printf("Максимум из %.2f и %.2f: %.2f\n", num1, num2, result);

    num1 = -2.5;
    num2 = -3.7;

    result = max_of_two_numbers(num1, num2);
    printf("Максимум из %.2f и %.2f: %.2f\n", num1, num2, result);

    return 0;
}
