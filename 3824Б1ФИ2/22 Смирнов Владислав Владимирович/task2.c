// Задача 2. Найти произведение натуральных чисел a и b
// Если a * b >= UINT_MAX, возвращать UINT_MAX
#include<limits.h>
unsigned int product_of_two_numbers(unsigned int a, unsigned int b)
{
    if ((a > INT_MAX) || (b > INT_MAX))
        return INT_MAX; else {
        if (a*b > INT_MAX)
            return INT_MAX;
    }
    return a*b;
}
