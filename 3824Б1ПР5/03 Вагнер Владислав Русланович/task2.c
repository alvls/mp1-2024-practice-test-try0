#include <limits.h>
#include <stdio.h> 

unsigned int product_of_two_numbers(unsigned int a, unsigned int b) {
  uint product = a * b; 

  if (product > UINT_MAX) {
    return UINT_MAX;
  } else {
    return (unsigned int)product;
  }
}
