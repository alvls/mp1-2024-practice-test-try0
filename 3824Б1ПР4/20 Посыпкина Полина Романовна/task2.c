#include <stdio.h>
#include <limits.h>

unsigned int product_of_two_numbers(unsigned int a, unsigned int b) {
    return (a > 0 && b > UINT_MAX / a) ? UINT_MAX : a * b;
}

int main() {
    printf("Product: %u\n", product_of_two_numbers(4000000000, 2));
    printf("Product: %u\n", product_of_two_numbers(1000, 2000));
    return 0;
}
