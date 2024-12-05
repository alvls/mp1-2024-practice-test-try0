// Задача 2. Найти произведение натуральных чисел a и b
// Если a * b >= UINT_MAX, возвращать UINT_MAX
#include <limits.h>
unsigned int product_of_two_numbers(unsigned int a, unsigned int b)
{
  	if (a > b) {
		int temp = a;
		a = b;
		b = temp;
	}
	if (UINT_MAX / a <= b) {
		return UINT_MAX;
	}
	return a * b;
}
