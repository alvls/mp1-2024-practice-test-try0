// Задача 3. Найти максимум из вешественных чисел a и b
#include <stdio.h>
double max_of_two_numbers(double a, double b);
int main(){
{
  double a, b;

  printf("two_numbers: ");
  scanf("%d %d", &a, &b);

  double max_of_two_numbers;
  if (a >= b) {
    max_of_two_numbers = a;
  } else {
    max_of_two_numbers = b;
  }

  printf("max: %d\n", max_of_two_numbers);
  return 0.0;
}  
}
