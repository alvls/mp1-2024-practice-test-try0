#include <stdio.h>
#include <locale.h>

double max_of_two_numbers(double a, double b)
{
    return (a > b) ? a : b;
}

int main()
{
    setlocale( LC_ALL,"Russian" );
    double a, b;

    printf("Введите два вещественных числа:\n");
    printf("a: ");
    scanf("%lf", &a);
    printf("b: ");
    scanf("%lf", &b);

    double result = max_of_two_numbers(a, b);

    printf("Максимум: %.6f\n", result);

    return 0;
}
