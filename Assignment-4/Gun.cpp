#include "Gun.h"

Gun::Gun(std::string type, int damage) : type(type), damage(damage) {}

std::string Gun::getType() const
{
    return type;
}

int Gun::getDamage() const
{
    return damage;
}

void Gun::increaseDamage(int amount)
{
    damage += amount;
}

void Gun::decreaseDamage(int amount)
{
    if (damage - amount >= 0)
    {
        damage -= amount;
    }
    else
    {
        damage = 0;
    }
}

std::ostream& operator<<(std::ostream& os, const Gun& gun)
{
    os << "Gun: " << gun.getType() << ", Damage: " << gun.getDamage();
    return os;
}

bool Gun::operator>(const Gun& other) const
{
    return this->damage > other.damage;
}

bool Gun::operator<(const Gun& other) const
{
    return this->damage < other.damage;
}