#ifndef MINE_H
#define MINE_H

#include "GameEntity.h"
#include "Explosion.h"

class Mine : public GameEntity
{
private:
  int x,y;
public:
  Mine(int x, int y) : GameEntity(x, y, 'M') {
    this->x = x;
    this->y = y;
  }
  Explosion explode() {
    Explosion obj(x, y);
    setType(GameEntityType::NoneType);
    return obj;
  }
  Mine(/* args */);
  ~Mine();
};

Mine::Mine(/* args */)
{
}

Mine::~Mine()
{
}
#endif