#include "Fridge.h"

Fridge::Fridge() : Appliance() {}
Fridge::Fridge(int powerRating, double volume) : volume(volume), Appliance(powerRating) {}

void Fridge::setVolume(double volume) {
  this->volume = volume;
}

double Fridge::getVolume() {
  return volume;
}

double Fridge::getPowerConsumption() {
  return (powerRating * 24 * (volume/100));
}