#include <stdio.h>
#include <math.h>


// Задача 3. Найти максимум из вешественных чисел a и b
double max_of_two_numbers(double a, double b)
{
	if (fabs(a - b) < 1e-10) return a;
	if (a - b > 1e-10) {
		return a;
	}
	else if (b - a > 1e-10) {
		return b;
	}

}
