#ifndef GUN_H
#define GUN_H

#include <string>

class Gun {
public:
    Gun(std::string type, int damage);
    std::string getType() const;
    int getDamage() const;

private:
    std::string type;
    int damage;
};

#endif // GUN_H
