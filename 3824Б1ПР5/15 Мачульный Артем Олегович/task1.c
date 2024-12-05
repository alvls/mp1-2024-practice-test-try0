#include <limits.h>

int sum_of_two_numbers(int a, int b) {
    // Проверка на переполнение при сложении
    if (a > 0 && b > 0 && a > INT_MAX - b) {
        return INT_MAX; // Переполнение положительной части
    }
    if (a < 0 && b < 0 && a < INT_MIN - b) {
        return INT_MIN; // Переполнение отрицательной части
    }
    return a + b; // Если переполнения нет
}
