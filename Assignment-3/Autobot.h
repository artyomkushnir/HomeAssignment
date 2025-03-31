#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "Transformer.h"

class Autobot : public Transformer
{
private:
    std::string vehicleType;

public:
    Autobot(std::string name, int powerLevel, std::string faction, std::string vehicleType);

    std::string getVehicleType() const;
    void setVehicleType(const std::string &vehicleType);

    void transform() override;
};

#endif // AUTOBOT_H
