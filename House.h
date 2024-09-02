#ifndef HOUSE_H
#define HOUSE_H

#include "Appliance.h"

class House : public Appliance {
  private:
    Appliance** appliances;
    int numAppliances;
    int appliance_counter;
  public:
    House();
    House(int numAppliances);

    bool addAppliance(Appliance* appliance);

    double getTotalPowerConsumption();

    ~House();
};

#endif