/* Artyom Kushnir st135665@student.spbu.ru
*/
#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "Transformer.h"

class Decepticon : public Transformer
{
private:
    std::string weaponType;

public:
    Decepticon(std::string name, int powerLevel, std::string faction, std::string weaponType);

    std::string getWeaponType() const;
    void setWeaponType(const std::string &weaponType);

    void transform() override;
};

#endif // DECEPTICON_H
