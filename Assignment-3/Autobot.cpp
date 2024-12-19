#include "Autobot.h"

Autobot::Autobot(std::string name, int powerLevel, std::string faction, std::string vehicleType)
    : Transformer(name, powerLevel, faction), vehicleType(vehicleType) {}

std::string Autobot::getVehicleType() const {
    return vehicleType;
}

void Autobot::setVehicleType(const std::string &vehicleType) {
    this->vehicleType = vehicleType;
}

void Autobot::transform() {
    setIsTransformed(true);
}
