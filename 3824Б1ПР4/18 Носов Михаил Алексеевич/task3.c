// Задача 3. Найти максимум из вешественных чисел a и b

#include <stdio.h>
#include <math.h>

double max_of_two_numbers(double a, double b) {
    return fmax(a, b);
}

int main() {
    double num1 = 5.3;
    double num2 = 7.8;
    
    double max_num = max_of_two_numbers(num1, num2);
    printf("Максимум из %.2f и %.2f равен %.2f\n", num1, num2, max_num);
    
    return 0;
}
