#include "Pretender.h"

Pretender::Pretender() : Transformer(5, 80, 60, 80, 20) {}

bool Pretender::scout() { return true; }
uint Pretender::getRange() const { return _range; }
void Pretender::setRange(uint range) { _range = range; }
