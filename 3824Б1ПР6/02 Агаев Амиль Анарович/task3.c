// Задача 3. Найти максимум из вешественных чисел a и b
double max_of_two_numbers(double a, double b){
 return (a > b) ? a : b;
}

int main()
{
    double a, b;

    // Ввод двух чисел
    printf("Введите два вещественных числа: ");
    scanf("%lf %lf", &a, &b);

    // Нахождение максимума
    double result = max_of_two_numbers(a, b);

    // Вывод результата
    printf("Максимум: %.2lf\n", result);

    return 0;
}

  return 0.0;
}
