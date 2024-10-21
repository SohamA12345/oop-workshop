#include "Game.h"
#include <iostream>

int main() {
  srand(time(NULL));

  Game obj;

  obj.initGame(2,2,10,10);

  obj.gameLoop(20, 2);

  return 0;
}