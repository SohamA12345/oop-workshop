#include <iostream>

extern bool equalsArray(int *numbers1,int *numbers2,int length);
extern int *readNumbers();

int main () {
  int* numbers1 = readNumbers();
  int* numbers2 = readNumbers();

  std::cout << std::boolalpha << equalsArray(numbers1, numbers2, 10) << std::endl;
}