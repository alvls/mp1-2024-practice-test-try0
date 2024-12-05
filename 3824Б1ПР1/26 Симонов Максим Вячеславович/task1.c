// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN
#include <limits.h>
int sum_of_two_numbers(int a, int b)
{
	long long result = (long long)a + (long long)b;
	if (result >= INT_MAX) { return INT_MAX; }
	if (result <= INT_MIN) { return INT_MIN; }
	return result;
}
