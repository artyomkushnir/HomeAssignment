/* Artyom Kushnir st135665@student.spbu.ru
*/
#include "Autobot.h"

Autobot::Autobot(std::string name, int powerLevel, std::string faction, std::string vehicleType)
    : Transformer(name, powerLevel, faction), vehicleType(vehicleType) {}

std::string Autobot::getVehicleType() const {
    return vehicleType;
}

void Autobot::setVehicleType(const std::string &vehicleType) {
    this->vehicleType = vehicleType;
}


std::ostream& operator<<(std::ostream& os, const Autobot& autobot) {
    os << "Autobot: " << autobot.getName() << ", Power Level: " << autobot.getPowerLevel()
       << ", Faction: " << autobot.getFaction() << ", Vehicle Type: " << autobot.getVehicleType();
    return os;
}

bool Autobot::operator>(const Transformer& other) const {
    return this->getPowerLevel() > other.getPowerLevel();
}

bool Autobot::operator<(const Transformer& other) const {
    return this->getPowerLevel() < other.getPowerLevel();
}

void Autobot::transform() {
    std::cout << "Autobot: " << getName() << " is transforming into a " << vehicleType << "!" << std::endl;
    setIsTransformed(true);
}

void Autobot::openFire() {
    std::cout << "Autobot: " << getName() << " is firing with Autobot precision!" << std::endl;
}

void Autobot::ulta() {
    std::cout << "Autobot: " << getName() << " is using Autobot ulta: Shield of Justice!" << std::endl;
}