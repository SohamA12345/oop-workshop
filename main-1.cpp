#include "Utils.h"
#include <iostream>

int main() {
  srand(time(NULL));

  tuple<int, int> point1 = Utils::generateRandomPos(100,100);
  tuple<int, int> point2 = Utils::generateRandomPos(100,100);

  cout << "x = " << get<0>(point1) << ", y = " << get<1>(point1) << endl << "x = " << get<0>(point2) << ", y = " << get<1>(point2) << endl;

  cout << Utils::calculateDistance(point1, point2) << endl;

  return 0;
}