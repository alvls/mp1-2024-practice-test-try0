#include <limits.h>

int sum_of_two_numbers(int a, int b) {
    if (a > 0 and b > 0 and a > INT_MAX - b) {
        return INT_MAX;
    }
    if (a < 0 and b < 0 and a < INT_MIN - b) {
        return INT_MIN;
    }
    return a + b ; 
}
