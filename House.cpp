#include "House.h"

House::House() : appliances(nullptr), numAppliances(0), appliance_counter(0) {}

House::House(int numAppliances) : numAppliances(numAppliances), appliance_counter(0) {
  appliances = new Appliance* [numAppliances];
}

bool House::addAppliance(Appliance* appliance) {
  if (numAppliances <= appliance_counter) {
    appliances[appliance_counter] = appliance;
    appliance_counter++;
    return true;
  }

  return false;
}

double House::getTotalPowerConsumption() {
  int sum = 0;
  for (int i = 0; i < appliance_counter; i++) {
    sum += appliances[i]->getPowerConsumption();
  }
  return sum;
}

House::~House() {
  delete [] appliances;
}