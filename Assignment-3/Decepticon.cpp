#include "Decepticon.h"

Decepticon::Decepticon(std::string name, int powerLevel, std::string faction, std::string weaponType)
    : Transformer(name, powerLevel, faction), weaponType(weaponType) {}

std::string Decepticon::getWeaponType() const
{
    return weaponType;
}

void Decepticon::setWeaponType(const std::string &weaponType)
{
    this->weaponType = weaponType;
}

void Decepticon::transform()
{
    setIsTransformed(true);
}
