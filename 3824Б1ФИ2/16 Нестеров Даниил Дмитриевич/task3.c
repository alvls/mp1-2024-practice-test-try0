#include <limits.h>
#include <math.h>
// Задача 3. Найти максимум из вешественных чисел a и b
double max_of_two_numbers(double a, double b)
{
	if (isnan(a) && isnan(b)) {
		return NAN;
	}

	if (isnan(a)) {
		return b;
	}
	if (isnan(b)) {
		return a;
	}

	return (a > b ? a : b);
}
