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

  tuple<int, int> getPos() {return position;}

  GameEntityType getType() {return type;}

  GameEntity(/* args */) {}
  ~GameEntity() {}
};