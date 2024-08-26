#include "warrior.h"
#include <iostream>
#include <string>

Warrior::Warrior(string name, int health, int damage, string weapon) : Player(name, health, damage), weapon(weapon) {}

void Warrior::swingWeapon(Player* opponent) {
  attack(opponent, damage);
  std::cout << name << " swings their " << weapon << " at " << opponent->getName() << "!\n";

  return;
}
string Warrior::getWeapon() {return weapon;}
string Warrior::setWeapon(string weapon) {
  this->weapon = weapon;
  return "";
}

Warrior::~Warrior() {}