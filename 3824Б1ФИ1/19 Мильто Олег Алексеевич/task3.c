
// Задача 3. Найти максимум из вешественных чисел a и b
#include <stdio.h>
#include <stdlib.h>
double max_of_two_numbers(double a, double b)
{

  if (a > b)
    return a;
  else if (a < b)
    return b;
  else
    return 0.0;
}
