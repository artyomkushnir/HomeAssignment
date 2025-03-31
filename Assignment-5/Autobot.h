#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "Transformer.h"
#include <iostream>

class Autobot : public Transformer
{
private:
    std::string vehicleType;

public:
    Autobot(std::string name, int powerLevel, std::string faction, std::string vehicleType);
    std::string getVehicleType() const;
    void setVehicleType(const std::string &vehicleType);

    //Operator overloading
    friend std::ostream& operator<<(std::ostream& os, const Autobot& autobot);
    bool operator>(const Transformer& other) const;
    bool operator<(const Transformer& other) const;

    //virtual methods
    void transform() override;
    void openFire() override;
    void ulta() override;
};

#endif