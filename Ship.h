#ifndef SHIP_H
#define SHIP_H

#include "GameEntity.h"

class Ship : public GameEntity
{
private:
  /* data */
public:
  Ship(tuple<int, int> position) : GameEntity(get<0>(position), get<1>(position), 'S') {}

  void move(int dx, int dy) {
    int x = get<0>(getPos()) + dx;
    int y = get<1>(getPos()) + dy;

    setPos(x, y);
  }

  Ship(/* args */);
  ~Ship();
};

Ship::Ship(/* args */)
{
}

Ship::~Ship()
{
}

#endif