// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN

#include <stdio.h>
#include <limits.h>
int sum_of_two_numbers(int a, int b)
{
	int res;
if ((a > INT_MAX - b) && (a > 0) && (b > 0))
	res = INT_MAX;
else if ((a < INT_MIN - b) && (a < 0) && (b < 0))
	res = INT_MIN;
else
	res = a + b;
return res;
}
