#include <iostream>
#include "test-header.h"

using namespace std;

int main() {
  double array[] = {1.1, 3.3, 0};
  int n = 3;

  cout << "Min:" << arrayMin(array, n) << endl;

  double array1[] = {5.5, 4.4, 3.3, 2.2};

  int n1 = 4;
  int m = 1;

  modifyArray(array1, n1, m);

  for (int i = 0; i < n1; i++) {
    cout << array1[i] << '\t';
  }

  cout << endl;

  double array2[] = {1, 2, 3, 4, 5, 6};
  int n3 = 6;

  double* dup_array2 = dubplicateArray(array2, n3);

  for (int i = 0; i < n3; i++) {
    cout << dup_array2[i] << '\t';
  }

  cout << endl;

  delete [] dup_array2;

  return 0;
}