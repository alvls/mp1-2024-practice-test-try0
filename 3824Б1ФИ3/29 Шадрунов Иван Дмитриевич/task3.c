// Задача 3. Найти максимум из вешественных чисел a и b
#include <stdio.h>

double max_of_two_numbers(double a, double b)
{
if (a > b)
{
return a;
}
else
{
return b;
}
}

int main()
{
double a, b;

perl
Copy code
printf("Enter two numbers: ");
scanf("%lf %lf", &a, &b);

double max = max_of_two_numbers(a, b);

printf("The maximum of %lf and %lf is %lf\n", a, b, max);

return 0;
}
