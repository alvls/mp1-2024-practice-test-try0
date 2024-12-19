// Задача 3. Найти максимум из вешественных чисел a и b
#include <stdio.h>
#include <string.h>
#include <stdlib.h> // Добавляем этот заголовок

char* task3(char *s1, unsigned N1, char *s2, unsigned N2) {
 char *result; // Выделяем память для результата
 char *s1_ptr, *s2_ptr;
 
 // Копируем первые N1 символов из s1
 s1_ptr = s1;
 result = malloc(N1 + 1); // Выделяем память для первых N1 символов
 memcpy(result, s1, N1);
 result[N1] = '\0'; // Завершаем строку символом конца строки
 
 // Копируем последние N2 символов из s2
 s2_ptr = (char*)s2 + strlen(s2) - N2; // Находим позицию N2-го символа с конца
 
 // Проверяем, что память была выделена успешно
 if (result != NULL) {
 char *temp = malloc(N2 + 1); // Выделяем память для последних N2 символов
 if (temp != NULL) {
 memcpy(temp, s2_ptr, N2 + 1); // Копируем N2 символов и завершаем символом конца строки
 result = strcat(result, temp); // Объединяем две строки
 free(temp); // Освобождаем временную память
 } else {
 // Обработка ошибки выделения памяти
 }
 }
 
 return result;
}

int main() {
 char s1[] = "aaa";
 unsigned N1 = 4;
 char s2[] = "bbb";
 unsigned N2 = 4;
 
 char *result = task3(s1, N1, s2, N2);
 
 if (result != NULL) {
 printf("Новая строка: %s\n", result);
 free(result); // Освобождаем память
 } else {
 printf("Ошибка выделения памяти\n");
 }
 
 return 0;
}
