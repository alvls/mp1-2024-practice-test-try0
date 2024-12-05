#include <limits.h> // Для UINT_MAX

unsigned int product_of_two_numbers(unsigned int a, unsigned int b)
{
   
    if (b != 0 && a > UINT_MAX / b) {
        return UINT_MAX;
    }
    return a * b;
}
