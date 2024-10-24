#ifndef GRID_ITEM_HPP_6
#define GRID_ITEM_HPP_6

#include <vector>
#include <iostream>
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
  bool displayState() {
   if (GameState::WIN) {
    cout << "You win!";
    return true;
   } else if (GameState::LOSE) {
    cout << "You lose :(";
    return true;
   } else if (GameState::PLAYING) {
    cout << "Game on";
    return false;
   }
  }
  void movePlayer(int dx, int dy) {

  }
  void printGrid() {
    for (int j = 0; j < height; j++) {
      for (int i = 0; i < width; i++) {
        cout << "_";
      }
      cout << "\n";
    }
  }
  Game(/* args */);
  ~Game();
};

#endif