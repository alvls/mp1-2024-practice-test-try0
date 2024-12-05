// Задача 2. Найти произведение натуральных чисел a и b
// Если a * b >= UINT_MAX, возвращать UINT_MAX
#include <limits.h>
#include <stdio.h>

unsigned int proizv_of_two_numbers(unsigned int a, unsigned int b) {
    unsigned long long proizv = (unsigned long long)a * b; 

    if (proizv > UINT_MAX) {
        return UINT_MAX;
    }
    else {
        return (unsigned int)proizv;
    }
}
