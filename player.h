#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std;

class Player {
  protected:
    string name;
    int health;
    int damage;

  public:

    Player();
    ~Player();

    Player(string name, int health, int damage);

    void attack(Player* opponent, int damage);

    void takeDamage(int damage);

    string getName();
    string setName(string name);

    int getHealth();
    int setHealth(int health);

    int getDamage();
    int setDamage(int damage);
};

#endif