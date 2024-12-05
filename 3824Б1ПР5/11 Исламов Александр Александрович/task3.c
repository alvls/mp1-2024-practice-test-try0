// Задача 3. Найти максимум из вешественных чисел a и b
#include <locale.h> 
#include <stdio.h>  
double max_of_two_numbers(double a, double b)
{
    return (a > b) ? a : b; 
}

int main() {
    setlocale(LC_ALL, "Russian");

    double a = 5.5; 
    double b = 3.2;
    double result = max_of_two_numbers(a, b);
    printf("Максимум: %.2f\n", result); 
    return 0; 
}
