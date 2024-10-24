#ifndef GRID_ITEM_HPP_6
#define GRID_ITEM_HPP_6

#include <vector>
#include "GridItem.hpp"
#include "Robot.hpp"
#include "Obstacle.hpp"
#include "Goal.hpp"
enum GameState {
  PLAYING,
  WIN,
  LOSE
};

class Game
{
private:
  int width;
  int height;
public:
  Game(int width, int height, std::vector<std::pair<int, int>> obstacleCoordinates) {
    width = width;
    height = height;
    
  }
  Game(/* args */);
  ~Game();
};

#endif