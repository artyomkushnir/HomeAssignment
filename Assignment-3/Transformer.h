/* Artyom Kushnir st135665@student.spbu.ru
*/
#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>

class Transformer
{
private:
    std::string name;
    int powerLevel;
    std::string faction;
    bool isTransformed;

public:
    Transformer(std::string name, int powerLevel, std::string faction);
    virtual ~Transformer();

    std::string getName() const;
    void setName(const std::string &name);

    int getPowerLevel() const;
    void setPowerLevel(int powerLevel);

    std::string getFaction() const;
    void setFaction(const std::string &faction);

    bool getIsTransformed() const;
    void setIsTransformed(bool isTransformed);

    void increasePowerLevel(int amount);
    void decreasePowerLevel(int amount);

    virtual void transform() = 0;
};

#endif // TRANSFORMER_H
