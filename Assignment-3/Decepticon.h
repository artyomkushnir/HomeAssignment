#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "Transformer.h"

class Decepticon : public Transformer {
public:
    Decepticon();
    bool villain();
    uint getAmmo() const;
    void setAmmo(uint ammo);
};

#endif // DECEPTICON_H