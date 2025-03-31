/* Artyom Kushnir st135665@student.spbu.ru
*/
#ifndef GUN_H
#define GUN_H

#include <string>

class Gun
{
public:
    Gun(std::string type, int damage);
    std::string getType() const;
    int getDamage() const;
    void increaseDamage(int amount);
    void decreaseDamage(int amount);

private:
    std::string type;
    int damage;
};

#endif // GUN_H
