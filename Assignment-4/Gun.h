#ifndef GUN_H
#define GUN_H

#include <iostream>

class Gun
{
private:
    std::string type;
    int damage;

public:
    Gun(std::string type, int damage);
    std::string getType() const;
    int getDamage() const;
    void increaseDamage(int amount);
    void decreaseDamage(int amount);

    //Operator overloading
    friend std::ostream& operator<<(std::ostream& os, const Gun& gun);
    bool operator>(const Gun& other) const;
    bool operator<(const Gun& other) const;
};

#endif