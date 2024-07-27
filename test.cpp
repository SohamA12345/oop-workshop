#include <iostream>

using namespace std;

int* foo() {
  int a = 897;
  int* p = &a;

  int* q = new int;
  *q = 587;

  return p;
}

void bar() {
  return;
}

int main() {
  int* k = foo();

  cout << ++(*k) << endl;

  cout << *k << endl;
  cout << &k << endl;

  int a = 5;

  cout << *k << endl;
  cout << &k << endl;

  delete k;

  return 0;
}