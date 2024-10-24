#ifndef GRID_ITEM_HPP_5
#define GRID_ITEM_HPP_5

#include "Interactable.hpp"
#include "Helper.hpp"

class Obstacle : public Interactable
{
private:
  /* data */
public:
  Obstacle(int x, int y, int width, int height) {
    x = x;
    y = y;
    width = width;
    height = height;
  }

  bool interact(Robot* player) {
    int distance = Helper::euclideanDistance(this->getCoordinates(), player->getCoordinates());
    if (distance == 0 && player->getHealth() == 0) {
      return true;
    } else if (distance == 0) {
      player->takeHit();
      return false;
    } else {return false;}
  }

  InteractableType getType() {
    return InteractableType::OBSTACLE;
  }
  Obstacle(/* args */) {}
  ~Obstacle() {}
};

#endif