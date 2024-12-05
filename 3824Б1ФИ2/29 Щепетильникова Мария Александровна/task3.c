// Задача 3. Найти максимум из вешественных чисел a и b
//Вариант 1.
#include <math.h> 

double max_of_two_numbers(double a, double b) {
    if (a == 0) 
        return b;
    if (b == 0) 
        return a;
    return fmax(a, b);
}

//Вариант 2.
double max_of_two_numbers(double a, double b) {
    if (a == 0) 
        return b;
    if (b == 0) 
        return a;
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}
