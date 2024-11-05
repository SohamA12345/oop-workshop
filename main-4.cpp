#include <iostream>
#include <string>

int main() {
  char name[] = "mike";
  char* nameCopy;
  nameCopy = name[0];
  nameCopy[3] = 'y';

  for (int i = 0; i < 4; i++) {
    std::cout << nameCopy[i];
  }

  return 0;
}