// Задача 3. Найти максимум из вешественных чисел a и b
#include <stdio.h>
#include <locale.h>

double max_of_two_numbers(double a, double b) {
    return (a > b) ? a : b;
}

int main() {
    setlocale(LC_ALL, "Russian");
    double a, b;
    printf("Введите a: ");
    scanf("%lf", &a);
    printf("Введите b: ");
    scanf("%lf", &b);
    printf("Максимум: %lf\n", max_of_two_numbers(a, b));
    return 0.0;
}
