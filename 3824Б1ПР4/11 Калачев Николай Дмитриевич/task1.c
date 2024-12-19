// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN
#include <stdio.h>
#include <limits.h>

int task1(unsigned A[], size_t n, unsigned a, unsigned b)
{
    unsigned min_element = UINT_MAX; // инициализируем максимальным значением
    
    // Проходим по всем элементам массива
    for (size_t i = 0; i < n; i++) {
        if (A[i] >= a && A[i] < b) { // проверяем, что элемент находится в интервале (a, b)
            if (A[i] < min_element) {
                min_element = A[i]; // обновляем минимальный элемент, если необходимо
            }
        }
    }
    
    // Возвращаем минимальный элемент или 0, если элементы отсутствуют
    return min_element == UINT_MAX ? 0 : min_element;
}

int main() {
    unsigned A[] = {10, 20, 30, 40, 50};
    size_t n = sizeof(A) / sizeof(unsigned);
    unsigned a = 20, b = 40;
    
    unsigned min_element = task1(A, n, a, b);
    
    if (min_element == 0) {
        printf("Требуемые элементы отсутствуют.\n");
    } else {
        printf("Минимальный элемент в интервале (%u, %u): %u\n", a, b, min_element);
    }
    
    return 0;
}
