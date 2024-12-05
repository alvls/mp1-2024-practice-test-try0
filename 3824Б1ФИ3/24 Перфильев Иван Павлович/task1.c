// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN
#include <stdio.h> 
#include <limits.h> 
 
int sum_of_two_numbers(int a, int b)  
{  
    long long sum = (long long)a + (long long)b;  
 
    if (sum >= INT_MAX) { 
        printf("%d" ,INT_MAX); 
    }
    else if (sum <= INT_MIN) { 
        printf("%d" ,INT_MIN); 
    } 
    else { 
        printf(%d", (int)sum); 
    } 
    return 0;  
}
