#include <limits.h>
unsigned int product_of_two_numbers(unsigned int a, unsigned int b)
{
    unsigned long long c = unsigned long long(a) * unsigned long long(b);
    if (c >= UINT_MAX) return UINT_MAX;
    return a * b;   
}
