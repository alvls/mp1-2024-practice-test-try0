// Задача 3. Найти максимум из вешественных чисел a и b
#include <stdio.h>  
double max_of_two_numbers(double a, double b)
{
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main()
{
    double a, b;  
    printf("Введите два числа: ");
    scanf("%lf %lf", &a, &b);  

    double max_value = max_of_two_numbers(a, b);  
    printf("Максимум из %.2f и %.2f: %.2f\n", a, b, max_value);

    return 0.0;  
}
