#include <stdlib.h>
int sum_of_two_numbers(int a, int b)
{
  if(a+b>=INT_MAX) return INT_MAX;
  if(a+b<=INT_MIN) return INT_MIN;
  else return a+b;
}
