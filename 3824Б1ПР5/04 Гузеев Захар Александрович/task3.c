// Задача 3. Найти максимум из вешественных чисел a и b
#include <stdio.h>
#include <locale.h>

double max_of_two_numbers(double a, double b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
	return 0.0;
}

int main() {
	setlocale(LC_ALL, "russian");
	double a, b;
	printf("Введите два вещественных числа: ");
	scanf_s("%lf %lf", &a, &b);

	double result = max_of_two_numbers(a, b);
	printf("Максимум: %.2lf\n", result);

	return 0;
}
