#include "wizard.h"
#include <iostream>
#include <string>

Wizard::Wizard(string name, int health, int damage, int mana) : Player(name, health, damage), mana(mana) {}

void Wizard::castSpell(Player* opponent) {
  attack(opponent, mana);
  std::cout << name << " casts a spell on " << opponent->getName() << " for " << mana << " damage.\n";

  return;
}
int Wizard::getMana() {return mana;}
int Wizard::setMana(int mana) {
  this->mana = mana;

  return 0;
}

Wizard::~Wizard() {}