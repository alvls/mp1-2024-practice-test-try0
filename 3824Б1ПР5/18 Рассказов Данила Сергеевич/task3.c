// Задача 3. Найти максимум из вешественных чисел a и b
#include <cmath> // Для std::isnan

double max_of_two_numbers(double a, double b)
{
    if (std::isnan(a)) return b;
    if (std::isnan(b)) return a;
    return (a > b) ? a : b;
}
