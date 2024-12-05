#include <limits.h>
int sum_of_two_numbers(int a, int b) {
    if ((b > 0 && a > INT_MAX - b) || (b < 0 && a < INT_MIN - b)) {
        if ((a > 0) && (b > 0)) {
            return INT_MAX;
        }
        if ((a < 0) && (b < 0)) {
            return INT_MIN;
        }
    }
    return a + b;
}
