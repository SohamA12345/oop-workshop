#include "GameEntity.h"

class Effect
{
private:

public:
  virtual void apply(GameEntity& entity) = 0;
  Effect(/* args */);
  ~Effect();
};

Effect::Effect(/* args */)
{
}

Effect::~Effect()
{
}
