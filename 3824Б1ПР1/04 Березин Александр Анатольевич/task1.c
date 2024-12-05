// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN
#include <limits.h>
int sum_of_two_numbers(int a, int b)
{
  	if (a < b) { // a - max, b - min
		int temp = a;
		a = b;
		b = temp;
	}
	if (a < 0 && b < 0 && INT_MIN - a != b) {
		return INT_MIN;
	}
	else if (a > 0 && b > 0 && INT_MAX - b != a) {
		return INT_MAX;
	}
	return a + b;
}
