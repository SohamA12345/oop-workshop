#include <iostream>

int binary_addition(int x, int y) {
  int z = x + y;
  return z;
}

int binary_subtraction(int x, int y) {
  int z = x - y;
  return z;
}

int binary_multiplication(int x, int y) {
  int z = x * y;
  return z;
}

int binary_division(int x, int y) {
  int z = x / y;
  return z;
}

int main() {
  int x = 0b00011;
  int y = 0b00011;

  std::cout << binary_addition(x, y) << '\t' << binary_division(x,y) << '\t' << binary_multiplication(x, y) << '\t' << binary_subtraction(x, y) << std::endl;

  return 0;
}