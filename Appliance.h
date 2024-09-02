class Appliance {
  protected:
    int powerRating;
    bool isOn;
  public:
    Appliance();
    Appliance(int powerRating);

    int get_powerRating();
    int set_powerRating();

    bool get_isOn();
    bool set_is();

    void turnOn();
    void turnOff();
    double getPowerConsumption();
};