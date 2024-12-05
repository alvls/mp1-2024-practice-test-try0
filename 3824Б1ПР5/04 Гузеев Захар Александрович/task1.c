// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN
#include <stdio.h>
#include <limits.h>
#include <locale.h>

int sum_of_two_numbers(int a, int b) {
	long long sum = (long long)a + (long long)b;
	if (sum >= INT_MAX) {
		return INT_MAX;
	}
	else if (sum <= INT_MIN) {
		return INT_MIN;
	}
	else {
		return (int)sum;
	}
}

int main() {
	setlocale(LC_ALL, "russian");
	int a, b;
	printf("Введите два целых числа: ");
	scanf_s("%d %d", &a, &b);

	int result = sum_of_two_numbers(a, b);
	printf("Результат: %d\n", result);

	return 0;
}
