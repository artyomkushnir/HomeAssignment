#include "Gun.h"

Gun::Gun(std::string type, int damage) : type(type), damage(damage) {}

std::string Gun::getType() const {
    return type;
}

int Gun::getDamage() const {
    return damage;
}
