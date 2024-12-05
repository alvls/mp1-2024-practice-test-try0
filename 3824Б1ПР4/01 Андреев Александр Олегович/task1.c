#include <limits.h>

int sum_of_two_numbers(int a, int b) {
    // Проверяем на переполнение при сложении
    if (b > 0 && a > INT_MAX - b) {
        return INT_MAX; // Если a + b превышает INT_MAX
    }
    if (b < 0 && a < INT_MIN - b) {
        return INT_MIN; // Если a + b меньше INT_MIN
    }
    return a + b; // Возвращаем сумму, если переполнения нет
}
