// Задача 3. Найти максимум из вешественных чисел a и b

#include <stdio.h>

double max_of_two_numbers(double a, double b) {
	return (a > b) ? a : b;
}

int main() {
	printf("Maximum of 10.5 and 20.7: %.1f\n", max_of_two_numbers(10.5, 20.7));
	printf("Maximum of -5.2 and 0.0: %.1f\n", max_of_two_numbers(-5.2, 0.0));
	return 0.0;
}
