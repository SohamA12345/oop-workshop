#include <iostream>

using namespace std;

int main() {
  int* a = new int [3];

  int* b;

  b = a;

  for (int i = 0; i < 3; i++) {
    cout << b[i] << " ";
  }

  cout << endl;

  return 0;
}