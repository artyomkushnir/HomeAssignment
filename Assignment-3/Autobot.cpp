#include "Autobot.h"

Autobot::Autobot() : Transformer(10, 100, 50, 100, 30) {}

bool Autobot::lead() { return true; }
uint Autobot::getStrength() const { return _strength; }
void Autobot::setStrength(uint strength) { _strength = strength; }