#ifndef EXPLOSION_H
#define EXPLOSION_H

#include "GameEntity.h"
#include "Effect.h"

class Explosion : public GameEntity, public Effect
{
private:
  /* data */
public:
  Explosion(tuple<int,int> position) : GameEntity(get<0>(position), get<1>(position), 'E') {}

  void apply(GameEntity& entity) {
    entity.setPos(-1,-1);
    entity.setType(GameEntityType::NoneType);
  }

  Explosion(/* args */);
  ~Explosion();
};

Explosion::Explosion(/* args */)
{
}

Explosion::~Explosion()
{
}
#endif