#include "Explosion.h"
#include "Ship.h"
#include "Mine.h"
#include "Utils.h"
#include <iostream>

int main() {
  tuple<int, int> ship_pos = Utils::generateRandomPos(100, 100);

  cout << "x = " << get<0>(ship_pos) << ", y = " << get<1>(ship_pos) << endl;

  Ship ship1(get<0>(ship_pos), get<1>(ship_pos));

  ship1.move(2,2);
  cout << "x = " << get<0>(ship1.getPos()) << ", y = " << get<1>(ship1.getPos()) << endl;

  Mine mine(get<0>(ship1.getPos()), get<1>(ship1.getPos()));
  Explosion obj = mine.explode();
  cout << mine.getType() << endl;

  obj.apply(ship1);

  cout << ship1.getType() << endl;
}