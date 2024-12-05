// Задача 3. Найти максимум из вешественных чисел a и b
#include <stdio.h>
#include <limits.h>
double max_of_two_numbers(double a, double b)
{
	double result;
	if (a >= b) result = a;
	else result = b;
	return result;
}
