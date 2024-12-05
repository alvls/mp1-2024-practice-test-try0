// Задача 3. Найти максимум из вешественных чисел a и b
#include <float.h>

double max_of_two_numbers(double a, double b)
{
    if (a != a) return b; 
    if (b != b) return a; 

    return (a > b) ? a : b;
}