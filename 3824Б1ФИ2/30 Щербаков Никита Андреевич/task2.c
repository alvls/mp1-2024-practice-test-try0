#include <limits.h>
// Задача 2. Найти произведение натуральных чисел a и b
// Если a * b >= UINT_MAX, возвращать UINT_MAX
unsigned int product_of_two_numbers(unsigned int a, unsigned int b)
{
	unsigned int c = UINT_MAX, res = 0;
	if (a > b)
	{
		for (unsigned int i = 1; a * i > a * (i - 1) && i < b + 1; i++)
			res++;
		if (res != b)
			return c;
	}
	else if (b > a)
	{
		for (unsigned int i = 1; b * i > b * (i - 1) && i < a + 1; i++)
			res++;
		if (res != a)
			return c;
	}
	else if ((a == c || b == c) && a != 0 && b != 0)
		return c;
	else if (a == 0 || b == 0)
		return 0;
	return a * b;
}
