// Задача 2. Найти произведение натуральных чисел a и b
// Если a * b >= UINT_MAX, возвращать UINT_MAX
#include <limits.h> 
#include <stdio.h>  
#include <locale.h> 

unsigned int product_of_two_numbers(unsigned int a, unsigned int b)
{
    if (a > 0 && b > 0 && a > UINT_MAX / b) {
        return UINT_MAX; 
    }
    return a * b; 
}

int main() {
    setlocale(LC_ALL, "Russian");
    unsigned int a = 500; 
    unsigned int b = 200;
    unsigned int result = product_of_two_numbers(a, b);
    printf("Произведение: %u\n", result); 
    return 0; 
}
