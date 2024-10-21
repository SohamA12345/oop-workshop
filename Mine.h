#ifndef MINE_H
#define MINE_H

#include "GameEntity.h"
#include "Explosion.h"

class Mine : public GameEntity
{
private:
  /* data */
public:
  Mine(tuple<int, int> position) : GameEntity(get<0>(position), get<1>(position), 'M') {}
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