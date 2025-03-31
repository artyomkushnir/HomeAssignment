/* Artyom Kushnir st135665@student.spbu.ru
*/
#include "Transformer.h"
#include <iostream>

Transformer::Transformer(std::string name, int powerLevel, std::string faction)
    : name(name), powerLevel(powerLevel), faction(faction), isTransformed(false) {}

Transformer::~Transformer() {}

std::string Transformer::getName() const
{
    return name;
}

void Transformer::setName(const std::string &name)
{
    this->name = name;
}

int Transformer::getPowerLevel() const
{
    return powerLevel;
}

void Transformer::setPowerLevel(int powerLevel)
{
    this->powerLevel = powerLevel;
}

std::string Transformer::getFaction() const
{
    return faction;
}

void Transformer::setFaction(const std::string &faction)
{
    this->faction = faction;
}

bool Transformer::getIsTransformed() const
{
    return isTransformed;
}

void Transformer::setIsTransformed(bool isTransformed)
{
    this->isTransformed = isTransformed;
}
//2 new methods
void Transformer::increasePowerLevel(int amount)
{
    powerLevel += amount;
}

void Transformer::decreasePowerLevel(int amount)
{
    if (powerLevel - amount >= 0)
    {
        powerLevel -= amount;
    }
    else
    {
        powerLevel = 0;
    }
}

//virtual methods realisation
void Transformer::transform()
{
    std::cout << "Transformer: " << name << " is transforming!" << std::endl;
    isTransformed = true;
}

void Transformer::openFire()
{
    std::cout << "Transformer: " << name << " is opening fire!" << std::endl;
}

void Transformer::ulta()
{
    std::cout << "Transformer: " << name << " is using ulta!" << std::endl;
}