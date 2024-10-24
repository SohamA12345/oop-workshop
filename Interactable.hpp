#ifndef GRID_ITEM_HPP_3
#define GRID_ITEM_HPP_3

#include "GridItem.hpp"
#include "Robot.hpp"
enum InteractableType {
  GOAL,
  OBSTACLE
};

class Interactable : public GridItem
{
private:
  /* data */
public:
  static int ItemcountInter;
  Interactable(int x, int y, int width, int height) {
    x = x;
    y=y;
    width = width;
    height = height;
  }
  Interactable(/* args */) {
    x = 0;
    y = 0;
    width = 0;
    hieght = 0;
    ItemcountInter++;
  }
  virtual bool interact(Robot* player) = 0;
  virtual InteractableType getType() = 0;
  int getActiveInteractableCount() {
    return ItemcountInter;
  }
  ~Interactable() {
    ItemcountInter--;
  }
};

int Interactable::ItemcountInter;

#endif