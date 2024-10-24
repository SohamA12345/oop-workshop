#ifndef GRID_ITEM_HPP_4
#define GRID_ITEM_HPP_4

#include "Interactable.hpp"
#include "Helper.hpp"

class Goal : public Interactable
{
private:
  /* data */
public:
  Goal(int width, int height) {
    width = width;
    height = height;
  }
  bool interact(Robot* player) {
    int distance = Helper::euclideanDistance(this->getCoordinates(), player->getCoordinates());
    if (distance == 0) {
      return true;
    } else {return false;}
  }
  InteractableType getType() {
    return InteractableType::GOAL;
  }
  Goal(/* args */) {}
  ~Goal() {}
};
#endif