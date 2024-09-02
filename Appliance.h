#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance {
  protected:
    int powerRating;
    bool isOn;
    
  public:
    Appliance();
    Appliance(int powerRating);

    int get_powerRating();
    int set_powerRating(int powerRating);

    bool get_isOn();
    bool set_isOn(bool isOn);

    void turnOn();
    void turnOff();
    virtual double getPowerConsumption();
};

#endif