#include <math.h>

double max_of_two_numbers(double a, double b) {
    // Обработка случаев с NaN
    if (isnan(a)) return b;
    if (isnan(b)) return a;

    // Обработка положительного и отрицательного нуля
    if (a == 0.0 && b == 0.0) {
        // Возвращаем положительный ноль, если он присутствует
        if (signbit(a)) return b;
        else return a;
    }

    // Сравнение чисел
    return (a > b) ? a : b;
}
