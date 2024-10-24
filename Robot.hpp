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
    return true;
  } else if (xOffset == 0) {
    y += yOffset;
    return true;
  }
  return false;
}
  Robot(/* args */) {}
  ~Robot() {}
};

#endif