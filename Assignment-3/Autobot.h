#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "Transformer.h"

class Autobot : public Transformer {
public:
    Autobot();
    bool lead();
    uint getStrength() const;
    void setStrength(uint strength);
};

#endif // AUTOBOT_H