#include <iostream>

// part 2
void changeValue(double* value) {
  *value = 42;
}

//Part 3
void printArray(double* array, int a) {
  for(int i = 0; i < a; i++) {
    std::cout << *(array + i) << ' ';
  }
  std::cout << std::endl;
}

//Part 4
double arrayMax(double* array, int n) {
  double max = *(array);

  for (int i = 0; i < n; i++) {
    if (max < *(array + i)) {
      max = *(array+i);
    }
  }

  return max;
}

//Part 5, 6, 7
double* dynamicArray(int n, double M) {
  double* Array;
  Array = new double[n];

  for (int i = 0; i < n; i++) {
    Array[i] = M;
  }

  return Array;
}