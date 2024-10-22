#ifndef MINE_H
#define MINE_H

#include "GameEntity.h"
#include "Explosion.h"

class Mine : public GameEntity
{
private:
  /* data */
public:
  Mine(int x, int y) : GameEntity(x, y, 'M') {}
  Explosion explode() {
    Explosion obj;
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