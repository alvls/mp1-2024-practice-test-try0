#include <stdio.h>

double max_of_two_numbers(double a, double b) {
    return (a > b) ? a : b;
}

int main() {
    printf("Max: %.2f\n", max_of_two_numbers(5.75, 10.25));
    printf("Max: %.2f\n", max_of_two_numbers(-3.5, -2.8));
    return 0;
}
