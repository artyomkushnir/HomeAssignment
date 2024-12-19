#include "Gun.h"

Gun::Gun(std::string type, int damage) : type(type), damage(damage) {}

std::string Gun::getType() const {
    return type;
}

int Gun::getDamage() const {
    return damage;
}
//2 new methods
void Gun::increaseDamage(int amount) {
    damage += amount;
}

void Gun::decreaseDamage(int amount) {
    if (damage - amount >= 0) {
        damage -= amount;
    } else {
        damage = 0;
    }
}