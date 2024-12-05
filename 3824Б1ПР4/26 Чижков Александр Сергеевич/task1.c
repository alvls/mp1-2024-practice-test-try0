#include <limits.h>

int sum_of_two_numbers(int a, int b)
{
  if (b > 0 && a > INT_MAX - b) {
    return INT_MAX;
  } else if (b < 0 && a < INT_MIN - b) {
    return INT_MIN;
  } else {
    return a + b;
  }
}
