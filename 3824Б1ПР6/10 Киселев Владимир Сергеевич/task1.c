// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN
int sum_of_two_numbers(int a, int b)
{
    // Если оба числа положительные и сумма превышает INT_MAX
    if (a > 0 && b > 0 && a > INT_MAX - b) {
        return INT_MAX;
    }

    // Если оба числа отрицательные и сумма меньше INT_MIN
    if (a < 0 && b < 0 && a < INT_MIN - b) {
        return INT_MIN;
    }

    // Возврат обычной суммы, если переполнения нет
    return a + b;
}
