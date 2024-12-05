// Задача 3. Найти максимум из вешественных чисел a и b
#include <stdio.h>

double max_of_two_numbers(double a, double b)
{
    return (a > b) ? a : b;
}

int main() {
    double a, b;

    a = 5.5;
    b = 3.2;
    printf("Max of %.2f and %.2f: %.2f\n", a, b, max_of_two_numbers(a, b));

    a = -1.1;
    b = 2.2;
    printf("Max of %.2f and %.2f: %.2f\n", a, b, max_of_two_numbers(a, b)); 

    a = 4.4;
    b = 4.4;
    printf("Max of %.2f and %.2f: %.2f\n", a, b, max_of_two_numbers(a, b)); 

    return 0;
}
