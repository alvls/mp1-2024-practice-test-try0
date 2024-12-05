// Задача 2. Найти произведение натуральных чисел a и b
// Если a * b >= UINT_MAX, возвращать UINT_MAX
#include <limits.h> // Для UINT_MAX

unsigned int product_of_two_numbers(unsigned int a, unsigned int b)
{
    // Проверяем переполнение при умножении
    if (a != 0 && b > UINT_MAX / a) {
        return UINT_MAX;
    }

    // Возврат произведения, если переполнения нет
    return a * b;
}
