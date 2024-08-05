#include "workshop.h"
#include <iostream>

int main() {
  // Part 8
  double* array1 = dynamicArray(5, 2.0);

  printArray(array1, 5);

  int max = arrayMax(array1, 5);

  std::cout << max << std::endl;

  delete [] array1;

  return 0;
}