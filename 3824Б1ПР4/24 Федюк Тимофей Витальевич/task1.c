// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN
#include <stdio.h>
int sum_of_two_numbers(int a, int b){
  if(a+b>=INT_MAX){
    return INT_MAX;
  }
  else if (a+b<=INT_MIN){
    return INT_MIN;
  }
}
int main()
{
  int a,b;
  printf("two_numbers: ");
  scanf("%d %d" , &a, &b);
  int sum=sum_of_two_numbers(a, b);
  printf("sum: %d\n", sum);
  return 0;
}
