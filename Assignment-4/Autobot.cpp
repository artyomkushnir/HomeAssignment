#include "Autobot.h"

Autobot::Autobot(std::string name, int powerLevel, std::string faction, std::string vehicleType)
    : Transformer(name, powerLevel, faction), vehicleType(vehicleType) {}

std::string Autobot::getVehicleType() const
{
    return vehicleType;
}

void Autobot::setVehicleType(const std::string &vehicleType)
{
    this->vehicleType = vehicleType;
}

void Autobot::transform()
{
    setIsTransformed(true);
}

std::ostream& operator<<(std::ostream& os, const Autobot& autobot)
{
    os << "Autobot: " << autobot.getName() << ", Power Level: " << autobot.getPowerLevel()
       << ", Faction: " << autobot.getFaction() << ", Vehicle Type: " << autobot.getVehicleType();
    return os;
}

bool Autobot::operator>(const Transformer& other) const
{
    return this->getPowerLevel() > other.getPowerLevel();
}

bool Autobot::operator<(const Transformer& other) const
{
    return this->getPowerLevel() < other.getPowerLevel();
}