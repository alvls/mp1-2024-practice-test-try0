#include <limits.h>
int sum_of_two_numbers(int a, int b)
{
    if (a >= 0 && INT_MAX - a <= b) {
        return INT_MAX;
    }
    else if (b >= 0 && INT_MAX - b <= a)
    {
        return INT_MAX;
    }
    else if (a <= 0 && INT_MIN - a >= b)
    {
        return INT_MIN;
    }
    else if (b <= 0 && INT_MIN - b >= a) {
        return INT_MIN;
    }

    return a + b;
}
