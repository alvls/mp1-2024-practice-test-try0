// Задача 2. Найти произведение натуральных чисел a и b
// Если a * b >= UINT_MAX, возвращать UINT_MAX
#include <stdio.h>

void task2(int A[], size_t n) {
 int count[100000] = {0}; // Массив для подсчета вхождений
 int i, j;
 
 // Подсчет вхождений каждого элемента
 for (i = 0; i < n; i++) {
 count[A[i]]++;
 }
 
 // Замена элементов, встречающихся более двух раз, на -1
 for (i = 0; i < n; i++) {
 if (count[A[i]] > 2) {
 A[i] = -1;
 }
 }
}

int main() {
 int A[] = {1, 2, 3, 4, 1, 2, 2, 5, 6, 7, 8, 1};
 size_t n = sizeof(A) / sizeof(int);
 
 printf("Исходный массив: \n");
 for (size_t i = 0; i < n; i++) {
 printf("%d ", A[i]);
 }
 
 task2(A, n);
 
 printf("\nИзмененный массив: \n");
 for (size_t i = 0; i < n; i++) {
 printf("%d ", A[i]);
 }
 
 return 0;
}
