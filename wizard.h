#ifndef WIZARD_H
#define WIZARD_H

#include "player.h"

class Wizard : public Player {
  public:
    string name;
    int health;
    int damage;
    int mana;

    void castSpell(Player* opponent);
    int getMana();
    int setMana(int mana);

    Wizard(string name, int health, int damage, int mana);
    ~Wizard();
};

#endif