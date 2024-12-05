// Задача 2. Найти произведение натуральных чисел a и b
// Если a * b >= UINT_MAX, возвращать UINT_MAX
#include <stdio.h>
#include <limits.h>
#include <locale.h>

unsigned int product_of_two_numbers(unsigned int a, unsigned int b) {
	unsigned long long product = (unsigned long long)a * (unsigned long long)b;
	if (product >= UINT_MAX) {
		return UINT_MAX;
	}
	else {
		return (unsigned int)product;
	}
}

int main() {
	setlocale(LC_ALL, "russian");
	unsigned int a, b;
	printf("Введите два натуральных числа: ");
	scanf_s("%u %u", &a, &b);

	unsigned int result = product_of_two_numbers(a, b);
	printf("Результат: %u\n", result);

	return 0;
}
