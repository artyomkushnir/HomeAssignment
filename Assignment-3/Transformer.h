#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>

class Weapon {
private:
    std::string type;

public:
    Weapon(const std::string& type) : type(type) {}
    std::string getType() const { return type; }
    void setType(const std::string& newType) { type = newType; }
};

class Team {
private:
    std::string teamName;

public:
    Team(const std::string& name) : teamName(name) {}
    std::string getTeamName() const { return teamName; }
    void setTeamName(const std::string& newName) { teamName = newName; }
};

class Transformer {
private:
    uint _level;
    uint _strength;
    uint _range;
    uint _fuel;
    uint _ammo;

    Weapon weapon;  //Composition
    Team* team;     //Association

public:
    Transformer(uint level, uint strength, uint range, uint fuel, uint ammo, const Weapon& weapon, Team* team);

    uint getLevel() const { return _level; }
    void setLevel(uint level) { _level = level; }

    uint getStrength() const { return _strength; }
    void setStrength(uint strength) { _strength = strength; }

    uint getRange() const { return _range; }
    void setRange(uint range) { _range = range; }

    uint getFuel() const { return _fuel; }
    void setFuel(uint fuel) { _fuel = fuel; }

    uint getAmmo() const { return _ammo; }
    void setAmmo(uint ammo) { _ammo = ammo; }

    bool move() { return true; }
    bool turn(int dir) { return true; }
    bool jump() { return true; }
    bool fire() { return true; }
    bool ultimate() { return true; }
    bool transform() { return true; }
};

#endif // TRANSFORMER_H
