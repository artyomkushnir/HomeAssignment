/* Artyom Kushnir st135665@student.spbu.ru
*/
#include <iostream>
#include "Autobot.h"
#include "Decepticon.h"
#include "Gun.h"

int main() {
    Autobot autobot("Optimus Prime", 100, "Autobots", "Truck");
    Decepticon decepticon("Megatron", 100, "Decepticons", "Cannon");

    Gun blaster("Plasma Blaster", 50);

    std::cout << "Autobot: " << autobot.getName() << ", Vehicle Type: " << autobot.getVehicleType() << std::endl;
    std::cout << "Decepticon: " << decepticon.getName() << ", Weapon Type: " << decepticon.getWeaponType() << std::endl;
    std::cout << "Gun Type: " << blaster.getType() << ", Damage: " << blaster.getDamage() << std::endl;

    std::cout << autobot.getName() << "'s power level: " << autobot.getPowerLevel() << std::endl;
    std::cout << decepticon.getName() << "'s power level: " << decepticon.getPowerLevel() << std::endl;

    autobot.increasePowerLevel(52);
    decepticon.decreasePowerLevel(25);
    
    blaster.increaseDamage(20);

    std::cout << autobot.getName() << (autobot.getIsTransformed() ? " has transformed!" : " has not transformed.") << std::endl;
    std::cout << decepticon.getName() << (decepticon.getIsTransformed() ? " has transformed!" : " has not transformed.") << std::endl;

    std::cout << blaster.getType() << "'s new damage: " << blaster.getDamage() << std::endl;

    std::cout << autobot.getName() << "'s new power level: " << autobot.getPowerLevel() << std::endl;
    std::cout << decepticon.getName() << "'s new power level: " << decepticon.getPowerLevel() << std::endl;

    return 0;
}
