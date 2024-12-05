#include <stdio.h>
#include <limits.h>

// Задача 2. Найти произведение натуральных чисел a и b
// Если a * b >= UINT_MAX, возвращать UINT_MAX
unsigned int product_of_two_numbers(unsigned int a, unsigned int b)
{
	unsigned long long  pr = unsigned long long(a)*unsigned long long (b);
	if (pr >= UINT_MAX) return UINT_MAX;
	return a*b;
}
