#include <iostream>

extern int *reverseArray(int *numbers1,int length);
extern int *readNumbers();
extern bool equalsArray(int *numbers1,int *numbers2,int length);

int main() {
  int* numbers1 = readNumbers();
  int* numbers2 = reverseArray(numbers1, 10);

  std::cout << std::boolalpha << equalsArray(numbers1, numbers2, 10) << std::endl;

  delete [] numbers1;
  delete [] numbers2;
}