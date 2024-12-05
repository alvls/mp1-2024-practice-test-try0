// Задача 3. Найти максимум из вешественных чисел a и b
#include <stdio.h>

double max_of_two_numbers(double a, double b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    double a = 5.75, b = 10.25;
    printf("Max of %.2f and %.2f is %.2f\n", a, b, max_of_two_numbers(a, b));

    a = -3.5, b = -2.8;
    printf("Max of %.2f and %.2f is %.2f\n", a, b, max_of_two_numbers(a, b));

    return 0;
}
