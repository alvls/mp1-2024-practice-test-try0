#include <math.h>
// Задача 3. Найти максимум из вешественных чисел a и b
double max_of_two_numbers(double a, double b)
{
	if (a < 0.0 && b >= 0.0)
		return b;
	else if (b < 0.0 && a >= 0.0)
		return a;
	else if (fabs(a) > fabs(b) && a <= 0.0 && b <= 0.0)
	{
		if (a == 0.0 && b == 0.0)
			return a;
		return b;
	}
	else if (fabs(a) < fabs(b) && a <= 0.0 && b <= 0.0)
	{
		if (a == 0.0 && b == 0.0)
			return a;
		return a;
	}
	else if (fabs(a) > fabs(b) && a >= 0.0 && b >= 0.0)
	{
		if (a == 0.0 && b == 0.0)
			return a;
		return a;
	}
	else if (fabs(a) < fabs(b) && a >= 0.0 && b >= 0.0)
	{
		if (a == 0.0 && b == 0.0)
			return a;
		return b;
	}
	else if (a == b)
	return a;
}
