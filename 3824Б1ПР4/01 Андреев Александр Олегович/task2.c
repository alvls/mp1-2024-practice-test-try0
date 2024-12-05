#include <limits.h>

unsigned int product_of_two_numbers(unsigned int a, unsigned int b) {
    // Проверяем на переполнение при умножении
    if (a > 0 && b > UINT_MAX / a) {
        return UINT_MAX; // Если a * b превышает UINT_MAX
    }
    return a * b; // Возвращаем произведение, если переполнения нет
}
