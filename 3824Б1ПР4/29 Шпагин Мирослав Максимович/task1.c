#include <stdio.h>
#include <limits.h> 

int sum_of_two_numbers(int a, int b)
{
    if ((b > 0 && a > INT_MAX - b) || (b < 0 && a < INT_MIN - b)) {
        return (b > 0) ? INT_MAX : INT_MIN;}
    return a+b;
}
