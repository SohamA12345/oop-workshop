#ifndef GAME_H
#define GAME_H

#include <vector>

#include "GameEntity.h"
#include "Mine.h"
#include "Ship.h"
#include "Utils.h"

class Game {
 private:
  vector<GameEntity*> entities;

 public:
  vector<GameEntity*> get_entities() { return entities; }
  void set_entities(vector<GameEntity*> entities) { this->entities = entities; }

  vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth,
                               int gridHieght) {
    for (int i = 0; i < numShips; i++) {
      tuple<int, int> position =
          Utils::generateRandomPos(gridWidth, gridHieght);
      Ship* obj = new Ship(get<0>(position), get<1>(position));
      entities.push_back(obj);
    }

    for (int i = 0; i < numMines; i++) {
      tuple<int, int> position =
          Utils::generateRandomPos(gridWidth, gridHieght);
      Mine* obj = new Mine(get<0>(position), get<1>(position));
      entities.push_back(obj);
    }

    return entities;
  }

  void gameLoop(int maxIterations, double mineDistanceThreshold) {
    for (int i = 0; i < maxIterations; i++) {
      int numShips = 0;

      for (int j = 0; j < entities.size(); j++) {
        if (entities[j]->getType() == GameEntityType::ShipType) {
          numShips++;
          Ship* ship = new Ship(get<0>(entities[j]->getPos()), get<1>(entities[j]->getPos()));
          ship->move(1,0);

          for (int k = 0; k < entities.size(); k++) {
            if (entities[k]->getType() == GameEntityType::MineType && Utils::calculateDistance(entities[k]->getPos(), ship->getPos()) < mineDistanceThreshold) {
              Mine* mine = new Mine(get<0>(entities[k]->getPos()), get<1>(entities[k]->getPos()));
              Explosion obj = mine->explode();
              obj.apply(*ship);
            }
          }

          entities[j] = ship;
        }
      }

      if (numShips == 0) {
        return;
      }
    }
  }

  Game(/* args */);
  ~Game();
};

Game::Game(/* args */) {}

Game::~Game() {}

#endif