// Задача 2. Найти произведение натуральных чисел a и b
// Если a * b >= UINT_MAX, возвращать UINT_MAX
#include <stdio.h>
#include <limits.h>

unsigned int product_of_two_numbers(unsigned int a, unsigned int b)
{
    
    if (a > 0 && b > UINT_MAX / a)
        return UINT_MAX; 
    
    return a * b;  
}

int main()
{
    unsigned int a = 4000000000, b = 2;  
    printf("Product of %u and %u is %u\n", a, b, product_of_two_numbers(a, b));

    a = 1000, b = 2000;  
    printf("Product of %u and %u is %u\n", a, b, product_of_two_numbers(a, b));

    return 0;
}
