#include <iostream>
using namespace std;

struct Encryption
{
  public:
    char charecter = 'a';
    float value = 0.25;
};


int main() {
  Encryption* data1; // Check initialisation
  Encryption data2;
  data2.charecter = 'b'; data2.value = 0.5;
  cout << data2.charecter << ',' << data1->value << endl;
  return 0;
}