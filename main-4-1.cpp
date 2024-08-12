#include <iostream>

extern int secondSmallestSum(int *numbers,int length);
extern int *readNumbers();

int main() {
  int* user_array = readNumbers();

  std::cout << secondSmallestSum(user_array, 10) << std::endl;
  
  return 0;
}