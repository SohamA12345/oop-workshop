#include <iostream>

int *readNumbers() {
  int* user_array = new int[10];

  for (int i = 0; i < 10; i++) {
    std::cin >> user_array[i];
  }

  return user_array;
}

void printNumbers(int *numbers,int length) {
  for (int i = 0; i < length; i++) {
    std::cout << i << " " << numbers[i] << std::endl;
  }

  return;
}