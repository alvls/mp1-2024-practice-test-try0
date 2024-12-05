// Задача 3. Найти максимум из вешественных чисел a и b
#include <stdio.h>
double max_of_two_numbers(double a, double b) {
    double max; // Объявляем третью переменную для хранения максимального значения
    if (a > b) {
        max = a; // Если a больше b, присваиваем max значение a
    } else {
        max = b; // Иначе присваиваем max значение b
    }
    return max; // Возвращаем максимальное значение
}
