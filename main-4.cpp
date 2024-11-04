#include <iostream>

struct BBB{
  char a = 'a';
  int value = 0.1;
};

int main() {
  BBB* b;
  b->a = 'b';
}