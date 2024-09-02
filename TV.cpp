#include "TV.h"

TV::TV() : Appliance() {}

TV::TV(int powerRating, double screenSize) : Appliance(powerRating), screenSize(screenSize) {}

void TV::setScreenSize(double screenSize) {
  this->screenSize = screenSize;
}

double TV::getScreenSize() {
  return screenSize;
}

double TV::getPowerConsumption() {
  return (powerRating * (screenSize/10));
}