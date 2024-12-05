// Задача 3. Найти максимум из вешественных чисел a и b
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <ctime>
#include <limits.h>

double max_of_two_numbers(double a, double b)
{
	if (a >= b)
	{
    printf("%lf", a);
		return a;
	}
	else
	{
    printf("%lf", b);
		return b;
	}
}


