#include <limits.h>
// Задача 3. Найти максимум из вешественных чисел a и b
double max_of_two_numbers(double a, double b)
{
	double e = 1e-10;
	if (a >= b - e)return a;

	return b;
}
