#ifndef GRID_ITEM_HPP_2
#define GRID_ITEM_HPP_2

#include "GridItem.hpp"

class Robot : public GridItem
{
private:
  int health;
public:
  Robot(int gridWidth, int gridHeight) : health(3) {
    x = 0;
    y = 0;
    gridHeight = gridHeight;
    gridWidth = gridWidth;
  }
  int getHealth() {
    return health;
  } // gets the current health of the robot
void takeHit() {
  if (health > 0) {
    health--;
  }
} // decrements the health of the robot. The robot cannot have negative health
bool move(int xOffset, int yOffset) {
  if (yOffset == 0) {
    x += xOffset;
    if (x >= 0 && x<=getGridWidth()) {
      return true;
    }
    x -= xOffset;
  } else if (xOffset == 0) {
    y += yOffset;
    if (y >= 0 && y<getGridHeight()) {
      return true;
    }
    y -= yOffset;
  }
  return false;
}
  Robot(/* args */) {}
  ~Robot() {}
};

#endif