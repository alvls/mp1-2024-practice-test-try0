// Задача 3. Найти максимум из вешественных чисел a и b
double max_of_two_numbers(double a, double b) {
    if (a > b) {
        printf("%lf\n", a); 
        return a;
    }
    else {
        printf("%lf\n", b); 
        return b; 
    }
    return 0.0;
}
