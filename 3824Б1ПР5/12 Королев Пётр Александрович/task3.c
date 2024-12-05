int main() {
    double a, b;

    printf("Введите первое вещественное число (a): ");
    scanf("%lf", &a);
    printf("Введите второе вещественное число (b): ");
    scanf("%lf", &b);
    
    double max = max_of_two_numbers(a, b);
    printf("Максимум из чисел %.2f и %.2f равен: %.2f\n", a, b, max);

    return 0;
}
