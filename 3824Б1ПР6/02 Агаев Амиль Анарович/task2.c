#include <iostream>
#include <limits.h> 
unsigned int product_of_two_numbers(unsigned int a, unsigned int b)
{
   if (a != 0 && b > UINT_MAX / a) {
        return UINT_MAX;
    }
    return a * b;
}

int main() {
    unsigned int a, b;

    // Ввод чисел
    std::cout << "Введите два числа: ";
    std::cin >> a >> b;

    unsigned int result = product_of_two_numbers(a, b);
    std::cout << "Результат: " << result << std::endl;

    return 0;
  return 0;
}
