#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "Transformer.h"
#include <iostream>

class Decepticon : public Transformer {
private:
    std::string weaponType;

public:
    Decepticon(std::string name, int powerLevel, std::string faction, std::string weaponType);
    std::string getWeaponType() const;
    void setWeaponType(const std::string &weaponType);
    void transform() override;

    //Operator overloading
    friend std::ostream& operator<<(std::ostream& os, const Decepticon& decepticon);
    bool operator>(const Transformer& other) const;
    bool operator<(const Transformer& other) const;
};

#endif