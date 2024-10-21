#ifndef GAME_ENTITY_H
#define GAME_ENTITY_H

#include <tuple>

using namespace std;

enum GameEntityType { ExplosionType, MineType, NoneType, ShipType };

class GameEntity {
 private:
  tuple<int, int> position;
  GameEntityType type;
 public:
  GameEntity(int x, int y, char type) : position(make_tuple(x,y)) {
    switch (type)
    {
    case 'E':
      this->type = GameEntityType::ExplosionType;
      break;
    case 'M':
      this->type = GameEntityType::MineType;
      break;
    case 'S':
      this->type = GameEntityType::ShipType;
      break;
    default:
      this->type = GameEntityType::NoneType;
      break;
    }
  }

  void setPos(int x, int y) {
    position = make_tuple(x,y);
  };

  void setType(GameEntityType type) {this->type = type;}

  tuple<int, int> getPos() {return position;}

  GameEntityType getType() {return type;}

  GameEntity(/* args */) {}
  ~GameEntity() {}
};

#endif