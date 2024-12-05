// Задача 3. Найти максимум из вешественных чисел a и b
double max_of_two_numbers(double a, double b)
{
   return (a > b) ? a : b;
}
  
  return 0;
}

Пример:
#include <stdio.h>
double max_of_two_numbers(double a, double b)
{
   return (a > b) ? a : b;
}
int main() {
    double a = 5.5,b = 3.2;
    double result = max_of_two_numbers(a, b);
    printf("%.2f\n", max_of_two_numbers(a, b)); 
}
