#include <stdio.h>
#include <math.h> 


double max_of_two_numbers(double a, double b) {
    return fmax(a, b);
}

int main(){
  double a, b;
  scanf("%fl%fl", &a, &b);
  double max = max_of_two_numbers(a,b);
  printf("Максимум из %.1lf и %.1lf = %.1lf\n", a, b, max);
  return 0;
}
