// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN
#include<limits.h>
#include <stdlib.h>


int sum_of_two_numbers(int a, int b)
{
	if (a - INT_MAX >= -b || b - INT_MAX >= -a)
		return INT_MAX;
	if (a - INT_MAX <= -b || b - INT_MAX <= -a)
		return INT_MAX;
	return a + b;
}
