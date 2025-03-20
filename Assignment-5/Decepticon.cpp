/* Artyom Kushnir st135665@student.spbu.ru
*/
#include "Decepticon.h"

Decepticon::Decepticon(std::string name, int powerLevel, std::string faction, std::string weaponType)
    : Transformer(name, powerLevel, faction), weaponType(weaponType) {}

std::string Decepticon::getWeaponType() const {
    return weaponType;
}

void Decepticon::setWeaponType(const std::string &weaponType) {
    this->weaponType = weaponType;
}


std::ostream& operator<<(std::ostream& os, const Decepticon& decepticon) {
    os << "Decepticon: " << decepticon.getName() << ", Power Level: " << decepticon.getPowerLevel()
       << ", Faction: " << decepticon.getFaction() << ", Weapon Type: " << decepticon.getWeaponType();
    return os;
}

bool Decepticon::operator>(const Transformer& other) const {
    return this->getPowerLevel() > other.getPowerLevel();
}

bool Decepticon::operator<(const Transformer& other) const {
    return this->getPowerLevel() < other.getPowerLevel();
}

void Decepticon::transform() {
    std::cout << "Decepticon: " << getName() << " is transforming into a " << weaponType << "!" << std::endl;
    setIsTransformed(true);
}

void Decepticon::openFire() {
    std::cout << "Decepticon: " << getName() << " is firing with Decepticon brutality!" << std::endl;
}

void Decepticon::ulta() {
    std::cout << "Decepticon: " << getName() << " is using Decepticon ulta: Chaos Strike!" << std::endl;
}