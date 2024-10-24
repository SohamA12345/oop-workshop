#include "GridItem.hpp"

class Robot : public GridItem
{
private:
  int x, y, health;
public:
  Robot(int gridWidth, int gridHeight) : x(0), y(0), health(3) {

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