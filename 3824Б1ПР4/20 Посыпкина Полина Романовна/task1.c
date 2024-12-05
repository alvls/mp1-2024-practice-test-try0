#include <stdio.h>
#include <limits.h>

int sum_of_two_numbers(int a, int b) {
    if (a > 0 && b > INT_MAX - a) return INT_MAX;
    if (a < 0 && b < INT_MIN - a) return INT_MIN;
    return a + b;
}

int main() {
    printf("Sum: %d\n", sum_of_two_numbers(2147483647, 1));
    printf("Sum: %d\n", sum_of_two_numbers(-2147483648, -1));
    printf("Sum: %d\n", sum_of_two_numbers(100, 200));
    return 0;
}
