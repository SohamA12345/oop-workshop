#include "player.h"
#include <iostream>

Player::Player(string name, int health, int damage) : name(name), health(health), damage(damage) {}

Player::Player() {}

void Player::attack(Player* opponent, int damage) {
  opponent->health -= damage;

  return;
}

void Player::takeDamage(int damage) {
  health -= damage;
  std::cout << name << " takes " << damage << " damage. Remaining health: " << health << "\n";

  return;
}

string Player::getName() {return name;}
string Player::setName(string name) {
  this->name = name;

  return "";
}

int Player::getHealth() {return health;}
int Player::setHealth(int health) {
  this->health = health;

  return 0;
}

int Player::getDamage() {return damage;}
int Player::setDamage(int damage) {
  this->damage = damage;

  return 0;
}


Player::~Player()
{
}