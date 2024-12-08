#include <iostream>
#define INDEX 0

using namespace std;

template <int SIZE, typename T> // These parameters are selected in runtime, thus SIZE is constant and not lead to variable length array issue.
class MyArray
{
  public:
  T array[SIZE];
};

int main() {
  MyArray<2, int> a;
  a.array[0] = 1;
  a.array[1] = 2;

  cout << a.array[INDEX] + a.array[INDEX+1] << endl;
  return 0;
}