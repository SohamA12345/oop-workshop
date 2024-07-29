#include <iostream>
#include <cmath>

void base_10_to_2(int base_10_no, int base_2[], int size_of_array) {
  int quotient = base_10_no;
  int i = 1;

  while(quotient > 0) {
    base_2[size_of_array-i] = quotient % 2;
    quotient /= 2;
    i++;
  }

  return;
}

int main(){
  int base_10_no = 12;
  int n = ceil(log2(base_10_no+1));
  int* base_2 = new int[n];

  base_10_to_2(base_10_no, base_2, n);

  for (int i = 0; i < n; i++) {
    std::cout << *(base_2+i);
  }

  return 0;
}