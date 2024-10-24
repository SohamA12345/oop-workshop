#include "GridItem.hpp"

enum InteractableType {
  GOAL,
  OBSTACLE
};

class Interactable : public GridItem
{
private:
  /* data */
public:
  Interactable(int x, int y, int width, int height) {}
  Interactable(/* args */) {}
  ~Interactable() {}
};