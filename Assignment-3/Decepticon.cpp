#include "Decepticon.h"

Decepticon::Decepticon() : Transformer(8, 90, 40, 70, 50) {}

bool Decepticon::villain() { return true; }
uint Decepticon::getAmmo() const { return _ammo; }
void Decepticon::setAmmo(uint ammo) { _ammo = ammo; }
