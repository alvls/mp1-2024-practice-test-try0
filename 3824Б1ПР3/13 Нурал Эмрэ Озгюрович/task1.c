#include <iostream>
#include <stdio.h>
#include <math.h>
#include <ctime>
#include <limits.h>

int sum_of_two_numbers(int a, int b)
{
	double ad = a;
	double bd = b;
	
	if (ad/2 + bd/2 >= double(INT_MAX)/2)
	{
		printf("%d", INT_MAX);
		return INT_MAX;
	}
	else if (ad / 2 + bd / 2 <= double(INT_MIN) / 2)
	{
		printf("%d", INT_MIN);
		return INT_MIN;
	}
	else
	{
		printf("%d", a + b);
		return a + b;
	}
}
