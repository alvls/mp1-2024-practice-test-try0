// Задача 3. Найти максимум из вешественных чисел a и b
#include <stdio.h> 
double max_of_two_numbers(double a, double b) 
{   
    return (a>b) ? a:b; 
} 
 
int main(){ 
 
    double a,b; 
    a = 11.111; 
    b = 11.111; 
    printf("%lf",max_of_two_numbers(a,b)); 
 
}
