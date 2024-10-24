#include "Transformer.h"

Transformer::Transformer(uint level, uint strength, uint range, uint fuel, uint ammo)
    : _level(level), _strength(strength), _range(range), _fuel(fuel), _ammo(ammo),
      _engine(100), _weapon("Laser") {}

Transformer::~Transformer() {}

bool Transformer::move() { return true; }
bool Transformer::turn(Direction dir) { return true; }
bool Transformer::jump() { return true; }
bool Transformer::fire() { return true; }
bool Transformer::ultimate() { return true; }
bool Transformer::transform() { return true; }

uint Transformer::getLevel() const { return _level; }
void Transformer::setLevel(uint level) { _level = level; }