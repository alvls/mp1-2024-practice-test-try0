// Задача 2. Найти произведение натуральных чисел a и b
// Если a * b >= UINT_MAX, возвращать UINT_MAX
#include <limits.h>

unsigned int product_of_two_numbers(unsigned int a, unsigned int b) {
    if (a == 0 || b == 0) {
        return 0; // Произведение с нулем
    }
    if (a > UINT_MAX / b) {
        return UINT_MAX; // Сумма превышает UINT_MAX
    }
    return a * b; // Произведение в пределах допустимых значений
}
