// Задача 3. Найти максимум из вешественных чисел a и b
double max_of_two_numbers(double a, double b)
    if (isnan(a) || isnan(b)) {
        return NAN;
    }
    
    return (a > b) ? a : b;
}
