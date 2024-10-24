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
    Robot(0, 0);
    Goal(width-1, height-1);
    for (int i = 0; i < obstacleCoordinates.size(); i++) {
      Obstacle(obstacleCoordinates[i].first, obstacleCoordinates[i].second, width, height);
    }
    GameState::PLAYING;
  }
  Game(/* args */);
  ~Game();
};

#endif