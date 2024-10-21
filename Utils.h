#ifndef UTILS_H
#define UTILS_H

#include "GameEntity.h"
#include "time.h"
#include <random>

class Utils
{
private:
  /* data */
public:
  static tuple<int, int> generateRandomPos(int gridWidth, int gridHeight) {
    int x = rand() % gridWidth;
    int y = rand() % gridHeight;

    return make_tuple(x, y);
  }

  static double calculateDistance(tuple<int, int> pos1, tuple<int, int> pos2) {
    int diff_x = get<0>(pos2) - get<0>(pos1);
    int diff_y = get<1>(pos2) - get<1>(pos1);

    double d = sqrt((diff_x)*(diff_x) + (diff_y)*(diff_y));

    return d;
  }

  Utils(/* args */);
  ~Utils();
};

Utils::Utils(/* args */)
{
}

Utils::~Utils()
{
}
#endif